"""Stallable AXI4-Lite slave model for the crossbar unit tests.

This is the *stimulus/observation* slave used when the crossbar is tested on its
own: it replaces the three real peripherals so that READY on every channel can
be stretched arbitrarily and the served transactions can be logged independently
of the DUT.  It is deliberately dumb: a dictionary-backed memory with a
per-region address space, plus hooks for injected responses.

READY policies (per slave, all configurable per cycle through a policy object):

    AWREADY / WREADY / ARREADY : pattern-driven stalls
    BVALID  / RVALID           : pattern-driven response delays

The model drives READY combinationally from a registered "stall counter" so the
stall patterns are exact in cycles.  It asserts VALID as a *registered* signal
and holds payload while VALID is asserted, satisfying the AXI stability rule.
"""

from __future__ import annotations

import random
from dataclasses import dataclass, field
from typing import Callable, Dict, List, Optional

from cocotb.triggers import Timer

from axil_common import Cycle, READ, WRITE, Txn, get_sig
from axil_spec import RESP_DECERR, RESP_OKAY, RESP_SLVERR

PROBE_NS = 3.0
DEFAULT_TIMEOUT_CYCLES = 512


class SlaveModelError(Exception):
    pass


@dataclass
class StallPattern:
    """READY/VALID timing policy.

    `ready_cycle` returns True when the channel is ready on stall-counter event
    `n`.  A simple periodic pattern is expressed as (period, duty): ready on the
    first `duty` events of every `period`.
    """

    period: int = 1           # 1 == never stalls
    duty: int = 1
    initial_stall: int = 0    # extra cycles of stall before the first ready
    random_p: float = 0.0     # extra random stall probability
    rng: Optional[random.Random] = None

    def is_ready(self, n: int) -> bool:
        if n < self.initial_stall:
            return False
        if self.random_p and self.rng is not None:
            if self.rng.random() < self.random_p:
                return False
        if self.period <= 1:
            return True
        return (n - self.initial_stall) % self.period < self.duty


@dataclass
class SlaveModelConfig:
    awready: StallPattern = field(default_factory=StallPattern)
    wready: StallPattern = field(default_factory=StallPattern)
    arready: StallPattern = field(default_factory=StallPattern)
    #: Number of cycles BVALID is delayed after both halves were accepted.
    bvalid_delay: int = 0
    #: Number of cycles RVALID is delayed after AR was accepted.
    rvalid_delay: int = 0
    #: Response code returned for every access (per-region defaults below).
    force_resp: Optional[int] = None
    seed: int = 0


class AxilSlaveModel:
    """Pin-level AXI4-Lite slave.

    `owner` identifies this slave in the observation log so the scoreboard can
    check that the crossbar routed a transaction to the *right* place.
    """

    def __init__(
        self,
        dut,
        index: Optional[int] = None,
        *,
        prefix: str = "s_axil",
        name: Optional[str] = None,
        config: Optional[SlaveModelConfig] = None,
        timeout_cycles: int = DEFAULT_TIMEOUT_CYCLES,
    ):
        self.dut = dut
        self.index = index
        self.prefix = prefix
        self.name = name or (f"s{index}" if index is not None else prefix)
        self.cfg = config or SlaveModelConfig()
        self.rng = random.Random(self.cfg.seed)
        self.timeout_cycles = timeout_cycles
        self.cyc = Cycle(dut.clk)
        #: Transactions served by this model, in completion order.
        self.served: List[Txn] = []
        #: Raw channel events for cross-checking the passive monitor.
        self.aw_events: List[tuple] = []
        self.w_events: List[tuple] = []
        self.ar_events: List[tuple] = []
        #: Memory: address -> 32-bit value, used for the unit-test slaves.
        self.mem: Dict[int, int] = {}
        self.stall_aw = 0
        self.stall_w = 0
        self.stall_ar = 0
        self.run_task = None
        #: When a hold flag is set, the corresponding READY / VALID is forced low
        #: (READY) or low (VALID) so a test can stretch a handshake indefinitely.
        self.hold = {"aw": False, "w": False, "ar": False, "b": False, "r": False}
        #: Completed cycles observed by the run loop (diagnostics / ordering).
        self.cycle = 0

    # -- signal access ------------------------------------------------------
    def h(self, suffix: str):
        return get_sig(self.dut, self.prefix, suffix, self.index)

    def drive_idle(self) -> None:
        for suffix in ("awready", "wready", "arready", "bvalid", "rvalid"):
            self.h(suffix).value = 0
        for suffix in ("bresp", "rresp", "rdata"):
            self.h(suffix).value = 0

    # -- run loop -----------------------------------------------------------
    async def run(self) -> None:
        """Servo the slave port forever (killed when the test ends).

        The loop evaluates its READY/VALID outputs at the start of every cycle,
        samples the settled state of that cycle, and applies the effects of any
        handshake that completes on the rising edge ending the cycle.
        """
        aw_ready = self.h("awready")
        w_ready = self.h("wready")
        ar_ready = self.h("arready")
        awvalid, wvalid, arvalid = self.h("awvalid"), self.h("wvalid"), self.h("arvalid")
        awaddr, wdata, wstrb = self.h("awaddr"), self.h("wdata"), self.h("wstrb")
        awprot = self.h("awprot")
        bvalid, bresp, bready = self.h("bvalid"), self.h("bresp"), self.h("bready")
        araddr, arprot = self.h("araddr"), self.h("arprot")
        rvalid, rdata, rresp, rready = (
            self.h("rvalid"), self.h("rdata"), self.h("rresp"), self.h("rready"),
        )

        # Registered state
        aw_pend, w_pend = False, False
        aw_addr, aw_prot = 0, 0
        w_data, w_strb = 0, 0
        b_pend, b_resp = False, RESP_OKAY
        b_wait = 0
        r_pend, r_data, r_resp = False, 0, RESP_OKAY
        r_wait = 0

        n_aw = n_w = n_ar = 0

        while True:
            # ---- evaluate this cycle's outputs -----------------------------
            # A reset aborts anything the model had accepted: the pending
            # halves and any response it has not handed over yet are dropped and
            # the port is driven idle.  A real slave does the same, and without
            # this the model would still answer a transaction that the DUT has
            # already discarded, which would make the reset test meaningless
            # (and would leave a slave-facing BVALID stuck after the reset).
            if bool(self.dut.rst.value):
                aw_pend = w_pend = b_pend = r_pend = False
                self.drive_idle()
            else:
                # One outstanding write / read, exactly like the real peripherals.
                aw_ready.value = int(
                    (not aw_pend) and (not b_pend) and not self.hold["aw"]
                    and self.cfg.awready.is_ready(n_aw)
                )
                w_ready.value = int(
                    (not w_pend) and (not b_pend) and not self.hold["w"]
                    and self.cfg.wready.is_ready(n_w)
                )
                ar_ready.value = int(
                    (not r_pend) and not self.hold["ar"]
                    and self.cfg.arready.is_ready(n_ar)
                )
                bvalid.value = int(b_pend and b_wait <= 0 and not self.hold["b"])
                bresp.value = b_resp
                rvalid.value = int(r_pend and r_wait <= 0 and not self.hold["r"])
                rdata.value = r_data
                rresp.value = r_resp

            await Timer(PROBE_NS, "ns")

            aw_hs = int(awvalid.value) and int(aw_ready.value)
            w_hs = int(wvalid.value) and int(w_ready.value)
            ar_hs = int(arvalid.value) and int(ar_ready.value)
            b_hs = int(bvalid.value) and int(bready.value)
            r_hs = int(rvalid.value) and int(rready.value)

            if aw_hs:
                aw_addr = int(awaddr.value)
                aw_prot = int(awprot.value)
                aw_pend = True
                self.aw_events.append((self.cycle, aw_addr, aw_prot))
            if w_hs:
                w_data = int(wdata.value)
                w_strb = int(wstrb.value)
                w_pend = True
                self.w_events.append((self.cycle, w_data, w_strb))
            if ar_hs:
                ar_addr = int(araddr.value)
                self.ar_events.append((self.cycle, ar_addr, int(arprot.value)))

            # A write completes when both halves are in and no B is pending.
            if aw_pend and w_pend and not b_pend:
                aw_pend = w_pend = False
                resp, memaddr = self.apply_write(aw_addr, w_data, w_strb)
                b_resp = resp
                b_pend = True
                b_wait = self.cfg.bvalid_delay
                self.served.append(Txn(
                    kind=WRITE, master=-1, addr=aw_addr, data=w_data, strb=w_strb,
                    prot=aw_prot, resp=resp, source=f"slave{self.index}",
                    t_start=self.cycle, t_end=self.cycle,
                    tags=("memaddr", memaddr),
                ))
            if b_pend:
                if b_hs:
                    b_pend = False
                elif b_wait > 0:
                    b_wait -= 1

            if ar_hs:
                data, resp, memaddr = self.apply_read(ar_addr)
                r_data, r_resp = data, resp
                r_pend = True
                r_wait = self.cfg.rvalid_delay
                self.served.append(Txn(
                    kind=READ, master=-1, addr=ar_addr, data=data, resp=resp,
                    source=f"slave{self.index}", t_start=self.cycle,
                    t_end=self.cycle, tags=("memaddr", memaddr),
                ))
            if r_pend:
                if r_hs:
                    r_pend = False
                elif r_wait > 0:
                    r_wait -= 1

            n_aw += 1
            n_w += 1
            n_ar += 1
            self.cycle += 1

            await self.cyc.drive_point()

    # -- behaviour hooks ----------------------------------------------------
    def apply_write(self, addr: int, data: int, strb: int):
        """Default: byte-enabled write into `mem`.  Returns (resp, memaddr)."""
        if self.cfg.force_resp is not None:
            return self.cfg.force_resp, addr
        old = self.mem.get(addr, 0)
        new = old
        for byte in range(4):
            if strb & (1 << byte):
                mask = 0xFF << (8 * byte)
                new = (new & ~mask) | (data & mask)
        self.mem[addr] = new & 0xFFFF_FFFF
        return RESP_OKAY, addr

    def apply_read(self, addr: int):
        """Default: read `mem`.  Returns (data, resp, memaddr)."""
        if self.cfg.force_resp is not None:
            return 0, self.cfg.force_resp, addr
        return self.mem.get(addr, 0), RESP_OKAY, addr

    # -- helpers for tests --------------------------------------------------
    def served_writes(self) -> List[Txn]:
        return [t for t in self.served if t.kind == WRITE]

    def served_reads(self) -> List[Txn]:
        return [t for t in self.served if t.kind == READ]


class DecerrSlaveModel(AxilSlaveModel):
    """Slave that answers every access with DECERR, for the unmapped case."""

    def apply_write(self, addr, data, strb):
        return RESP_DECERR, addr

    def apply_read(self, addr):
        return 0, RESP_DECERR, addr


class SlverrSlaveModel(AxilSlaveModel):
    """Slave that answers every access with SLVERR."""

    def apply_write(self, addr, data, strb):
        return RESP_SLVERR, addr

    def apply_read(self, addr):
        return 0, RESP_SLVERR, addr

"""AXI4-Lite master BFM and stimulus agent.

The BFM is pin-level: it drives `m_axil_*` and samples the responses itself with
the timing convention documented in `axil_common`.  It has:

  * per-channel cycle delays, so AW, W, AR, BREADY and RREADY can be delayed
    independently (either channel of a write may arrive first),
  * a cycle-based timeout so a deadlock fails the test instead of hanging the
    regression,
  * structural enforcement of "at most one outstanding read and one outstanding
    write per master" -- the limit the DUT implements.  Violating it from the
    testbench would test something the design does not claim to support, so it
    raises instead.
"""

from __future__ import annotations

import random
from dataclasses import dataclass, field
from typing import Optional, Tuple

import cocotb
from cocotb.triggers import Timer

from axil_common import Cycle, READ, WRITE, Txn, get_sig
from axil_spec import ADDR_WIDTH, DATA_MASK, DATA_WIDTH, NMST

#: How long after the falling edge the DUT's combinational response to the
#: drive is settled within the same cycle (see module docstring of axil_common).
PROBE_NS = 3.0

#: Default timeout for a single channel handshake, in cycles.
DEFAULT_TIMEOUT_CYCLES = 512


class BfmError(Exception):
    """Raised for testbench-side misuse or a DUT-side handshake timeout."""


class AxilMaster:
    """Pin-level AXI4-Lite master."""

    def __init__(
        self,
        dut,
        index: Optional[int] = None,
        *,
        prefix: str = "m_axil",
        name: Optional[str] = None,
        timeout_cycles: int = DEFAULT_TIMEOUT_CYCLES,
        timer: Optional[Cycle] = None,
    ):
        self.dut = dut
        self.index = index
        self.prefix = prefix
        self.name = name or (f"m{index}" if index is not None else prefix)
        self.timeout_cycles = timeout_cycles
        #: Shared, env-wide cycle counter (optional).  Transactions are stamped
        #: with it so that overlapping transactions of different masters can be
        #: detected from one common time base.
        self.timer = timer
        self.cyc = Cycle(dut.clk)
        self.cycle_count = 0
        self.log = dut._log if hasattr(dut, "_log") else None
        self._wr_busy = False
        self._rd_busy = False
        self.observed: list[Txn] = []

    # -- signal access ------------------------------------------------------
    def h(self, suffix: str):
        """Handle of `<prefix>_<suffix>` for this master."""
        return get_sig(self.dut, self.prefix, suffix, self.index)

    def drive_idle(self) -> None:
        """Deassert every driver owned by this master."""
        self.h("awvalid").value = 0
        self.h("wvalid").value = 0
        self.h("bready").value = 0
        self.h("arvalid").value = 0
        self.h("rready").value = 0
        self.h("awaddr").value = 0
        self.h("awprot").value = 0
        self.h("wdata").value = 0
        self.h("wstrb").value = 0
        self.h("araddr").value = 0
        self.h("arprot").value = 0

    def force_idle(self) -> None:
        """Abandon in-flight bookkeeping and drive idle.

        Used after a transaction is deliberately aborted by asserting reset:
        `Task.kill()` is not guaranteed to unwind the coroutine (so its `finally`
        may not run), and the reset test needs a clean BFM afterwards.
        """
        self._wr_busy = False
        self._rd_busy = False
        self.drive_idle()

    # -- low level ----------------------------------------------------------
    async def _delay_cycles(self, cycles: int) -> None:
        """Wait `cycles` whole cycles, returning at a drive point."""
        for _ in range(max(0, cycles)):
            await self.cyc.drive_point()
        self.cycle_count += max(0, cycles)

    async def _handshake(
        self,
        *,
        valid,
        ready,
        payload_out: Optional[dict] = None,
        payload_in: Optional[dict] = None,
        delay: int = 0,
        timeout: Optional[int] = None,
        what: str = "channel",
    ) -> dict:
        """Drive VALID (with optional payload) until READY, then return payload.

        Must be entered at a drive point and returns at a drive point.
        """
        limit = self.timeout_cycles if timeout is None else timeout
        await self._delay_cycles(delay)

        if payload_out:
            for handle, value in payload_out.items():
                handle.value = value
        valid.value = 1

        cycles = 0
        while True:
            await Timer(PROBE_NS, "ns")
            if int(ready.value) == 1:
                break
            cycles += 1
            if cycles > limit:
                valid.value = 0
                raise BfmError(
                    f"{self.name}: {what} handshake did not complete within "
                    f"{limit} cycles (deadlock or DUT not responding)"
                )
            await self.cyc.drive_point()

        self.cycle_count += cycles + 2

        captured = {}
        if payload_in:
            for key, handle in payload_in.items():
                captured[key] = int(handle.value)

        # The transfer completed on the rising edge that just passed.  VALID may
        # be dropped from the drive point of the next cycle: the DUT samples it
        # at the following rising edge, by which time it is low again.
        await self.cyc.drive_point()
        valid.value = 0
        return captured

    # -- transactions -------------------------------------------------------
    async def write(
        self,
        addr: int,
        data: int,
        *,
        strb: int = 0xF,
        prot: int = 0,
        aw_delay: int = 0,
        w_delay: int = 0,
        bready_delay: int = 0,
        timeout: Optional[int] = None,
        tags: Tuple = (),
    ) -> Txn:
        """One write transaction.  AW and W are driven by independent coroutines
        so their arrival order is exact (w_delay < aw_delay puts W first)."""
        if self._wr_busy:
            raise BfmError(
                f"{self.name}: a write is already outstanding; the DUT supports "
                f"one outstanding write per master"
            )
        self._wr_busy = True
        try:
            t_start = self.timer.count if self.timer is not None else self.cycle_count
            awvalid, wvalid, bready = (
                self.h("awvalid"), self.h("wvalid"), self.h("bready"),
            )
            awready, wready = self.h("awready"), self.h("wready")
            bvalid, bresp = self.h("bvalid"), self.h("bresp")

            aw_task = cocotb.start_soon(self._handshake(
                valid=awvalid, ready=awready,
                payload_out={self.h("awaddr"): addr & ((1 << ADDR_WIDTH) - 1),
                             self.h("awprot"): prot},
                delay=aw_delay, timeout=timeout, what="AW",
            ))
            w_task = cocotb.start_soon(self._handshake(
                valid=wvalid, ready=wready,
                payload_out={self.h("wdata"): data & DATA_MASK,
                             self.h("wstrb"): strb & 0xF},
                delay=w_delay, timeout=timeout, what="W",
            ))
            b_task = cocotb.start_soon(self._handshake(
                valid=bready, ready=bvalid,
                payload_in={"resp": bresp},
                delay=bready_delay, timeout=timeout, what="B",
            ))

            await aw_task
            await w_task
            b = await b_task
            t_end = self.timer.count if self.timer is not None else self.cycle_count
            txn = Txn(kind=WRITE, master=self.index, addr=addr, data=data & DATA_MASK,
                      strb=strb & 0xF, prot=prot, resp=b["resp"], source="bfm",
                      t_start=t_start, t_end=t_end, tags=tags)
            self.observed.append(txn)
            return txn
        finally:
            self._wr_busy = False

    async def read(
        self,
        addr: int,
        *,
        prot: int = 0,
        ar_delay: int = 0,
        rready_delay: int = 0,
        timeout: Optional[int] = None,
        tags: Tuple = (),
    ) -> Txn:
        """One read transaction (at most one outstanding, enforced)."""
        if self._rd_busy:
            raise BfmError(
                f"{self.name}: a read is already outstanding; the DUT supports "
                f"one outstanding read per master"
            )
        self._rd_busy = True
        try:
            t_start = self.timer.count if self.timer is not None else self.cycle_count
            arvalid, rready = self.h("arvalid"), self.h("rready")
            arready = self.h("arready")
            rvalid, rdata, rresp = self.h("rvalid"), self.h("rdata"), self.h("rresp")

            ar_task = cocotb.start_soon(self._handshake(
                valid=arvalid, ready=arready,
                payload_out={self.h("araddr"): addr & ((1 << ADDR_WIDTH) - 1),
                             self.h("arprot"): prot},
                delay=ar_delay, timeout=timeout, what="AR",
            ))
            r_task = cocotb.start_soon(self._handshake(
                valid=rready, ready=rvalid,
                payload_in={"data": rdata, "resp": rresp},
                delay=rready_delay, timeout=timeout, what="R",
            ))

            await ar_task
            r = await r_task
            t_end = self.timer.count if self.timer is not None else self.cycle_count
            txn = Txn(kind=READ, master=self.index, addr=addr, prot=prot,
                      data=r["data"], resp=r["resp"], source="bfm",
                      t_start=t_start, t_end=t_end, tags=tags)
            self.observed.append(txn)
            return txn
        finally:
            self._rd_busy = False


# ---------------------------------------------------------------------------
# Stimulus configuration and queue-driven agent
# ---------------------------------------------------------------------------

@dataclass
class StimConfig:
    """Delay / strobe policy for one master's randomized traffic."""

    aw_delay: Tuple[int, int] = (0, 3)
    w_delay: Tuple[int, int] = (0, 3)
    bready_delay: Tuple[int, int] = (0, 3)
    ar_delay: Tuple[int, int] = (0, 3)
    rready_delay: Tuple[int, int] = (0, 3)
    #: Probability that a write uses partial strobes (otherwise all four bytes).
    p_partial_strb: float = 0.35
    #: Probability that a write uses zero strobes (bus-legal, must be a no-op).
    p_zero_strb: float = 0.05
    #: Probability that a read and a write are issued back to back.
    p_mixed: float = 0.5
    seed: int = 1


def _rand_range(rng: random.Random, span: Tuple[int, int]) -> int:
    lo, hi = span
    return rng.randint(lo, hi) if hi > lo else lo


@dataclass
class WriteJob:
    addr: int
    data: int
    strb: int
    tags: tuple = ()


@dataclass
class ReadJob:
    addr: int
    tags: tuple = ()


class MasterAgent:
    """Drives one master from a job queue, one outstanding transaction at a time.

    The agent is the stimulus source for randomized traffic: several agents run
    concurrently, so the DUT sees genuinely concurrent traffic from different
    masters while each individual master stays inside the protocol subset it
    implements.
    """

    def __init__(self, bfm: AxilMaster, config: Optional[StimConfig] = None,
                 *, name: Optional[str] = None):
        self.bfm = bfm
        self.cfg = config or StimConfig()
        self.name = name or bfm.name
        self.rng = random.Random(self.cfg.seed)
        self.jobs: list[object] = []
        self.results: list[Txn] = []
        self.errors: list[str] = []
        self.completed = 0

    def add(self, job) -> None:
        self.jobs.append(job)

    def random_strb(self, addr: int) -> int:
        r = self.rng.random()
        if r < self.cfg.p_zero_strb:
            return 0x0
        if r < self.cfg.p_zero_strb + self.cfg.p_partial_strb:
            return self.rng.choice([0x1, 0x2, 0x4, 0x8, 0x3, 0xC, 0x7, 0xE, 0x5, 0xA])
        return 0xF

    async def run(self) -> None:
        """Execute every queued job, then return."""
        for job in self.jobs:
            if isinstance(job, WriteJob):
                txn = await self.bfm.write(
                    job.addr, job.data, strb=job.strb,
                    aw_delay=_rand_range(self.rng, self.cfg.aw_delay),
                    w_delay=_rand_range(self.rng, self.cfg.w_delay),
                    bready_delay=_rand_range(self.rng, self.cfg.bready_delay),
                    tags=job.tags,
                )
            else:
                txn = await self.bfm.read(
                    job.addr,
                    ar_delay=_rand_range(self.rng, self.cfg.ar_delay),
                    rready_delay=_rand_range(self.rng, self.cfg.rready_delay),
                    tags=job.tags,
                )
            self.results.append(txn)
            self.completed += 1

"""Cycle-exact pin-level AXI4-Lite accessor for single-transaction checks.

WHY THIS EXISTS
    The master BFM (`axil_master`) is the right tool for traffic: it pipelines AW
    and W independently, tolerates arbitrary READY stalls and measures latencies.
    That freedom is exactly what makes it unsuitable for checking *register*
    semantics cycle by cycle: the test cannot know at which edge a write was
    applied, or at which edge a read sampled its data, without re-deriving the
    DUT's internal buffering.

    `PinnedAxil` removes that freedom.  One call performs exactly one
    transaction, with every VALID asserted at the drive point where the call
    starts, so - for an idle slave - the handshake happens at the very next
    rising edge.  The timings below are properties of `axil_regfile_slave` and
    are *checked*, not assumed: if the DUT ever answers differently the helper
    raises `PinError` and the test fails with the cycle numbers in the message.

TIMING MODEL (derived from axil_regfile_slave, verified by these checks)

    write (AW and W at the same drive point):
        cycle 0   VALID asserted, READY observed high (else PinError)
        edge 1    accept: AW and W captured.  No register effect yet, no B
        edge 2    wr_apply: the peripheral register updates, BVALID appears
        edge 3    B handshake: BVALID has been consumed
    write (W delayed by k cycles behind AW):
        each half is accepted at the very next edge after it is presented, so
        the earlier half's READY is already low in the accept cycle; the accept
        cycle is the one where the LATER half arrives
    read:
        edge 1    accept: RDATA/RRESP captured, RVALID appears
        edge 2    R handshake: RVALID consumed
    same-cycle read and write at one address:
        edge 1    both accepted; the read samples the PRE-write value because
                  the register update lands on edge 2
        edge 2    the register updates, BVALID appears, RVALID consumed
        edge 3    B handshake

MODEL ALIGNMENT
    When a model is supplied the helper predicts and - with `check=True` - also
    compares, at the only moments that are cycle-exact:
      * `read`  : prediction at entry, because the model's current state *is* the
                  state sampled on the accept edge.
      * `write` : the response is predicted at entry, but the register effect is
                  queued after the accept edge, so `model.step()` applies it on
                  the wr_apply edge.
    The model's own `step()` is driven by the environment once per clock edge, so
    by the time this helper returns, model and DUT have seen the same edges.

CYCLE STAMPS
    Every result dict also carries `accept` (and, for writes, `apply` and `done`;
    for reads, `done`) cycle stamps taken from the environment's cycle counter at
    the edge in question, so a directed test can align a DUT event or a
    reference-model prediction with the transaction edge that caused it.
"""

from __future__ import annotations

from typing import Optional

from cocotb.triggers import Timer

from axil_common import Cycle, get_sig, resp_name

#: Same probe delay the master BFM uses: how far after the falling edge the
#: combinational response to the driven inputs is settled (see axil_common).
PROBE_NS = 3.0


class PinError(Exception):
    """Raised when the DUT does not behave like the documented idle-slave timing."""


class PinnedAxil:
    """One-transaction-at-a-time pin driver with exact edge bookkeeping."""

    def __init__(self, dut, prefix: str, index: Optional[int] = None, *,
                 name: Optional[str] = None, timer: Optional[Cycle] = None,
                 timeout_cycles: int = 32):
        self.dut = dut
        self.prefix = prefix
        self.index = index
        self.name = name or prefix
        self.timer = timer
        self.timeout_cycles = timeout_cycles
        self.cyc = Cycle(dut.clk)
        self.log = dut._log if hasattr(dut, "_log") else None
        self.transactions = 0

    # -- signal access ------------------------------------------------------
    def h(self, suffix: str):
        return get_sig(self.dut, self.prefix, suffix, self.index)

    def drive_idle(self) -> None:
        for suffix in ("awvalid", "wvalid", "bready", "arvalid", "rready"):
            self.h(suffix).value = 0
        for suffix in ("awaddr", "awprot", "wdata", "wstrb", "araddr", "arprot"):
            self.h(suffix).value = 0

    # -- helpers ------------------------------------------------------------
    def _stamp(self) -> int:
        return self.timer.count if self.timer is not None else self.cyc.count

    def _fail(self, what: str, detail: str):
        raise PinError(f"{self.name}: {what}: {detail}")

    # -- transactions -------------------------------------------------------
    async def write(self, addr: int, data: int, *, strb: int = 0xF, prot: int = 0,
                    aw_delay: int = 0, w_delay: int = 0, model=None,
                    check: bool = True) -> dict:
        """One write: AW at `aw_delay`, W at `w_delay` (cycles from entry).

        With the default delays both halves arrive in the accept cycle, which is
        what the peripheral bridge sees when the crossbar arbitrates a write.
        """
        exp_resp = model.write_resp(addr) if model is not None else None
        awvalid, wvalid = self.h("awvalid"), self.h("wvalid")
        accept_at = max(aw_delay, w_delay)

        self.h("bready").value = 1
        # Drive whichever half is due in each cycle and check the no-stall
        # contract: a half presented at a drive point must be accepted by the
        # very next rising edge (an idle register bridge never stalls).  Each
        # half is checked only in its own presentation cycle: the accept cycle
        # is the one in which the LATER half arrives, and the earlier half is
        # already captured there, so its READY is legitimately low.
        #
        # A half is deasserted at the drive point immediately after its own
        # handshake.  Leaving it high for one more cycle would assert VALID for
        # a *second* transfer (the slave's READY is legitimately low while the
        # first write is still in flight), and dropping it again without a
        # handshake would violate the AXI hold rule - which is exactly what the
        # boundary protocol checker reports.
        aw_accepted = w_accepted = False
        for k in range(accept_at + 1):
            if k:
                await self.cyc.drive_point()
                if aw_accepted:
                    awvalid.value = 0
                    aw_accepted = False
                if w_accepted:
                    wvalid.value = 0
                    w_accepted = False
            presented_aw = k == aw_delay
            presented_w = k == w_delay
            if presented_aw:
                self.h("awaddr").value = addr & ((1 << 32) - 1)
                self.h("awprot").value = prot
                awvalid.value = 1
            if presented_w:
                self.h("wdata").value = data & 0xFFFF_FFFF
                self.h("wstrb").value = strb & 0xF
                wvalid.value = 1
            if presented_aw or presented_w:
                await Timer(PROBE_NS, "ns")
                if presented_aw and int(self.h("awready").value) != 1:
                    self._fail("write", f"AWREADY low in the cycle AW is presented "
                                        f"(aw_delay={aw_delay}, w_delay={w_delay})")
                if presented_w and int(self.h("wready").value) != 1:
                    self._fail("write", f"WREADY low in the cycle W is presented "
                                        f"(aw_delay={aw_delay}, w_delay={w_delay})")
            if k < accept_at:
                await self.cyc.sample()              # half accepted at this edge
                aw_accepted = presented_aw
                w_accepted = presented_w
        await self.cyc.sample()                      # accept edge
        accept_cycle = self._stamp()
        awvalid.value = 0
        wvalid.value = 0

        # The register effect and BVALID land on the next edge.  Queue the model
        # effect now so model.step() applies it on exactly that edge.
        await self.cyc.drive_point()
        if model is not None:
            model.write_apply(addr, data, strb)
        await self.cyc.sample()                      # wr_apply / BVALID edge
        apply_cycle = self._stamp()
        if int(self.h("bvalid").value) != 1:
            self._fail("write", "BVALID was not asserted on the cycle after the accept; "
                                "axil_regfile_slave timing changed")
        observed = {"resp": int(self.h("bresp").value)}
        await self.cyc.drive_point()
        await self.cyc.sample()                      # B handshake edge
        done_cycle = self._stamp()
        if int(self.h("bvalid").value) != 0:
            self._fail("write", "BVALID was not consumed one cycle after it appeared")
        self.h("bready").value = 0
        await self.cyc.drive_point()
        self.transactions += 1

        result = {"kind": "write", "addr": addr, "data": data, "strb": strb & 0xF,
                  "resp": observed["resp"], "exp_resp": exp_resp,
                  "accept": accept_cycle, "apply": apply_cycle, "done": done_cycle}
        if check and model is not None and observed["resp"] != exp_resp:
            self._fail("write", f"@0x{addr:08x} data=0x{data:08x} strb=0x{strb:x}: "
                                f"BRESP={resp_name(observed['resp'])} but the model "
                                f"predicts {resp_name(exp_resp)}")
        return result

    async def read(self, addr: int, *, prot: int = 0, ar_delay: int = 0,
                   model=None, check: bool = True) -> dict:
        """One read; the model prediction is made at entry (accept-edge state)."""
        exp_data, exp_resp = model.read(addr) if model is not None else (None, None)
        self.h("rready").value = 1
        self.h("araddr").value = addr & ((1 << 32) - 1)
        self.h("arprot").value = prot
        self.h("arvalid").value = 1
        for _ in range(ar_delay):
            await self.cyc.drive_point()
        await Timer(PROBE_NS, "ns")
        if int(self.h("arready").value) != 1:
            self._fail("read", f"ARREADY low at the expected accept cycle for 0x{addr:08x}")
        await self.cyc.sample()                      # accept edge
        accept_cycle = self._stamp()
        self.h("arvalid").value = 0
        if int(self.h("rvalid").value) != 1:
            self._fail("read", "RVALID was not asserted in the accept cycle; "
                               "axil_regfile_slave timing changed")
        observed = {"data": int(self.h("rdata").value), "resp": int(self.h("rresp").value)}
        await self.cyc.drive_point()
        await self.cyc.sample()                      # R handshake edge
        done_cycle = self._stamp()
        if int(self.h("rvalid").value) != 0:
            self._fail("read", "RVALID was not consumed one cycle after it appeared")
        self.h("rready").value = 0
        await self.cyc.drive_point()
        self.transactions += 1

        result = {"kind": "read", "addr": addr, "data": observed["data"],
                  "resp": observed["resp"], "exp_data": exp_data, "exp_resp": exp_resp,
                  "accept": accept_cycle, "done": done_cycle}
        if check and model is not None:
            if observed["resp"] != exp_resp:
                self._fail("read", f"@0x{addr:08x}: RRESP="
                                   f"{resp_name(observed['resp'])} but the model "
                                   f"predicts {resp_name(exp_resp)}")
            if observed["data"] != exp_data:
                self._fail("read", f"@0x{addr:08x}: RDATA=0x{observed['data']:08x} but "
                                   f"the model predicts 0x{exp_data:08x}")
        return result

    async def rw(self, addr: int, data: int, *, raddr: Optional[int] = None,
                 strb: int = 0xF, prot: int = 0, model=None,
                 check: bool = True) -> dict:
        """One read and one write *accepted in the same cycle*.

        `raddr` defaults to `addr`; with different addresses the read returns the
        pre-write value of `raddr` (the write applies on the following edge).
        """
        raddr = addr if raddr is None else raddr
        exp_data, exp_resp = model.read(raddr) if model is not None else (None, None)
        exp_resp_w = model.write_resp(addr) if model is not None else None

        self.h("araddr").value = raddr & ((1 << 32) - 1)
        self.h("arprot").value = prot
        self.h("awaddr").value = addr & ((1 << 32) - 1)
        self.h("awprot").value = prot
        self.h("wdata").value = data & 0xFFFF_FFFF
        self.h("wstrb").value = strb & 0xF
        for suffix in ("arvalid", "awvalid", "wvalid", "rready", "bready"):
            self.h(suffix).value = 1
        await Timer(PROBE_NS, "ns")
        for suffix in ("arready", "awready", "wready"):
            if int(self.h(suffix).value) != 1:
                self._fail("rw", f"{suffix.upper()} low at the expected accept cycle")
        await self.cyc.sample()                      # both accepts
        accept_cycle = self._stamp()
        if int(self.h("rvalid").value) != 1 or int(self.h("bvalid").value) != 0:
            self._fail("rw", "expected RVALID in the accept cycle and no BVALID yet")
        observed = {"data": int(self.h("rdata").value), "resp": int(self.h("rresp").value)}
        for suffix in ("arvalid", "awvalid", "wvalid"):
            self.h(suffix).value = 0
        # Register effect and BVALID land on the next edge.
        await self.cyc.drive_point()
        if model is not None:
            model.write_apply(addr, data, strb)
        await self.cyc.sample()                      # apply edge
        apply_cycle = self._stamp()
        if int(self.h("bvalid").value) != 1:
            self._fail("rw", "BVALID was not asserted on the cycle after the accept")
        bresp = int(self.h("bresp").value)
        if int(self.h("rvalid").value) != 0:
            self._fail("rw", "RVALID was not consumed one cycle after it appeared")
        # RVALID is consumed at this edge (RREADY was high); BVALID has just
        # appeared, so BREADY must stay high for one more cycle to consume it.
        self.h("rready").value = 0
        await self.cyc.drive_point()
        await self.cyc.sample()                      # B handshake edge
        done_cycle = self._stamp()
        if int(self.h("bvalid").value) != 0:
            self._fail("rw", "BVALID was not consumed one cycle after it appeared")
        self.h("bready").value = 0
        await self.cyc.drive_point()
        self.transactions += 1

        result = {"kind": "rw", "addr": addr, "raddr": raddr, "data": observed["data"],
                  "resp": observed["resp"], "bresp": bresp,
                  "exp_data": exp_data, "exp_resp": exp_resp, "exp_bresp": exp_resp_w,
                  "accept": accept_cycle, "apply": apply_cycle, "done": done_cycle}
        if check and model is not None:
            if observed["resp"] != exp_resp or bresp != exp_resp_w:
                self._fail("rw", f"read @0x{raddr:08x}, write @0x{addr:08x}: RRESP/BRESP="
                                 f"{resp_name(observed['resp'])}/{resp_name(bresp)}, "
                                 f"model predicts {resp_name(exp_resp)}/"
                                 f"{resp_name(exp_resp_w)}")
            if observed["data"] != exp_data:
                self._fail("rw", f"read @0x{raddr:08x}: RDATA=0x{observed['data']:08x} but "
                                 f"the model predicts 0x{exp_data:08x} "
                                 f"(read-before-write)")
        return result

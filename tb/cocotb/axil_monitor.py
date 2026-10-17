"""Passive pin-level monitors.

These do not drive anything: they watch the DUT's boundary and check the AXI4-Lite
rules that a testbench can only see from outside, and they record transactions
independently of the stimulus (so a response cannot be "verified" by the same
code that produced the request):

  * master-facing port: every B/R response must belong to a write/read that was
    accepted on that port, exactly one response per transaction, VALID must stay
    asserted with stable payload until READY, and EXOKAY is never produced.
  * slave-facing port: VALID/PAYLOAD stability while waiting for READY, and the
    address presented to slave `s` must decode to region `s` (a placement check
    that a misroute cannot pass).

Every monitor collects strings in `violations`; a test fails if the list is
non-empty.  Monitors sample once per cycle at the settled point used everywhere
else (falling edge + 3 ns, see axil_common).
"""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Dict, List, Optional

from cocotb.triggers import Timer

from axil_common import get_sig
from axil_cover import Coverage, bucket, resp_name
from axil_spec import decode, target_index

PROBE_NS = 3.0


@dataclass
class ChanEvent:
    cycle: int
    kind: str          # 'aw', 'w', 'b', 'ar', 'r'
    addr: int = 0
    data: int = 0
    strb: int = 0
    resp: int = 0


class MasterPortMonitor:
    """Watches one master-facing AXI4-Lite port of the DUT."""

    def __init__(self, dut, index: Optional[int] = None, *, prefix: str = "m_axil",
                 name: Optional[str] = None, cover: Optional[Coverage] = None):
        self.dut = dut
        self.index = index
        self.prefix = prefix
        self.name = name or (f"m{index}" if index is not None else prefix)
        self.events: List[ChanEvent] = []
        self.violations: List[str] = []
        self.cycle = 0
        # completed transactions observed on this port
        self.observed_writes: List[ChanEvent] = []
        self.observed_reads: List[ChanEvent] = []
        #: functional-coverage collector (None disables coverage recording)
        self.cover = cover
        #: per-channel count of cycles VALID waited for READY (for the
        #: backpressure histograms)
        self._bp: Dict[str, int] = {ch: 0 for ch in ("aw", "w", "b", "ar", "r")}
        #: pending-transaction state, sampled once per cycle by the coverage
        #: task of the environment (a write/read is "in flight" from the
        #: moment its request halves are complete until its response)
        self.wr_inflight = False
        self.rd_inflight = False
        self.wr_tgt: Optional[int] = None
        self.rd_tgt: Optional[int] = None

    def h(self, suffix: str, index: Optional[int] = None):
        return get_sig(self.dut, self.prefix, suffix,
                       self.index if index is None else index)

    def _violate(self, message: str) -> None:
        text = f"{self.name} [{self.cycle}]: {message}"
        if text not in self.violations:
            self.violations.append(text)

    async def run(self) -> None:
        awvalid, awready, awaddr = self.h("awvalid"), self.h("awready"), self.h("awaddr")
        wvalid, wready = self.h("wvalid"), self.h("wready")
        wdata, wstrb = self.h("wdata"), self.h("wstrb")
        bvalid, bready, bresp = self.h("bvalid"), self.h("bready"), self.h("bresp")
        arvalid, arready, araddr = self.h("arvalid"), self.h("arready"), self.h("araddr")
        rvalid, rready, rdata, rresp = (
            self.h("rvalid"), self.h("rready"), self.h("rdata"), self.h("rresp"),
        )

        # state
        aw_acc = w_acc = False       # halves of the current write handed over
        wr_pending = False           # a complete write is with the DUT
        rd_pending = False           # an accepted read is with the DUT
        aw_hold: Optional[tuple] = None    # (addr) while awvalid waiting
        w_hold: Optional[tuple] = None
        b_hold: Optional[tuple] = None
        ar_hold: Optional[tuple] = None
        r_hold: Optional[tuple] = None

        while True:
            await Timer(PROBE_NS, "ns")
            self.cycle += 1

            v_aw, r_aw, a_aw = int(awvalid.value), int(awready.value), int(awaddr.value)
            v_w, r_w, d_w, s_w = (int(wvalid.value), int(wready.value),
                                  int(wdata.value), int(wstrb.value))
            v_b, r_b, p_b = int(bvalid.value), int(bready.value), int(bresp.value)
            v_ar, r_ar, a_ar = (int(arvalid.value), int(arready.value),
                                int(araddr.value))
            v_r, r_r, d_r, p_r = (int(rvalid.value), int(rready.value),
                                  int(rdata.value), int(rresp.value))

            # --- AXI stability: VALID must hold its payload until READY -------
            if v_aw:
                if aw_hold is not None and r_aw == 0 and a_aw != aw_hold[0]:
                    self._violate(f"AWADDR changed ({a_aw:#x} -> {aw_hold[0]:#x}) "
                                  f"while AWVALID was waiting for AWREADY")
                aw_hold = (a_aw,)
            else:
                aw_hold = None
            if v_w:
                if w_hold is not None and r_w == 0 and (d_w, s_w) != w_hold:
                    self._violate("WDATA/WSTRB changed while WVALID was waiting for WREADY")
                w_hold = (d_w, s_w)
            else:
                w_hold = None
            if v_b:
                if b_hold is not None and r_b == 0 and p_b != b_hold[0]:
                    self._violate("BRESP changed while BVALID was waiting for BREADY")
                b_hold = (p_b,)
            else:
                b_hold = None
            if v_ar:
                if ar_hold is not None and r_ar == 0 and a_ar != ar_hold[0]:
                    self._violate(f"ARADDR changed ({ar_hold[0]:#x} -> {a_ar:#x}) "
                                  f"while ARVALID was waiting for ARREADY")
                ar_hold = (a_ar,)
            else:
                ar_hold = None
            if v_r:
                if r_hold is not None and r_r == 0 and (d_r, p_r) != r_hold:
                    self._violate("RDATA/RRESP changed while RVALID was waiting for RREADY")
                r_hold = (d_r, p_r)
            else:
                r_hold = None

            # --- response legality -------------------------------------------
            if v_b and p_b not in (0, 2, 3):
                self._violate(f"BRESP={p_b} is not a legal response (no EXOKAY)")
            if v_r and p_r not in (0, 2, 3):
                self._violate(f"RRESP={p_r} is not a legal response (no EXOKAY)")

            # --- handshakes ---------------------------------------------------
            if v_aw and r_aw:
                self.events.append(ChanEvent(self.cycle, "aw", addr=a_aw))
                if aw_acc:
                    self._violate("a second AW was accepted before the first "
                                  "write completed (one outstanding write)")
                aw_acc = True
                self.wr_tgt = target_index(a_aw)
            if v_w and r_w:
                self.events.append(ChanEvent(self.cycle, "w", data=d_w, strb=s_w))
                if w_acc:
                    self._violate("a second W was accepted before the first "
                                  "write completed (one outstanding write)")
                w_acc = True
            if aw_acc and w_acc and not wr_pending:
                wr_pending = True
                self.wr_inflight = True

            if v_b and r_b:
                if not wr_pending:
                    self._violate(
                        f"B response (resp={p_b}) without a completed AW+W "
                        f"(aw_acc={aw_acc}, w_acc={w_acc})"
                    )
                else:
                    self.observed_writes.append(ChanEvent(self.cycle, "b", resp=p_b))
                aw_acc = w_acc = False
                wr_pending = False
                self.wr_inflight = False

            if v_ar and r_ar:
                self.events.append(ChanEvent(self.cycle, "ar", addr=a_ar))
                if rd_pending:
                    self._violate("a second AR was accepted before the first read "
                                  "completed (one outstanding read)")
                rd_pending = True
                self.rd_inflight = True
                self.rd_tgt = target_index(a_ar)
            if v_r and r_r:
                if not rd_pending:
                    self._violate(f"R response (resp={p_r}) without an accepted AR")
                else:
                    rd_pending = False
                    self.observed_reads.append(
                        ChanEvent(self.cycle, "r", data=d_r, resp=p_r)
                    )
                self.rd_inflight = False

            # --- functional coverage (passive, from the boundary) -------------
            if self.cover is not None:
                self._record_cover(v_aw, r_aw, v_w, r_w, v_b, r_b,
                                   v_ar, r_ar, v_r, r_r, a_aw, a_ar, s_w,
                                   p_b, p_r)

            await self._to_drive_point()

    def _record_cover(self, v_aw, r_aw, v_w, r_w, v_b, r_b,
                      v_ar, r_ar, v_r, r_r, a_aw, a_ar, s_w, p_b, p_r) -> None:
        """Record this cycle into the functional-coverage collector.

        Only boundary events are used: handshakes (VALID & READY), the address
        actually presented, the response code actually returned and the WSTRB
        actually carried.  The backpressure histograms count how many cycles a
        VALID had to wait before its READY.
        """
        cover = self.cover
        assert cover is not None
        for ch, v, r in (("aw", v_aw, r_aw), ("w", v_w, r_w), ("b", v_b, r_b),
                         ("ar", v_ar, r_ar), ("r", v_r, r_r)):
            if v and not r:
                self._bp[ch] += 1
            else:
                if v and r:
                    cover.hit(f"xbar.{ch}_backpressure", bucket(self._bp[ch]))
                self._bp[ch] = 0

        def target_bin(tgt: int) -> str:
            suffix = f"s{tgt}" if tgt < cover.nslv else "err"
            return f"m{self.index}_{suffix}"

        if v_aw and r_aw:
            cover.hit("xbar.write_target", target_bin(target_index(a_aw)))
        if v_ar and r_ar:
            cover.hit("xbar.read_target", target_bin(target_index(a_ar)))
        if v_b and r_b:
            cover.hit("xbar.write_resp", f"m{self.index}_{resp_name(p_b)}")
        if v_r and r_r:
            cover.hit("xbar.read_resp", f"m{self.index}_{resp_name(p_r)}")
        if v_w and r_w:
            if s_w == 0xF:
                bin_name = "all_bytes"
            elif bin(s_w).count("1") == 1:
                bin_name = f"single_b{(s_w & -s_w).bit_length() - 1}"
            else:
                bin_name = "partial"
            cover.hit("xbar.wstrb", bin_name)

    async def _to_drive_point(self) -> None:
        from cocotb.triggers import FallingEdge
        await FallingEdge(self.dut.clk)


class SlavePortMonitor:
    """Watches one slave-facing port of the DUT (unit-test configuration)."""

    def __init__(self, dut, index: int, *, prefix: str = "s_axil",
                 name: Optional[str] = None, cover: Optional[Coverage] = None):
        self.dut = dut
        self.index = index
        self.prefix = prefix
        self.name = name or f"s{index}"
        self.violations: List[str] = []
        self.cycle = 0
        self.aw_count = 0
        self.w_count = 0
        self.ar_count = 0
        self.aw_addrs: List[int] = []
        self.ar_addrs: List[int] = []
        #: functional-coverage collector (None disables coverage recording)
        self.cover = cover

    def h(self, suffix: str):
        return get_sig(self.dut, self.prefix, suffix, self.index)

    def _violate(self, message: str) -> None:
        text = f"{self.name} [{self.cycle}]: {message}"
        if text not in self.violations:
            self.violations.append(text)

    async def run(self) -> None:
        from cocotb.triggers import FallingEdge

        awvalid, awready, awaddr = self.h("awvalid"), self.h("awready"), self.h("awaddr")
        wvalid, wready = self.h("wvalid"), self.h("wready")
        wdata, wstrb = self.h("wdata"), self.h("wstrb")
        arvalid, arready, araddr = self.h("arvalid"), self.h("arready"), self.h("araddr")
        bvalid, bready = self.h("bvalid"), self.h("bready")
        rvalid, rready = self.h("rvalid"), self.h("rready")

        aw_hold = w_hold = ar_hold = None

        while True:
            await Timer(PROBE_NS, "ns")
            self.cycle += 1

            v_aw, r_aw, a_aw = int(awvalid.value), int(awready.value), int(awaddr.value)
            v_w, r_w, d_w, s_w = (int(wvalid.value), int(wready.value),
                                  int(wdata.value), int(wstrb.value))
            v_ar, r_ar, a_ar = int(arvalid.value), int(arready.value), int(araddr.value)
            v_b, r_b = int(bvalid.value), int(bready.value)
            v_r, r_r = int(rvalid.value), int(rready.value)

            # Payload stability of the DUT's own VALID outputs.
            if v_aw:
                if aw_hold is not None and r_aw == 0 and a_aw != aw_hold:
                    self._violate(f"AWADDR changed to {a_aw:#x} while AWVALID waited")
                aw_hold = a_aw
            else:
                aw_hold = None
            if v_w:
                if w_hold is not None and r_w == 0 and (d_w, s_w) != w_hold:
                    self._violate("WDATA/WSTRB changed while WVALID waited")
                w_hold = (d_w, s_w)
            else:
                w_hold = None
            if v_ar:
                if ar_hold is not None and r_ar == 0 and a_ar != ar_hold:
                    self._violate(f"ARADDR changed to {a_ar:#x} while ARVALID waited")
                ar_hold = a_ar
            else:
                ar_hold = None

            # Placement: this slave must only ever be addressed inside its region.
            if v_aw:
                target = decode(a_aw)
                if target != self.index:
                    self._violate(
                        f"AWADDR {a_aw:#010x} presented to slave {self.index} but "
                        f"decodes to {target} -- misrouted transaction"
                    )
            if v_ar:
                target = decode(a_ar)
                if target != self.index:
                    self._violate(
                        f"ARADDR {a_ar:#010x} presented to slave {self.index} but "
                        f"decodes to {target} -- misrouted transaction"
                    )

            # Address must be word aligned (word devices; low bits are ignored by
            # the peripherals, so a non-zero low field would be silently dropped).
            if v_aw and (a_aw & 0x3):
                self._violate(f"AWADDR {a_aw:#x} is not word aligned")
            if v_ar and (a_ar & 0x3):
                self._violate(f"ARADDR {a_ar:#x} is not word aligned")

            if v_aw and r_aw:
                self.aw_count += 1
                self.aw_addrs.append(a_aw)
            if v_w and r_w:
                self.w_count += 1
            if v_ar and r_ar:
                self.ar_count += 1
                self.ar_addrs.append(a_ar)

            if self.cover is not None:
                for kind, v, r in (("aw", v_aw, r_aw), ("w", v_w, r_w),
                                   ("b", v_b, r_b), ("ar", v_ar, r_ar),
                                   ("r", v_r, r_r)):
                    if v and r:
                        self.cover.hit(f"slave{self.index}_activity", kind)

            await FallingEdge(self.dut.clk)

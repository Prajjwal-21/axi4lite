"""Shared testbench plumbing: clock/reset, cycle timing, transaction records.

TIMING CONVENTION (measured, not assumed)
-----------------------------------------
This testbench drives and samples with Verilator + cocotb 2.1.  The convention
below was established by an experiment (see `tests/test_env_selfcheck.py`,
`test_timing_convention`), not copied from documentation:

  * `await RisingEdge(clk)` resumes BEFORE the flip-flops of that edge settle,
    so a value read immediately after the trigger is the PRE-edge value of the
    previous cycle.
  * A settled value is available after `await RisingEdge(clk)` + a small delay.
  * An input driven at the falling edge is captured by the rising edge that ends
    the same cycle.

Therefore every module here uses exactly two synchronisation points:

    async def _sample(self)  ->  await RisingEdge(clk); await Timer(1, "ns")
        Settled state of the cycle that the rising edge just closed.
        A VALID/READY handshake has occurred if both are 1 in this state.

    async def _drive_point(self)  ->  await FallingEdge(clk)
        Start of the next cycle.  Values written here are stable for the whole
        coming cycle and are captured by the following rising edge.

Every cycle-counted delay in the testbench counts whole cycles measured from a
drive point, so the delay semantics are identical for stimulus and for stall
generation.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Optional

from cocotb.triggers import FallingEdge, RisingEdge, Timer

#: Clock period split used everywhere: 5 ns low, 5 ns high.
CLK_HALF_NS = 5.0
CLK_PERIOD_NS = 2 * CLK_HALF_NS

#: Delay added after a rising edge to read settled (post-edge) values.
SETTLE_NS = 1.0


async def start_clock(dut, period_ns: float = CLK_PERIOD_NS) -> None:
    """Drive `dut.clk`: low for the first half period, high for the second."""
    import cocotb

    half = period_ns / 2.0
    cocotb.start_soon(_clock_loop(dut, half))


async def _clock_loop(dut, half_ns: float) -> None:
    while True:
        dut.clk.value = 0
        await Timer(half_ns, "ns")
        dut.clk.value = 1
        await Timer(half_ns, "ns")


class Cycle:
    """Cycle-accurate helpers bound to one clock signal."""

    def __init__(self, clk, settle_ns: float = SETTLE_NS):
        self._clk = clk
        self._settle_ns = settle_ns
        self._count = 0

    @property
    def count(self) -> int:
        """Number of completed cycles observed through this object."""
        return self._count

    async def sample(self) -> None:
        """Advance to the settled post-edge state of the current cycle."""
        await RisingEdge(self._clk)
        await Timer(self._settle_ns, "ns")
        self._count += 1

    async def drive_point(self) -> None:
        """Advance to the start of the next cycle (falling edge)."""
        await FallingEdge(self._clk)

    async def tick(self) -> None:
        """One whole cycle, ending at a drive point."""
        await self.sample()
        await self.drive_point()

    async def wait_cycles(self, n: int) -> None:
        for _ in range(n):
            await self.tick()


async def reset_dut(dut, cycles: int = 4, cycle: Optional[Cycle] = None) -> None:
    """Assert reset for `cycles` whole cycles and release it on a drive point."""
    cyc = cycle or Cycle(dut.clk)
    dut.rst.value = 1
    for _ in range(cycles):
        await cyc.tick()
    dut.rst.value = 0
    await cyc.tick()


async def gather(*coros):
    """Run coroutines concurrently and return their results in order.

    cocotb 2.1 runs tests on its own scheduler, not on an asyncio event loop, so
    `asyncio.gather` is not available inside a test.  Starting every coroutine
    and then awaiting them has the same effect.
    """
    import cocotb

    tasks = [cocotb.start_soon(coro) for coro in coros]
    results = []
    for task in tasks:
        results.append(await task)
    return results


def resp_name(resp: int) -> str:
    from axil_spec import RESP_DECERR, RESP_EXOKAY, RESP_OKAY, RESP_SLVERR

    return {
        RESP_OKAY: "OKAY",
        RESP_SLVERR: "SLVERR",
        RESP_DECERR: "DECERR",
        RESP_EXOKAY: "EXOKAY",
    }.get(resp, f"?({resp})")


def get_sig(dut, prefix: str, suffix: str, index: Optional[int] = None):
    """Fetch `dut.<prefix>_<suffix>`, optionally element `index` of a packed array.

    `index=None` means the port is a plain scalar/vector (used by the flat
    single-peripheral harness); an integer means the port is a packed array of
    per-master or per-slave ports, one element of which is this object's port.
    """
    obj = getattr(dut, f"{prefix}_{suffix}")
    if index is None:
        return obj
    return obj[index]


# ---------------------------------------------------------------------------
# Transaction records
# ---------------------------------------------------------------------------

WRITE = "WRITE"
READ = "READ"


@dataclass
class Txn:
    """One AXI4-Lite transaction as seen by a master BFM or a monitor."""

    kind: str                      # WRITE or READ
    master: int                    # master index
    addr: int
    source: str = "bfm"            # "bfm" | "monitor" | "slave" | "refmodel"
    data: int = 0                  # write data (WRITE) or read data (READ)
    strb: int = 0xF                # write strobes (WRITE)
    prot: int = 0
    resp: int = 0
    #: Cycles spent waiting, one entry per channel, measured in whole cycles.
    latency: dict = field(default_factory=dict)
    #: For monitors: the anachronistic ordering tags AW/W completion.
    t_start: int = 0
    t_end: int = 0
    tags: tuple = ()

    def __str__(self) -> str:
        if self.kind == WRITE:
            payload = f"data={self.data:#010x} strb={self.strb:#03x}"
        else:
            payload = f"data={self.data:#010x}"
        return (f"{self.kind:<5} m{self.master} @{self.addr:#010x} {payload} "
                f"resp={resp_name(self.resp)}")

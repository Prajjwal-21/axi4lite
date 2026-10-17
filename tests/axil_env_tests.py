"""Environment self-checks: the timing convention and the cycle counters.

These tests guard the foundation of the whole testbench.  Every other test
depends on the drive/sample convention of `axil_common`; if a future toolchain
changes it, these tests fail loudly and with a precise reason, instead of
producing hundreds of confusing failures elsewhere.

DUT: `conv_probe` (tb/harness/conv_probe.sv) -- a one cycle delay register plus
a combinational shadow of `d & ~q`.
"""

from __future__ import annotations

import cocotb
from cocotb.triggers import RisingEdge, Timer

from axil_common import Cycle, start_clock


async def _bring_up(dut, reset_cycles: int = 3) -> Cycle:
    await start_clock(dut)
    cyc = Cycle(dut.clk)
    dut.rst.value = 1
    dut.d.value = 0
    await cyc.wait_cycles(reset_cycles)
    dut.rst.value = 0
    # one whole cycle with reset released and d = 0
    dut.d.value = 0
    await cyc.tick()
    return cyc


@cocotb.test()
async def test_timing_convention(dut):
    """A value driven at the falling edge is captured by the rising edge that
    ends the same cycle, and the captured value is readable 1 ns later."""
    cyc = await _bring_up(dut)

    # We are at a drive point (falling edge).  Drive the payload for this cycle.
    dut.d.value = 5

    await RisingEdge(dut.clk)
    stale = int(dut.q.value)
    await Timer(1, "ns")
    settled = int(dut.q.value)

    dut._log.info(
        f"timing convention: value right after the rising-edge trigger = {stale}, "
        f"value 1 ns later = {settled}"
    )

    # The environment relies on this one: the drive lands in the cycle that the
    # following rising edge closes.
    assert settled == 5, (
        f"drive-then-sample convention broken: expected q=5 after the rising "
        f"edge, got {settled}. Verilator/cocotb timing behaviour changed; the "
        f"BFM and slave model must be re-validated before trusting any result."
    )

    # And the value must still be there at the next drive point (mid-cycle),
    # which is what the slave model reads.
    await cyc.drive_point()
    assert int(dut.q.value) == 5, "settled value not stable at the drive point"


@cocotb.test()
async def test_cycle_counting(dut):
    """`Cycle.sample()`/`tick()` count exactly one clock cycle each."""
    cyc = await _bring_up(dut)

    observed = []
    for i in range(1, 9):
        dut.d.value = i           # driven at the drive point of cycle i
        await cyc.sample()        # settled state of cycle i
        observed.append(int(dut.q.value))
        await cyc.drive_point()   # start of cycle i+1

    assert observed == list(range(1, 9)), (
        f"one-cycle delay register did not track the driven values: {observed} != "
        f"{list(range(1, 9))} -- cycle alignment is off"
    )


@cocotb.test()
async def test_reset_holds_register(dut):
    """Reset is synchronous and holds the register at zero while asserted."""
    await start_clock(dut)
    cyc = Cycle(dut.clk)
    dut.rst.value = 1
    dut.d.value = 0xA

    for cycle in range(4):
        await cyc.sample()
        assert int(dut.q.value) == 0, (
            f"q left reset state in cycle {cycle} while rst was asserted"
        )
        await cyc.drive_point()

    dut.rst.value = 0
    dut.d.value = 0x3
    await cyc.sample()
    assert int(dut.q.value) == 0x3, "register did not capture after reset release"

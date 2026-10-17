"""Peripheral unit tests: UART / GPIO / TIMER register blocks, cycle-exact.

DUT: `peripheral_unit_harness`, which exposes the three peripherals behind their
own flat AXI4-Lite ports (see `tb/harness/peripheral_unit_harness.sv`).  Because
there is no crossbar in the way, one transaction is a single bridge access, and
`PinnedAxil` can assert exactly which edge accepts it, which edge applies the
register effect and which edge carries the response.  The Python reference model
(`axil_refmodel`) predicts data, response codes and - through its per-cycle
`step()` - the observable state (counter values, synchroniser stages, serialiser
bit timing, sticky flags) at every one of those edges.

Two independent comparison mechanisms are used:

  * every access made through the pinned helpers compares its data and response
    against the model at the exact edge it is sampled (fails with the cycle
    numbers in the message), and
  * the environment records a per-cycle boundary trace (uart_tx, gpio_out,
    gpio_dir, the three irq lines) in which the DUT pins and the model's
    prediction belong to the same clock edge by construction;
    `env.compare_pin_trace(a, b)` checks a whole interval, so events whose
    *timing* matters (frame bit periods, synchroniser latency, flag edges) are
    checked every cycle, not just once at the end.

Every directed test uses the model to predict the cycle at which the event it is
waiting for occurs, so the wait is not a timeout and the timing is checked.

Required scenarios covered here:
  (3)  independent AW/W arrival order at register level   test_aw_w_arrival_orders
  (6)  WSTRB: partial strobes and zero strobes            test_wstrb_zero_and_partial,
                                                          test_zero_strobe_has_no_effect
  (7)  invalid/unmapped accesses (SLVERR, no side effect) test_ro_wo_and_bad_offsets
  (12) the checker catches a wrong expectation            test_checker_self_test
plus the register-level behaviour of the three peripherals:
  test_reset_values_and_ids, test_read_before_write_same_cycle,
  test_timer_counting_and_period, test_timer_expiry_flags_oneshot_and_irq,
  test_timer_prescaler_and_w1c_race, test_gpio_sync_latency_and_edges,
  test_uart_tx_frame_and_bit_timing, test_uart_loopback_roundtrip,
  test_uart_rx_frame_error_overrun_and_gating

Scenario (7) here is the *in-region* half (unimplemented offsets -> SLVERR);
the crossbar-level DECERR half is exercised by the subsystem tests.
"""

from __future__ import annotations

from typing import Callable, List, Optional

import cocotb

from axil_common import resp_name
from axil_env import PeripheralUnitEnv
from axil_pinned import PinError
from axil_spec import DEFS as D
from axil_spec import (PERIPH_LOCAL_MASK, REGIONS, RESP_OKAY, RESP_SLVERR,
                       SPEC_BY_INDEX)

UART, GPIO, TIMER = REGIONS


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def u(name: str) -> int:
    return UART.base + D[f"AXIL_UART_{name}_OFF"]


def g(name: str) -> int:
    return GPIO.base + D[f"AXIL_GPIO_{name}_OFF"]


def t(name: str) -> int:
    return TIMER.base + D[f"AXIL_TIMER_{name}_OFF"]


def unimplemented_offsets(region_index: int) -> List[int]:
    """Word-aligned offsets inside the region that no register is mapped to."""
    spec = SPEC_BY_INDEX[region_index]
    used = set(spec.by_offset())
    return [off for off in range(0, PERIPH_LOCAL_MASK + 1, 4) if off not in used]


async def bring_up(dut, **kwargs) -> PeripheralUnitEnv:
    env = PeripheralUnitEnv(dut, **kwargs)
    await env.start()
    # The DUT comes out of reset with all enables clear, so the model (started
    # from its own reset state) must already agree with every boundary pin.
    env.compare_pin_trace(0, where="after reset")
    return env


async def rd(env: PeripheralUnitEnv, which: str, addr: int) -> dict:
    """Pinned read with model prediction/checking."""
    return await env.pinned[which].read(addr, model=env.model)


async def wr(env: PeripheralUnitEnv, which: str, addr: int, data: int, *,
             strb: int = 0xF, aw_delay: int = 0, w_delay: int = 0) -> dict:
    """Pinned write with model prediction/checking."""
    return await env.pinned[which].write(addr, data, strb=strb,
                                         aw_delay=aw_delay, w_delay=w_delay,
                                         model=env.model)


def expect_status(env: PeripheralUnitEnv, *flags: str) -> int:
    """Expected UART STATUS value with the named flags set."""
    value = 0
    for flag in flags:
        value |= 1 << D[f"AXIL_UART_ST_{flag}"]
    return value


def state(env: PeripheralUnitEnv) -> dict:
    """Model state without the step counter (for 'nothing changed' comparisons)."""
    snap = env.model.snapshot()
    snap.pop("steps")
    return snap


def irq_bits(env: PeripheralUnitEnv, index: int, lo: int = 0,
             hi: Optional[int] = None) -> List[int]:
    """Observed irq lines for one peripheral (0=UART, 1=GPIO, 2=TIMER) per cycle."""
    rows = env.trace[lo:hi]
    return [entry["obs"]["irq"][index] for entry in rows]


def first_index(values: List[int], pred: Callable[[int], bool]) -> Optional[int]:
    for index, value in enumerate(values):
        if pred(value):
            return index
    return None


def decode_frame(samples: List[int], baud: int) -> int:
    """Decode one UART frame from per-cycle line samples; also check bit timing.

    The frame starts at the first 0 after an idle 1.  Bit k covers cycles
    [start + k*baud, start + (k+1)*baud), so the line must change only on those
    boundaries - which is what makes this a bit-period check as well as a
    content check (it uses only the observed waveform, not the model).
    """
    start = None
    for i, value in enumerate(samples):
        if i > 0 and samples[i - 1] == 1 and value == 0:
            start = i
            break
    assert start is not None, f"no start bit in {samples}"
    assert start + 10 * baud <= len(samples), "frame truncated"
    data = 0
    for k in range(1, 9):
        mid = samples[start + k * baud + baud // 2]
        data |= mid << (k - 1)
    assert samples[start + 9 * baud + baud // 2] == 1, "stop bit is not high"
    # Timing: every change of bit value must land exactly on a bit boundary.
    for k in range(10):
        begin = start + k * baud
        for offset in range(1, baud):
            assert samples[begin + offset] == samples[begin], \
                f"line changed inside bit {k} (cycle {begin + offset})"
    assert samples[start - 1] == 1, "line was not idling before the frame"
    return data


# ---------------------------------------------------------------------------
# Register map, reset values, access directions
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_reset_values_and_ids(dut):
    """Every register reads its documented reset value and the correct ID."""
    env = await bring_up(dut)
    m = env.model

    # UART: CTRL/BAUD/INT_STATUS/INT_ENABLE zero, STATUS = TX_READY, ID = "UART".
    for addr, name in ((u("CTRL"), "CTRL"), (u("BAUD"), "BAUD"),
                       (u("ISTAT"), "INT_STATUS"), (u("IEN"), "INT_ENABLE")):
        result = await rd(env, "UART", addr)
        assert result["data"] == 0, f"UART {name} reset value {result['data']:#x}"
    assert (await rd(env, "UART", u("STATUS")))["data"] == expect_status(env, "TX_READY")
    assert (await rd(env, "UART", u("ID")))["data"] == UART.id_value
    assert (await rd(env, "UART", u("TXDATA")))["data"] == 0, "write-only register reads 0"
    assert (await rd(env, "UART", u("RXDATA")))["data"] == 0

    # GPIO: all-zero registers, ID = "GIO\\0".
    for addr, name in ((g("DIR"), "DIR"), (g("OUT"), "OUT"), (g("IN"), "IN"),
                       (g("IEN"), "INT_ENABLE"), (g("ISTAT"), "INT_STATUS"),
                       (g("ITYPE"), "INT_TYPE")):
        result = await rd(env, "GPIO", addr)
        assert result["data"] == 0, f"GPIO {name} reset value {result['data']:#x}"
    assert (await rd(env, "GPIO", g("ID")))["data"] == GPIO.id_value

    # TIMER: LOAD/VALUE = all ones, the rest zero, ID = "TIME".
    assert (await rd(env, "TIMER", t("CTRL")))["data"] == 0
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 0xFFFF_FFFF
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 0xFFFF_FFFF
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 0
    assert (await rd(env, "TIMER", t("PRESCALE")))["data"] == 0
    assert (await rd(env, "TIMER", t("ID")))["data"] == TIMER.id_value

    assert m.steps > 40, f"model should have stepped for every access ({m.steps})"
    env.compare_pin_trace(0, where="after the reset-value sweep")
    dut._log.info(f"reset values and IDs OK; {m.steps} model steps, "
                  f"{len(m.accesses)} accesses")


@cocotb.test()
async def test_ro_wo_and_bad_offsets(dut):
    """RO writes -> SLVERR, WO reads -> OKAY with 0, bad offsets -> SLVERR."""
    env = await bring_up(dut)
    m = env.model

    # Write to read-only registers: rejected, state unchanged.
    for which, addr, name in (
        ("UART", u("STATUS"), "STATUS"), ("UART", u("RXDATA"), "RXDATA"),
        ("UART", u("ID"), "ID"), ("GPIO", g("IN"), "IN"), ("GPIO", g("ID"), "ID"),
        ("TIMER", t("VALUE"), "VALUE"), ("TIMER", t("ID"), "ID"),
    ):
        before = state(env)
        result = await wr(env, which, addr, 0xDEAD_BEEF)
        assert result["resp"] == RESP_SLVERR, \
            f"{which}.{name} write returned {resp_name(result['resp'])}, want SLVERR"
        assert state(env) == before, f"{which}.{name}: rejected write changed state"
        check = await rd(env, which, addr)
        assert check["resp"] == RESP_OKAY, \
            f"{which}.{name} read returned {resp_name(check['resp'])}, want OKAY"

    # Reading the write-only TXDATA is OKAY and returns zero.
    result = await rd(env, "UART", u("TXDATA"))
    assert result["resp"] == RESP_OKAY and result["data"] == 0

    # Unimplemented offsets inside each region: SLVERR for read and write, and
    # no state change anywhere.
    for which, index in (("UART", 0), ("GPIO", 1), ("TIMER", 2)):
        offsets = unimplemented_offsets(index)
        assert offsets, f"{which} has no unimplemented offset to probe"
        for off in offsets[:3]:
            addr = REGIONS[index].base + off
            before = state(env)
            w = await wr(env, which, addr, 0x1234_5678)
            assert w["resp"] == RESP_SLVERR, \
                f"{which} write @{addr:#x} -> {resp_name(w['resp'])}, want SLVERR"
            r = await rd(env, which, addr)
            assert r["resp"] == RESP_SLVERR and r["data"] == 0, \
                f"{which} read @{addr:#x} -> {resp_name(r['resp'])}/{r['data']:#x}"
            assert state(env) == before, f"{which} @{addr:#x} changed state"
    env.compare_pin_trace(0, where="after the error-response sweep")
    dut._log.info("RO/WO direction and unimplemented-offset responses OK")


# ---------------------------------------------------------------------------
# WSTRB
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_wstrb_zero_and_partial(dut):
    """Partial strobes merge byte-wise; a zero strobe changes nothing."""
    env = await bring_up(dut)
    m = env.model

    # UART CTRL is byte 0 only: writing byte 0 with data 0x7F sets all 7 fields,
    # then a byte-1-only write must not touch them.
    await wr(env, "UART", u("CTRL"), 0x0000_007F, strb=0x1)
    assert (await rd(env, "UART", u("CTRL")))["data"] == 0x7F
    await wr(env, "UART", u("CTRL"), 0x0000_FF00, strb=0x2)
    assert (await rd(env, "UART", u("CTRL")))["data"] == 0x7F, "byte 1 must not write CTRL"
    await wr(env, "UART", u("CTRL"), 0x0000_FFFF, strb=0x0)
    assert (await rd(env, "UART", u("CTRL")))["data"] == 0x7F, "zero strobe must not write"

    # BAUD is 16 bits: bytes 2/3 are reserved and cannot change it.
    await wr(env, "UART", u("BAUD"), 0x0000_0018, strb=0x3)
    assert (await rd(env, "UART", u("BAUD")))["data"] == 0x18
    await wr(env, "UART", u("BAUD"), 0xFFFF_0000, strb=0xC)
    assert (await rd(env, "UART", u("BAUD")))["data"] == 0x18, "reserved BAUD bytes written"
    await wr(env, "UART", u("BAUD"), 0x0000_FF00, strb=0x2)   # byte 1 only
    assert (await rd(env, "UART", u("BAUD")))["data"] == 0x18 | 0xFF00

    # GPIO INT_ENABLE / INT_TYPE are 8-bit; upper bytes must not appear.
    await wr(env, "GPIO", g("IEN"), 0x0000_00FF, strb=0x1)
    assert (await rd(env, "GPIO", g("IEN")))["data"] == 0xFF
    await wr(env, "GPIO", g("ITYPE"), 0xFFFF_FF00, strb=0xF)
    assert (await rd(env, "GPIO", g("ITYPE")))["data"] == 0x00, "GPIO upper bytes written"

    # TIMER LOAD is 32 bits: byte-wise merge must compose with the reset value.
    await wr(env, "TIMER", t("LOAD"), 0x0000_1234, strb=0x3)
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 0xFFFF_1234, \
        "bytes 0/1 must merge into the reset value 0xFFFF_FFFF"
    await wr(env, "TIMER", t("LOAD"), 0xABCD_0000, strb=0xC)
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 0xABCD_1234
    # and VALUE followed the LOAD updates (they are written together)
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 0xABCD_1234

    # TIMER PRESCALE is 16 bits.
    await wr(env, "TIMER", t("PRESCALE"), 0x0000_0003, strb=0x3)
    assert (await rd(env, "TIMER", t("PRESCALE")))["data"] == 3
    await wr(env, "TIMER", t("PRESCALE"), 0xFFFF_0000, strb=0xC)
    assert (await rd(env, "TIMER", t("PRESCALE")))["data"] == 3, "PRESCALE upper bytes written"
    await wr(env, "TIMER", t("PRESCALE"), 0xFFFF_FFFF, strb=0xF)
    assert (await rd(env, "TIMER", t("PRESCALE")))["data"] == 0xFFFF, \
        "all-strobe write must place data[15:0] in PRESCALE (reserved bits dropped)"

    # TIMER CTRL is four bits in byte 0: the same merge rule must apply.
    await wr(env, "TIMER", t("CTRL"), 0x0000_0008, strb=0x1)     # PRESCALE_EN
    assert (await rd(env, "TIMER", t("CTRL")))["data"] == 0x8
    await wr(env, "TIMER", t("CTRL"), 0x0000_0001, strb=0x0)     # zero strobe
    assert (await rd(env, "TIMER", t("CTRL")))["data"] == 0x8, \
        "zero-strobe write changed TIMER CTRL"
    await wr(env, "TIMER", t("CTRL"), 0x0000_00F0, strb=0x2)     # upper byte only
    assert (await rd(env, "TIMER", t("CTRL")))["data"] == 0x8, \
        "upper-byte-only write changed TIMER CTRL"
    # The sticky-flag register lives in byte 0 as well: an upper-byte-only write
    # reaches the register bridge (OKAY) but cannot change the flag.
    await wr(env, "TIMER", t("ISTAT"), 0xFFFF_FFFF, strb=0xE)
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 0
    env.compare_pin_trace(0, where="after the WSTRB sweep")
    dut._log.info("WSTRB partial/zero merge rules OK")


@cocotb.test()
async def test_zero_strobe_has_no_effect(dut):
    """A WSTRB=0 write is accepted but triggers nothing, even in a race."""
    env = await bring_up(dut)
    m = env.model

    # 1. TIMER: a zero-strobe LOAD write must not reload a running counter.
    await wr(env, "TIMER", t("LOAD"), 100, strb=0xF)
    await wr(env, "TIMER", t("CTRL"), 0x1, strb=0x1)            # EN
    await env.idle(5)
    v_before = (await rd(env, "TIMER", t("VALUE")))["data"]
    assert v_before < 100, "counter is not running"
    await wr(env, "TIMER", t("LOAD"), 7, strb=0x0)              # no effect at all
    v_after = (await rd(env, "TIMER", t("VALUE")))["data"]
    assert v_after != 7, "zero-strobe LOAD write reloaded VALUE"
    assert v_after < v_before, "counter must keep counting down"
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 100, "zero-strobe LOAD changed LOAD"
    # With the counter stopped, VALUE must be exactly unchanged.
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)            # stop
    stopped = (await rd(env, "TIMER", t("VALUE")))["data"]
    await wr(env, "TIMER", t("LOAD"), 7, strb=0x0)
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == stopped, \
        "zero-strobe LOAD moved the stopped counter"
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 100

    # 2. UART: a zero-strobe TXDATA write must not start a frame.
    await wr(env, "UART", u("CTRL"), 1 << D["AXIL_UART_CTRL_TX_EN"], strb=0x1)
    base = len(env.trace)
    await wr(env, "UART", u("TXDATA"), 0x5A, strb=0x0)
    await env.idle(10 * 4 + 2)                                  # a whole frame's worth
    env.compare_pin_trace(base, where="zero-strobe TXDATA")
    line = [entry["obs"]["uart_tx"] for entry in env.trace[base:]]
    assert set(line) == {1}, "zero-strobe TXDATA write started a frame"

    # 3. GPIO: same-cycle W1C races.  The change flag appears on the clock edge
    #    after the new level reaches the second synchroniser stage, so a write
    #    whose apply edge is that edge races with the event.
    await wr(env, "GPIO", g("IEN"), 0x01, strb=0x1)             # enable pin 0
    await wr(env, "GPIO", g("ITYPE"), 0x01, strb=0x1)           # rising edge only

    # (a) zero strobe on the event edge: the event must still be recorded.
    env.set_gpio_in(0x01)                                       # 0 -> 1 at this drive point
    await env.idle(1)                                           # event lands 2 edges later
    await wr(env, "GPIO", g("ISTAT"), 0xFF, strb=0x0)           # zero-strobe clear
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] & 0x01, \
        "zero-strobe INT_STATUS write suppressed the same-edge event"
    await env.check_irqs("after zero-strobe W1C race")

    # (b) strobed write that writes the bit as 0 on the event edge: untouched.
    await wr(env, "GPIO", g("ISTAT"), 0x01, strb=0x1)           # clear (bit 1)
    env.set_gpio_in(0x00)
    await env.idle(4)                                           # falling edge ignored
    env.set_gpio_in(0x01)
    await env.idle(1)
    await wr(env, "GPIO", g("ISTAT"), 0x00, strb=0x1)           # write 0: no clear
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] & 0x01, \
        "W1C write of 0 lost the same-edge event"

    # (c) strobed write that writes the bit as 1 on the event edge: clear wins.
    await wr(env, "GPIO", g("ISTAT"), 0x01, strb=0x1)           # clear again
    env.set_gpio_in(0x00)
    await env.idle(4)
    env.set_gpio_in(0x01)
    await env.idle(1)
    await wr(env, "GPIO", g("ISTAT"), 0x01, strb=0x1)           # clear on the event edge
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] & 0x01 == 0, \
        "W1C clear must win over the same-edge event set"
    await env.check_irqs("after strobed W1C race")
    env.compare_pin_trace(0, where="zero-strobe no-effect test")
    dut._log.info("zero-strobe writes are side-effect free, including in the W1C races")


# ---------------------------------------------------------------------------
# Bridge-level arrival order and read-before-write
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_aw_w_arrival_orders(dut):
    """AW and W may arrive in either order and in different cycles."""
    env = await bring_up(dut)
    m = env.model

    for aw_delay, w_delay in ((0, 0), (0, 1), (1, 0), (0, 3), (3, 0), (2, 5), (5, 2)):
        data = 0x1000 + aw_delay * 16 + w_delay
        result = await wr(env, "TIMER", t("LOAD"), data,
                          aw_delay=aw_delay, w_delay=w_delay)
        assert result["resp"] == RESP_OKAY, \
            f"AW+{aw_delay}/W+{w_delay}: {resp_name(result['resp'])}"
        # The write is accepted at the first edge where both halves are present.
        assert result["accept"] == result["apply"] - 1, "apply must follow accept"
        read = await rd(env, "TIMER", t("LOAD"))
        assert read["data"] == data, \
            f"AW+{aw_delay}/W+{w_delay}: LOAD={read['data']:#x}, want {data:#x}"
        # LOAD and VALUE move together, so VALUE confirms the same write.
        assert (await rd(env, "TIMER", t("VALUE")))["data"] == data
    dut._log.info("independent AW/W arrival orders OK (7 combinations)")


@cocotb.test()
async def test_read_before_write_same_cycle(dut):
    """A read accepted in the same cycle as a write returns the pre-write value."""
    env = await bring_up(dut)
    m = env.model
    pins = env.pinned

    # UART CTRL: read 0x00 while writing 0x7F -> read must return the old value.
    result = await pins["UART"].rw(u("CTRL"), 0x7F, strb=0x1, model=m)
    assert result["data"] == 0x00, f"CTRL read {result['data']:#x}, want pre-write 0x00"
    assert result["apply"] == result["accept"] + 1, "write must apply one edge later"
    assert (await rd(env, "UART", u("CTRL")))["data"] == 0x7F, "write did not apply"

    # TIMER LOAD: the read returns the old LOAD, then LOAD and VALUE both change.
    await wr(env, "TIMER", t("LOAD"), 0x1111_2222)
    result = await pins["TIMER"].rw(t("LOAD"), 0x3333_4444, model=m)
    assert result["data"] == 0x1111_2222, \
        f"LOAD read {result['data']:#x}, want pre-write 0x11112222"
    assert (await rd(env, "TIMER", t("LOAD")))["data"] == 0x3333_4444
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 0x3333_4444

    # TIMER INT_STATUS: reading a set flag while clearing it must return 1.
    await wr(env, "TIMER", t("LOAD"), 0, strb=0xF)              # expire on the next tick
    await wr(env, "TIMER", t("CTRL"), 0x1, strb=0x1)            # EN
    await env.idle(3)
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 1, "expected expiry flag"
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)            # stop so the flag stays put
    result = await pins["TIMER"].rw(t("ISTAT"), 0x1, strb=0x1, model=m)
    assert result["data"] == 1, "same-cycle read of INT_STATUS lost the flag"
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 0, "same-cycle W1C did not clear"

    # Read one address while writing another: RADDR is sampled pre-write.
    await wr(env, "GPIO", g("DIR"), 0x0F)
    result = await pins["GPIO"].rw(g("OUT"), 0x5A, raddr=g("DIR"), model=m)
    assert result["data"] == 0x0F, f"DIR read {result['data']:#x} during OUT write"
    assert (await rd(env, "GPIO", g("OUT")))["data"] == 0x5A
    assert (await rd(env, "GPIO", g("DIR")))["data"] == 0x0F, "the write hit the wrong address"
    env.compare_pin_trace(0, where="read-before-write test")
    dut._log.info("read-before-write holds for same-address and cross-address pairs")


# ---------------------------------------------------------------------------
# TIMER
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_timer_counting_and_period(dut):
    """VALUE counts down once per tick and wraps with period (LOAD+1)."""
    env = await bring_up(dut)
    m = env.model

    # EN=0: the counter holds its value.
    await wr(env, "TIMER", t("LOAD"), 5, strb=0xF)
    await env.idle(4)
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 5, "counter ran while EN=0"

    # Free running, LOAD=5 (period 6).  A pinned read is accepted exactly two
    # cycles after the previous one, so consecutive observed values must satisfy
    # d[k+1] == (d[k] - 2) mod 6.  This is an arithmetic check of the period
    # that uses only the observed values (no model, no assumed read phase).
    await wr(env, "TIMER", t("CTRL"), 0x1, strb=0x1)            # EN, prescaler off
    reads = [await rd(env, "TIMER", t("VALUE")) for _ in range(8)]
    values = [r["data"] for r in reads]
    accepts = [r["accept"] for r in reads]
    assert all(b - a == 2 for a, b in zip(accepts, accepts[1:])), \
        f"read stride is not 2 cycles: {accepts}"
    assert all((v - 2) % 6 == w for v, w in zip(values, values[1:])), \
        f"LOAD=5 must have period 6, observed {values}"
    assert len(set(values)) == 3, f"stride-2 samples must cover 3 phases: {values}"

    # LOAD=1 (period 2): a stride-2 read must observe a constant value.
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)
    await wr(env, "TIMER", t("LOAD"), 1, strb=0xF)
    await wr(env, "TIMER", t("CTRL"), 0x1, strb=0x1)
    parity = [(await rd(env, "TIMER", t("VALUE")))["data"] for _ in range(4)]
    assert len(set(parity)) == 1 and parity[0] in (0, 1), \
        f"LOAD=1 has period 2, so stride 2 must be constant: {parity}"
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)
    env.compare_pin_trace(0, where="timer period test")
    dut._log.info(f"period (LOAD+1) confirmed; LOAD=5 sequence {values}, "
                  f"LOAD=1 parity {parity}")


@cocotb.test()
async def test_timer_expiry_flags_oneshot_and_irq(dut):
    """Expiry sets INT_STATUS[0], auto-reloads, and one-shot clears EN."""
    env = await bring_up(dut)
    m = env.model

    await wr(env, "TIMER", t("LOAD"), 3, strb=0xF)
    await wr(env, "TIMER", t("CTRL"), 0x3, strb=0x1)            # EN | IRQ_EN

    # The model knows the exact edge of the expiry; wait for it and compare the
    # irq line cycle by cycle over the whole interval.
    steps = m.timer.steps_until_expiry()
    assert steps is not None, "timer will not expire"
    base = len(env.trace)
    await env.idle(steps)
    env.compare_pin_trace(base, where="timer expiry")
    assert env.irq("TIMER") == 1, "irq must be high in the expiry cycle"
    assert m.timer.expired == 1

    # The flag is sticky: reads do not clear it.
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 1
    assert env.irq("TIMER") == 1, "reading INT_STATUS must not clear the flag"

    # Auto-reload: the countdown must wrap back through LOAD instead of sticking
    # at 0.  Two consecutive pinned reads are exactly 2 cycles apart, and the
    # period is LOAD+1 = 4, so every read samples the countdown 2 ticks further
    # on - including across the reload edge, where the value jumps back to 3.
    # (v - 2) mod 4 == w therefore holds for every phase exactly when the wrap
    # happens; a counter stuck at 0 (or one that never reloads) breaks it.
    r1 = await rd(env, "TIMER", t("VALUE"))
    r2 = await rd(env, "TIMER", t("VALUE"))
    assert r2["accept"] - r1["accept"] == 2, \
        f"consecutive read stride is not 2 cycles: {r1['accept']} -> {r2['accept']}"
    assert (r1["data"] - 2) % 4 == r2["data"], \
        f"auto-reload did not happen (VALUE {r1['data']} -> {r2['data']}, " \
        f"period 4)"

    # A W1C write clears it and the irq line drops.  The timer is stopped first
    # so the assertion cannot race the next expiry (the clear-versus-expiry race
    # is the subject of test_timer_prescaler_and_w1c_race).
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)            # stop
    await wr(env, "TIMER", t("ISTAT"), 0x1, strb=0x1)           # W1C clear
    assert env.irq("TIMER") == 0, "irq must drop after the W1C clear"

    # One-shot: EN clears at expiry, VALUE stays 0, the flag stays until cleared.
    await wr(env, "TIMER", t("ISTAT"), 0x1, strb=0x1)           # clear
    await wr(env, "TIMER", t("LOAD"), 2, strb=0xF)
    await wr(env, "TIMER", t("CTRL"), 0x7, strb=0x1)            # EN | IRQ_EN | ONE_SHOT
    steps = m.timer.steps_until_expiry()
    assert steps is not None, "one-shot timer will not expire"
    base = len(env.trace)
    await env.idle(steps + 4)
    env.compare_pin_trace(base, where="one-shot expiry")
    assert env.irq("TIMER") == 1, "one-shot expiry must raise irq"
    assert (await rd(env, "TIMER", t("CTRL")))["data"] & 0x1 == 0, "one-shot did not clear EN"
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 0, "one-shot VALUE must stay 0"
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 1, "one-shot expiry flag missing"
    # ... and with EN cleared the flag is now the only thing holding irq high:
    # clearing it must drop the line permanently.
    await wr(env, "TIMER", t("ISTAT"), 0x1, strb=0x1)
    await env.idle(6)
    assert env.irq("TIMER") == 0, "one-shot timer must not expire again"
    assert (await rd(env, "TIMER", t("VALUE")))["data"] == 0
    env.compare_pin_trace(base, where="one-shot settle")
    dut._log.info("expiry, sticky flag, auto-reload, one-shot and irq line OK")


@cocotb.test()
async def test_timer_prescaler_and_w1c_race(dut):
    """Prescaler tick rate, and W1C/expiry races on the same clock edge."""
    env = await bring_up(dut)
    m = env.model

    # PRESCALE=2, PRESCALE_EN=1 -> one tick every 3 clocks.  With LOAD=1 the
    # period is 2 ticks = 6 clocks, and the post-edge VALUE sequence is
    # 0,0,0,1,1,1,...  Reads arrive every 2 cycles, i.e. at phases 0,2,4 of that
    # 6-cycle pattern, so the observed sequence must repeat with period 3 and
    # contain exactly one 1 - an arithmetic check of the tick rate.
    await wr(env, "TIMER", t("PRESCALE"), 2, strb=0x3)
    assert (await rd(env, "TIMER", t("PRESCALE")))["data"] == 2
    await wr(env, "TIMER", t("LOAD"), 1, strb=0xF)
    await wr(env, "TIMER", t("CTRL"), 0x9, strb=0x1)            # EN | PRESCALE_EN
    values = [(await rd(env, "TIMER", t("VALUE")))["data"] for _ in range(9)]
    assert all(values[k] == values[k + 3] for k in range(6)), \
        f"prescaled tick rate is not 3 clocks: {values}"
    assert sum(values[:3]) == 1, f"one tick per 3 reads expected: {values}"
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)

    # W1C-versus-expiry race: arm the timer, find the expiry edge from the model,
    # and issue the W1C write so that its wr_apply edge IS that edge.
    async def arm_and_wait() -> None:
        await wr(env, "TIMER", t("PRESCALE"), 0, strb=0x3)
        await wr(env, "TIMER", t("LOAD"), 4, strb=0xF)
        await wr(env, "TIMER", t("ISTAT"), 0x1, strb=0x1)       # clean slate
        await wr(env, "TIMER", t("CTRL"), 0x5, strb=0x1)        # EN, auto-reload
        # A pinned write applies on the second edge after its entry, so start it
        # two steps before the expiry.
        while True:
            steps = m.timer.steps_until_expiry()
            assert steps is not None, "timer will not expire"
            if steps == 2:
                break
            await env.idle(1)

    # 1. Clearing the flag on the expiry edge: the clear wins (bit written as 1).
    await arm_and_wait()
    result = await env.pinned["TIMER"].write(t("ISTAT"), 0x1, strb=0x1, model=m)
    assert result["resp"] == RESP_OKAY
    assert result["apply"] == result["accept"] + 1
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 0, \
        "W1C clear did not win over the same-edge expiry set"
    await env.check_irqs("W1C-vs-expiry race")

    # 2. Writing 0 on the expiry edge: the event must NOT be lost.
    await arm_and_wait()
    await env.pinned["TIMER"].write(t("ISTAT"), 0x0, strb=0x1, model=m)
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 1, \
        "W1C write of 0 lost the same-edge expiry event"
    await env.check_irqs("expiry-with-write-of-0 race")

    # 3. Zero-strobe write on the expiry edge: also no suppression.
    await arm_and_wait()
    await env.pinned["TIMER"].write(t("ISTAT"), 0xFF, strb=0x0, model=m)
    assert (await rd(env, "TIMER", t("ISTAT")))["data"] == 1, \
        "zero-strobe write lost the same-edge expiry event"
    await wr(env, "TIMER", t("CTRL"), 0x0, strb=0x1)
    env.compare_pin_trace(0, where="prescaler and W1C races")
    dut._log.info("prescaler tick rate and all three W1C/expiry race outcomes OK")


# ---------------------------------------------------------------------------
# GPIO
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_gpio_sync_latency_and_edges(dut):
    """IN is two flops deep; the change flag follows one edge later."""
    env = await bring_up(dut)
    m = env.model

    await wr(env, "GPIO", g("IEN"), 0x01, strb=0x1)             # enable pin 0
    assert env.irq("GPIO") == 0

    # Rising edge on pin 0.  The pin is driven at a drive point, so it reaches
    # the first synchroniser stage on the next edge and IN (second stage) one
    # edge later; the flag compares the second stage with its delayed copy, so
    # it is set on the edge after IN changes: [0, 0, 1, 1].
    env.set_gpio_in(0x01)
    base = len(env.trace)
    await env.idle(4)
    env.compare_pin_trace(base, where="rising edge on IN/irq")
    assert irq_bits(env, 1, base) == [0, 0, 1, 1], \
        f"GPIO irq pattern {irq_bits(env, 1, base)}, want [0, 0, 1, 1]"
    assert (await rd(env, "GPIO", g("IN")))["data"] == 0x01
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0x01
    await wr(env, "GPIO", g("ISTAT"), 0x01, strb=0x1)           # W1C
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0
    assert env.irq("GPIO") == 0

    # Rising-only mode: the falling edge must not set the flag.
    await wr(env, "GPIO", g("ITYPE"), 0x01, strb=0x1)
    env.set_gpio_in(0x00)
    base = len(env.trace)
    await env.idle(4)
    env.compare_pin_trace(base, where="rising-only, falling edge")
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0, "falling edge set rising-only flag"
    assert (await rd(env, "GPIO", g("IN")))["data"] == 0x00, "IN must follow the pin low"
    env.set_gpio_in(0x01)
    base = len(env.trace)
    await env.idle(4)
    env.compare_pin_trace(base, where="rising-only, rising edge")
    assert irq_bits(env, 1, base) == [0, 0, 1, 1], "rising edge missed"
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0x01
    await wr(env, "GPIO", g("ISTAT"), 0x01, strb=0x1)

    # DIR/OUT drive the pins combinationally from the register; a DIR/OUT write
    # must not create an IN change or a flag.
    await wr(env, "GPIO", g("DIR"), 0xAA, strb=0x1)
    await wr(env, "GPIO", g("OUT"), 0x55, strb=0x1)
    await env.idle(1)
    assert env.gpio_dir == 0xAA and env.gpio_out == 0x55, \
        f"gpio_dir={env.gpio_dir:#x} gpio_out={env.gpio_out:#x}"
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0, "DIR/OUT write changed IN"
    # The trace has been compared against the model's dir/out values every cycle.

    # IEN=0 masks the flag from the irq line but does not clear it.
    await wr(env, "GPIO", g("IEN"), 0x00, strb=0x1)
    assert env.irq("GPIO") == 0
    env.set_gpio_in(0x00)
    await env.idle(4)
    env.set_gpio_in(0x01)
    await env.idle(4)
    assert (await rd(env, "GPIO", g("ISTAT")))["data"] == 0, "masked pin must not set the flag"
    env.compare_pin_trace(0, where="gpio sync latency test")
    dut._log.info("2-flop sync latency, flag edge, edge modes, DIR/OUT and IEN masking OK")


# ---------------------------------------------------------------------------
# UART
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_uart_tx_frame_and_bit_timing(dut):
    """A transmitted frame decodes to the written byte with an exact bit period."""
    env = await bring_up(dut)
    m = env.model

    baud = 6
    await wr(env, "UART", u("BAUD"), baud, strb=0x3)
    await wr(env, "UART", u("CTRL"), 1 << D["AXIL_UART_CTRL_TX_EN"], strb=0x1)   # TX_EN

    base = len(env.trace)
    await env.idle(1)                       # one idle sample, so the decoder can
                                            # see the line high before the frame
    await wr(env, "UART", u("TXDATA"), 0x5A, strb=0x1)
    status = await rd(env, "UART", u("STATUS"))
    assert status["data"] & (1 << D["AXIL_UART_ST_TX_BUSY"]), \
        "TX_BUSY must be set while the frame is being sent"
    await env.idle(10 * baud + 4)
    env.compare_pin_trace(base, where="TX frame")
    samples = [entry["obs"]["uart_tx"] for entry in env.trace[base:]]
    assert decode_frame(samples, baud) == 0x5A, "transmitted byte does not decode"

    status = await rd(env, "UART", u("STATUS"))
    assert status["data"] == expect_status(env, "TX_READY"), \
        f"STATUS after frame = {status['data']:#x}"
    assert (await rd(env, "UART", u("ISTAT")))["data"] & (1 << D["AXIL_UART_IS_TX_DONE"]), \
        "TX_DONE flag not set"

    # Writing TXDATA while busy is accepted and the byte is dropped.
    base = len(env.trace)
    await wr(env, "UART", u("TXDATA"), 0x11, strb=0x1)          # starts a frame
    await env.idle(1)
    dropped = await wr(env, "UART", u("TXDATA"), 0x22, strb=0x1)
    assert dropped["resp"] == RESP_OKAY, "busy TXDATA write must be accepted"
    await env.idle(10 * baud + 4)
    env.compare_pin_trace(base, where="dropped byte")
    samples = [entry["obs"]["uart_tx"] for entry in env.trace[base:]]
    assert decode_frame(samples, baud) == 0x11, "dropped byte must not be transmitted"

    # TX_EN=0: accepted but no frame.
    await wr(env, "UART", u("CTRL"), 0x0, strb=0x1)
    base = len(env.trace)
    await wr(env, "UART", u("TXDATA"), 0x33, strb=0x1)
    await env.idle(10 * baud)
    env.compare_pin_trace(base, where="TX_EN=0")
    idle_line = [entry["obs"]["uart_tx"] for entry in env.trace[base:]]
    assert set(idle_line) == {1}, "frame sent with TX_EN=0"
    dut._log.info("TX frame content, bit timing, busy-drop and TX_EN gating OK")


@cocotb.test()
async def test_uart_loopback_roundtrip(dut):
    """In loopback, a transmitted byte is received back into RXDATA."""
    env = await bring_up(dut)
    m = env.model

    baud = 4
    await wr(env, "UART", u("BAUD"), baud, strb=0x3)
    # TX_EN | RX_EN | LOOPBACK | RXAVL_EN: the RX_AVAIL flag drives the irq line.
    ctrl = (1 << D["AXIL_UART_CTRL_TX_EN"] | 1 << D["AXIL_UART_CTRL_RX_EN"]
            | 1 << D["AXIL_UART_CTRL_LOOPBACK"] | 1 << D["AXIL_UART_CTRL_RXAVL_EN"])
    await wr(env, "UART", u("CTRL"), ctrl, strb=0x1)
    await wr(env, "UART", u("IEN"), 1 << D["AXIL_UART_IS_RX_AVAIL"], strb=0x1)

    for byte in (0x00, 0xA5, 0xFF, 0x3C):
        await wr(env, "UART", u("TXDATA"), byte, strb=0x1)
        # The model knows the exact edge at which the byte becomes available (a
        # whole TX frame plus the RX sampler's start-bit verification later).
        steps = m.uart.steps_until_rx_valid()
        assert steps is not None, f"byte {byte:#04x} never came back"
        base = len(env.trace)
        await env.idle(steps)
        env.compare_pin_trace(base, where=f"loopback byte {byte:#04x}")
        rises = [i for i, v in enumerate(irq_bits(env, 0, base)) if v]
        assert rises == [steps - 1], \
            f"RX_AVAIL irq rose at {rises}, expected the last of {steps} cycles"
        status = await rd(env, "UART", u("STATUS"))
        assert status["data"] & (1 << D["AXIL_UART_ST_RX_VALID"]), \
            f"RX_VALID missing for byte {byte:#x}"
        data = await rd(env, "UART", u("RXDATA"))
        assert data["data"] == byte, f"received {data['data']:#x}, want {byte:#x}"
        # Reading RXDATA clears RX_VALID and INT_STATUS[RX_AVAIL].
        assert (await rd(env, "UART", u("STATUS")))["data"] == expect_status(env, "TX_READY")
        istat = await rd(env, "UART", u("ISTAT"))
        assert istat["data"] & (1 << D["AXIL_UART_IS_RX_AVAIL"]) == 0, \
            "reading RXDATA must clear INT_STATUS[RX_AVAIL]"
        assert env.irq("UART") == 0
    env.compare_pin_trace(0, where="loopback roundtrip")
    dut._log.info("loopback round-trip for 4 bytes, incl. RXDATA read side effects")


@cocotb.test()
async def test_uart_rx_frame_error_overrun_and_gating(dut):
    """RX framing error, overrun, and the RX_EN gate, with cycle-exact flags."""
    env = await bring_up(dut)
    m = env.model

    baud = 4
    await wr(env, "UART", u("BAUD"), baud, strb=0x3)
    # RX_EN plus the per-source enables so the two flags drive the irq line, and
    # the matching INT_ENABLE bits.
    ctrl = (1 << D["AXIL_UART_CTRL_RX_EN"] | 1 << D["AXIL_UART_CTRL_RXOVR_EN"]
            | 1 << D["AXIL_UART_CTRL_RXFRM_EN"])
    await wr(env, "UART", u("CTRL"), ctrl, strb=0x1)
    await wr(env, "UART", u("IEN"),
             (1 << D["AXIL_UART_IS_RX_OVERRUN"]) | (1 << D["AXIL_UART_IS_RX_FRAME_ERR"]),
             strb=0x1)

    async def drive_frame(bits: List[int]) -> None:
        """Drive one frame (10 bits, LSB first, 4 cycles/bit), then go idle.

        The trailing idle is part of the waveform: a UART line that stays low
        after a broken stop bit is a break condition, and a receiver must treat
        each low period as a start bit.  Holding the line low would therefore
        make the *next* frame start mid-break, which is a receiver-driven
        consequence, not a protocol violation - the test drives realistic idle
        gaps instead (two bit periods, plenty for the RX recovery state).
        """
        for bit in bits:
            for _ in range(baud):
                env.set_uart_rx(bit)
                await env.idle(1)
        for _ in range(2 * baud):
            env.set_uart_rx(1)
            await env.idle(1)

    def frame(bits: List[int]) -> List[int]:
        return [b for b in bits for _ in range(baud)]

    # A valid byte with a broken stop bit: frame error, no byte stored.
    bad = [0] + [1 if (0xB2 >> k) & 1 else 0 for k in range(8)] + [0]
    base = len(env.trace)
    await drive_frame(bad)
    env.compare_pin_trace(base, where="frame error frame")
    # The flag can only rise after the whole frame has been driven, and the
    # model pins the exact edge.
    rise = first_index(irq_bits(env, 0, base), lambda v: v == 1)
    assert rise is not None and rise >= len(frame(bad)) - baud, \
        f"frame-error irq rose at cycle {rise} of {len(irq_bits(env, 0, base))}"
    istat = await rd(env, "UART", u("ISTAT"))
    assert istat["data"] & (1 << D["AXIL_UART_IS_RX_FRAME_ERR"]), "frame error not flagged"
    status = await rd(env, "UART", u("STATUS"))
    assert status["data"] == expect_status(env, "TX_READY", "RX_FRAME_ERR"), \
        f"STATUS after frame error = {status['data']:#x}"
    assert (await rd(env, "UART", u("RXDATA")))["data"] == 0, "bad frame must not store data"
    await wr(env, "UART", u("ISTAT"), 0xF, strb=0x1)            # clear all flags
    assert env.irq("UART") == 0

    # Overrun: two good frames back to back without reading RXDATA in between.
    good_a = [0] + [1 if (0x5A >> k) & 1 else 0 for k in range(8)] + [1]
    good_b = [0] + [1 if (0xC3 >> k) & 1 else 0 for k in range(8)] + [1]
    base = len(env.trace)
    await drive_frame(good_a)
    first_frame_cycles = len(frame(good_a))
    await drive_frame(good_b)
    env.compare_pin_trace(base, where="overrun frames")
    # The first frame's byte must NOT raise the (enabled) overrun irq; the
    # second one must, so the rise cannot happen during the first frame.
    rise = first_index(irq_bits(env, 0, base), lambda v: v == 1)
    assert rise is not None and rise >= first_frame_cycles, \
        f"overrun irq rose at cycle {rise} (first frame ends at {first_frame_cycles})"
    istat = await rd(env, "UART", u("ISTAT"))
    assert istat["data"] & (1 << D["AXIL_UART_IS_RX_OVERRUN"]), "overrun not flagged"
    assert (await rd(env, "UART", u("RXDATA")))["data"] == 0x5A, \
        "overrun must keep the first byte"
    await wr(env, "UART", u("ISTAT"), 0xF, strb=0x1)

    # RX_EN=0: the line is ignored entirely.
    await wr(env, "UART", u("CTRL"), 0x0, strb=0x1)
    base = len(env.trace)
    await drive_frame(good_a)
    await env.idle(2)
    env.compare_pin_trace(base, where="RX_EN=0")
    assert (await rd(env, "UART", u("ISTAT")))["data"] == 0, "RX active while RX_EN=0"
    assert (await rd(env, "UART", u("STATUS")))["data"] == expect_status(env, "TX_READY")
    assert env.irq("UART") == 0
    dut._log.info("frame error, overrun and RX_EN gating OK")


# ---------------------------------------------------------------------------
# Checker self-test
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_checker_self_test(dut):
    """The model comparison must actually fail when the expectation is wrong.

    A comparison that cannot fail is worse than no comparison: this test breaks
    the expectation in two ways and requires `PinError` for both, so a
    regression in the checking code shows up here.
    """
    env = await bring_up(dut)
    m = env.model

    await wr(env, "TIMER", t("LOAD"), 0x1234_5678, strb=0xF)

    # 1. Corrupt the model's state; the next checked read must raise.
    saved = m.timer.load
    m.timer.load = 0xDEAD_BEEF
    raised = False
    try:
        await rd(env, "TIMER", t("LOAD"))
    except PinError as exc:
        raised = True
        assert "0xdeadbeef" in str(exc), f"unexpected PinError: {exc}"
    m.timer.load = saved
    assert raised, "corrupted model state was not detected by the read check"
    # With the model repaired, the same read passes and re-syncs the result.
    good = await rd(env, "TIMER", t("LOAD"))
    assert good["data"] == good["exp_data"] == 0x1234_5678

    # 2. A write whose predicted response is wrong must raise as well.
    class LyingModel:
        """Predicts OKAY for a write that the DUT must reject with SLVERR."""

        @staticmethod
        def write_resp(addr):
            return RESP_OKAY

        @staticmethod
        def write_apply(addr, data, strb):
            return None

    raised = False
    try:
        await env.pinned["TIMER"].write(t("ID"), 0x0, strb=0xF, model=LyingModel())
    except PinError as exc:
        raised = True
        assert "SLVERR" in str(exc), str(exc)
    assert raised, "wrong write response prediction was not detected"
    # The DUT state is untouched by the rejected write.
    assert (await rd(env, "TIMER", t("ID")))["data"] == TIMER.id_value
    dut._log.info("checker self-test: corrupted expectations are detected")

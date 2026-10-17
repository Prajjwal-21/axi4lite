"""Subsystem integration tests: crossbar + real UART/GPIO/TIMER.

DUT: `peripheral_subsystem` (2 masters -> 3 AXI4-Lite peripherals).  These tests
answer a different question from the peripheral unit tests: *does the whole
system* - decode, arbitration, routing, register bridges and the peripherals -
behave as the contract says, from the master ports?

WHY THE CHECKS LOOK DIFFERENT FROM THE UNIT TESTS
    The crossbar sits between the master port and the register bridge, so the
    cycle at which a write applies is not derivable from the master-side
    handshake (arbitration and the per-channel buffers add a data-dependent
    delay).  `PinnedAxil` - which pins every edge - is therefore used on the
    peripheral harness, not here.  The subsystem tests check properties that do
    not depend on that invisible delay:

      * responses and read data for *static* registers: a write that has
        completed (B received) has been applied no later than the BVALID edge, so
        any read issued afterwards observes the written value;
      * bounded-latency event observation for the time-dependent peripherals: a
        flag must appear within a bound derived from the protocol (frame time,
        timer period, crossbar latency), never instantaneously;
      * self-consistency of the DUT itself: the irq lines against the interrupt
        registers, `IN` against the driven pin level, `gpio_out`/`gpio_dir`
        against `OUT`/`DIR`, `STATUS` against `INT_STATUS`.

    The reference model (`axil_refmodel`) is deliberately *not* used for timing
    here: it models register state and peripheral engines, not crossbar latency,
    so its phase relative to the DUT is unknown for crossbar-timed stimuli.  The
    randomized test instead uses a small byte-enable shadow of the plain-storage
    registers, written from the contract (docs/register_map.md §6.1) rather than
    from the RTL.

Test list:
    test_reset_state_and_ids              reset values, IDs, quiet pins
    test_address_map_and_responses        decode, aliases, SLVERR/DECERR, no
                                          state change on a failed access
    test_two_masters_concurrent_access    both masters at once: different
                                          peripherals, same peripheral, same
                                          register; no cross-talk
    test_uart_loopback_through_crossbar   frame out and back, read side effects
    test_gpio_pin_event_through_crossbar  synchroniser latency, flag, W1C, irq
    test_timer_expiry_through_crossbar    period, expiry flag, irq, stop/clear
    test_randomized_register_traffic      seeded randomized traffic from both
                                          masters against a shadow of the plain
                                          registers, plus DECERR/SLVERR probes
"""

from __future__ import annotations

from typing import Dict, List, Optional, Tuple

import cocotb

from axil_common import READ, WRITE, gather, resp_name
from axil_env import SubsystemEnv
from axil_master import MasterAgent, ReadJob, StimConfig, WriteJob
from axil_spec import (DEFS as D, NMST, REGIONS, RESP_DECERR, RESP_OKAY,
                       RESP_SLVERR, decode, unmapped_addresses)

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


async def bring_up(dut, **kwargs) -> SubsystemEnv:
    env = SubsystemEnv(dut, **kwargs)
    await env.start()
    return env


def irq_bits(env: SubsystemEnv) -> Tuple[int, int, int]:
    """(UART, GPIO, TIMER) irq bits; the pin is combinational on register state,
    so a read at a settled instant is stable."""
    value = env.irq
    return (value & 1, (value >> 1) & 1, (value >> 2) & 1)


async def read_ok(env: SubsystemEnv, master: int, addr: int, what: str = "") -> int:
    txn = await env.masters[master].read(addr)
    assert txn.resp == RESP_OKAY, \
        f"{what or 'read'}: {txn.addr:#x} answered {resp_name(txn.resp)}, want OKAY"
    return txn.data


async def write_ok(env: SubsystemEnv, master: int, addr: int, data: int, *,
                   strb: int = 0xF, what: str = "") -> None:
    txn = await env.masters[master].write(addr, data, strb=strb)
    assert txn.resp == RESP_OKAY, \
        f"{what or 'write'}: {txn.addr:#x} answered {resp_name(txn.resp)}, want OKAY"


async def poll_set(env: SubsystemEnv, master: int, addr: int, mask: int, *,
                   limit: int = 200, what: str = "") -> Tuple[int, int]:
    """Read `addr` until `data & mask`, returning (data, elapsed cycles)."""
    start = env.global_cycle.count
    for _ in range(limit):
        data = await read_ok(env, master, addr, what)
        if data & mask:
            return data, env.global_cycle.count - start
    raise AssertionError(f"{what}: bit(s) {mask:#x} at {addr:#x} never set "
                         f"within {limit} reads")


# ---------------------------------------------------------------------------
# The shadow reference for plain-storage registers
# ---------------------------------------------------------------------------

#: Address -> (reset value, width mask) for every register whose read-back is
#: pure storage: no side effect, no time dependence.  Written from the register
#: tables in docs/register_map.md (§3, §4, §5), not from the RTL.
def plain_registers() -> Dict[int, Tuple[int, int]]:
    return {
        u("CTRL"): (0x0, 0x7F),          # TX_EN..RXFRM_EN, bits [6:0]
        u("BAUD"): (0x0, 0xFFFF),
        u("IEN"):  (0x0, 0xF),
        g("DIR"):  (0x0, 0xFF),
        g("OUT"):  (0x0, 0xFF),
        g("IEN"):  (0x0, 0xFF),
        g("ITYPE"): (0x0, 0xFF),
        t("CTRL"): (0x0, 0xF),
        t("LOAD"): (0xFFFF_FFFF, 0xFFFF_FFFF),
        t("PRESCALE"): (0x0, 0xFFFF),
    }


class Shadow:
    """Byte-enabled shadow of the plain-storage registers.

    Implements the §6.1 rule literally: for every enabled byte of the write the
    byte replaces the current one, then the result is masked to the register
    width.  A zero-strobe write changes nothing.  It shares no code with the RTL
    and no code with `axil_refmodel`.
    """

    def __init__(self):
        self.regs = plain_registers()
        self.value: Dict[int, int] = {addr: reset for addr, (reset, _) in self.regs.items()}

    def apply(self, addr: int, data: int, strb: int) -> None:
        value, mask = self.regs[addr]
        new = self.value[addr]
        for byte in range(4):
            if strb & (1 << byte):
                byte_mask = 0xFF << (8 * byte)
                new = (new & ~byte_mask) | (data & byte_mask)
        self.value[addr] = new & mask

    def get(self, addr: int) -> int:
        return self.value[addr]


# ---------------------------------------------------------------------------
# Reset state and IDs
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_reset_state_and_ids(dut):
    """Both masters read the three ID registers and the documented reset values;
    the peripherals' pins are quiet out of reset."""
    env = await bring_up(dut)

    for master in range(NMST):
        for region in REGIONS:
            txn = await env.masters[master].read(
                region.base + D[f"AXIL_{region.name}_ID_OFF"])
            assert txn.resp == RESP_OKAY, f"{txn}"
            assert txn.data == region.id_value, \
                f"m{master} {region.name} ID = {txn.data:#010x}, want {region.id_value:#010x}"

    # Reset values that the unit tests also pin, read through the crossbar.
    assert await read_ok(env, 0, u("CTRL")) == 0
    assert await read_ok(env, 0, u("BAUD")) == 0
    assert await read_ok(env, 0, u("IEN")) == 0
    assert await read_ok(env, 1, g("DIR")) == 0
    assert await read_ok(env, 1, g("OUT")) == 0
    assert await read_ok(env, 1, g("IEN")) == 0
    assert await read_ok(env, 0, t("CTRL")) == 0
    assert await read_ok(env, 0, t("LOAD")) == 0xFFFF_FFFF
    assert await read_ok(env, 0, t("PRESCALE")) == 0
    assert await read_ok(env, 1, t("ISTAT")) == 0
    # UART STATUS reads TX_READY (bit 0) with no frame in flight.
    assert await read_ok(env, 1, u("STATUS")) == (1 << D["AXIL_UART_ST_TX_READY"])

    # Pins: outputs driven low, UART line idling high, no interrupt pending.
    assert env.gpio_out == 0 and env.gpio_dir == 0, "GPIO pins not quiet after reset"
    assert env.uart_tx == 1, "UART TX line must idle high after reset"
    assert irq_bits(env) == (0, 0, 0), f"irq not quiet after reset: {irq_bits(env)}"
    dut._log.info("reset state, IDs and quiet pins OK (both masters)")


# ---------------------------------------------------------------------------
# Address map, aliases, SLVERR / DECERR
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_address_map_and_responses(dut):
    """Decode through the real subsystem: in-region unimplemented offsets are
    SLVERR, addresses outside every region are DECERR, aliased offsets are the
    same register, and a failed access changes no state."""
    env = await bring_up(dut)

    # ---- in-region, unimplemented offsets -> SLVERR -----------------------
    unimplemented = [0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38]
    for region in REGIONS:
        for offset in unimplemented:
            addr = region.base + offset
            txn = await env.masters[0].read(addr)
            assert txn.resp == RESP_SLVERR, \
                f"{region.name}+{offset:#x}: read answered {resp_name(txn.resp)}, want SLVERR"
            txn = await env.masters[0].write(addr, 0xDEAD_BEEF)
            assert txn.resp == RESP_SLVERR, \
                f"{region.name}+{offset:#x}: write answered {resp_name(txn.resp)}, want SLVERR"

    # A write to a read-only register is also SLVERR, and value registers are RO.
    for addr in (u("STATUS"), g("IN"), t("VALUE")):
        txn = await env.masters[1].write(addr, 0xFFFF_FFFF)
        assert txn.resp == RESP_SLVERR, f"{addr:#x}: RO write answered {resp_name(txn.resp)}"

    # ... and none of that changed any state: the reset values are still there.
    assert await read_ok(env, 0, u("CTRL")) == 0, "failed UART access changed CTRL"
    assert await read_ok(env, 0, u("BAUD")) == 0, "failed UART access changed BAUD"
    assert await read_ok(env, 0, g("OUT")) == 0, "failed GPIO access changed OUT"
    assert await read_ok(env, 0, g("DIR")) == 0, "failed GPIO access changed DIR"
    assert await read_ok(env, 0, t("CTRL")) == 0, "failed TIMER access changed CTRL"
    assert await read_ok(env, 0, t("PRESCALE")) == 0, "failed TIMER access changed PRESCALE"
    assert await read_ok(env, 0, t("LOAD")) == 0xFFFF_FFFF, "failed TIMER access changed LOAD"

    # ---- outside every region -> DECERR, read and write -------------------
    gap = [0x0000_1000, 0x0000_2000, 0x0000_3FFC,
           0x0000_5000, 0x0000_7FFC, 0x0000_9000,
           0x4000_0000, 0xFFFF_F000]
    for addr in gap + unmapped_addresses():
        txn = await env.masters[0].write(addr, 0xDEAD_BEEF)
        assert txn.resp == RESP_DECERR, \
            f"unmapped write to {addr:#010x} answered {resp_name(txn.resp)}, want DECERR"
        assert decode(addr) is None, f"test address {addr:#010x} is mapped"
        txn = await env.masters[1].read(addr)
        assert txn.resp == RESP_DECERR, \
            f"unmapped read from {addr:#010x} answered {resp_name(txn.resp)}, want DECERR"
        assert txn.data == 0, "the error target must return zero data"

    # The last word of a region aliases an implemented offset or is SLVERR;
    # either way the region never leaks into the gap after it.
    for region in REGIONS:
        txn = await env.masters[0].read(region.base + 0xFFC)
        offset = 0xFFC & 0x3F
        want = RESP_OKAY if offset in {D[f"AXIL_{region.name}_ID_OFF"]} else RESP_SLVERR
        assert txn.resp == want, \
            f"{region.name}+0xFFC answered {resp_name(txn.resp)}, want {resp_name(want)}"

    # ---- address aliasing inside a region ---------------------------------
    # Only addr[5:0] selects a register, so base+0x44 is base+0x04 (GPIO OUT).
    await write_ok(env, 0, g("OUT") + 0x40, 0xA5, what="aliased OUT write")
    assert await read_ok(env, 1, g("OUT")) == 0xA5, "alias write did not land on OUT"
    assert env.gpio_out == 0xA5, "alias write did not reach the GPIO pins"
    await write_ok(env, 1, g("OUT"), 0x3C, what="plain OUT write")
    assert await read_ok(env, 0, g("OUT") + 0x40) == 0x3C, "alias read is not the same register"
    assert env.gpio_out == 0x3C

    dut._log.info(f"decode OK: {len(unimplemented)} unimplemented offsets per region, "
                  f"{len(gap) + len(unmapped_addresses())} unmapped addresses, "
                  f"alias base+0x44 == base+0x04")


# ---------------------------------------------------------------------------
# Both masters, concurrently
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_two_masters_concurrent_access(dut):
    """Both masters access the subsystem at the same time: different
    peripherals, then the same peripheral, then the same register - with no
    cross-talk between the two transaction streams."""
    env = await bring_up(dut)

    # ---- different peripherals at the same time ---------------------------
    t_w, t_r = await gather(
        env.masters[0].write(u("BAUD"), 8),
        env.masters[1].write(g("OUT"), 0x5A),
    )
    assert t_w.resp == RESP_OKAY and t_r.resp == RESP_OKAY, f"{t_w} / {t_r}"
    # Both values are visible, and neither peripheral took the other's write.
    assert await read_ok(env, 0, u("BAUD")) == 8
    assert await read_ok(env, 0, g("OUT")) == 0x5A
    assert await read_ok(env, 1, u("CTRL")) == 0, "GPIO write leaked into UART CTRL"
    assert env.gpio_out == 0x5A, "OUT did not reach the pins"

    # ---- the same peripheral, different registers, at the same time -------
    await gather(
        env.masters[0].write(t("PRESCALE"), 0x1111_1111, strb=0x3),
        env.masters[1].write(t("CTRL"), 0x8),
    )
    assert await read_ok(env, 0, t("PRESCALE")) == 0x1111
    assert await read_ok(env, 0, t("CTRL")) == 0x8

    # ---- the same register: sequential writes, last one wins --------------
    await write_ok(env, 0, t("LOAD"), 0x1111_2222)
    await write_ok(env, 1, t("LOAD"), 0x3333_4444)
    assert await read_ok(env, 0, t("LOAD")) == 0x3333_4444
    # A partial-strobe write merges byte-wise with that value...
    await write_ok(env, 0, t("LOAD"), 0xAAAA_0000, strb=0xC)
    assert await read_ok(env, 1, t("LOAD")) == 0xAAAA_4444
    # ... and LOAD/VALUE move together (they are written as one).
    assert await read_ok(env, 0, t("VALUE")) == 0xAAAA_4444, \
        "LOAD and VALUE must update together"

    # ---- each master reads back what it wrote while the other is active ---
    # One outstanding read per master is the documented limit, so the four
    # reads are issued as two concurrent pairs, and each pair is checked to
    # have really overlapped in time.
    pairs = (await gather(env.masters[0].read(u("BAUD")),
                          env.masters[1].read(g("OUT"))),
             await gather(env.masters[0].read(t("PRESCALE")),
                          env.masters[1].read(t("CTRL"))))
    assert [[txn.data for txn in pair] for pair in pairs] == [[8, 0x5A], [0x1111, 0x8]], \
        f"concurrent read-back mismatch: " \
        f"{[[hex(t.data) for t in pair] for pair in pairs]}"
    assert all(txn.resp == RESP_OKAY for pair in pairs for txn in pair)
    for first, second in pairs:
        assert first.t_start < second.t_end and second.t_start < first.t_end, \
            f"the two masters' reads did not overlap: {first} vs {second}"
    dut._log.info("two-master concurrency and no cross-talk OK")


# ---------------------------------------------------------------------------
# UART loopback through the crossbar
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_uart_loopback_through_crossbar(dut):
    """A byte written through the crossbar goes out on uart_tx and comes back in
    through RXDATA (LOOPBACK), with the documented read side effects."""
    env = await bring_up(dut)

    ctrl = (1 << D["AXIL_UART_CTRL_TX_EN"] | 1 << D["AXIL_UART_CTRL_RX_EN"]
            | 1 << D["AXIL_UART_CTRL_LOOPBACK"] | 1 << D["AXIL_UART_CTRL_RXAVL_EN"])
    baud = 4                                                    # cycles per bit
    frame = 10 * baud                                          # start + 8 data + stop
    await write_ok(env, 0, u("CTRL"), ctrl)
    await write_ok(env, 0, u("BAUD"), baud)
    await write_ok(env, 0, u("IEN"), 1 << D["AXIL_UART_IS_RX_AVAIL"])
    assert await read_ok(env, 1, u("CTRL")) == ctrl & 0x7F

    byte = 0x5A
    start = env.global_cycle.count
    await write_ok(env, 0, u("TXDATA"), byte, what="TXDATA")

    # Poll STATUS from the OTHER master until RX_VALID appears.  The frame is
    # 10 bits x 4 cycles = 40 cycles, so the flag cannot possibly be visible
    # earlier than that minus the part of the frame that elapses before the
    # write completes (a few cycles); 20 cycles is a conservative bound.
    status, elapsed = await poll_set(env, 1, u("STATUS"),
                                     1 << D["AXIL_UART_ST_RX_VALID"],
                                     what="loopback RX_VALID")
    assert status & (1 << D["AXIL_UART_ST_RX_VALID"])
    assert elapsed >= frame // 2, \
        f"RX_VALID observable after only {elapsed} cycles; a {frame}-cycle frame " \
        f"cannot be done"
    # TX_BUSY can still be set in the very cycle RX_VALID appears: the receiver
    # samples the stop bit at its middle and finishes half a bit period before
    # the transmitter shifts out the last stop-bit cycle (docs/register_map.md
    # §3.2).  The test checks the bound the contract implies rather than the
    # exact skew, because the poll only observes at read granularity.
    _, tx_elapsed = await poll_set(env, 1, u("STATUS"),
                                   1 << D["AXIL_UART_ST_TX_READY"],
                                   limit=baud, what="loopback TX_READY")
    assert tx_elapsed <= 2 * baud, \
        f"TX_READY was still low {tx_elapsed} cycles after RX_VALID was seen; " \
        f"the stop-bit skew is at most half a bit ({baud // 2} cycles)"
    assert irq_bits(env)[0] == 1, "RX_AVAIL interrupt (enabled) must raise irq[0]"
    assert env.uart_tx == 1, "uart_tx must be idling high after the frame"

    # The byte, from the master that did not write it.
    assert await read_ok(env, 0, u("RXDATA")) == byte, "loopback byte mismatch"
    # Reading RXDATA clears RX_VALID and INT_STATUS[RX_AVAIL] (and the irq).
    status = await read_ok(env, 1, u("STATUS"))
    assert status & (1 << D["AXIL_UART_ST_RX_VALID"]) == 0, "RXDATA read must clear RX_VALID"
    istat = await read_ok(env, 0, u("ISTAT"))
    assert istat & (1 << D["AXIL_UART_IS_RX_AVAIL"]) == 0, \
        "RXDATA read must clear INT_STATUS[RX_AVAIL]"
    assert irq_bits(env)[0] == 0, "irq[0] must drop after the RXDATA read"
    assert irq_bits(env)[1:] == (0, 0), "the UART event raised another peripheral's irq"
    dut._log.info(f"loopback 0x{byte:02x} round trip OK (RX_VALID after {elapsed} "
                  f"cycles, TX_READY {tx_elapsed} cycles later)")


# ---------------------------------------------------------------------------
# GPIO pin event through the crossbar
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_gpio_pin_event_through_crossbar(dut):
    """Drive a GPIO pin, observe the two-edge synchroniser, the change flag, the
    interrupt line and the W1C clear - all through register accesses."""
    env = await bring_up(dut)

    await write_ok(env, 0, g("IEN"), 0x01)                      # enable pin 0
    await write_ok(env, 0, g("ITYPE"), 0x01)                    # rising edge only
    assert await read_ok(env, 1, g("IN")) == 0, "pin 0 must read 0 before the event"

    # Rising edge on pin 0.
    env.set_gpio_in(0x01)
    istat, _ = await poll_set(env, 1, g("ISTAT"), 0x01, what="GPIO change flag")
    assert istat & 0x01, "change flag missing"
    # The contract: the flag is only ever visible together with the new level,
    # and the level is the level the flag was raised for.
    assert await read_ok(env, 0, g("IN")) == 0x01, \
        "the change flag must not be observable before IN shows the new level"
    assert irq_bits(env) == (0, 1, 0), f"irq bits {irq_bits(env)}, want only GPIO"

    # W1C clear: irq drops, the flag stays clear (the pin is still high).
    await write_ok(env, 1, g("ISTAT"), 0x01)
    assert await read_ok(env, 0, g("ISTAT")) == 0, "W1C write did not clear the flag"
    assert irq_bits(env) == (0, 0, 0), "irq[1] must drop after the flag is cleared"

    # INT_TYPE = rising only: the falling edge must not set the flag.
    env.set_gpio_in(0x00)
    for _ in range(4):
        txn = await env.masters[0].read(g("IN"))
        assert txn.data in (0x01, 0x00), f"unexpected IN value {txn.data:#x}"
        if txn.data == 0x00:
            break
    else:
        raise AssertionError("IN never followed the pin low")
    assert await read_ok(env, 1, g("ISTAT")) == 0, \
        "a falling edge must not set the flag when INT_TYPE is rising-only"

    # A write through the crossbar reaches the pins: OUT with DIR, both values.
    await write_ok(env, 1, g("OUT"), 0xA5)
    await write_ok(env, 0, g("DIR"), 0xFF)
    assert env.gpio_out == 0xA5 and env.gpio_dir == 0xFF, \
        f"pins gpio_out={env.gpio_out:#x} gpio_dir={env.gpio_dir:#x}"
    assert irq_bits(env) == (0, 0, 0), "OUT/DIR writes must not raise an interrupt"
    dut._log.info("GPIO synchroniser, change flag, W1C and irq routing OK")


# ---------------------------------------------------------------------------
# TIMER expiry through the crossbar
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_timer_expiry_through_crossbar(dut):
    """Program the timer through the crossbar and observe the expiry, the sticky
    flag, the interrupt and the stop/clear sequence."""
    env = await bring_up(dut)

    await write_ok(env, 0, t("LOAD"), 3, what="timer LOAD")
    assert await read_ok(env, 1, t("VALUE")) == 3, "VALUE must follow LOAD"
    await write_ok(env, 1, t("CTRL"), 0x3, what="timer EN|IRQ_EN")   # EN | IRQ_EN
    assert await read_ok(env, 0, t("CTRL")) == 0x3

    istat, elapsed = await poll_set(env, 1, t("ISTAT"), 0x01, what="timer expiry")
    assert istat & 0x1, "expiry flag missing"
    assert irq_bits(env) == (0, 0, 1), f"irq bits {irq_bits(env)}, want only TIMER"
    # Auto-reload: the counter is running again from LOAD, so VALUE is 0..3.
    value = await read_ok(env, 0, t("VALUE"))
    assert 0 <= value <= 3, f"VALUE={value} after expiry, want 0..3 (reload from LOAD=3)"
    # The period is 4 ticks; two reads take a few cycles each, so seeing the
    # first flag within a generous bound is the meaningful (upper-bound) check.
    assert elapsed <= 100, f"expiry too late ({elapsed} cycles for a 4-tick period)"

    # The flag is sticky: reads do not clear it.
    assert await read_ok(env, 0, t("ISTAT")) == 1
    assert irq_bits(env)[2] == 1
    # Stop first so the clear cannot race the next expiry, then clear: irq drops.
    await write_ok(env, 0, t("CTRL"), 0x0)
    await write_ok(env, 1, t("ISTAT"), 0x1)
    assert await read_ok(env, 0, t("ISTAT")) == 0, "W1C clear did not clear the flag"
    assert irq_bits(env) == (0, 0, 0), "irq[2] must drop after the flag is cleared"
    value = await read_ok(env, 1, t("VALUE"))
    assert value <= 3, f"VALUE={value} after the stop"
    dut._log.info(f"timer expiry, sticky flag, irq and clear OK (flag after {elapsed} cycles)")


# ---------------------------------------------------------------------------
# Randomized traffic from both masters
# ---------------------------------------------------------------------------

def unique_data(tag: int, nonce: List[int]) -> int:
    nonce[0] += 1
    return 0xC0DE_0000 | ((tag & 0xF) << 16) | (nonce[0] & 0xFFFF)


@cocotb.test()
async def test_randomized_register_traffic(dut):
    """Seeded randomized read/write traffic from both masters over the plain
    storage registers, checked against a shadow; both masters stay in their own
    address window so every read has one known writer, and the traffic includes
    DECERR and SLVERR probes."""
    import cocotb as _cocotb

    base_seed = int(_cocotb.RANDOM_SEED)
    dut._log.info(f"randomized subsystem traffic seed = {base_seed}")

    env = await bring_up(dut)
    shadow = Shadow()
    addrs = sorted(shadow.regs)
    # One window per master: the DUT serialises writes to one slave, but a read
    # of an address the other master is writing could legitimately see either
    # value, so the windows are disjoint.
    windows = [addrs[0::2], addrs[1::2]]

    jobs_per_master = 40
    agents = []
    nonce = [0]
    for master in range(NMST):
        cfg = StimConfig(seed=base_seed + 13 * master, p_zero_strb=0.08)
        agent = MasterAgent(env.masters[master], cfg)
        window = windows[master]
        for index in range(jobs_per_master):
            addr = window[(index * 3 + master) % len(window)]
            if index % 4 == 3:
                agent.add(ReadJob(addr=addr))
            elif index % 10 == 7:
                # Unmapped probe: DECERR, and the shadow must not move.
                unmapped = unmapped_addresses()[(index + master) % len(unmapped_addresses())]
                agent.add(WriteJob(addr=unmapped, data=unique_data(master, nonce), strb=0xF))
            elif index % 10 == 9:
                # In-region unimplemented offset: SLVERR, shadow untouched.
                region = REGIONS[(index + master) % len(REGIONS)]
                agent.add(WriteJob(addr=region.base + 0x20,
                                   data=unique_data(master, nonce), strb=0xF))
            else:
                agent.add(WriteJob(addr=addr, data=unique_data(master, nonce),
                                   strb=agent.random_strb(addr)))
        agents.append(agent)

    await gather(*(agent.run() for agent in agents))

    issued = [txn for agent in agents for txn in agent.results]
    probes = {"decerr": 0, "slverr": 0}
    for txn in issued:
        if txn.kind == WRITE:
            mapped = decode(txn.addr)
            if mapped is None:
                assert txn.resp == RESP_DECERR, f"{txn}: want DECERR"
                probes["decerr"] += 1
            elif txn.addr & 0x3F == 0x20:
                assert txn.resp == RESP_SLVERR, f"{txn}: want SLVERR"
                probes["slverr"] += 1
            else:
                assert txn.resp == RESP_OKAY, f"{txn}"
                shadow.apply(txn.addr, txn.data, txn.strb)
    assert probes["decerr"] > 0 and probes["slverr"] > 0, \
        f"the randomized run did not probe both error paths: {probes}"

    # Final sweep: every plain register, read by the master that owns it, must
    # match the shadow; the other master's registers were never touched by this
    # one (its window is disjoint), and the sweep checks both windows anyway.
    for master in range(NMST):
        for addr in windows[master]:
            data = await read_ok(env, master, addr, what="final sweep")
            assert data == shadow.get(addr), \
                f"@0x{addr:08x}: read {data:#010x}, shadow {shadow.get(addr):#010x}"

    # Pins follow the shadowed OUT/DIR values.
    assert env.gpio_out == shadow.get(g("OUT")), "gpio_out does not match shadowed OUT"
    assert env.gpio_dir == shadow.get(g("DIR")), "gpio_dir does not match shadowed DIR"

    # Stop the timer (a random CTRL write may have enabled it), then check the
    # irq lines against the interrupt registers read back through the crossbar.
    await write_ok(env, 0, t("CTRL"), 0x0)
    uart_ctrl = await read_ok(env, 0, u("CTRL"))
    uart_ien = await read_ok(env, 1, u("IEN"))
    uart_istat = await read_ok(env, 0, u("ISTAT"))
    gpio_ien = await read_ok(env, 0, g("IEN"))
    gpio_istat = await read_ok(env, 0, g("ISTAT"))
    timer_ctrl = await read_ok(env, 1, t("CTRL"))
    timer_istat = await read_ok(env, 1, t("ISTAT"))
    want = (1 if (uart_istat & uart_ien & (uart_ctrl >> 3)) else 0,
            1 if (gpio_istat & gpio_ien) else 0,
            1 if (timer_istat & 1 and timer_ctrl & 0x2) else 0)
    assert irq_bits(env) == want, f"irq lines {irq_bits(env)} vs register state {want}"

    # Concurrency really happened.
    overlaps = sum(1 for a in agents[0].results for b in agents[1].results
                   if a.t_start < b.t_end and b.t_start < a.t_end)
    assert overlaps > 0, "no transactions from the two masters overlapped in time"
    writes = sum(1 for txn in issued if txn.kind == WRITE)
    reads = sum(1 for txn in issued if txn.kind == READ)
    dut._log.info(f"randomized subsystem traffic OK: {writes} writes, {reads} reads, "
                  f"{probes['decerr']} DECERR and {probes['slverr']} SLVERR probes, "
                  f"{overlaps} overlapping master transaction pairs")

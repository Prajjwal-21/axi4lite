"""Cycle-steppable reference model of the peripheral subsystem.

WHAT THIS MODELS
    Every register of UART / GPIO / TIMER (offsets, access directions, reset
    values, WSTRB byte enables), the address decode (mapped -> OKAY/SLVERR,
    unmapped -> DECERR), and the time-dependent state that a read can observe:
    the TIMER counter/prescaler/expiry flag, the GPIO two-flop synchroniser and
    edge-detected interrupt flags, and the UART TX/RX engines (bit timing, frame
    errors, overrun, TX busy/done).

WHAT THIS DELIBERATELY DOES NOT MODEL
    AXI channel timing.  The model has no notion of AW/W arrival order, READY
    stalls or response latency: those are the crossbar's job and are checked by
    the scoreboard/monitor tests.  Here one `step()` is exactly one clock edge of
    peripheral state evolution.

WHY IT IS AN INDEPENDENT MODEL AND NOT A TRANSLATION OF THE RTL
    It was written from `docs/register_map.md` (the contract) as a set of
    register descriptors plus three small event engines, with a different
    structure from the RTL: registers live in a dict keyed by offset and the
    WSTRB/priority rules are applied by generic helpers instead of per-register
    code.  The state it can be asked about (VALUE, IN, STATUS, flags) is the
    state the peripherals expose, so a defect in either implementation shows up
    as a mismatch without the two sharing an implementation error.

CYCLE ALIGNMENT CONTRACT (this is what makes the model testable)
    `step()` models the clock edge that ends the current cycle and produces the
    state that a settled sample after that edge observes.

    `write()` / `read()` are called at a *drive point* (falling edge) and model
    the effect of the transaction that is accepted at the next rising edge:
    `read()` returns the data visible at that edge (the pre-edge value, which is
    the current model state) and queues read side effects; `write()` returns the
    predicted response and queues the register update.  The queued effects are
    applied by the next `step()`, after that step's internal events, which
    reproduces the RTL's "last assignment in the always_ff wins" ordering
    (documented per peripheral below).

    Consequently a test that uses `axil_pinned` (one transaction, VALID asserted
    at a drive point, accepted at the very next edge) gets exact cycle-level
    agreement, and the model can be compared with the DUT at every sample.
"""

from __future__ import annotations

import copy
from typing import Callable, List, Optional, Tuple

import axil_spec
from axil_spec import (PERIPH_LOCAL_MASK, RESP_DECERR, RESP_OKAY, RESP_SLVERR,
                       SPEC_BY_INDEX, decode, periph_for)

# ---------------------------------------------------------------------------
# Generic helpers
# ---------------------------------------------------------------------------

STRB_BITS = 4


def strb_merge(cur: int, nxt: int, strb: int, width: int) -> int:
    """Byte-enable merge, mirroring the RTL's `strb_apply` helpers.

    Byte b of the result comes from `nxt` when `strb[b]` is set, otherwise from
    `cur`.  Bytes that lie entirely above `width` cannot change anything.
    """
    out = 0
    for b in range(STRB_BITS):
        mask = 0xFF << (8 * b)
        src = (nxt & mask) if (strb & (1 << b)) else (cur & mask)
        out |= src
    return out & ((1 << width) - 1)


# ---------------------------------------------------------------------------
# UART
# ---------------------------------------------------------------------------

UART_CTRL, UART_BAUD, UART_STATUS = "CTRL", "BAUD", "STATUS"
UART_TXDATA, UART_RXDATA, UART_ISTAT = "TXDATA", "RXDATA", "INT_STATUS"
UART_IEN, UART_ID = "INT_ENABLE", "ID"


class UartModel:
    """UART register block: 1 start bit, 8 data bits LSB-first, 1 stop bit.

    Effective bit period is `max(4, BAUD[15:0])` clocks (the hardware clamp).
    When LOOPBACK is set the receiver is fed from the transmitter, so a written
    byte comes back into RXDATA after the frame has been both sent and sampled.
    """

    D = axil_spec.DEFS

    def __init__(self):
        self.reset()

    # -- reset -------------------------------------------------------------
    def reset(self) -> None:
        self.ctrl = 0
        self.baud = 0
        self.ien = 0
        self.istat = 0
        self.rx_data = 0
        self.rx_valid = 0
        # TX engine
        self.tx_sr = 0x3FF
        self.tx_bit = 0
        self.tx_cnt = 0
        self.tx_busy = 0
        # RX engine
        self.rx_st = "IDLE"
        self.rx_sr = 0
        self.rx_bit = 0
        self.rx_cnt = 0
        # queued register access for the next step (see module docstring)
        self._pending_wr: Optional[Tuple[int, int, int]] = None
        self._pending_rd: Optional[int] = None

    # -- derived ------------------------------------------------------------
    @property
    def baud_div(self) -> int:
        return max(4, self.baud)

    @property
    def tx_line(self) -> int:
        return (self.tx_sr & 1) if self.tx_busy else 1

    @property
    def irq_mask(self) -> int:
        """INT_ENABLE & the per-source CTRL enables (CTRL[6:3], bits align)."""
        return self.ien & ((self.ctrl >> 3) & 0xF)

    @property
    def irq(self) -> int:
        return 1 if (self.istat & self.irq_mask) else 0

    # -- register access (predicted; effects queued for the next step) ------
    WRITABLE = ("CTRL", "BAUD", "TXDATA", "INT_STATUS", "INT_ENABLE")

    def write_resp(self, offset: int) -> int:
        """Predicted BRESP only: RO offsets are rejected, everything else OKAY."""
        return RESP_OKAY if offset in self._writable_offsets() else RESP_SLVERR

    def write_apply(self, offset: int, data: int, strb: int) -> None:
        """Queue the register effect for the next `step()` (no state change now)."""
        if offset in self._writable_offsets() and (strb & 0xF):
            self._pending_wr = (offset, data & axil_spec.DATA_MASK, strb & 0xF)

    def write(self, offset: int, data: int, strb: int) -> int:
        resp = self.write_resp(offset)
        self.write_apply(offset, data, strb)
        return resp

    @classmethod
    def _writable_offsets(cls):
        d = cls.D
        return (d["AXIL_UART_CTRL_OFF"], d["AXIL_UART_BAUD_OFF"],
                d["AXIL_UART_TXDATA_OFF"], d["AXIL_UART_ISTAT_OFF"],
                d["AXIL_UART_IEN_OFF"])

    def read(self, offset: int) -> Tuple[int, int]:
        d = self.D
        if offset == d["AXIL_UART_CTRL_OFF"]:
            return self.ctrl, RESP_OKAY
        if offset == d["AXIL_UART_BAUD_OFF"]:
            return self.baud, RESP_OKAY
        if offset == d["AXIL_UART_STATUS_OFF"]:
            status = ((1 if not self.tx_busy else 0) | (self.rx_valid << 1)
                      | (self.tx_busy << 2)
                      | (((self.istat >> self.D["AXIL_UART_IS_RX_OVERRUN"]) & 1) << 3)
                      | (((self.istat >> self.D["AXIL_UART_IS_RX_FRAME_ERR"]) & 1) << 4))
            return status, RESP_OKAY
        if offset == d["AXIL_UART_TXDATA_OFF"]:
            return 0, RESP_OKAY            # write-only: reads return 0, OKAY
        if offset == d["AXIL_UART_RXDATA_OFF"]:
            # Reading RXDATA clears RX_VALID and INT_STATUS[RX_AVAIL] at the
            # accept edge (queued, so it can beat a set in the same edge).
            self._pending_rd = offset
            return self.rx_data, RESP_OKAY
        if offset == d["AXIL_UART_ISTAT_OFF"]:
            return self.istat & 0xF, RESP_OKAY
        if offset == d["AXIL_UART_IEN_OFF"]:
            return self.ien & 0xF, RESP_OKAY
        if offset == d["AXIL_UART_ID_OFF"]:
            return self.D["AXIL_UART_ID"], RESP_OKAY
        return 0, RESP_SLVERR

    # -- one clock edge -----------------------------------------------------
    def step(self, uart_rx: int) -> None:
        # (1) RX sampler state machine, driven by the pre-edge state.
        rx_line = self.tx_line if (self.ctrl >> self.D["AXIL_UART_CTRL_LOOPBACK"]) & 1 \
            else (1 if uart_rx else 0)
        rx_done = self.rx_st == "STOP" and self.rx_cnt == self.baud_div - 1
        rx_stop_ok = rx_line == 1
        rx_st, rx_bit, rx_cnt, rx_sr = (self.rx_st, self.rx_bit, self.rx_cnt, self.rx_sr)
        if not ((self.ctrl >> self.D["AXIL_UART_CTRL_RX_EN"]) & 1):
            rx_st, rx_cnt = "IDLE", 0
        elif rx_st == "IDLE":
            if not rx_line:
                rx_st, rx_cnt = "START", 0
        elif rx_st == "START":
            if rx_cnt == (self.baud_div >> 1) - 1:
                rx_cnt = 0
                if not rx_line:
                    rx_st, rx_bit = "DATA", 0
                else:
                    rx_st = "IDLE"
            else:
                rx_cnt += 1
        elif rx_st == "DATA":
            if rx_cnt == self.baud_div - 1:
                rx_cnt = 0
                rx_sr = ((rx_line << 7) | (rx_sr >> 1)) & 0xFF
                if rx_bit == 7:
                    rx_st = "STOP"
                else:
                    rx_bit += 1
            else:
                rx_cnt += 1
        else:  # STOP: one bit period of recovery before the next start bit
            if rx_cnt == self.baud_div - 1:
                rx_cnt, rx_st = 0, "IDLE"
            else:
                rx_cnt += 1

        # (2) TX serialiser.  A write that arrives in the same edge as the last
        #     bit of a frame is dropped: `tx_start` requires tx_busy == 0 in the
        #     pre-edge state (documented in docs/register_map.md, §3.2).
        tx_done = self.tx_busy and self.tx_bit == 9 and self.tx_cnt == self.baud_div - 1
        tx_start = False
        if self._pending_wr is not None:
            off, data, _strb = self._pending_wr
            if off == self.D["AXIL_UART_TXDATA_OFF"]:
                tx_start = not self.tx_busy and bool(
                    (self.ctrl >> self.D["AXIL_UART_CTRL_TX_EN"]) & 1)
        tx_sr, tx_bit, tx_cnt, tx_busy = self.tx_sr, self.tx_bit, self.tx_cnt, self.tx_busy
        if tx_start:
            tx_sr, tx_bit, tx_cnt, tx_busy = ((1 << 9) | (data & 0xFF) << 1), 0, 0, 1
        elif tx_busy:
            if tx_cnt == self.baud_div - 1:
                tx_cnt = 0
                if tx_bit == 9:
                    tx_busy, tx_sr = 0, 0x3FF
                else:
                    tx_sr = ((1 << 9) | (tx_sr >> 1)) & 0x3FF
                    tx_bit += 1
            else:
                tx_cnt += 1

        # (3) Same-cycle combination of events and side effects, then the
        #     strobed register write -- the exact order of the RTL's always_ff.
        #     rx_done / tx_done set bits; an RXDATA read clears RX_VALID and
        #     RX_AVAIL; a strobed W1C write then clears the bits it writes as 1
        #     of that combined value (docs/register_map.md §6.2).
        evt = 0
        store = False
        if rx_done:
            if not rx_stop_ok:
                evt |= 1 << self.D["AXIL_UART_IS_RX_FRAME_ERR"]
            elif self.rx_valid:
                evt |= 1 << self.D["AXIL_UART_IS_RX_OVERRUN"]
            else:
                evt |= 1 << self.D["AXIL_UART_IS_RX_AVAIL"]
                store = True
        if tx_done:
            evt |= 1 << self.D["AXIL_UART_IS_TX_DONE"]
        rd_clr = self._pending_rd == self.D["AXIL_UART_RXDATA_OFF"]
        istat_set = (self.istat | evt) & (0xF & ~(1 << self.D["AXIL_UART_IS_RX_AVAIL"])
                                          if rd_clr else 0xF)
        rx_data = rx_sr if store else self.rx_data
        rx_valid = 0 if rd_clr else (1 if (self.rx_valid or store) else 0)

        ctrl, baud, ien, istat = self.ctrl, self.baud, self.ien, istat_set
        if self._pending_wr is not None:
            off, data, strb = self._pending_wr
            self._pending_wr = None
            if off == self.D["AXIL_UART_CTRL_OFF"]:
                ctrl = strb_merge(ctrl, data & 0x7F, strb, 32)
            elif off == self.D["AXIL_UART_BAUD_OFF"]:
                baud = strb_merge(baud, data & 0xFFFF, strb, 16)
            elif off == self.D["AXIL_UART_IEN_OFF"]:
                ien = strb_merge(ien, data & 0xF, strb, 32)
            elif off == self.D["AXIL_UART_ISTAT_OFF"]:
                istat = strb_merge(istat_set, istat_set & ~data, strb, 4)
            # TXDATA has no register; it only triggered the serialiser above.

        self.rx_st, self.rx_bit, self.rx_cnt, self.rx_sr = rx_st, rx_bit, rx_cnt, rx_sr
        self.tx_sr, self.tx_bit, self.tx_cnt, self.tx_busy = tx_sr, tx_bit, tx_cnt, tx_busy
        self.istat, self.rx_data, self.rx_valid = istat & 0xF, rx_data, rx_valid
        self.ctrl, self.baud, self.ien = ctrl, baud, ien
        self._pending_rd = None

    # -- observables --------------------------------------------------------
    def status_word(self) -> int:
        return ((1 if not self.tx_busy else 0) | (self.rx_valid << 1)
                | (self.tx_busy << 2)
                | (((self.istat >> self.D["AXIL_UART_IS_RX_OVERRUN"]) & 1) << 3)
                | (((self.istat >> self.D["AXIL_UART_IS_RX_FRAME_ERR"]) & 1) << 4))

    def steps_until_rx_valid(self, limit: int = 10_000) -> Optional[int]:
        """Steps until RX_VALID rises, or None.

        Assumes the external `uart_rx` input stays idle (loopback tests, or tests
        that are not driving a frame): the level is not observable from here.
        """
        sim = copy.deepcopy(self)
        sim._pending_wr = None
        sim._pending_rd = None
        for n in range(1, limit + 1):
            sim.step(1)
            if sim.rx_valid:
                return n
        return None

    def snapshot(self) -> dict:
        return {"ctrl": self.ctrl, "baud": self.baud, "ien": self.ien,
                "istat": self.istat, "rx_data": self.rx_data,
                "rx_valid": self.rx_valid, "tx_busy": self.tx_busy,
                "status": self.status_word(), "irq": self.irq}


# ---------------------------------------------------------------------------
# GPIO
# ---------------------------------------------------------------------------

GPIO_DIR, GPIO_OUT, GPIO_IN = "DIR", "OUT", "IN"
GPIO_IEN, GPIO_ISTAT, GPIO_ITYPE, GPIO_ID = "INT_ENABLE", "INT_STATUS", "INT_TYPE", "ID"


class GpioModel:
    """GPIO block: two-flop synchroniser, edge detect, per-pin interrupt flags.

    A pin level driven by the testbench at a drive point is visible in the `IN`
    register two clock edges later, and `INT_STATUS` is set one edge after that
    (the detector compares the second synchroniser stage with its own delayed
    copy), so a flag is always read together with the level it was raised for
    (docs/register_map.md, §4.1).
    """

    D = axil_spec.DEFS

    def __init__(self, width: int = 8):
        self.width = width
        self.reset()

    def reset(self) -> None:
        self.dir = 0
        self.out = 0
        self.ien = 0
        self.itype = 0
        self.istat = 0
        self.s1 = 0
        self.s2 = 0
        self.d = 0
        self._pending_wr: Optional[Tuple[int, int, int]] = None

    @property
    def mask(self) -> int:
        return (1 << self.width) - 1

    @property
    def irq(self) -> int:
        return 1 if (self.istat & self.ien) else 0

    def write_resp(self, offset: int) -> int:
        return RESP_OKAY if offset in self._writable_offsets() else RESP_SLVERR

    def write_apply(self, offset: int, data: int, strb: int) -> None:
        if offset in self._writable_offsets() and (strb & 0xF):
            self._pending_wr = (offset, data & axil_spec.DATA_MASK, strb & 0xF)

    def write(self, offset: int, data: int, strb: int) -> int:
        resp = self.write_resp(offset)
        self.write_apply(offset, data, strb)
        return resp

    @classmethod
    def _writable_offsets(cls):
        d = cls.D
        return (d["AXIL_GPIO_DIR_OFF"], d["AXIL_GPIO_OUT_OFF"],
                d["AXIL_GPIO_IEN_OFF"], d["AXIL_GPIO_ISTAT_OFF"],
                d["AXIL_GPIO_ITYPE_OFF"])

    def read(self, offset: int) -> Tuple[int, int]:
        d = self.D
        if offset == d["AXIL_GPIO_DIR_OFF"]:
            return self.dir, RESP_OKAY
        if offset == d["AXIL_GPIO_OUT_OFF"]:
            return self.out, RESP_OKAY
        if offset == d["AXIL_GPIO_IN_OFF"]:
            return self.s2, RESP_OKAY
        if offset == d["AXIL_GPIO_IEN_OFF"]:
            return self.ien, RESP_OKAY
        if offset == d["AXIL_GPIO_ISTAT_OFF"]:
            return self.istat, RESP_OKAY
        if offset == d["AXIL_GPIO_ITYPE_OFF"]:
            return self.itype, RESP_OKAY
        if offset == d["AXIL_GPIO_ID_OFF"]:
            return self.D["AXIL_GPIO_ID"], RESP_OKAY
        return 0, RESP_SLVERR

    def step(self, gpio_in: int) -> None:
        pin = gpio_in & self.mask
        # Edge detect and the event set use the pre-edge state; a strobed W1C
        # write then clears the bits written as 1 of the post-event value
        # (docs/register_map.md §6.2).
        in_chg = self.s2 ^ self.d
        in_evt = 0
        for i in range(self.width):
            rising_only = (self.itype >> i) & 1
            if (in_chg >> i) & 1:
                in_evt |= (1 << i) if (not rising_only or ((self.s2 >> i) & 1)) else 0
        istat = self.istat | (in_evt & self.ien)
        s1, s2, d = pin, self.s1, self.s2
        if self._pending_wr is not None:
            off, data, strb = self._pending_wr
            self._pending_wr = None
            if off == self.D["AXIL_GPIO_DIR_OFF"]:
                self.dir = strb_merge(self.dir, data & self.mask, strb, self.width)
            elif off == self.D["AXIL_GPIO_OUT_OFF"]:
                self.out = strb_merge(self.out, data & self.mask, strb, self.width)
            elif off == self.D["AXIL_GPIO_IEN_OFF"]:
                self.ien = strb_merge(self.ien, data & self.mask, strb, self.width)
            elif off == self.D["AXIL_GPIO_ITYPE_OFF"]:
                self.itype = strb_merge(self.itype, data & self.mask, strb, self.width)
            elif off == self.D["AXIL_GPIO_ISTAT_OFF"]:
                istat = strb_merge(istat, istat & ~data, strb, self.width)
        self.s1, self.s2, self.d = s1, s2, d
        self.istat = istat & self.mask

    def snapshot(self) -> dict:
        return {"dir": self.dir, "out": self.out, "in": self.s2,
                "ien": self.ien, "istat": self.istat, "itype": self.itype,
                "irq": self.irq}


# ---------------------------------------------------------------------------
# TIMER
# ---------------------------------------------------------------------------

TIMER_CTRL, TIMER_LOAD, TIMER_VALUE = "CTRL", "LOAD", "VALUE"
TIMER_ISTAT, TIMER_PRESCALE, TIMER_ID = "INT_STATUS", "PRESCALE", "ID"


class TimerModel:
    """32-bit auto-reload / one-shot down-counter with prescaler.

    Period in auto-reload mode is exactly `(LOAD + 1)` ticks, where one tick is
    one clock when PRESCALE_EN is 0 and `(PRESCALE + 1)` clocks otherwise.  An
    expiry sets INT_STATUS[0]; a register write in the expiry edge wins over the
    event for the register it targets (docs/register_map.md, §5.3).
    """

    D = axil_spec.DEFS

    def __init__(self):
        self.reset()

    def reset(self) -> None:
        self.en = 0
        self.irq_en = 0
        self.one_shot = 0
        self.psc_en = 0
        self.load = 0xFFFF_FFFF
        self.value = 0xFFFF_FFFF
        self.prescale = 0
        self.psc_cnt = 0
        self.expired = 0
        self._pending_wr: Optional[Tuple[int, int, int]] = None

    @property
    def ctrl_word(self) -> int:
        return self.en | (self.irq_en << 1) | (self.one_shot << 2) | (self.psc_en << 3)

    @property
    def irq(self) -> int:
        return 1 if (self.expired and self.irq_en) else 0

    @property
    def tick(self) -> int:
        if self.psc_en:
            return 1 if self.psc_cnt == self.prescale else 0
        return 1

    @property
    def expire_evt(self) -> int:
        """True in the cycle that will end with an expiry event."""
        return 1 if (self.en and self.tick and self.value == 0) else 0

    def steps_until_expiry(self, limit: int = 1_000_000) -> Optional[int]:
        """Number of `step()` calls until the next expiry event, or None."""
        if not self.en:
            return None
        sim = copy.deepcopy(self)
        sim._pending_wr = None
        for n in range(1, limit + 1):
            if sim.expire_evt:
                return n
            sim.step()
        return None

    def write_resp(self, offset: int) -> int:
        return RESP_OKAY if offset in self._writable_offsets() else RESP_SLVERR

    def write_apply(self, offset: int, data: int, strb: int) -> None:
        if offset in self._writable_offsets() and (strb & 0xF):
            self._pending_wr = (offset, data & axil_spec.DATA_MASK, strb & 0xF)

    def write(self, offset: int, data: int, strb: int) -> int:
        resp = self.write_resp(offset)
        self.write_apply(offset, data, strb)
        return resp

    @classmethod
    def _writable_offsets(cls):
        d = cls.D
        return (d["AXIL_TIMER_CTRL_OFF"], d["AXIL_TIMER_LOAD_OFF"],
                d["AXIL_TIMER_ISTAT_OFF"], d["AXIL_TIMER_PRESCALE_OFF"])

    def read(self, offset: int) -> Tuple[int, int]:
        d = self.D
        if offset == d["AXIL_TIMER_CTRL_OFF"]:
            return self.ctrl_word, RESP_OKAY
        if offset == d["AXIL_TIMER_LOAD_OFF"]:
            return self.load, RESP_OKAY
        if offset == d["AXIL_TIMER_VALUE_OFF"]:
            return self.value, RESP_OKAY
        if offset == d["AXIL_TIMER_ISTAT_OFF"]:
            return self.expired, RESP_OKAY
        if offset == d["AXIL_TIMER_PRESCALE_OFF"]:
            return self.prescale, RESP_OKAY
        if offset == d["AXIL_TIMER_ID_OFF"]:
            return self.D["AXIL_TIMER_ID"], RESP_OKAY
        return 0, RESP_SLVERR

    def step(self) -> None:
        tick = self.tick
        expire_evt = self.expire_evt
        en, value = self.en, self.value
        if expire_evt:
            if self.one_shot:
                en = 0
            else:
                value = self.load
        elif self.en and tick and self.value != 0:
            value = (self.value - 1) & axil_spec.DATA_MASK
        # Prescaler counter.
        if not self.psc_en:
            psc_cnt = 0
        elif tick:
            psc_cnt = 0
        else:
            psc_cnt = (self.psc_cnt + 1) & 0xFFFF
        # INT_STATUS[0]: expiry event first, then a W1C write to it.
        expired = self.expired | (1 if expire_evt else 0)
        # Register writes have the highest priority for their own register.
        load, prescale = self.load, self.prescale
        ctrl = self.ctrl_word
        if self._pending_wr is not None:
            off, data, strb = self._pending_wr
            self._pending_wr = None
            if off == self.D["AXIL_TIMER_CTRL_OFF"]:
                ctrl = strb_merge(ctrl, data & 0xF, strb, 4)
                en = ctrl & 1
                self.irq_en = (ctrl >> 1) & 1
                self.one_shot = (ctrl >> 2) & 1
                self.psc_en = (ctrl >> 3) & 1
            elif off == self.D["AXIL_TIMER_LOAD_OFF"]:
                load = strb_merge(load, data, strb, 32)
                value = load                 # LOAD and VALUE update together
            elif off == self.D["AXIL_TIMER_PRESCALE_OFF"]:
                prescale = strb_merge(prescale, data & 0xFFFF, strb, 16)
            elif off == self.D["AXIL_TIMER_ISTAT_OFF"]:
                # The flag lives in byte 0: only a write enabling that byte can
                # clear it (same rule as the RTL's byte-scoped W1C path).
                expired = strb_merge(expired, expired & ~data, strb, 1)
        self.en, self.value, self.load = en, value, load
        self.prescale, self.psc_cnt, self.expired = prescale, psc_cnt, expired

    def snapshot(self) -> dict:
        return {"ctrl": self.ctrl_word, "load": self.load, "value": self.value,
                "prescale": self.prescale, "psc_cnt": self.psc_cnt,
                "expired": self.expired, "irq": self.irq}


# ---------------------------------------------------------------------------
# Whole-subsystem model
# ---------------------------------------------------------------------------

class AxilRefModel:
    """Decode + dispatch + one clock edge of state evolution for the subsystem.

    Usage:
        model = AxilRefModel()
        # a background task calls model.step(gpio_in=..., uart_rx=...) once per
        # clock edge; tests call read()/write() at a drive point.
    """

    def __init__(self, *, gpio_width: int = 8, log=None):
        self.width = gpio_width
        self.log = log
        self.uart = UartModel()
        self.gpio = GpioModel(gpio_width)
        self.timer = TimerModel()
        self.steps = 0
        #: Every access the model was asked about, for reporting.
        self.accesses: List[tuple] = []

    # -- time ---------------------------------------------------------------
    def reset(self) -> None:
        self.uart.reset()
        self.gpio.reset()
        self.timer.reset()
        self.steps = 0

    def step(self, *, gpio_in: int = 0, uart_rx: int = 1) -> None:
        """One clock edge: UART and TIMER always evolve, GPIO samples its pins."""
        self.uart.step(1 if uart_rx else 0)
        self.gpio.step(gpio_in)
        self.timer.step()
        self.steps += 1

    # -- access -------------------------------------------------------------
    def write_resp(self, addr: int) -> int:
        """Predicted BRESP for a write, without applying anything."""
        periph, offset, kind = self._locate(addr)
        if kind == "unmapped":
            return RESP_DECERR
        if kind == "unimplemented":
            return RESP_SLVERR
        return periph.write_resp(offset)

    def write_apply(self, addr: int, data: int, strb: int = 0xF) -> None:
        """Queue a write's register effect for the next `step()`.

        Called at the drive point *after* the accept edge: the effect is applied
        by the model step that corresponds to the DUT's `wr_apply` edge.
        """
        periph, offset, kind = self._locate(addr)
        if kind == "ok":
            periph.write_apply(offset, data, strb)

    def write(self, addr: int, data: int, strb: int = 0xF) -> int:
        """Predict BRESP and queue the effect (response and effect in one call)."""
        resp = self.write_resp(addr)
        self.write_apply(addr, data, strb)
        self.accesses.append(("W", addr, data, strb, resp))
        return resp

    def read(self, addr: int) -> Tuple[int, int]:
        """Predict (RDATA, RRESP) at the upcoming accept edge."""
        periph, offset, kind = self._locate(addr)
        if kind == "unmapped":
            data, resp = 0, RESP_DECERR
        elif kind == "unimplemented":
            data, resp = 0, RESP_SLVERR
        else:
            data, resp = periph.read(offset)
        self.accesses.append(("R", addr, data, 0xF, resp))
        return data, resp

    def _locate(self, addr: int):
        """(peripheral model, local offset, status) for an address.

        status is "ok" (a real register), "unimplemented" (inside a mapped region
        but not a register of that peripheral -> SLVERR) or "unmapped" (no region
        -> DECERR).
        """
        spec = periph_for(addr)
        if spec is None:
            return None, None, "unmapped"
        offset = spec.region.local_offset(addr)
        if offset not in spec.by_offset():
            return None, offset, "unimplemented"
        periph = {0: self.uart, 1: self.gpio, 2: self.timer}[spec.region.index]
        return periph, offset, "ok"

    # -- observables --------------------------------------------------------
    def irq(self) -> int:
        return self.uart.irq | (self.gpio.irq << 1) | (self.timer.irq << 2)

    def boundary(self) -> dict:
        """Values the model expects on the peripheral boundary pins.

        Used by the environment's per-cycle trace comparison; the keys match the
        DUT's pin names where possible so a failure message is self-describing.
        """
        return {"uart_tx": self.uart.tx_line, "gpio_out": self.gpio.out,
                "gpio_dir": self.gpio.dir, "irq": self.irq()}

    def snapshot(self) -> dict:
        return {"steps": self.steps, "uart": self.uart.snapshot(),
                "gpio": self.gpio.snapshot(), "timer": self.timer.snapshot()}

    def summary(self) -> str:
        u, g, t = self.uart.snapshot(), self.gpio.snapshot(), self.timer.snapshot()
        return (f"model after {self.steps} steps: "
                f"UART[status={u['status']:#04x} istat={u['istat']:#03x} "
                f"rx={u['rx_data']:#04x} v={u['rx_valid']} busy={u['tx_busy']}] "
                f"GPIO[in={g['in']:#04x} istat={g['istat']:#03x} out={g['out']:#04x}] "
                f"TIMER[value={t['value']:#010x} expired={t['expired']} "
                f"en={t['ctrl'] & 1}]")


# Convenience: the three peripherals by slave index, for error messages.
PERIPH_NAMES = {region.index: region.name for region in axil_spec.REGIONS}


def decode_name(addr: int) -> str:
    index = decode(addr)
    return "UNMAPPED" if index is None else PERIPH_NAMES[index]

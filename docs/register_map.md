# Register map and peripheral specification

This document is the **contract**. It was written before the RTL and the Python
reference model were implemented, and both were written to match it. The
verification environment reads `rtl/axil_defs.svh` at run time, so the RTL, the
testbench, and this document cannot silently diverge on addresses or IDs. Where
behaviour is subtle (byte enables, same-cycle priorities, synchroniser latency)
the rule is stated here first and the RTL comments cite the section.

## 1. System address map

Region size is `2**REGION_LSB = 4096` bytes. Decoding compares
`addr[31:12]`, so the whole 4 KiB region maps to one slave.

| Slave | Peripheral | Base | End (inclusive) | Size |
|---|---|---|---|---|
| 0 | UART  | `0x0000_0000` | `0x0000_0FFF` | 4 KiB |
| 1 | GPIO  | `0x0000_4000` | `0x0000_4FFF` | 4 KiB |
| 2 | TIMER | `0x0000_8000` | `0x0000_8FFF` | 4 KiB |
| — | *unmapped* | everything else | | |

The gaps `0x1000–0x3FFF` and `0x5000–0x7FFF` are **deliberately left unmapped**
so the decoder's boundary behaviour and the DECERR path have real coverage.

### Response codes

| Condition | BRESP / RRESP |
|---|---|
| Inside a region, implemented offset, correct direction | `OKAY` (2'b00) |
| Inside a region, unimplemented offset, or wrong direction (write to RO / read of WO) | `SLVERR` (2'b10) |
| Outside every region | `DECERR` (2'b11) |

`EXOKAY` is never produced (no exclusive access).

Within a region only the low 6 address bits (`addr[5:0]`) are looked at, so
`BASE + 0x00` and `BASE + 0x40` are the same register. Peripherals are
word-aligned devices: `ADDR[1:0]` is ignored, and a 4-byte `WSTRB` may be used
for a true byte-lane write. How a write applies its byte enables is specified
once, for all peripherals, in **§6.1**.

## 2. Common register: ID (offset 0x3C)

Every peripheral implements a read-only ID at `0x3C`:

| Peripheral | ID value | ASCII |
|---|---|---|
| UART | `0x5541_5254` | `UART` |
| GPIO | `0x4749_4F00` | `GIO\0` |
| TIMER | `0x5449_4D45` | `TIME` |

## 3. UART  (base `0x0000_0000`)

| Off | Name | Access | Reset | Fields |
|---|---|---|---|---|
| `0x00` | `CTRL` | R/W | `0x0` | `[0] TX_EN`, `[1] RX_EN`, `[2] LOOPBACK`, `[3] TXDONE_EN`, `[4] RXAVL_EN`, `[5] RXOVR_EN`, `[6] RXFRM_EN`. `[6:3]` are per-source interrupt enables, aligned bit-for-bit with `INT_STATUS[3:0]` (§3.2, note 6). `[31:7]` reserved, read 0, writes ignored. |
| `0x04` | `BAUD` | R/W | `0x0` | `[15:0]` divisor; `[31:16]` reserved, write as 0. |
| `0x08` | `STATUS` | RO | `0x1` | `[0] TX_READY`, `[1] RX_VALID`, `[2] TX_BUSY`, `[3] RX_OVERRUN`, `[4] RX_FRAME_ERR` |
| `0x0C` | `TXDATA` | WO | — | `[7:0]` byte to transmit. Reads return 0 with OKAY. |
| `0x10` | `RXDATA` | RO | — | `[7:0]` received byte. **Reading clears `RX_VALID` and `INT_STATUS[1]`.** |
| `0x14` | `INT_STATUS` | R/W1C | `0x0` | `[0] TX_DONE`, `[1] RX_AVAIL`, `[2] RX_OVERRUN`, `[3] RX_FRAME_ERR` |
| `0x18` | `INT_ENABLE` | R/W | `0x0` | `[3:0]` enables, bit *i* enables `INT_STATUS[i]`. |
| `0x3C` | `ID` | RO | | see §2 |

### 3.1 Frame format and bit timing

1 start bit (`0`), 8 data bits LSB-first, 1 stop bit (`1`).

**Bit period:** `max(4, BAUD[15:0])` clock cycles. The reset value `BAUD = 0`
therefore means 4 cycles/bit. Values below 4 are clamped so that RX mid-bit
sampling stays coherent (both TX and RX use the same clamped value, so loopback
works at any divisor ≥ 4).

A low level on `uart_rx` while the receiver is idle *is* a start bit. A frame
whose stop bit is `0` is therefore followed by whatever the line does next: if
the line returns to `1` (normal idle) the receiver waits for the next start bit,
but a line that stays low is seen as further start bits, and the resulting
sampled bytes are meaningless. This is receiver behaviour required by the frame
format, not a filter, and the testbench reflects it by driving an idle level
after every frame (`tests/axil_peripheral_tests.py::drive_frame`).

### 3.2 Defined behaviours

1. Writing `TXDATA` with `CTRL.TX_EN = 0` is accepted (`OKAY`) and ignored.
2. Writing `TXDATA` while `STATUS.TX_BUSY = 1` is accepted (`OKAY`) and the byte
   is **dropped**. Software must poll `STATUS.TX_READY`. This is a deliberate
   simplification: there is no TX FIFO.
3. `STATUS[3]`/`STATUS[4]` read the same sticky bits as `INT_STATUS[2]`/`[3]`;
   they clear only through the W1C write to `INT_STATUS`.
4. A completed byte while `RX_VALID` is already 1 sets `RX_OVERRUN` and the old
   byte is kept.
5. A received stop bit that is not `1` sets `RX_FRAME_ERR` and the byte is
   discarded.
6. `irq = |(INT_STATUS[3:0] & INT_ENABLE[3:0] & CTRL[6:3])`: bit *i* of
   `INT_STATUS` reaches the interrupt line only when `INT_ENABLE[i]` **and** the
   matching per-source `CTRL` enable (`TXDONE_EN`, `RXAVL_EN`, `RXOVR_EN`,
   `RXFRM_EN`) are both set. A source that is not enabled for interrupts can
   still be observed by polling `STATUS`/`INT_STATUS`.
7. **Frame-completion skew.** The receiver samples the stop bit at its middle
   and finishes the frame before the transmitter has shifted out the last cycle
   of its stop bit, so `STATUS.RX_VALID` can become visible in a cycle where
   `STATUS.TX_BUSY` is still `1` and `TX_READY` is still `0`. In loopback the
   receiver flag is always set strictly first, and `TX_READY` follows by at most
   half a bit period (one clock cycle at the reset divisor `BAUD = 4`), so
   software that polls `TX_READY` sees it at most half a bit after the frame is
   received. Checked as a bound, not as a simultaneous value, by
   `tests/axil_subsystem_tests.py::test_uart_loopback_through_crossbar`.

### 3.3 Read/write hazards

`TXDATA` and `RXDATA` are single-byte holding registers, not FIFOs. Writing
`TXDATA` while `TX_BUSY` and reading `RXDATA` while `RX_VALID = 0` are both safe
(no side effects beyond those listed). For what happens when an RXDATA read, a
byte handoff and a W1C write land on the same clock edge, see §6.2.

**TXDATA and WSTRB:** `TXDATA` is an action register, not a stored value, but the
uniform byte-enable contract still applies: only a write with a non-zero `WSTRB`
starts a frame (see §6.1). The transmitted byte is `WDATA[7:0]` regardless of
which of the four strobes is set.

## 4. GPIO  (base `0x0000_4000`)

`GPIO_WIDTH` = 8 by default.

| Off | Name | Access | Reset | Fields |
|---|---|---|---|---|
| `0x00` | `DIR` | R/W | `0x00` | `[GPIO_WIDTH-1:0]`, 1 = output |
| `0x04` | `OUT` | R/W | `0x00` | `[GPIO_WIDTH-1:0]` driven value |
| `0x08` | `IN` | RO | — | `[GPIO_WIDTH-1:0]`, two-flop synchronised pin value |
| `0x0C` | `INT_ENABLE` | R/W | `0x00` | per-pin interrupt enable |
| `0x10` | `INT_STATUS` | R/W1C | `0x00` | per-pin change event |
| `0x14` | `INT_TYPE` | R/W | `0x00` | per-pin: 0 = any edge, 1 = rising only |
| `0x3C` | `ID` | RO | | see §2 |

### 4.1 Synchroniser latency and edge detection

Number the clock edges from the drive instant: a pin level driven at the start
of cycle 0 reaches the first synchroniser stage at **edge 1**, and `IN` (the
second stage) shows it at **edge 2**. The change detector compares the second
stage with its own one-edge-delayed copy (`in_s2_q ^ in_d_q`), so
`INT_STATUS` is set at **edge 3** — one edge *after* the new level becomes
visible in `IN`. Consequently `IN` always reads the level the flag was raised
for: a flag set at edge 3 can only be read (accept edge ≥ 4) together with the
new value. A write intended to race that event must be applied at edge 3
(§6.2).

### 4.2 Defined behaviours

1. `irq = |(INT_STATUS & INT_ENABLE)`.
2. Writes to `IN` return `SLVERR` (read-only).
3. Writes to `DIR`/`OUT` do not affect `IN`.

## 5. TIMER  (base `0x0000_8000`)

| Off | Name | Access | Reset | Fields |
|---|---|---|---|---|
| `0x00` | `CTRL` | R/W | `0x0` | `[0] EN`, `[1] IRQ_EN`, `[2] ONE_SHOT`, `[3] PRESCALE_EN` |
| `0x04` | `LOAD` | R/W | `0xFFFF_FFFF` | 32-bit reload value |
| `0x08` | `VALUE` | RO | `0xFFFF_FFFF` | current counter value |
| `0x0C` | `INT_STATUS` | R/W1C | `0x0` | `[0] EXPIRED` |
| `0x10` | `PRESCALE` | R/W | `0x0000` | `[15:0]` prescaler divider |
| `0x3C` | `ID` | RO | | see §2 |

### 5.1 Tick rate and period

One tick per clock when `PRESCALE_EN = 0`, otherwise one tick per
`PRESCALE + 1` clocks. While `EN = 1` and a tick occurs:

* `VALUE == 0` → expiry. `INT_STATUS[0]` is set. Auto-reload mode loads
  `VALUE <= LOAD`; one-shot mode clears `EN` and `VALUE` stays 0.
* `VALUE != 0` → `VALUE <= VALUE - 1`.

In auto-reload mode the period is exactly `(LOAD + 1)` ticks. Example:
`LOAD = 3`, `EN = 1`, `PRESCALE_EN = 0` gives `VALUE` sequence
`3, 2, 1, 0` (expiry on the tick where `VALUE` is already 0), period 4 clocks.

### 5.2 Read-back of `VALUE`

`VALUE` is readable at any time; a read accepted in the same edge as an expiry
set or a reload returns the **pre-edge** value, because the value is captured in
the accept cycle and the counter updates on that same edge (§6.2).

### 5.3 Defined behaviours

1. Writing `LOAD` updates `LOAD` and `VALUE` **together**, so a period change
   applies immediately. A zero-strobe write changes neither (§6.1): the reload is
   part of the write, not an event of its own.
2. `CTRL` honours the byte-enable contract like every other R/W register: a
   zero-strobe or upper-byte-only write cannot change `EN`/`IRQ_EN`/`ONE_SHOT`/
   `PRESCALE_EN`.
3. While `EN = 0` the counter holds its value.
4. A register write in the same cycle as a count event takes priority for the
   register it targets (write-first).
5. `INT_STATUS[0]` lives in byte 0: only a write with `WSTRB[0]` set can clear
   the flag. An upper-byte-only write reaches the register bridge (OKAY),
   changes nothing and cannot suppress a same-edge expiry (§6.1, §6.2).
6. `irq = INT_STATUS[0] & CTRL[1]`.
7. `VALUE` writes return `SLVERR` (read-only).

## 6. Register access rules and crossbar

### 6.1 WSTRB byte-enable contract

Every write carries `WSTRB`; the rule is uniform across all peripherals:

| `WSTRB` | Effect of the write |
|---|---|
| `0b0001`..`0b1111` | The enabled bytes of the target register are updated; disabled bytes keep their value. Bytes above the register width (e.g. `BAUD[31:16]`, `PRESCALE[31:16]`) are never written. |
| `0b0000` (zero strobe) | The write is **accepted with the offset's normal response but changes no state and triggers no action**. In particular it cannot start a UART frame, cannot clear a `W1C` flag, cannot reload a running timer, and cannot suppress another event that would be recorded in the accept cycle. |

Two implementation rules follow from this and are visible in every peripheral:

* The whole write-application block is gated on `|WSTRB` (or on the specific
  strobe byte that the register occupies). A zero-strobe — or, for a
  byte-scoped register such as `TIMER.INT_STATUS`, an upper-byte-only — write
  takes **no write path at all**, so it can never take the "clear" path of a
  `W1C` register; taking that path would also suppress a same-cycle event set,
  which would violate this contract.
* Action registers (`UART.TXDATA`, `TIMER.LOAD`) are gated the same way: the
  action is part of the write, not an event of its own.

The rule does not change what a write *responds* with: a zero-strobe write to a
mapped, implemented offset still returns `OKAY` (or `SLVERR` for a read-only
offset), exactly like the same write with `WSTRB = 0xF`.

### 6.2 Same-cycle priority (events first, write last)

Several state changes can land on one clock edge. The order below is fixed and
identical in the RTL and in the Python reference model, and is covered by
directed tests:

1. **Events are combined first.** In the edge, each peripheral forms the
   post-event value of its sticky state: UART `TX_DONE`/`RX_AVAIL`/`RX_OVERRUN`/
   `RX_FRAME_ERR` and `RX_VALID` (the RX handoff stores the newly sampled byte),
   GPIO `INT_STATUS` (edge detected from the synchroniser chain, §4.1), TIMER
   `INT_STATUS[0]` (expiry) and the counter reload.
2. **A register write is applied last, to that value.** A strobed write applies
   to the combined value through the byte-enable merge (§6.1), so:
   * for `W1C` state, a bit written as `1` is cleared **even if the same edge set
     it** (software clear wins);
   * a bit written as `0` is left untouched, so a same-edge event **survives**;
   * `TIMER.LOAD` updates `LOAD` and `VALUE` together, overriding the reload that
     a same-edge expiry would have performed.
3. **A zero-strobe write is not a write**: it is excluded from step 2 entirely
   (§6.1), so it can neither change state nor suppress an event.
4. **UART `RXDATA` read vs byte handoff.** Reading `RXDATA` clears `RX_VALID` and
   `INT_STATUS[RX_AVAIL]` at the read's accept edge. If a good byte completes in
   *that* edge, the byte is stored **and** `RX_VALID` is left clear: the read
   wins for the flag, and `RXDATA` holds the new byte when it is read again.

Tests: `tests/axil_peripheral_tests.py::test_zero_strobe_has_no_effect` (all
three peripherals, including the `W1C`-versus-event races),
`::test_timer_prescaler_and_w1c_race` (clear-on-the-expiry-edge and
write-of-0-on-the-expiry-edge), `::test_uart_loopback_roundtrip` (RXDATA read
side effects).

### 6.3 Crossbar-level specification

| Behaviour | Specification |
|---|---|
| Outstanding transactions | at most **1 read** and **1 write** per master |
| Slave write path | serialised: the arbiter holds the grant until B completes |
| Slave read path | serialised: the arbiter holds the grant until R completes |
| Read vs write on one slave | **concurrent** (two independent arbiters) |
| Arbitration | round-robin, priority pointer advances on every grant |
| Address decoding | `addr[31:12]` compare, one-hot, exhaustive |
| `AWPROT`/`ARPROT` | accepted and forwarded, not interpreted |
| `WSTRB` | forwarded; peripherals apply byte enables (§6.1) |
| Reset | synchronous, active high; aborts in-flight transactions |

**Read-before-write (same cycle, one address):** when a read and a write are
accepted in the same cycle, the read returns the **pre-write** value. This
applies to every peripheral, because `axil_regfile_slave` samples the read data
in the accept cycle and the peripheral applies the write on that same edge (the
read data is captured before the write takes effect, §6.2 step 2).

**Unspecified / not tested:** `ARPROT`/`AWPROT` have no effect; unaligned
addresses (`addr[1:0] != 0`) are treated as aligned (the low bits are ignored);
`WSTRB` combinations that touch only unimplemented bytes of a register leave it
unchanged.

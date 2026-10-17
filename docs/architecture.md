# Architecture — Configurable AXI4-Lite Crossbar and Peripheral Subsystem

## 1. Purpose and scope

A synthesizable, parameterizable **2-master × 3-slave AXI4-Lite crossbar** with three
real AXI4-Lite peripherals (UART, GPIO, TIMER) attached to its slave ports.

The project is deliberately **complementary to an SDRAM controller and a Mini RISC-V SoC**:
it contains no CPU, no memory controller, no pipeline. Its subject matter is
*interconnect*: address decoding, round-robin arbitration, independent AXI channel
handling, response routing, and error responses — plus a verification environment
that is designed to catch interconnect bugs (misrouting, duplication, loss, deadlock).

**Implemented subset (explicit):** AXI4-Lite, single clock domain, AXI4-Lite
single-beat transfers only. The design implements the five AXI4-Lite channels
(AW, W, B, AR, R), independent channel handshaking, `WSTRB` byte enables,
`AWPROT`/`ARPROT` forwarding, and OKAY / SLVERR / DECERR responses.

**Not implemented (explicit):** bursts (`AWLEN`/`ARLEN`), multiple outstanding
transactions per master, exclusive access, cache attributes, QoS, clock-domain
crossing, write-data interleaving, ID signals (AXI4-Lite has none), EBU/upsizing.

## 2. Block diagram

```
        m0_axil_*                       +-----------------------+
   M0  --------->  +--------------------+|  axi_lite_slave_port  |----> s0_axil_*  (UART  @0x0000)
                   | axi_lite_master_   |-|   (write arbiter #0)  |
   M1  --------->  |   port  (inst 0)   |-|   (read  arbiter #0)  |
        m1_axil_*  +--------------------+|                       |
                            |            |                       |
                            |            |   +-------------------+|
                            |            |   | +-------------------+|
                            +----------->+---+ |axi_lite_slave_port|----> s1_axil_*  (GPIO  @0x4000)
                   +--------------------+  | | | (arbiters #1)     |
                   | axi_lite_master_   |--+ | +-------------------+
                   |   port  (inst 1)   |    | +-------------------+
                   +--------------------+    | |axi_lite_slave_port|----> s2_axil_*  (TIMER @0x8000)
                                             | | (arbiters #2)     |
                                             | +-------------------+
                                             | +------------------------+
                                             | | axi_lite_slave_port    |--> DECERR
                                             | | (arbiters #3, target=3)|    (internal
                                             | +------------------------+     error target)
                                             +-----------------------+
```

Every master port drives a **one-hot target select** for each in-flight
transaction. Every slave port runs **two independent arbiters** (one for the write
path, one for the read path). Target index `NSLV` (== 3) is an internal *error
target*: an always-ready AXI4-Lite slave that answers `DECERR`. Treating the error
case as a real slave port means **every** AXI channel path in the crossbar is
exercised by the same logic, including the invalid-address case.

## 3. Module hierarchy

| Module | Role |
|---|---|
| `rtl/axi_lite_address_decoder.sv` | Combinational, one-hot address decode of one region per slave, plus a "no region matched" bit |
| `rtl/axi_lite_arbiter.sv` | Parameterizable round-robin arbiter with hold until `done` |
| `rtl/axi_lite_master_port.sv` | Per-master: absorbs independent AW/W arrival into a 1-deep buffer pair, captures AR, enforces ≤1 outstanding read/write, presents target/payload to the crossbar, multiplexes responses back |
| `rtl/axi_lite_slave_port.sv` | Per-slave: read arbiter + write arbiter, master→slave channel mux, owner tracking, response routing |
| `rtl/axil_error_slave.sv` | Always-ready AXI4-Lite slave that returns `DECERR` |
| `rtl/axi_lite_crossbar.sv` | Top: instantiates master ports, slave ports, and the internal error target |
| `rtl/axil_regfile_slave.sv` | Reusable AXI4-Lite → register-port bridge (independent AW/W capture, 1 outstanding, `SLVERR` for unimplemented offsets) |
| `rtl/uart_regs.sv` | UART: register block + TX serializer + RX sampler (loopback capable) |
| `rtl/gpio_regs.sv` | GPIO: DIR/OUT/IN + pin-change interrupt |
| `rtl/timer_regs.sv` | 32-bit auto-reload / one-shot timer with prescaler and interrupt |
| `rtl/peripheral_subsystem.sv` | Deliverable top: crossbar + 3 peripherals wired to the documented bases |

**Coding-style constraint (tool-driven):** no SystemVerilog `package`, and no
packed-array *module parameters*, because Yosys/SymbiYosys 0.70 cannot parse
them. Packed-array *ports* (e.g. `m_axil_awaddr[NMST-1:0][31:0]`), module-local
`typedef enum`, `$clog2` in `localparam`, and `assert property` inside an
`always_ff` **are** supported and are used. Shared constants live in
`rtl/axil_defs.svh` as macros.

## 4. Address decoding

Region size is `2**AXIL_REGION_LSB` bytes (default 4 KiB). Decoding compares
`addr[ADDR_WIDTH-1:REGION_LSB]` against each region base — the low bits are
ignored, so the whole region maps to one slave.

```
sel[i] = (addr[31:12] == BASE[i][31:12])   for i in [0, NSLV-1]
sel[NSLV] = ~|sel[NSLV-1:0]                // error target
hit    = ~sel[NSLV]
```

The decode is **mutually exclusive by construction** (comparisons against distinct
constants) and **exhaustive** (`sel` is always one-hot). Both are proved formally
(`formal/decode.sby`), rather than assumed.

Decode results are **registered alongside the captured address**, so each master
carries its own target select and there is no shared combinational decode state
that could cross-talk between masters.

## 5. Round-robin arbitration

One `axi_lite_arbiter` per slave port per direction (write, read). The arbiter is
a classic *rotate-and-isolate-lowest-set-bit* arbiter:

```
dbl_req = {req, req}                       // 2N-wide
mask    = 1 << ptr                         // one-hot at the pointer
masked  = dbl_req & ~(mask - 1)            // keep candidates at index >= ptr
pick    = masked & (~masked + 1)           // isolate the lowest set candidate
gnt     = pick[N-1:0] | pick[2N-1:N]       // fold upper half (wrap-around)
```

`ptr` is the index of the *next* master to receive priority. It is advanced to
`granted_index + 1` on every grant, so priority strictly rotates.

**Grant holding.** `gnt` is **registered**. Once a grant is issued it is held
until `done`:

* write arbiter: `done` = the B handshake with the slave completes;
* read arbiter: `done` = the R handshake with the slave completes.

Holding the grant for the *whole* transaction is what makes response routing
trivially correct: exactly one master "owns" the slave's write path (and
independently the read path) at any time, so `B`/`R` can be routed by the owner
register with no reordering logic and no transaction-ID tracking.

Trade-off, stated plainly: this **serializes transactions per slave per
direction**. It is a deliberate first-version limitation, appropriate for
register-class peripherals, and it is the assumption that makes the safety
properties provable without a transaction table.

**Fairness.** Because `ptr` advances on every grant and the arbiter only
re-examines requests when it is idle or a transaction completes, two contending
masters alternate for equal demand. This is measured in `test_rr_fairness`, not
asserted.

## 6. Independent AW / W arrival (write path)

AXI4-Lite lets a master assert `AWVALID` and `WVALID` independently. Each master
port therefore holds **two independent 1-deep buffers**:

| Signal | Meaning |
|---|---|
| `aw_pend_q`, `aw_addr_q`, `aw_prot_q`, `aw_sel_q` | AW accepted, not yet handed to a slave |
| `w_pend_q`, `w_data_q`, `w_strb_q` | W accepted, not yet handed to a slave |

```
awready_o = ~aw_pend_q & ~wr_wait_q
wready_o  = ~w_pend_q  & ~wr_wait_q
w_req_o   = (aw_pend_q & w_pend_q) ? aw_sel_q : '0     // arbitration request
```

Consequences, all verifiable:

* AW-then-W, W-then-AW and simultaneous AW/W are all legal; either channel may
  arrive arbitrarily earlier. A transaction is only *dispatched* once both are
  present.
* No transaction can be lost, because neither buffer is released until its own
  handshake with the target completes.
* The slave-facing channels are driven from **separate** pending flags
  (`awvalid_o = |(w_gnt & aw_pend_vec)`, `wvalid_o = |(w_gnt & w_pend_vec)`), so a
  slave that asserts `AWREADY` and `WREADY` on different cycles is handled
  correctly and cannot deadlock.
* `wr_wait_q` is set only when *both* buffers are accounted for, and it blocks
  `awready_o`/`wready_o` until B returns. That is the mechanism that enforces
  **at most one outstanding write per master**.

## 7. Read path

```
arready_o = ~rd_active_q
r_req_o   = ar_pend_q ? ar_sel_q : '0
```

`AR` is captured and dispatched immediately. `ar_pend_q` clears when the target
accepts `AR`; `rd_active_q` clears when `R` is accepted by the master. Because
`arready_o` is gated by `rd_active_q`, **at most one outstanding read per master**
is enforced structurally.

Reads and writes are completely independent state machines, so a master may have
one read and one write in flight simultaneously, and a slave may be serving a read
and a write at the same time through its two arbiters.

## 8. Response routing

For each slave `s` the slave port holds:

* `w_owner` — the registered one-hot write grant;
* `r_owner` — the registered one-hot read grant.

Responses are routed by masking, never by selection of a shared bus:

```
w_bvalid_o[m] = w_gnt[m] & s_bvalid          w_bresp_o[m] = w_gnt[m] ? s_bresp : OKAY
r_rvalid_o[m] = r_gnt[m] & s_rvalid          r_rdata_o[m] = w_gnt[m] ? s_rdata : '0
bready_o      = |(w_gnt & w_bready_i)        // only the owner's BREADY reaches the slave
rready_o      = |(r_gnt & r_rready_i)
```

A non-owner master therefore **cannot observe another master's response and cannot
terminate another master's transaction**, even if it holds `BREADY`/`RREADY` high
continuously. This is the property proved by `formal/routing.sby`.

## 9. Invalid addresses

Two distinct error classes, both reported through the standard response codes:

| Condition | Response |
|---|---|
| Address matches no region (`hit == 0`) | `DECERR` (2'b11) — produced by the internal error target |
| Address matches a region but the peripheral does not implement that offset, or the register is write-only/read-only in the wrong direction | `SLVERR` (2'b10) — produced by `axil_regfile_slave` |
| Normal access | `OKAY` (2'b00) |

`EXOKAY` is never generated (no exclusive access support).

For a failing **write**, the port still requires `W` to arrive before responding.
That is a protocol requirement: a write response cannot be produced before the
write data has been accepted, otherwise the master is left holding `WVALID`.

For a failing **read**, `RDATA` is all zeros with `RRESP = DECERR`/`SLVERR`.

## 10. Reset

`rst` is a **synchronous, active-high, single-cycle-wide-at-least** reset.
Reset drives:

* all buffers/busy flags to "empty" → `AWREADY`/`WREADY`/`ARREADY` return to 1;
* the arbiter grants to zero and the round-robin pointers to 0;
* all slave-facing `*VALID` outputs to 0 (so no slave sees a phantom beat);
* all response outputs (`BVALID`, `RVALID`) to 0.

**Reset aborts any in-flight transaction.** AXI4 does not define reset behaviour,
so this is a design decision, documented and tested rather than assumed: after
reset, the environment must not continue to hold a `VALID` from a pre-reset
transaction expecting completion.

## 11. Parameterization

| Parameter | Default | Meaning |
|---|---|---|
| `ADDR_WIDTH` | 32 | address width |
| `DATA_WIDTH` | 32 | data width (must be a multiple of 8) |
| `STRB_WIDTH` | `DATA_WIDTH/8` | byte strobes |
| `NMST` | 2 | number of masters |
| `NSLV` | 3 | number of real slaves (error target is extra, internal) |
| `REGION_LSB` | 12 | region size = `2**REGION_LSB` bytes |
| `BASE_FLAT` | — | `NSLV*ADDR_WIDTH`-bit flat concatenation of region bases |

`BASE_FLAT` is a **flat** vector rather than a packed array of parameters because
Yosys cannot parse packed-array parameters. Region bases must be distinct and
`2**REGION_LSB`-aligned; `formal/decode.sby` proves one-hot-ness for the
configured map, and `tests/test_spec.py` checks the map read from
`rtl/axil_defs.svh`.

## 12. Peripherals

Each peripheral instantiates `axil_regfile_slave`, which:

* captures AW and W **independently** (same 2-flag scheme as the crossbar master port);
* allows at most one outstanding read and one outstanding write;
* returns `OKAY` when `reg_*_hit` is high and `SLVERR` otherwise;
* exposes a simple register port: `reg_wr_en/addr/data/strb`, `reg_rd_en/addr` in,
  `reg_rd_data/hit` out.

**Read-before-write (defined):** when a write and a read are accepted in the same
cycle, the read returns the *pre-write* value. This is a deliberate, documented
definition, implemented identically in the Python reference model and covered by
directed tests.

| Peripheral | Behaviour |
|---|---|
| UART | CTRL/BAUD/STATUS/TXDATA/RXDATA/INT_STATUS/INT_ENABLE/ID. TX serializer shifts start+8 data+stop at `BAUD` cycles/bit. RX samples the line at baud rate with start-bit detect, overrun and framing-error status. `CTRL.LOOPBACK` ties TX to RX internally. |
| GPIO | DIR/OUT/IN (2-FF synchronised)/INT_ENABLE/INT_STATUS(W1C)/INT_TYPE(edge or rising-only)/ID. |
| TIMER | CTRL(EN, IRQ_EN, ONE_SHOT, PSC_EN)/LOAD/VALUE/INT_STATUS(W1C)/PRESCALE/ID. `VALUE` counts down on each tick (tick rate = 1 with `PSC_EN=0`, else `PRESCALE+1` clocks). At `VALUE==0` an expiry event sets `INT_STATUS[0]` and reloads `LOAD` (or stops in one-shot mode). Period = `(LOAD+1)` ticks. |

## 13. Performance (measured, not assumed)

Because transactions are serialized per slave per direction, per-slave throughput
is one write and one read concurrently. Latency for the internal error target is
small and constant; peripheral latency is a defined number of cycles. The
verification environment measures achieved read/write throughput under contention
and records it in `docs/results.md`. No clock frequency, area, or power figure is
claimed anywhere in this repository — no technology library or physical
implementation is available in this environment.

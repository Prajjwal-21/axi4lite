# Protocol contract and assumptions

What the crossbar guarantees to its environment, what it assumes from it, and
where each claim is checked.  This document is the contract the RTL was built
against and the verification project was written to falsify; the ARM AXI4-Lite
specification defines the wider handshake laws, this file defines *this*
design's behaviour inside them.

Where a claim is machine-checked the check is named:

| naming | meaning |
|---|---|
| `ap_*` | an assertion in the RTL or in the independent checker (`tb/assertions/axil_protocol_checker.sv`) |
| `formal/<job>.sby` | a SymbiYosys proof job (`docs/verification_plan.md` has scopes and bounds) |
| `test_*` | a cocotb test (`tests/`) |
| *analysis* | a stated argument, re-derived in `docs/results.md` where it mattered |

## 1. Configuration the contract is stated for

| item | value |
|---|---|
| masters / real slaves | 2 / 3 (UART, GPIO, TIMER) + 1 internal error target |
| data width / strobes | 32 bit / 4 bytes |
| address width | 32 bit, region granularity 2^12 = 4 KiB |
| clock domains | 1 (single `clk`, synchronous active-high `rst`) |
| outstanding | at most 1 write and 1 read in flight per master, structurally |

All evidence in this repository is produced for this configuration.  The RTL
is parameterized (`NMST`, `NSLV_REAL`, `BASE_FLAT`, widths) but other
parameter values are **not** covered by the recorded proofs and tests.

## 2. Reset contract

* While `rst` is asserted the DUT drives **no VALID and no READY** on any
  master- or slave-facing channel.  No handshake can therefore complete, and
  no transaction can be accepted or discarded by the reset edge.
  (`ap_rst_blocks_ready`, `ap_rst_master_*`/`ap_rst_slave_*` in the RTL and
  checker; `formal/reset.sby`, BMC depth 16.)
* A transaction that was in flight when `rst` was asserted is **abandoned**,
  not resumed: after reset the DUT starts in its idle state, and the testbench
  masters/slaves restart their own state machines on the same edge.
* A master that holds VALID across a reset is fine as long as it follows the
  VALID-stable law; the DUT will simply accept it in the first post-reset
  cycle its slot is free.  The evidence's BFMs restart, which is the stricter
  case for the reset-inert property.

## 3. Handshake behaviour at the master boundary

The DUT asserts a READY only when it can accept the transaction into its
single slot, and deasserts it immediately when the slot is taken:

```
awready_o = ~rst & ~aw_pend_q & ~wr_wait_q & ~w_gnt_i
wready_o  = ~rst & ~w_pend_q  & ~wr_wait_q & ~w_gnt_i
arready_o = ~rst & ~rd_active_q & ~r_gnt_i
```

Consequences that form the contract:

* **Single outstanding per direction per master.**  A second AW/W/AR presented
  while one is in flight is *stalled* (READY low), never dropped, never
  accepted into a hidden second slot.  A master may therefore present the next
  transaction's VALID immediately after its response; the DUT will take it as
  soon as the slot frees.  (`ap_aw_one_outstanding`, `ap_w_one_outstanding`,
  `ap_ar_one_outstanding` in the checker count acceptances vs completions at
  the boundary; `formal/completion.sby` proves the boundary counters
  "completions never exceed acceptances and stay ≤ 1" for a free-phase
  environment up to its bound.)
* The DUT assumes the AXI VALID-stable law from masters: VALID stays high and
  the payload stays stable until READY is seen.  A master violating it loses
  its own transaction (the DUT may capture an unstable payload) but cannot
  corrupt the DUT: every capture is guarded by an accepted handshake, and the
  tests' checker enforces the law on the models so the suite tests a legal
  environment.
* READY deassertion is always legal; the DUT deasserts READY only when it
  captures the transaction, so no READY/VALID combinational loops exist.

## 4. The write path: AW and W are independent channels

This is the core crossbar behaviour and the place where every write-path bug
in this project's history lived.

* **Arrival order is free.**  The W may be captured before the AW, and the AW
  before the W.  Each half goes into its own registered slot; nothing is
  forwarded to a target until *both* are held:
  `w_req_o = (aw_pend_q & w_pend_q) ? aw_sel_q : 0`
  (`ap_w_req_needs_both`; `test_aw_w_arrival_orders` exercises AW→W, W→AW and
  simultaneous arrival, in solver-controlled order).
* **The pair is frozen once it is handed over.**  At the moment the *first*
  half is dispatched to the target, `wr_wait_q` rises (`wr_start = aw_done |
  w_done`) and stays up until the B completes.  While it is up, all three
  READYs are low, so no new AW/W can be captured under a half-dispatched pair
  and the address/select/data the target sees cannot change mid-transaction.
  (`ap_w_hold`, `ap_w_gnt_blocks_ready`; the historical bug this prevents -
  raising the flag only after *both* dispatches - would allow a second AW to
  overwrite `aw_pend_q`/`aw_sel_q` between the two dispatches, dispatching the
  first W to the second AW's target.  `formal/routing.sby` found that trace
  against the unfixed RTL; `test_second_aw_held_off` and mutation
  `M1-write-slot-hole` keep it pinned.)
* **A response is accepted only for a fully dispatched write.**  B is
  forwarded to the master only while
  `w_rsp_en = wr_wait_q & ~aw_pend_q & ~w_pend_q`, i.e. the target owns the
  write and has taken both halves.  For a compliant target this is a no-op;
  it makes the port immune to an out-of-contract target that answers early.
  (`ap_b_rsp_needs_full_dispatch` - a tautology over this RTL, added after
  mutation testing showed that no invariant pinned the mask; the read-side
  twin is `ap_r_rsp_needs_dispatch`.)
* **B is delivered exactly once** to the owning master; after `b_hs` the slot
  is released and the master may present its next write.  (`ap_b_hold`,
  `ap_b_needs_write` at the boundary; `formal/completion.sby` for
  no-duplicate/no-phantom completion at the boundary.)

## 5. The read path

* AR is captured into the read slot (`rd_active_q` rises at AR acceptance) and
  requested once: `r_req_o = ar_pend_q ? ar_sel_q : 0`.
* AR is dispatched to the target under the read grant; `rd_active_q` drops
  only at the R handshake (`r_hs = r_rsp_en & r_rvalid_i & rready_i`,
  `r_rsp_en = rd_active_q & ~ar_pend_q`).  A target that asserts R early
  cannot retire the slot before its AR was dispatched (the same masking
  argument as the write path; the original routing.sby counterexample was
  exactly an early RVALID).
* One AR/R per master in flight; the next AR is stalled, not dropped
  (`ap_ar_one_outstanding`).

## 6. Arbitration and fairness semantics

Per slave port and per direction there is an independent arbiter
(`rtl/axi_lite_arbiter.sv`):

* A **request** is a held one-hot target select from a master that has a
  transaction waiting for that target (write: both halves captured, not yet
  dispatched; read: AR captured, not yet dispatched).  Requests are dropped
  by the master itself as soon as the request has been handed to the target.
* The arbiter takes a request only when it is idle, and **holds the
  registered one-hot grant until the target-side response handshake**
  (`done = bvalid_i & bready_o` / `rvalid_i & rready_o`).  The grant is what
  selects the response path back to the master, so responses cannot be routed
  to a master other than the one that owns the pending transaction.
  (`ap_gnt_exclusive_w/r` at the crossbar; `ap_aw_hold`/`ap_b_hold`/
  `ap_ar_hold`/`ap_r_hold` at the boundary; `test_delayed_response_routing`
  and `M7-gnt-hold-off` in the mutation set.)
* **Selection is round-robin**: the masked-priority encoder rotates the
  request vector by a pointer that advances to *granted index + 1 (mod N)* on
  every grant.
* **Fairness is structural, not pointer-dependent, in this configuration:**
  because a request is retracted the moment its halves are handed over and
  the grant is held until the response, at any arbiter re-selection instant at
  most one master is still requesting (the one whose transaction is waiting).
  The pointer therefore only decides exact-tie order; starvation of a waiting
  master is impossible regardless of pointer state.  `docs/results.md` records
  the analysis and the mutation (`M6-rr-ptr-frozen`) that led to it - the
  frozen-pointer mutant is observationally equivalent for NMST=2 under this
  request/done discipline.

## 7. Address decoding and error handling

* `sel[i]` is one-hot and exhaustive: exactly one of the three regions or the
  internal error target is selected for every address
  (`ap_sel_onehot` in the decoder; `formal/decode.sby` proves the decoder's
  properties for arbitrary addresses).
* Decoding ignores `addr[REGION_LSB-1:0]` and compares
  `addr[ADDR_WIDTH-1:REGION_LSB]` against the region bases; the peripherals
  see `addr[7:0]`-style local offsets within their 4 KiB window (64-byte
  register space).
* Unmapped addresses are served by the internal error target - an
  always-ready DECERR respondent (`ap_bresp_is_decerr` /
  `ap_rresp_is_decerr`) - through the *same* arbitration and response-routing
  path as a real slave.  There is no bypass.  (`test_invalid_address_decerr`;
  the region assertions `ap_w_err_addr_unmapped` / `ap_r_err_addr_unmapped`
  prove the converse: the error target *only* ever sees unmapped addresses,
  and real slaves only ever see addresses of their own region.)
* Response codes: OKAY for normal register access; SLVERR for
  wrong-direction or unimplemented register offsets inside a region (each
  peripheral's contract, `docs/register_map.md`); DECERR for unmapped
  addresses.  A crossbar transaction that is never granted is impossible
  within the proof bounds (`formal/progress.sby`).

## 8. Payload integrity

* WSTRB, WDATA, AWADDR, AWPROT (and AR side) are forwarded **unmodified** and
  always from the master that owns the target's grant:
  `ap_payload_from_owner` (proven unbounded in `formal/routing.sby`; mutation
  `M8-awaddr-swap` is caught by it).
* The crossbar never fabricates, merges, or reorders responses; it does not
  interpret strobes.  Byte-enable semantics belong to the peripherals
  (`docs/register_map.md`), and a zero strobe has no register effect.
* `AWPROT`/`ARPROT` are forwarded but no privilege model is implemented; the
  signal is deliberately unused downstream (documented, lint-silenced).

## 9. Environment assumptions (what must be true outside the DUT)

* **Masters**: follow the VALID-stable law; may present transactions at any
  rate; may leave AW/W/AR VALID parked indefinitely (nothing is lost).
* **Slaves**: eventually complete the transactions handed to them.  *Safety*
  properties (routing, decode, reset, completion, payload provenance) hold
  against arbitrary slaves including ones that never answer - those are the
  `formal/routing.sby`/`completion.sby` environments.  *Liveness* (progress)
  is only asserted for bounded-latency slave models: `formal/progress.sby`
  uses slave models with a documented, finite response delay and holds the
  masters to channel deadlines (AW/R ≤ 16 cycles, full write tx ≤ 32 cycles);
  a real target that stalls forever will stall the transaction, by design.
* **Reset**: is synchronous, active high, may be asserted in any cycle (the
  progress/reset harnesses let it strike mid-transaction and restart).

## 10. What is deliberately not claimed

* **No AXI4 (or full AXI4-Lite) compliance claim.**  No ARM protocol suite
  was run; this document defines this design's subset contract and its proofs
  speak about *this* contract, not "AXI".
* No bursts, IDs, multiple outstanding transactions, exclusive access,
  ordering guarantees between separate transactions, cache/QoS attributes,
  clock-domain crossings, or power advice.
* No liveness claim for masters or slaves that violate §9.
* No timing/frequency, area, or power claims: `scripts/synth.ys` maps to
  Yosys internal gates only and produces cell/flop counts, not a
  technology-mapped implementation.
* No claim that the parameterized RTL is verified at parameter values other
  than the recorded configuration (§1).

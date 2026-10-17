# Verification plan

How this project's design is verified, which layer is expected to catch what,
and where every claim's raw evidence lives.  The recorded numbers are in
`docs/results.md`; every command in this document is independently runnable
from a clean checkout (`make ...` targets are wrappers around exactly these
commands).

The guiding idea: **layers overlap on purpose, but each one is reported for
what it alone can catch.**  A self-checking test suite that never fails is not
evidence of quality - so the suite itself is measured with mutation testing
(section 7), and the boundary between what simulation and what formal can see
turned out to be the most interesting result of the project (two real RTL
defects, one found by formal, one found by directed simulation; see
`docs/results.md`).

## 1. Layers at a glance

| # | layer | artifact | runs via | can catch | cannot catch |
|---|---|---|---|---|---|
| 1 | Lint | `scripts/lint.sh` | `make lint` | structural/style issues, width/sensitivity mistakes, unused/undriven signals - 28 configurations (every RTL module, checker, and TB top, plain + `-DAXIL_ASSERTIONS`) | anything behavioural |
| 2 | Self-checking regression | `tests/*.py` (38 tests) | `make test` / `make regress` | directed scenario bugs, functional corruption, hangs (per-test cycle timeouts) | illegal-target corner cases simulation models cannot produce |
| 3 | Independent protocol checker | `tb/assertions/axil_protocol_checker.sv` (26 checks), a second implementation of the boundary rules, instantiated at every master and slave boundary | inside every simulation run (aborts on violation) | VALID stability/hold, one-outstanding, response-without-request, wrong response codes, reset activity - *at whichever boundary a bug shows up* | bugs confined to the DUT interior that never perturb a boundary |
| 4 | In-RTL assertions | 57 named `ap_*` assertions compiled with `-DAXIL_ASSERTIONS` | inside every simulation run **and** every formal job (same text, Yosys-compatible boolean form) | state invariants: slot discipline, gating, ownership, region consistency, response contracts | liveness; multi-cycle properties Yosys 0.70 cannot express |
| 5 | Reference model + scoreboard | `tb/cocotb/axil_refmodel.py`, `axil_scoreboard.py` | inside regression | wrong data/register effects, missed or duplicated responses, address/response mismatches - computed independently of the BFMs | anything the reference model itself does not model (it is deliberately simple) |
| 6 | Functional coverage | `tb/cocotb/axil_cover.py`, `results/coverage/summary.md` | `scripts/coverage.sh` | *gaps*: which required behaviours were never exercised (declared-bins, hit only by observed traffic, never by BFM intent) | bugs - coverage says what was hit, not that it was hit correctly |
| 7 | Structural coverage | Verilator line/toggle/branch (5.052) | `scripts/coverage.sh` | untested logic and stuck bits; honest unexercised-toggle inventory (much of the toggle space is address bits and unused PROT) | quality of the exercised paths |
| 8 | Formal | `formal/*.sby` (5 jobs) | `make formal` / `make formal-deep` | corner cases beyond any stimulus: arbitrary addresses (decode), arbitrary reset strikes, free masters/slaves (routing/completion), bounded liveness (progress) | bounded jobs only cover their bound; routing covers an invariant subset only (section 6) |
| 9 | Mutation testing | `scripts/mutation_test.py`, `results/mutation/summary.md` | `make mutation` | *test-suite quality*: which injected defects are caught by which layer, and which survive everything | mutants are hand-crafted; a survivor may be equivalent (argued per case) |
| 10 | Synthesis | `scripts/synth.ys` | `make synth` | gross area/state explosions, latch inference, unintended logic growth | timing/area signoff (generic gate mapping only) |

## 2. Simulation environment

One cocotb regression drives four DUTs (`scripts/run_tests.py --list`):

| DUT | top | composition | tests |
|---|---|---|---|
| `crossbar` | `tb/harness/crossbar_checker_top.sv` | the crossbar with two Python masters and three stallable Python slave models; checker at all five master boundaries and three slave boundaries | 14 |
| `peripherals` | `tb/harness/peripheral_unit_harness.sv` | UART, GPIO and TIMER register files behind flat AXI4-Lite ports, no crossbar | 14 |
| `subsystem` | `tb/harness/subsystem_checker_top.sv` | `peripheral_subsystem` (crossbar + real peripherals) with Python masters and external-device models (UART loopback, GPIO pins, timer) | 7 |
| `probe` | `tb/harness/conv_probe.sv` | timing-convention self-checks for the testbench itself | 3 |

Testbench building blocks (all under `tb/cocotb/`, all reusable across DUTs):

* `axil_master.py` - master driver/agent (configurable per-channel stall
  patterns, its own RNG, records expected outcomes);
* `axil_slave_model.py` - slave models with per-channel stall patterns,
  per-target latency, and fault injection (wrong response, duplicate response,
  swallowed response);
* `axil_monitor.py` - passive boundary monitors; the only writers of coverage
  and the scoreboard (nothing is ever recorded from driver *intent*);
* `axil_spec.py` - parses `rtl/axil_defs.svh` at run time, so the testbench and
  the RTL cannot disagree about the address map or register offsets;
* `axil_refmodel.py` + `axil_scoreboard.py` - register-level reference model
  and served-transaction matching;
* `axil_cover.py` - the functional coverage collector (section 6);
* `axil_common.py`, `axil_pinned.py`, `axil_env.py` - shared utilities and
  environment composition.

The **probe DUT** deserves a note: `test_timing_convention`,
`test_cycle_counting` and `test_reset_holds_register` verify the testbench's
own probe semantics (drive at falling edge, sample settled at rising edge
+ `PROBE_NS`) against known waveforms, so a timing misunderstanding in the
testbench itself is caught as a test failure rather than silently biasing
every other DUT's results.

## 3. In-RTL assertions and the independent checker

**In-RTL, 57 named assertions** (`-DAXIL_ASSERTIONS`), written in the boolean
style `!premise || conclusion` so the identical text elaborates under
Verilator `--assert` *and* Yosys `-formal` (SymbiYosys 0.70 has no SVA):
decoder 2, arbiter 1, crossbar 11, master port 17, slave port 7, error target
7, register file 7, UART 2, TIMER 2, GPIO 1.  Grouped by what they pin:

* **slot discipline** - `ap_w_req_needs_both`, `ap_wait_blocks_aw/w`,
  `ap_bvalid_gated`, `ap_active_blocks_ar`, `ap_ar_pend_implies_active`;
* **gating/reset** - `ap_rst_blocks_ready/valid` (both boundary wrappers),
  `ap_w_gnt_blocks_ready`, `ap_r_gnt_blocks_ready`, `ap_bpending_blocks_aw/w`;
* **ownership/routing** - `ap_payload_from_owner`, `ap_w_gnt_addr_match`,
  `ap_r_gnt_addr_match`, `ap_gnt_exclusive_w/r`, `ap_gnt_onehot`,
  `ap_mst_w_req_onehot`, `ap_w_sel_decodes_addr`;
* **region/decoder** - `ap_sel_onehot`, `ap_hit_def`, `ap_w/r_addr_in_region`,
  `ap_w/r_err_addr_unmapped`;
* **responses** - `ap_bresp_is_decerr`, `ap_rresp_is_decerr`,
  `ap_rdata_zero`, `ap_b_rsp_needs_full_dispatch`, `ap_r_rsp_needs_dispatch`
  (these two were added after mutation testing showed the response masks were
  not pinned by any invariant - see `docs/results.md`);
* **peripheral contracts** - register-file both-halves/blocked rules, IRQ
  gating, `ap_txbusy_holds`, `ap_expire_needs_en`.

**Independent checker** (`tb/assertions/axil_protocol_checker.sv`, 26 labelled
checks): written from the protocol rules, not from the RTL, and instantiated
at *every* master-facing and slave-facing boundary in the crossbar and
subsystem harnesses.  It checks VALID-stability and VALID-hold-until-READY on
all five channels (`ap_*_stable`, `ap_*_hold`), at-most-one-outstanding at the
master boundary (`ap_aw/w/ar_one_outstanding`), no-response-without-request
(`ap_b_needs_write`, `ap_r_needs_read`), response codes
(`ap_b/r_resp_code`), and reset silence at both boundaries (10 `ap_rst_*`
checks).  This is the layer that caught the arbiter grant-stability mutation
(M7) in simulation, and it aborts the simulator on violation, so runs cannot
silently sail past a boundary-rule breach.

## 4. Reference model and scoreboard

`axil_refmodel.py` models every register of the three peripherals (reset
values, RW/RO/WO direction rules, byte strobes, W1C, timer reload/prescaler,
GPIO direction/synchronizers, UART TX/RX state) independently of the RTL.
`axil_scoreboard.py` matches every observed response against the expected one
from the driver's ledger, transaction by transaction, per master.  Register
effects are cross-checked by reading back through the same interface
(read-back checks are part of the directed tests; randomized tests compare
every response against both the ledger and the reference model).

## 5. Coverage

**Functional** (`axil_cover.py`): coverpoints and bins are declared up front
and can only be hit from *monitored boundary traffic* - the collector cannot
see BFM intent, so a bin is hit only if the corresponding behaviour actually
crossed a boundary (the collector is instantiated in the crossbar DUT's
environment, which declares the crossbar cover group).  Crossbar cover
groups: target per master per direction
(including the error target), response code per master per direction,
backpressure depth bins per channel (`0`,`1`,`2-4`,`5-16`,`17+`), WSTRB
patterns, same-cycle concurrency (write/write, read/read, and read+write), and
per-slave activity.  The collector flushes to JSON at cocotb shutdown; the
rendered report is `results/coverage/summary.md`.  Unhit bins remain visible in
the report - they are reported, not hidden.

**Structural**: Verilator 5.052 line/toggle/branch coverage for the crossbar
and the full subsystem, collected over the seed-1 build and merged with
`verilator_coverage`; `scripts/coverage.sh` regenerates everything.  The
structural numbers are quoted with their seed caveat in
`docs/results.md`; the toggle denominator includes address bits that the map
never exercises (documented, not "fixed" with artificial tests).

## 6. Formal verification

Five jobs, deliberately different claim levels - the joint between them is
where formal's real strength lives:

| job | method | bound | claim scope | environment assumptions | recorded runtime |
|---|---|---|---|---|---|
| `formal/decode.sby` | k-induction (`prove`) | unbounded | decoder one-hot/exhaustiveness + region boundaries for **every** 32-bit address | none (`addr` is a free input) | < 1 s |
| `formal/routing.sby` | k-induction (`prove`, basecase+induction) | **unbounded** | the RTL invariant assertions: ownership, region consistency, gating, payload provenance (`-DAXIL_FML_RTL_ONLY` removes all harness transaction properties) | masters and slaves are **fully free inputs**; the single assumption is `ap_init_reset` (reset asserted at time 0) | 13 s |
| `formal/reset.sby` | BMC | 16 cycles | reset inertness at all boundaries (no VALID/READY while `rst`), including reset strikes mid-transaction | free boundary inputs, `rst` free to strike any cycle | 76 s |
| `formal/completion.sby` | BMC | 24 cycles | the boundary transaction properties (harness, active here): no response without request, response ownership and payload match, no duplicate/phantom completion, at most one outstanding per master | free VALIDs/BREADYs at both boundaries; init-reset assumption only | ~69 min |
| `formal/progress.sby` | BMC | 64 cycles | bounded liveness: scripted masters with channel deadlines (AW/R ≤ 16 cycles, write transaction ≤ 32) against bounded-latency slave models; safety *and* progress at every state | scripted BFMs + documented finite slave-latency models; no other assumptions | see `docs/results.md` |

Reading the table: `routing` is the only **unbounded** statement, and it
deliberately proves the *RTL-side* invariants over a fully free environment -
which is exactly what makes it strong (any master/slave behaviour, any
address, forever) and exactly what bounds its property set (no transaction
bookkeeping).  `completion` restores the transaction bookkeeping but is
bounded; `progress` adds liveness but needs scripted, bounded-latency
partners.  Every job's exact assumptions are stated in its header comment and
summarized in `docs/results.md`; nothing in this repo claims more than its
job's row.

## 7. Mutation testing

`scripts/mutation_test.py` injects one hand-crafted defect at a time into a
throwaway copy of `rtl/`, runs the full regression against it in isolation
(`AXIL_RTL_DIR`/`AXIL_RESULTS_DIR` redirect the runner into the workspace),
and classifies honestly: `DETECTED` (failing test(s)), `SURVIVED` (a real
suite gap), `TIMEOUT`/`BUILD_ERROR` (never counted as a catch).  The baseline
entry (no edit) must pass, or the harness itself is broken and no verdict
means anything.

With `--formal` the **unbounded routing proof also runs against every
mutant's own RTL copy**, and both verdicts are recorded side by side.  This is
what turned the study from a score into a map of what each layer can see: of
nine mutants, six are caught by simulation, five are refuted by the routing
proof, and the overlaps are exactly the interesting part -
`M2`/`M2b` (response-mask removal) are *formal-only* catches, because no
compliant simulation target ever answers early; `M1` (write-slot hole) and
`M7` (grant-hold removal) survive the routing invariants but are caught in
simulation by the boundary checker.  `M6` (frozen round-robin pointer) is a
proven-observationally-equivalent survivor for this configuration.  Full
table, mechanisms, and per-mutant reproduction commands:
`results/mutation/summary.md`, analysis in `docs/results.md`.

## 8. Required scenarios → tests

| # | required scenario | test(s) |
|---|---|---|
| 1 | simultaneous access, distinct slaves | `test_simultaneous_distinct_slaves` (crossbar), `test_two_masters_concurrent_access` (subsystem) |
| 2 | two masters contending for one slave | `test_simultaneous_same_slave`, `test_contention_round_robin` |
| 3 | AW/W arrival order variety | `test_aw_w_arrival_orders` (crossbar and peripherals - includes both orders plus same-cycle) |
| 4 | backpressure on every channel | `test_channel_backpressure` (+ functional backpressure bins) |
| 5 | delayed / variable slave response, response routing | `test_delayed_response_routing` |
| 6 | WSTRB byte enables incl. zero strobe | `test_wstrb_partial_and_zero`, `test_wstrb_zero_and_partial`, `test_zero_strobe_has_no_effect` |
| 7 | invalid address → DECERR, no side effects | `test_invalid_address_decerr`, `test_address_map_and_responses` |
| 8 | reset: idle and mid-transaction | `test_reset_idle_and_in_flight`, `test_reset_state_and_ids`, `test_reset_holds_register` (probe and peripherals) |
| 9 | concurrent read + write from one master | `test_concurrent_read_write`, `test_read_before_write_same_cycle` |
| 10 | randomized multi-master traffic, reproducible | `test_randomized_multi_master`, `test_randomized_register_traffic` |
| 11 | fault injection (wrong/duplicate/swallowed response) detected | `test_fault_injection_detected` (+ mutations `M4`/`M5`/`M8` as RTL-level injections) |
| 12 | deadlock detection | `test_deadlock_is_detected` (deliberately unresponsive target; the test must fail fast, and the suite must attribute the hang) |

Beyond the mandated twelve: `test_second_aw_held_off` pins the historical
write-slot hole, `test_checker_self_test` proves the checker itself reacts
(a checker that never fires is not evidence), and the per-peripheral suites
cover UART framing/loopback/RX errors, GPIO synchronization/edges and TIMER
period/prescaler/W1C/first-expiry semantics at the register level.

## 9. Reproducibility, seeds, determinism

* One command per layer (`make lint|test|regress|coverage|formal|
  formal-deep|mutation|synth`), no interactive state.
* Seeds: `scripts/run_tests.py --seed N` (or `--seeds 1,2,3,7`).  The runner
  exports `COCOTB_RANDOM_SEED` for each simulator process and records it in
  the xUnit metadata; test stimulus derives its RNGs from `cocotb.RANDOM_SEED`
  *inside* the test (deterministic per seed+test; cocotb reassigns its
  module-level seed per test, which is why long-lived components such as the
  coverage collector read the environment variable instead).
* The runner builds one simulator per (DUT, seed) and reruns the full module;
  a seed failure is reproduced with `--seed N` and, if needed, `--waves`.
* Every recorded number in `docs/results.md` was produced by the commands in
  this document on the tool versions listed there; nothing is estimated.

## 10. Known limits (stated, not hidden)

* `completion` and `progress` are **bounded** (24 and 64 cycles); only
  `routing` and `decode` are unbounded, and they cover their invariant
  subsets, not liveness.
* Progress is proven against the scripted, bounded-latency environment of its
  harness; a real slave that never responds stalls its transaction forever, by
  design (`docs/protocol_assumptions.md` §9).
* Structural coverage is single-seed; functional coverage is recorded for the
  suite as run.  Both reports include the unhit/uncovered inventory.
* The evidence is for the recorded configuration (2 masters, 3 peripherals +
  error target); other parameter values are untested.
* No UVM, no ARM AXI compliance suite, no CDC, no timing or power claims.
* Surfer is the waveform viewer used for debugging (not part of the required
  flow): Verilator trace dumps (`--waves`) opened with `surfer <dump>.vcd`,
  or small VCD analysis scripts for automated checks.

## 11. How to run

```sh
make help          # every target below, self-documented
make venv          # once: Python 3 venv + cocotb (requirements.txt)
make lint          # 28 Verilator lint configurations
make test          # full regression, seed 1 (38 tests, 4 DUTs)
make regress       # seeds 1,2,3,7 -> 152 tests
make coverage      # functional + structural coverage -> results/coverage/
make formal        # decode + reset + routing (unbounded)   [fast]
make formal-deep   # progress (BMC 64) + completion (BMC 24) [slow]
make mutation      # mutation suite incl. formal cross-check -> results/mutation/
make synth         # generic synthesis -> results/synth/synth_peripheral_subsystem.log
```

Raw equivalents (what the Makefile runs): `scripts/lint.sh`,
`.venv/bin/python scripts/run_tests.py --seeds 1,2,3,7`, `scripts/coverage.sh`,
`sby -f formal/<job>.sby`, `.venv/bin/python scripts/mutation_test.py --formal`,
`yosys -l results/synth/synth_peripheral_subsystem.log -s scripts/synth.ys`.
CI (`.github/workflows/ci.yml`) runs the same commands.

# Recorded results

Every number in this file was produced by the commands quoted next to it on
the toolchain of §8; the original evidence was recorded on 2026-10-17 and
every command was re-run end-to-end on 2026-10-18 with identical verdicts
(the only refreshed numbers are the ones quoted below, which are the current
deterministic outputs of their commands).  Raw evidence paths are given per
section; `docs/verification_plan.md` §11 maps every command to its `make`
target.  Nothing here is estimated, and the honest negative results (unhit
coverage bins, surviving mutants, bounded claim levels) are as much part of
the record as the passes.

The RTL was frozen as two revisions during this phase:

* **r0** - the design as verified initially.
* **r1** - r0 plus two *response-contract* assertions in
  `rtl/axi_lite_master_port.sv` (`ap_b_rsp_needs_full_dispatch`,
  `ap_r_rsp_needs_dispatch`), added after mutation testing showed that the
  response masks were not pinned by any invariant (§5).  Both are logical
  tautologies over the r0 RTL (`b_hs` implies `w_rsp_en` implies the mask
  terms; `r_hs` implies `~ar_pend_q`), so they remove no states and add no
  constraints: every proof and test verdict recorded on r0 transfers to r1
  unchanged.  To make that concrete rather than asserted, the fast formal
  jobs and the full regression were rerun on r1 (§1, §4) - and the mutation
  study runs against r1 throughout.

## 1. Regression

Command: `make regress` = `scripts/run_tests.py --seeds 1,2,3,7`.

* **152 passed, 0 failed, 0 skipped** across 16 module runs (38 tests per
  seed x 4 seeds; per DUT: crossbar 14, peripherals 14, subsystem 7,
  TB-probe 3).  This is the r1 run; the r0 run before the two contract
  assertions reported the same 152/0/0, consistent with the tautology
  argument in the header.
* Every test is self-checking: failures are raised by the independent
  checker, the RTL assertions, the scoreboard, or explicit expectation
  mismatches - never by a human reading a waveform.  Per-test cycle timeouts
  (512-cycle default) turn hangs into fast, attributed failures.

Evidence: `results/cocotb/summary.json`, one xUnit file per DUT and seed,
per-test logs (including the assertion/abort lines) under `results/cocotb/`.

## 2. Lint

Command: `make lint` = `scripts/lint.sh` (Verilator 5.052 `-Wall`).

* **LINT CLEAN (28 passes)**: 11 RTL modules x {plain, `-DAXIL_ASSERTIONS`},
  the boundary checker x {slave, master} parameterizations, and the four TB
  tops - including all harnesses that instantiate the checker.  The full
  console transcript is recorded at `results/lint/lint_console.log`
  (written by `scripts/lint.sh` itself).

Evidence: `results/lint/`.

## 3. Coverage

Command: `make coverage` = `scripts/coverage.sh` (functional collector +
Verilator `--coverage-line --coverage-toggle --coverage-branch`, seed-1
regression, merged with `verilator_coverage`).

### Functional (declared bins, hit only by monitored boundary traffic)

Recorded snapshot (seed 1): the crossbar collector reports **55/84 bins hit
(65.5%)**.  The 29 unhit bins, by category - all of them visible per-bin in
`results/coverage/summary.md`:

* **deep backpressure buckets: 19 of 25** (five channels x bins
  `1`/`2-4`/`5-16`/`17+`; the recorded stall patterns keep almost every wait
  at 0-1 cycles, with one `aw 5-16` hit as the exception),
* **SLVERR response codes: 4** (no recorded crossbar-DUT stimulus produces
  SLVERR - its slave models answer OKAY, and the crossbar cover group is
  declared only for this DUT; register-level SLVERR semantics are exercised
  on the peripherals and subsystem DUTs by their checks and scoreboard),
* **DECERR response code and error-target bins: 4** (one direction per
  master; `test_invalid_address_decerr` drives the unmapped path, but the
  recorded run hit it in one direction per master),
* **per-master read+write overlap (`m0_both`, `m1_both`): 2** - a gap found
  while writing this section: every recorded concurrency test places the read
  on one master and the write on the other, and no recorded test drives a
  *single* master's read and write in flight at the same time, so the bins
  are correctly unhit.  The collector is not at fault (it samples every
  settled cycle); the stimulus simply never asked.  Recorded as a stimulus
  gap rather than papered over.

### Structural (Verilator 5.052, seed 1)

Merged totals: **lines 380/401 (94.8%)**, **toggles 16417/26540 (61.9%)**,
**branches 507/562 (90.2%)**; `rtl/` only: **lines 299/304 (98.4%)**,
**toggles 13488/20862 (64.7%)**, **branches 409/440 (93.0%)**.  Per-file
tables and `verilator_coverage` annotations:
`results/coverage/summary.md`, `results/coverage/annotate/`.  The r1 numbers
are identical to r0 at file granularity (the two added assertions do not
perturb line/toggle/branch instrumentation of the data path).  Caveats
recorded next to the numbers: single seed; the toggle denominator includes
address bits above the 4 KiB region granularity, attribute bits the design
forwards but never interprets, and fully-hardwired constants - the per-file
tables show where the unmatched toggles live instead of hiding them.

## 4. Formal

Commands: `sby -f formal/<job>.sby` from the repository root (four fast jobs:
`make formal`, which also runs the unbounded `progress` PDR proof; the slow
BMC `completion` alone is `make formal-deep`).

| job | mode / bound | result | solve time | evidence |
|---|---|---|---|---|
| `decode` | k-induction, **unbounded** | **PASS** | < 1 s | `results/formal/decode.txt` |
| `routing` | k-induction, **unbounded** | **PASS** | 13 s | `results/formal/routing.txt` |
| `reset` | BMC 16 | **PASS** | 76 s | `results/formal/reset.txt` |
| `completion` | BMC 24 | **PASS** | 46 m | `results/formal/completion.txt` |
| `progress` | PDR, **unbounded** | **PASS** | 7 s | `results/formal/progress.txt` |

The sby workdirs (`formal/<job>/`) are regenerable build products and are
git-ignored; the committed evidence files under `results/formal/` are the
verdict tails of each run's sby log (including the `DONE (PASS, rc=0)` line
and the engine summary).  Local reruns also leave the full logs in the
workdirs and print to the console.

What the two strong rows mean, exactly:

* `decode` reports `successful proof by k-induction` for every one of the
  2^32 addresses: the address decoder is one-hot, exhaustive, and each region
  comparison is bounded by its base and size.  No environment assumption.
* `routing` reports `successful proof by k-induction` over **all reachable
  states** of the crossbar hierarchy with *every master- and slave-side input
  free* (the proof may pick any VALID/READY/payload sequence whatsoever), from
  the single documented assumption that reset is asserted at time 0.  It
  covers the RTL-side invariant set: slot discipline, grant exclusivity and
  hold-until-done, address/region consistency of every block seen by a slave,
  payload provenance, and the reset and response-contract assertions.  It does
  *not* cover transaction bookkeeping (no counters) - that is `completion`'s
  job, and it is bounded.

`completion` (BMC 24) proved the harness transaction properties: no response
without a request, response ownership (a master's B/R comes from the target
its mapping says, with matching code and data), no duplicate or phantom
completion, at most one outstanding write/read per master, and the
`ap_one_outstanding` boundary discipline.  `progress` (PDR, unbounded)
proves bounded-latency progress for scripted masters against the harness's
deadline windows (AW/R within 16 cycles, whole write transaction within 32)
against the documented bounded-latency slave models.

r1 transfer: the two r1 assertions are tautologies over r0 (see the header),
so the r0 `completion`/`progress` verdicts apply to r1; `routing`, `decode`
and `reset` were additionally **rerun on r1** and all passed again (13 s / <1 s
/ 76 s), which is the empirical confirmation of the transfer argument.

### 4.1 The progress failure that turned out to be a harness bug

The first run of `progress` this phase FAILED at step 36 of 64 on
`u_m0.ap_tx_deadline`.  Root-cause analysis exonerated the DUT: the recorded
failure trace shows the crossbar holding the AW half pending and never
asserting `w_req_o` - it had correctly not dispatched a half-pair - while the
harness's *scripted-master* BFM had inferred W completion from its own state
machine.  That inference breaks in exactly the case the crossbar is built
for: W may complete during the BFM's AW phase, because the crossbar consumes
the two write halves in either order.  The BFM now latches the W handshake
event (`w_done_q`, derived from `w_hs = wvalid && wready`) and drives its
deadline bookkeeping from the latched event; the DUT was not changed.  This
is recorded because it is evidence about the flow itself: a bounded-liveness
counterexample had to be attributed to *either* the design *or* the
environment, and the trace decided it - which is precisely why the progress
harness's environment (scripted BFMs with deadlines, bounded-latency slave
models) is documented next to the claim instead of being implicit.

After the BFM fix, the z3 re-run at depth 64 turned out to be infeasible on
a laptop: per-step solve time grows super-linearly (~5 s at step 20, ~1.5
min at step 34, ~5-6 min per step by steps 41-48; step 49 alone stalled for
more than 27 minutes and that run was terminated at ~2 h without reaching a
verdict).  The properties behind `progress` are safety invariants (the
harness wait counters bounded by their limits), so the job was re-targeted
from incremental BMC to Property-Directed Reachability (`mode prove` +
`abc pdr`), which computes an over-approximation of the reachable states
instead of unrolling: it proved **all 108 assertion outputs unbounded in
~6-7 s** - a strictly stronger claim than any BMC depth.  The proof was
shown binding by re-running it once with a deliberately sabotaged
environment (a slave model answering the wrong response code, reverted
afterwards): the engine there reported **FAIL within ~5 s**, so a green
PASS cannot be vacuous.  The sabotaged run's sby summary prints
`DONE (ERROR, rc=16)` only because rendering the counterexample trail
crashed on an unrelated tooling issue (`yosys-witness` cannot import its
`click` dependency); the binding evidence is the engine verdict line
`engine_0 (abc pdr) returned FAIL`.

## 5. Mutation testing

Command: `make mutation` = `scripts/mutation_test.py --formal` (baseline + 9
mutants; each mutant gets the full regression in an isolated workspace **and**
the unbounded `routing` proof against its own RTL copy).

| mutant | area | simulation | routing.sby | how it is caught |
|---|---|---|---|---|
| `M0-baseline` | control | SURVIVED (as required) | PASS | control |
| `M1-write-slot-hole` | write commit | **DETECTED** | PASS | sim: independent checker `ap_w_stable` + timeouts; formal: `completion` harness `ap_one_outstanding` (probe, §5.3) |
| `M2-rsp-mask-off` | write response gating | SURVIVED | **FAIL** | formal: `ap_b_rsp_needs_full_dispatch` (1.8 s) |
| `M2b-rsp-mask-off-read` | read response gating | SURVIVED | **FAIL** | formal: `ap_r_rsp_needs_dispatch` (1.4 s) |
| `M3-wstrb-drop` | W payload capture | **DETECTED** | PASS | sim: functional mismatch (expected `0xffffff00`, read `0xaa000000`) |
| `M4-decode-drop-last` | address decoder | **DETECTED** | **FAIL** | both: RTL assertion `ap_r_err_addr_unmapped` (basecase, 1.0 s) |
| `M5-bresp-okay` | error target | **DETECTED** | **FAIL** | both: `ap_bresp_is_decerr` (induction, 2.5 s) |
| `M6-rr-ptr-frozen` | arbiter fairness | SURVIVED | PASS | equivalence argument, §5.4 |
| `M7-gnt-hold-off` | arbiter hold-until-done | **DETECTED** | PASS | sim: boundary checker `ap_aw_hold` (slave side) + timeouts; d16 probe of `completion` also passes (§5.2-5.3) |
| `M8-awaddr-swap` | slave-port payload mux | **DETECTED** | **FAIL** | both: `ap_payload_from_owner` (1.1 s) |

Summary: 6/9 mutants caught by simulation, 5/9 refuted by the unbounded proof,
overlap on M4/M5/M8, and two mutants that only one side can see (M2/M2b
formally, M1/M7 in simulation).  Rejecting both extremes - "simulation
suffices" and "formal suffices" - is the concrete result of this section.
Probe extracts for M1 and M7: `results/mutation/probes/` (with rerun
commands).

### 5.1 The response-mask mutants (M2, M2b) and the assertion gap they closed

Mechanism (M2): with `w_rsp_en = wr_wait_q` (the mask `& ~aw_pend_q &
~w_pend_q` removed), a target that asserts B *before it has taken both write
halves* completes the write early; the remaining half then turns the next AW
into a mixed transaction (old W glued to a new AW) before the port deadlocks.
The damage requires an out-of-contract target, which no compliant simulation
model produces - hence SURVIVED - and it is *invisible* to per-master
provenance checks because the mixing is within one master.

This mutant also survived the original routing proof (r0, before the contract
assertions): the pre-assertion run is preserved at
`results/mutation/M2-routing-r0-before-contract-assertions.log`.  That was a
real assertion gap, not a tool limit: nothing pinned the masks.  The fix was
two contract assertions in the RTL (r1):

* `ap_b_rsp_needs_full_dispatch: !b_hs || (~aw_pend_q & ~w_pend_q)`
* `ap_r_rsp_needs_dispatch:      !r_hs || ~ar_pend_q`

Both are tautologies over r0 (they restate the mask the data path already
applies), so they do not constrain behaviour - they only make the mask
checkable.  With them, `routing` refutes M2 at `ap_b_rsp_needs_full_dispatch`
(1.8 s) and M2b at `ap_r_rsp_needs_dispatch` (1.4 s).  This is the
verification-of-the-verification loop the plan was built around: mutation
testing found that a *fix* was unverified, and the formal flow was
strengthened until it pinned the fix.

### 5.2 M1 and M7: invisible to the unbounded invariants, and why

M1 (write-slot hole: `wr_start = aw_done & w_done`) reopens the historical
window in which a second AW is accepted while the first W is still
un-dispatched.  Simulation catches it immediately and precisely - the
independent checker aborts on `axil_protocol_checker.sv:166
gen_slave_checkers[0].u_chk.ap_w_stable` (a slave saw W data change under a
held VALID) and other tests fail with attributed timeouts.

The unbounded routing proof **passes** M1, and the reason is structural, not
an oversight: the corruption is intra-master (one master's two writes glued
together), so per-master provenance predicates hold, and the boundary
bookkeeping that *would* see it lives in the harness property set that
`-DAXIL_FML_RTL_ONLY` removes from the routing job by design.  M7 (arbiter
re-selects mid-transaction) has the same split for the same reason: its
damage is a slave-boundary VALID/payload-stability violation, which the
simulation checker owns - it aborts on
`axil_protocol_checker.sv:142 gen_slave_checkers[0].u_chk.ap_aw_hold` (a slave
saw AWVALID deassert before AWREADY when the grant moved, plus attributed
timeouts elsewhere) - and the RTL invariant set does not encode a stability
rule of that shape.

### 5.3 Restoring the formal view of M1 (demonstrated probe)

`completion`'s property set includes `ap_one_outstanding` (no second
AW/W/AR acceptance while one is outstanding - the boundary bookkeeping
removed from routing).  Running `completion` against M1's RTL copy at a
reduced depth of 16 refutes the mutant **in ~2 s of solver time**:

```
Assert failed in axil_crossbar_harness: ap_one_outstanding
```

So M1 is *not* a "formal cannot see it" case: the full-depth job (24, ~1 h)
already contains the property that catches it, and the reduced-depth probe
demonstrates the refutation cheaply
(`results/mutation/probes/M1-completion-d16.txt`).

The same probe was run on M7, and it **passes** at depth 16
(`results/mutation/probes/M7-completion-d16.txt`) - the expected result once
the mechanisms are lined up.  M7 breaks slave-boundary VALID stability
(`ap_aw_hold`: AWVALID drops before AWREADY when the grant moves
mid-transaction), and the harness property set - master-boundary transaction
bookkeeping plus slave-side *payload* ownership, which a grant move to
another legitimate requester preserves - encodes no stability rule of that
shape.  M7 is therefore a genuine simulation-only catch in this study; the
edge of the current Yosys-compatible property set is recorded here rather
than papered over (what would close it: a slave-boundary stability monitor
with the same state-based formulation as the checker, tracked as future
work in `docs/verification_plan.md` §10).

### 5.4 M6: the honest survivor

M6 freezes the round-robin pointer (`gnt <= rr_gnt` loses its pointer
update).  It survives both simulation and the unbounded proof - and the
unbounded proof is the argument that it *should*: in this configuration
(NMST=2) requests are retracted at dispatch and the grant is held until the
response, so at every arbiter re-selection instant at most one master is
requesting; the pointer is consulted only for exact ties at startup, where
both variants pick master 0.  The mutant is therefore observationally
equivalent for NMST=2 - a survivor that is reported as an equivalence, with
its reasoning, rather than silently counted as a gap (and, notably, one that
a wider NMST configuration could turn into a real test).

## 6. Synthesis

Command: `make synth` = `yosys -l results/synth/synth_peripheral_subsystem.log
-s scripts/synth.ys` (generic mapping of `peripheral_subsystem`).

* **4,774 cells**, **773 flip-flops** (641 `$_SDFFE_PP0P_`, 41
  `$_SDFFE_PP1P_`, 55 `$_SDFF_PP0_`, 32 `$_SDFF_PP1_`, 4 `$_DFF_P_`), 4
  submodule parameterizations (crossbar + 3 register files); 1.17 s, 44 MB
  peak.  (The 4,736-cell figure recorded earlier in the project predates the
  final RTL freeze; the current RTL re-synthesizes to 4,774 deterministically
  - rerun `make synth` twice and the stat block is bit-identical.)

This is a generic-gate count with no timing model - it demonstrates that the
design synthesizes cleanly and that the state count is small and explicable,
nothing more.  No area/timing/power claim is made.

## 7. Defects found during the project

Recorded because the point of a verification story is what it caught:

1. **The write-slot hole** (found by the formal flow during bring-up of the
   boundary properties).  The "write in progress" state was raised only after
   *both* halves were dispatched; between the two dispatches a second AW
   could be accepted and the first W dispatched to the second AW's target.
   Fixed to `wr_start = aw_done | w_done`; the property involved
   (`ap_one_outstanding`) is now proven in `completion`, pinned by
   `test_second_aw_held_off`, and re-breakable by `M1` (§5.2-5.3).
2. **The early-response retention hole** (same formal bring-up; the class
   including a second AR accepted and then dropped by a shared pending flag).
   Fixed by the response masks `w_rsp_en`/`r_rsp_en`; *then* mutation testing
   (this phase) showed the fix was not pinned by any invariant (§5.1) and the
   r1 contract assertions were added, with before/after evidence.

Both are the kind of defect that survives directed simulation for months: the
first needs the two write halves split across cycles, the second needs a
target outside the protocol contract.

## 8. Toolchain and environment

Recorded by `scripts/run_tests.py --tool-versions`
(`results/tool_versions.txt`):

| tool | version |
|---|---|
| Verilator | 5.052 (Homebrew, macOS arm64) |
| Yosys | 0.70+post |
| SymbiYosys | v0.70 |
| Icarus Verilog | 13.0 (alternate compile check) |
| Python | 3.14.8 (`.venv`), cocotb 2.1.0 |
| Platform | macOS (Darwin 27 arm64), Apple clang 21 |

Waveform viewing uses Surfer 0.6.0 (`surfer <dump>.vcd`); the automated
waveform evidence uses Verilator trace dumps (`--waves`) plus small VCD
analysis scripts.  CI (GitHub Actions)
uses Ubuntu 24.04 with oss-cad-suite for Yosys/formal jobs and the distro
Verilator for the simulation job - exact commands in
`.github/workflows/ci.yml`.

## 9. Reproduction quick reference

| result | command | wall time seen |
|---|---|---|
| 152-test regression | `scripts/run_tests.py --seeds 1,2,3,7` | 17 s (4 builds, 16 module runs) |
| lint (28 configs) | `scripts/lint.sh` | ~3 s |
| coverage (functional + structural) | `scripts/coverage.sh` | ~25 s |
| decode proof (unbounded) | `sby -f formal/decode.sby` | < 1 s |
| routing proof (unbounded) | `sby -f formal/routing.sby` | 13 s |
| reset (BMC 16) | `sby -f formal/reset.sby` | 76 s |
| completion (BMC 24) | `sby -f formal/completion.sby` | 45 m 56 s |
| progress (PDR, unbounded) | `sby -f formal/progress.sby` | 7 s |
| mutation suite (incl. formal cross-check) | `scripts/mutation_test.py --formal` | ~2.5 min |

## 10. Evidence gallery (waveforms and screenshots)

The cycle-level behaviour behind these numbers is committed as a gallery: one
waveform figure per required scenario (`docs/screenshots/08`-`18`, each drawn
from a committed trace in `docs/waveforms/`), plus terminal-style excerpts of
each layer's output (`01`-`07`).  Both are regenerated from a clean checkout -
`make waves` re-captures the traces from the passing tests and renders them;
`make screens` re-renders the terminal excerpts from the recorded files under
`results/`.  Index and per-figure sources: `docs/screenshots/README.md`.

Gallery highlights, in the figure numbering of `docs/screenshots/`:

* `09` distinct-slave parallelism (both masters in flight to different
  targets in the same window),
* `10` same-slave contention - the slave side shows the two grants serialized
  and `s1.awaddr` switching to the granted master's payload,
* `11` AW/W arrival-order independence (W-first, AW-first, same-cycle),
* `12` delayed-response routing (B +12 / R +15 cycles, owner-only delivery),
* `13` every WSTRB pattern with the accumulated read-back value,
* `14` DECERR/zero-data on every unmapped access with all real slave ports
  idle,
* `15` reset inertness and mid-transaction abandonment (no late response),
* `16` concurrent read+write through the independent per-direction arbiters,
* `17` round-robin fairness under continuous contention (alternating
  completions),
* `18` one-outstanding discipline (second AW held until the first write's B).

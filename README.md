# AXI4-Lite Crossbar + Peripheral Subsystem (2 × 3)

A parameterizable AXI4-Lite crossbar (2 masters, 3 peripheral slaves + an
internal error target) in SystemVerilog, built and verified to the standard
this repository demonstrates: a self-checking cocotb regression across four
DUTs, an independent protocol checker at every boundary, declared-up-front
functional coverage, Verilator structural coverage, five SymbiYosys jobs
(two of them **unbounded**), and mutation testing that measures what each
layer can actually catch - with every number reproducible from the commands in
`docs/`.

The design is small on purpose.  The point of the project is the verification
argument, and small is what makes the argument airtight.

## What is in the box

* **Crossbar** (`rtl/axi_lite_*.sv`) - independent AW/W capture with free
  arrival order, per-slave-port/per-direction round-robin arbitration with
  hold-until-done grants, response routing by the held grant, parameterized
  4 KiB address regions, WSTRB passthrough, a DECERR error target on the same
  arbitration path (no bypass), reset-inert boundaries, one outstanding
  transaction per master per direction, single clock.
* **Peripherals** - UART (baud, TX/RX, loopback, framing/overrun flags),
  GPIO (direction, synchronized inputs, edge interrupts), TIMER
  (period/one-shot, prescaler, expiry IRQ with W1C) behind a common
  register-file AXI4-Lite slave (`rtl/axil_regfile_slave.sv`).  Register map:
  `docs/register_map.md`.
* **Subsystem** (`rtl/peripheral_subsystem.sv`) - the crossbar wired to the
  three real peripherals.

## Verification stack

| layer | what runs | counts |
|---|---|---|
| Self-checking regression | cocotb, 4 DUTs (crossbar, peripherals, subsystem, TB-probe), seeds 1,2,3,7 | 38 tests/seed → 152 per sweep, 0 failures |
| Independent boundary checker | `tb/assertions/axil_protocol_checker.sv`, written from the protocol rules, instantiated at every boundary of every harness | 26 checks |
| In-RTL assertions | boolean-form (Yosys-compatible), active in simulation **and** formal | 57 named `ap_*` |
| Reference model + scoreboard | Python register model + transaction matching, independent of the BFMs | all 3 peripherals |
| Functional coverage | declared bins, hit only by monitored boundary traffic | report in `results/coverage/` |
| Structural coverage | Verilator 5.052 line/toggle/branch, merged | report in `results/coverage/` |
| Formal | `formal/*.sby`: decode (**unbounded**), routing (**unbounded**, free masters/slaves), reset (BMC 16), completion (BMC 24), progress (BMC 64 liveness) | 5 jobs |
| Mutation testing | `scripts/mutation_test.py`: 9 injected defects, regression **plus** unbounded routing proof per mutant | `results/mutation/summary.md` |
| Synthesis | Yosys generic mapping + cell/flop statistics | `results/synth/` |

## The findings (why the layers matter)

Fully detailed in `docs/results.md`; the short version:

* **Two real design defects were found by the formal flow during
  development.**  (1) A *write-slot hole*: if the "write in progress" state
  was raised only after **both** halves had been dispatched, a second AW could
  be accepted between the two dispatches and the first W dispatched to the
  second AW's target - fixed by `wr_start = aw_done | w_done`, pinned by the
  boundary one-outstanding property and a directed test.  (2) An
  *early-response hole*: a target answering before the crossbar had fully
  dispatched the transaction could retire the slot and glue two transactions
  together - fixed by the response masks `w_rsp_en` / `r_rsp_en`.
* **Mutation testing then showed the second fix was not pinned by any
  invariant**: both response-mask mutants survived the whole regression *and*
  the unbounded routing proof (the damage needs an out-of-contract target that
  no compliant simulation model produces).  Response-contract assertions were
  added, and the proof now refutes both mutants - the suite closes its own
  gap, and the report shows the before/after evidence.
* **The layer split is measured, not assumed.**  Of 9 mutants: 6 are caught by
  simulation, 5 are refuted by the unbounded routing proof, `M2`/`M2b`
  (response masks) are *formal-only* catches, `M1` (write-slot hole) and `M7`
  (grant-hold removal) survive the routing invariants and are caught by the
  simulation checker (`M1` additionally refuted by the completion harness's
  one-outstanding property in ~2 s at depth 16), and `M6` (frozen round-robin
  pointer) is a survivor with a stated equivalence argument for this
  configuration, not a silent gap.

## Repository layout

```
rtl/            synthesizable SystemVerilog (+ axil_defs.svh: single source of the address map)
tb/             cocotb agents/models/monitors/scoreboard/coverage + SV harnesses + the checker
tests/          the regression (4 test modules)
formal/         5 SymbiYosys jobs + their harnesses
scripts/        lint.sh, run_tests.py, coverage.sh, mutation_test.py, synth.ys
docs/           architecture, register map, protocol contract, verification plan, results
results/        recorded evidence (logs, xUnit, coverage, mutation report, tool versions)
.github/workflows/ci.yml
```

## Quickstart

Requirements: Verilator ≥ 5.0 (5.052 used here), Yosys ≥ 0.40 + SymbiYosys
(0.70 used here), Python 3 (3.14 used here; 3.12 in CI), and `make`.
Waveform viewing uses Surfer (`surfer <dump>.vcd`; optional).  Not
required: UVM, any commercial tool.

```sh
make venv          # once: Python venv + cocotb (requirements.txt)
make lint          # 28 Verilator configurations, RTL + TB, both assertion modes
make test          # full regression, seed 1
make regress       # seeds 1,2,3,7 (152 tests)
make coverage      # functional + structural coverage -> results/coverage/summary.md
make formal        # decode + reset + routing (unbounded)          [fast]
make formal-deep   # progress (BMC 64) + completion (BMC 24)       [slow]
make mutation      # 9 mutants, sim verdict + routing proof each
make synth         # generic synthesis + stats
```

Everything lands under `results/`; `make clean` removes only regenerable,
git-ignored products.  CI runs the same commands (fast jobs on every push;
deep formal weekly/manually; mutation manually).

## Recorded tools

| tool | version |
|---|---|
| Verilator | 5.052 |
| Yosys | 0.70+post |
| SymbiYosys | v0.70 |
| cocotb | 2.1.0 |
| Python | 3.14.8 (local), 3.12 (CI) |

## Scope and honest limits

Single clock, no bursts/IDs/multiple outstanding, no CDC, no timing or power
claims, generic-gate synthesis only, evidence recorded for the configuration
in `docs/protocol_assumptions.md` §1.  No ARM AXI compliance suite was run:
the repository verifies *its own documented contract*, and every formal job's
environment assumptions and bounds are stated next to its result.  Bounded
jobs are reported as bounded; survivors are reported as survivors.

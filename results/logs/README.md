# Raw run logs (kept so every number and screenshot can be checked)

These are the raw stdout logs behind the numbers quoted in
`docs/results.md` and the screenshots in `docs/screenshots/`.  They are
kept in the repository (small, plain text) so that any table row or image
can be traced to the exact text that the tools produced.  The
machine-readable results live in the sibling directories (`results/cocotb/`,
`results/coverage/`, `results/mutation/`, `results/formal/`).

| file | produced by | tree | date |
|---|---|---|---|
| `r1_lint.log` | `scripts/lint.sh` (28 Verilator configurations) | r1 | 2026-10-17 |
| `r1_regress.log` | `scripts/run_tests.py --seeds 1,2,3,7` | r1 | 2026-10-17 |
| `mutation2.log` | `scripts/mutation_test.py --formal` | r1 (mutant copies) | 2026-10-17 |
| `progress2.log` | `sby -f formal/progress.sby` (BMC 64) | r0\\* | 2026-10-17 |
| `mutation_sim_aborts.txt` | Verilator `%Error` lines from the M1/M7 mutant runs | r1 mutants | 2026-10-17 |

\\* r0 = r1 minus the two response-contract assertions in
`rtl/axi_lite_master_port.sv` (`ap_b_rsp_needs_full_dispatch`,
`ap_r_rsp_needs_dispatch`).  Both are proven tautologies over r0, so the
r0 formal verdicts transfer to r1; `routing`, `decode` and `reset` were
re-run on r1 to confirm.  See `docs/results.md` sections 4 and 4.1.

Toolchain for all of the above: the versions in `results/tool_versions.txt`
(Verilator 5.052, Yosys 0.70+post, SBY v0.70, cocotb 2.1.0, Python 3.14.8,
Surfer 0.6.0, macOS arm64).

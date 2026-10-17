# Reduced-depth completion probes (M1, M7)

Both files here are extracts of `sby -f completion_d16.sby` runs made against
a mutant's RTL workspace during the mutation study (2026-10-17).  The probe is
`formal/completion.sby` with its bound reduced from depth 24 to depth 16,
used because a counterexample for these mutants, if visible to the harness
property set at all, is short - so a refutation costs seconds instead of the
full job's ~1 hour, and a pass/refutation verdict is available cheaply.

* `M1-completion-d16.txt` - **refuted in ~2 s**:
  `Assert failed in axil_crossbar_harness: ap_one_outstanding`.
  M1 (the write-slot hole) is therefore *visible to the formal property set*
  in `completion` even though the unbounded `routing` invariants (which
  exclude the harness bookkeeping by design) do not see it.
* `M7-completion-d16.txt` - **passes** at depth 16.  M7 (arbiter re-selects
  mid-transaction) breaks *slave-boundary VALID stability*, and the harness
  property set encodes no stability rule of that shape - a documented limit,
  not a surprise; M7 is caught in simulation by the independent checker
  (`axil_protocol_checker.sv:142 ap_aw_hold` at `gen_slave_checkers[0]`).

Reproduce (from the repository root):

```sh
# 1. create the mutant workspace (RTL copy + harness copy + applied.diff)
.venv/bin/python scripts/mutation_test.py --mutant M1-write-slot-hole --formal   # or M7-gnt-hold-off
# 2. run the reduced-depth probe inside that workspace
cd results/mutation/work/M1-write-slot-hole
sed 's/^depth 24$/depth 16/' ../../../../formal/completion.sby > completion_d16.sby
sby -f completion_d16.sby
```

The full probe logs (`run_completion_d16.log`) live next to the workspaces,
which are git-ignored build products; these extracts are the committed
evidence.  The mutation workspaces are recreated by every
`scripts/mutation_test.py` run.

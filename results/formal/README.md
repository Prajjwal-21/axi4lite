# Formal run evidence (committed extracts)

Each `<job>.txt` here is the verdict tail of the corresponding
`sby -f formal/<job>.sby` run recorded on 2026-10-17 (see
`docs/results.md` section 4 for results, runtimes, and the exact claim level
of each job).  The sby workdirs themselves (`formal/<job>/`) are regenerable
build products and are git-ignored; these extracts keep the `DONE (PASS,
rc=0)` lines and engine summaries reviewable in the repository.

| file | job | result |
|---|---|---|
| `decode.txt` | `formal/decode.sby` - k-induction, all 2^32 addresses | PASS |
| `routing.txt` | `formal/routing.sby` - k-induction over all reachable states, free masters/slaves | PASS |
| `reset.txt` | `formal/reset.sby` - BMC 16, reset inertness | PASS |
| `completion.txt` | `formal/completion.sby` - BMC 24, boundary transaction properties | PASS |
| `progress.txt` | `formal/progress.sby` - PDR, unbounded bounded-latency liveness + response-code routing | PASS |

Rerun any of them from the repository root with `sby -f formal/<job>.sby`
(or `make formal` / `make formal-deep`); the full log then lands in
`formal/<job>/`.

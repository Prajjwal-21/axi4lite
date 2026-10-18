# Screenshots (all regenerable)

Every image in this directory is rendered from the recorded evidence files
under `results/` or from a committed VCD trace - none is hand-crafted.
Two generators, both wired into the Makefile:

| command | produces |
|---|---|
| `make screens` (`scripts/make_screens.py`) | 01-07: the terminal-style evidence excerpts |
| `make waves` (`scripts/capture_waves.py`)  | 08-18: cycle-accurate waveform views of the committed VCDs |

## Terminal evidence (scripts/make_screens.py)

| file | shows | source evidence |
|---|---|---|
| `01-regression.png` | 152-test regression summary (4 DUTs x seeds 1,2,3,7) | `results/cocotb/*_s*.json` |
| `02-lint.png` | Verilator `-Wall` lint: 28 configurations, all clean | `results/lint/lint_console.log` |
| `03-coverage.png` | functional bins + line/toggle/branch totals | `results/coverage/summary.md` |
| `04-mutation.png` | mutant verdicts + verbatim formal refutations | `results/mutation/summary.md` |
| `05-synthesis.png` | Yosys generic stat (cells, flops per variant) | `results/synth/synth_peripheral_subsystem.log` |
| `06-probes.png` | completion-d16 probes: M1 refuted, M7 passes | `results/mutation/probes/*.txt` |
| `07-formal.png` | the five SymbiYosys jobs and their verdicts | `results/formal/*.txt` |

## Waveform views (scripts/capture_waves.py)

All drawn from committed traces in `docs/waveforms/` (Verilator `--trace`,
10 ns clock, values sampled just after each cycle boundary; dot = VALID &
READY in the same cycle).  Each PNG's footer names its VCD; open any VCD in
Surfer for the full hierarchy:

| file | scenario (crossbar DUT, seed 1) |
|---|---|
| `08-waveform.png` | `test_channel_backpressure` - AW/W/AR backpressure + delayed B/R, master 0 view (fixed renderer `scripts/plot_waveform.py`) |
| `09-waveform-distinct.png` | `test_simultaneous_distinct_slaves` - both masters in flight to different slaves |
| `10-waveform-contention.png` | `test_simultaneous_same_slave` - same-slave contention, serialized grants, `s1.awaddr` shows whose payload is presented |
| `11-waveform-aw-w-order.png` | `test_aw_w_arrival_orders` - W-before-AW, AW-before-W and same-cycle arrival |
| `12-waveform-delayed-routing.png` | `test_delayed_response_routing` - B after 12 / R after 15 cycles reaches only its owner |
| `13-waveform-wstrb.png` | `test_wstrb_partial_and_zero` - every strobe pattern with the accumulated read-back value |
| `14-waveform-decerr.png` | `test_invalid_address_decerr` - DECERR/0-data on all unmapped accesses, real slaves idle |
| `15-waveform-reset.png` | `test_reset_idle_and_in_flight` - nothing accepted in reset, in-flight write abandoned, clean recovery |
| `16-waveform-concurrent-rw.png` | `test_concurrent_read_write` - read and write to one slave in flight together |
| `17-waveform-round-robin.png` | `test_contention_round_robin` - alternating grants under continuous contention |
| `18-waveform-one-outstanding.png` | `test_second_aw_held_off` - second AW held until the first write completes |

Regenerate everything (redirects builds/logs into `results/raw/waves-capture`,
so committed regression evidence is untouched):

```sh
make waves && make screens
```

# Waveforms (recorded, openable in Surfer)

One committed Verilator trace (`--trace`) per key scenario, captured by
`scripts/capture_waves.py` from the *passing* cocotb tests on the crossbar DUT
(seed 1).  The PNGs in `docs/screenshots/` (08-18) are cycle-quantized views
of these files; the files themselves hold the full hierarchy (both masters,
all three slave ports, the boundary checkers) and open in any VCD viewer.

| VCD | test |
|---|---|
| `crossbar-backpressure-seed1.vcd` | `test_channel_backpressure` |
| `distinct-slaves-concurrent-seed1.vcd` | `test_simultaneous_distinct_slaves` |
| `contention-same-slave-seed1.vcd` | `test_simultaneous_same_slave` |
| `aw-w-arrival-orders-seed1.vcd` | `test_aw_w_arrival_orders` |
| `delayed-response-routing-seed1.vcd` | `test_delayed_response_routing` |
| `wstrb-partial-zero-seed1.vcd` | `test_wstrb_partial_and_zero` |
| `invalid-address-decerr-seed1.vcd` | `test_invalid_address_decerr` |
| `reset-idle-inflight-seed1.vcd` | `test_reset_idle_and_in_flight` |
| `concurrent-read-write-seed1.vcd` | `test_concurrent_read_write` |
| `round-robin-fairness-seed1.vcd` | `test_contention_round_robin` |
| `one-outstanding-second-aw-held-seed1.vcd` | `test_second_aw_held_off` |

Open them with [Surfer](https://surfer-project.org/) (0.6.0 was used here):

```sh
surfer docs/waveforms/crossbar-backpressure-seed1.vcd
# or load the ready-made view (mst0 channels, zoomed to the transaction window):
surfer -c docs/waveforms/backpressure-view.sucl docs/waveforms/crossbar-backpressure-seed1.vcd
```

Regenerate the whole set (any seed works; results are redirected so the
committed regression evidence is untouched):

```sh
make waves                                   # all scenarios, seed 1
.venv/bin/python scripts/capture_waves.py --seed 7    # another seed
```

Each VCD is produced by running the single named test with `--waves`
(`scripts/run_tests.py --dut crossbar --test <test> --seed 1 --waves`) and
committing `tests/dump.vcd` under the table's name; `capture_waves.py` does
exactly that.  The PNG rendering samples every signal once per 10 ns cycle
(just after each clock boundary), so handshakes read cycle-accurately instead
of showing Verilator's half-cycle delta artefacts.

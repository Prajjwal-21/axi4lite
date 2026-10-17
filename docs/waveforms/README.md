# Waveforms (recorded, openable in Surfer)

`crossbar-backpressure-seed1.vcd` is the Verilator trace (`--trace`) of the
directed test `test_channel_backpressure` on the crossbar DUT, seed 1 -
the run that `docs/screenshots/08-waveform.png` is drawn from (master 0
channels only in the PNG; the file has the full hierarchy).

Open it with [Surfer](https://surfer-project.org/) (0.6.0 was used here):

```sh
surfer docs/waveforms/crossbar-backpressure-seed1.vcd
# or load the ready-made view (mst0 channels, zoomed to the transaction window):
surfer -c docs/waveforms/backpressure-view.sucl docs/waveforms/crossbar-backpressure-seed1.vcd
```

Regenerate the file (any seed works; results are redirected so the
committed regression evidence is untouched):

```sh
AXIL_RESULTS_DIR=results/raw/waves .venv/bin/python scripts/run_tests.py \
    --seed 1 --dut crossbar --test test_channel_backpressure --waves
cp tests/dump.vcd docs/waveforms/crossbar-backpressure-seed1.vcd
```

The PNG in `docs/screenshots/` is that VCD cycle-quantized: values are
sampled just after each 10 ns clock boundary and handshakes (VALID & READY
in the same cycle) are marked with a dot.

#!/usr/bin/env python3
"""Capture per-scenario waveform evidence: VCD + PNG per key test.

For every scenario the script

  1. runs the named cocotb test on the named DUT with Verilator `--trace`,
     redirecting all build/xUnit/log products into `results/raw/waves-capture/`
     so the committed regression evidence is untouched,
  2. copies the produced `tests/dump.vcd` to `docs/waveforms/<name>.vcd`
     (the committed, Surfer-openable evidence), and
  3. renders the cycle-accurate PNG `docs/screenshots/<png>` with
     `render_wave.render` (or the dedicated master-0 renderer for scenario 08).

Every figure therefore regenerates from RTL + tests with one command:

    make waves                 # all scenarios
    .venv/bin/python scripts/capture_waves.py --only contention,reset
"""

from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from render_wave import render  # noqa: E402

WAVE_DIR = ROOT / "docs" / "waveforms"
SHOT_DIR = ROOT / "docs" / "screenshots"
CAP_RESULTS = ROOT / "results" / "raw" / "waves-capture"

# Address-map shorthand for the annotations (rtl/axil_defs.svh)
UART, GPIO, TIMER = "0x0000_0000", "0x0000_4000", "0x0000_8000"


def rows(*items: str) -> list[list]:
    """Compact row spec: strings, 'grp:Label' group headers, 'gap:N' gaps."""
    out = []
    for item in items:
        if item.startswith("grp:"):
            out.append(["group", item[4:]])
        elif item.startswith("gap:"):
            out.append(["gap", float(item[4:])])
        else:
            out.append(["bit", item])
    return out


SCENARIOS: list[dict] = [
    dict(
        name="channel-backpressure",
        vcd="crossbar-backpressure-seed1.vcd",   # keep the committed filename
        test="test_channel_backpressure",
        png="08-waveform.png",
        # rendered by scripts/plot_waveform.py (the fixed master-0 view that
        # docs/waveforms/README.md references); no spec/rows needed here
        spec=None,
    ),
    dict(
        name="contention-same-slave",
        test="test_simultaneous_same_slave",
        png="10-waveform-contention.png",
        title='AXI4-Lite crossbar - both masters write one slave at once: the write arbiter serializes them, both served exactly once - test_simultaneous_same_slave (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master ports (requests)",
            "m0.awvalid", "m0.awready", "m1.awvalid", "m1.awready",
            "gap:0.3",
            "m0.wvalid", "m0.wready", "m1.wvalid", "m1.wready",
            "gap:0.3",
            "m0.bvalid", "m0.bready", "m1.bvalid", "m1.bready",
            "grp:slave 1 side (GPIO) - the arbiter grants one master at a time",
            "s1.awvalid", "s1.awready",
            "s1.awaddr",        # bus: shows WHICH master's address is presented
            "s1.wvalid", "s1.wready", "s1.wdata",
        )),
    ),
    dict(
        name="aw-w-arrival-orders",
        test="test_aw_w_arrival_orders",
        png="11-waveform-aw-w-order.png",
        title='AXI4-Lite crossbar - AW and W arrive independently (W first, AW first, same cycle): all three writes served once - test_aw_w_arrival_orders (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0 (AW delayed in phase b, W delayed in phase a)",
            "m0.awvalid", "m0.awready", "m0.awaddr",
            "m0.wvalid", "m0.wready", "m0.wdata",
            "gap:0.3",
            "m0.bvalid", "m0.bready",
            "grp:slave 0 side (UART) - halves captured and paired in order",
            "s0.awvalid", "s0.awready", "s0.awaddr",
            "s0.wvalid", "s0.wready", "s0.wdata",
        )),
    ),
    dict(
        name="delayed-response-routing",
        test="test_delayed_response_routing",
        png="12-waveform-delayed-routing.png",
        title='AXI4-Lite crossbar - slow responses (B after 12, R after 15 cycles) still reach only their owner - test_delayed_response_routing (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0",
            "m0.awvalid", "m0.awready", "m0.bvalid", "m0.bready",
            "gap:0.3",
            "m0.arvalid", "m0.arready", "m0.rvalid", "m0.rready", "m0.rdata",
            "grp:master 1",
            "m1.awvalid", "m1.awready", "m1.bvalid", "m1.bready",
            "gap:0.3",
            "m1.arvalid", "m1.arready", "m1.rvalid", "m1.rready",
            "grp:slave 1 side (GPIO, delayed B/R slave model)",
            "s1.awvalid", "s1.bvalid",
            "s1.arvalid", "s1.rvalid", "s1.rdata",
        )),
    ),
    dict(
        name="wstrb-partial-zero",
        test="test_wstrb_partial_and_zero",
        png="13-waveform-wstrb.png",
        title='AXI4-Lite crossbar - byte strobes: partial writes keep the other bytes, WSTRB=0 completes OKAY, changes nothing - test_wstrb_partial_and_zero (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0 write/read pairs to TIMER LOAD (0x0000_8004)",
            "m0.awvalid", "m0.awready", "m0.awaddr",
            "m0.wvalid", "m0.wready",
            "m0.wstrb",          # bus: 0xF, 0x1, 0x2, ... 0x0
            "m0.wdata",
            "gap:0.3",
            "m0.arvalid", "m0.arready",
            "m0.rvalid", "m0.rready",
            "m0.rdata",          # bus: shadow-accumulated expected value
        )),
    ),
    dict(
        name="invalid-address-decerr",
        test="test_invalid_address_decerr",
        png="14-waveform-decerr.png",
        title='AXI4-Lite crossbar - unmapped addresses get DECERR from the internal error target; no real slave is touched - test_invalid_address_decerr (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0 writes, master 1 reads - all unmapped",
            "m0.awvalid", "m0.awready", "m0.awaddr",
            "m0.wvalid", "m0.wready", "m0.wdata",
            "gap:0.3",
            "m0.bvalid", "m0.bready",
            "m0.bresp[1:0]",     # bus: 0x3 = DECERR on every write
            "grp:master 1 reads",
            "m1.arvalid", "m1.arready", "m1.araddr",
            "m1.rvalid", "m1.rready",
            "m1.rresp[3:2]",     # bus: DECERR slice of master 1
            "m1.rdata",
            "grp:real slave ports stay idle the whole test",
            "s0.awvalid", "s1.awvalid", "s2.awvalid",
            "s0.arvalid", "s1.arvalid", "s2.arvalid",
        )),
    ),
    dict(
        name="reset-idle-inflight",
        test="test_reset_idle_and_in_flight",
        png="15-waveform-reset.png",
        title='AXI4-Lite crossbar - reset while idle (nothing accepted) and mid-transaction (write abandoned, no late B), then clean post-reset traffic - test_reset_idle_and_in_flight (seed 1)',
        spec=dict(rows=rows(
            "grp:reset and master 0",
            "rst",
            "m0.awvalid", "m0.awready",
            "m0.wvalid", "m0.wready",
            "m0.bvalid", "m0.bready",
            "grp:slave 0 side (UART)",
            "s0.awvalid", "s0.awready",
            "s0.wvalid", "s0.wready",
            "s0.bvalid",         # held low by the slave model through reset
        )),
    ),
    dict(
        name="concurrent-read-write",
        test="test_concurrent_read_write",
        png="16-waveform-concurrent-rw.png",
        title='AXI4-Lite crossbar - m0 writes while m1 reads the same slave: independent read/write arbiters, no interference - test_concurrent_read_write (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:write path (m0 -> slave 0)",
            "m0.awvalid", "m0.awready",
            "m0.wvalid", "m0.wready",
            "m0.wdata",
            "m0.bvalid", "m0.bready",
            "grp:read path (m1 -> slave 0, same window)",
            "m1.arvalid", "m1.arready",
            "m1.rvalid", "m1.rready", "m1.rdata",
            "grp:slave 0 side (UART): both directions served concurrently",
            "s0.awvalid", "s0.wvalid",
            "s0.arvalid",
            "s0.bvalid", "s0.rvalid",
        )),
    ),
    dict(
        name="round-robin-fairness",
        test="test_contention_round_robin",
        png="17-waveform-round-robin.png",
        title='AXI4-Lite crossbar - continuous contention on one slave: grants rotate, every transaction completes - test_contention_round_robin (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:requests (both masters hammer the TIMER)",
            "m0.awvalid", "m1.awvalid",
            "s2.awvalid", "s2.awready",
            "s2.awaddr",
            "gap:0.3",
            "m0.wvalid", "m1.wvalid",
            "s2.wvalid",
            "gap:0.3",
            "grp:responses come back to the right master every time",
            "m0.bvalid", "m1.bvalid",
            "s2.bvalid",
        )),
    ),
    dict(
        name="one-outstanding-second-aw-held",
        test="test_second_aw_held_off",
        png="18-waveform-one-outstanding.png",
        title='AXI4-Lite crossbar - one outstanding write per master: the second AW waits until the first write completes - test_second_aw_held_off (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0 - two writes back to back, W of write 1 delayed",
            "m0.awvalid", "m0.awready", "m0.awaddr",
            "m0.wvalid", "m0.wready",
            "gap:0.3",
            "m0.bvalid", "m0.bready",
            "grp:slave 0 side (UART)",
            "s0.awvalid", "s0.awready", "s0.awaddr",
            "s0.wvalid", "s0.wready", "s0.wdata",
        )),
    ),
    dict(
        name="distinct-slaves-concurrent",
        test="test_simultaneous_distinct_slaves",
        png="09-waveform-distinct.png",
        title='AXI4-Lite crossbar - both masters access different slaves in the same cycle window: fully parallel - test_simultaneous_distinct_slaves (seed 1)',
        spec=dict(rows=rows(
            "rst",
            "grp:master 0 -> slave 0 (UART)",
            "m0.awvalid", "m0.awready", "m0.wvalid", "m0.wready",
            "m0.bvalid", "m0.bready",
            "grp:master 1 -> slave 2 (TIMER)",
            "m1.awvalid", "m1.awready", "m1.wvalid", "m1.wready",
            "m1.bvalid", "m1.bready",
            "grp:slave sides - both active in the same window",
            "s0.awvalid", "s0.awready",
            "s2.awvalid", "s2.awready",
        )),
    ),
]


def capture(scenario: dict, seed: int = 1) -> Path:
    """Run one test with --waves and return the committed VCD path."""
    name = scenario["name"]
    fname = scenario.get("vcd", f"{name}-seed{seed}.vcd")
    vcd_out = WAVE_DIR / fname
    env = dict(os.environ)
    env["AXIL_RESULTS_DIR"] = str(CAP_RESULTS)
    cmd = [str(ROOT / ".venv" / "bin" / "python"), "scripts/run_tests.py",
           "--dut", "crossbar", "--test", scenario["test"],
           "--seed", str(seed), "--waves"]
    print(f"[run]   {scenario['test']}")
    proc = subprocess.run(cmd, cwd=ROOT, env=env,
                          capture_output=True, text=True)
    dump = ROOT / "tests" / "dump.vcd"
    if not dump.is_file():
        sys.exit(f"dump.vcd missing after {scenario['test']}:\n"
                 f"{proc.stdout[-3000:]}\n{proc.stderr[-3000:]}")
    WAVE_DIR.mkdir(parents=True, exist_ok=True)
    shutil.move(dump, vcd_out)
    summary = "OK" if proc.returncode == 0 else f"EXIT {proc.returncode}"
    print(f"[vcd]   {name:<28} -> {vcd_out.relative_to(ROOT)} ({summary})")
    if proc.returncode != 0:
        sys.exit(proc.stdout[-4000:] + proc.stderr[-2000:])
    return vcd_out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--only", help="comma-separated scenario names")
    ap.add_argument("--seed", type=int, default=1)
    args = ap.parse_args()

    selected = SCENARIOS
    if args.only:
        want = {s.strip() for s in args.only.split(",")}
        selected = [s for s in SCENARIOS if s["name"] in want]
        missing = want - {s["name"] for s in selected}
        if missing:
            sys.exit(f"unknown scenario(s): {sorted(missing)}")

    CAP_RESULTS.mkdir(parents=True, exist_ok=True)
    for scenario in selected:
        vcd = capture(scenario, args.seed)
        spec = scenario.get("spec")
        out = SHOT_DIR / scenario["png"]
        if spec is None:
            # fixed-view scenario (08): the dedicated master-0 renderer
            subprocess.run([sys.executable, "scripts/plot_waveform.py",
                            str(vcd), str(out)], cwd=ROOT, check=True)
            continue
        spec.setdefault("scope", "crossbar_checker_top")
        spec["title"] = scenario["title"]
        render(vcd, spec, out)
    print(f"\nDONE: {len(selected)} scenario(s) -> docs/waveforms/ +"
          f" docs/screenshots/")
    return 0


if __name__ == "__main__":
    sys.exit(main())

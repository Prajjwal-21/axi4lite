#!/usr/bin/env python3
"""Render the master-0 AXI channel traffic of a crossbar trace VCD as a PNG.

Usage: python scripts/plot_waveform.py [vcd] [out.png]
Defaults: docs/waveforms/crossbar-backpressure-seed1.vcd ->
docs/screenshots/08-waveform.png.  Needs matplotlib (not part of the cocotb
requirements; pip install matplotlib).

Values are sampled once per 10 ns cycle (just after each cycle boundary) so
the figure shows the cycle-accurate waveform rather than Verilator's
half-cycle delta artefacts.  Handshake cycles (VALID & READY both high) are
marked with a dot.
"""

import sys
from pathlib import Path

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt  # noqa: E402

VCD = Path(sys.argv[1] if len(sys.argv) > 1 else "docs/waveforms/crossbar-backpressure-seed1.vcd")
OUT = Path(sys.argv[2] if len(sys.argv) > 2 else "docs/screenshots/08-waveform.png")
CYCLE = 10.0  # ns

SIGNALS = ["m_axil_awvalid", "m_axil_awready",
           "m_axil_wvalid", "m_axil_wready",
           "m_axil_bvalid", "m_axil_bready",
           "m_axil_arvalid", "m_axil_arready",
           "m_axil_rvalid", "m_axil_rready"]
TOP = "/crossbar_checker_top"

id2name: dict[str, str] = {}
trans: dict[str, list[tuple[int, int]]] = {s: [] for s in SIGNALS}
scope: list[str] = []
in_defs = True
t = 0
with VCD.open() as fh:
    for raw in fh:
        st = raw.strip()
        if in_defs:
            if st.startswith("$scope"):
                scope.append(st.split()[2])
            elif st.startswith("$upscope"):
                scope.pop()
            elif st.startswith("$var"):
                tok = st.split()
                width, vid, name = tok[2], tok[3], tok[4]
                if "/" + "/".join(scope) in (TOP, TOP + "/u_dut") and name in SIGNALS and width == "2":
                    if name not in id2name.values():
                        id2name[vid] = name
            elif st.startswith("$enddefinitions"):
                in_defs = False
            continue
        if not st or st.startswith("$"):
            continue
        if st.startswith("#"):
            t = int(st[1:])
        elif st[0] in "01xz" and st[1:] in id2name:
            trans[id2name[st[1:]]].append((t, int(st[0])))
        elif st[0] in "bB":
            tok = st.split()
            if tok[-1] in id2name:
                trans[id2name[tok[-1]]].append((t, 1 if tok[0][-1] == "1" else 0))

missing = [s for s in SIGNALS if not trans[s]]
assert not missing, f"signals not found in {VCD}: {missing}"

t_end_ns = max(ev[-1][0] for ev in trans.values()) / 1000.0
n_cyc = int(t_end_ns // CYCLE) + 3
sample_t = [0.0] + [(k * CYCLE + 0.01) for k in range(n_cyc)]  # ns; stable window starts at k*10


def digital(name: str) -> list[int]:
    ev = [(t / 1000.0, v) for t, v in trans[name]]
    out, i, cur = [], 0, 0
    for ts in sample_t:
        while i < len(ev) and ev[i][0] <= ts:
            cur = ev[i][1]
            i += 1
        out.append(cur)
    return out


d = {s: digital(s) for s in SIGNALS}
n = len(SIGNALS)
fig, ax = plt.subplots(figsize=(13.6, 4.7), dpi=100)
fig.patch.set_facecolor("#0b0f14")
ax.set_facecolor("#11161d")
for spine in ax.spines.values():
    spine.set_color("#232c37")

for i, name in enumerate(SIGNALS):
    base = n - 1 - i
    xs = [0.0] + [(k * CYCLE) for k in range(n_cyc)]
    lvl = [base + 0.72 * v for v in d[name]]
    col = "#7dcfff" if name.endswith("valid") else "#ffd866"
    ax.step(xs, lvl, where="post", color=col, lw=1.3)
    ax.fill_between(xs, base, lvl, step="post", color=col, alpha=0.15, lw=0)

# handshake markers: both VALID and READY high in the same cycle
for vi, ri in ((0, 1), (2, 3), (4, 5), (6, 7), (8, 9)):
    for k in range(n_cyc):
        if d[SIGNALS[vi]][k] and d[SIGNALS[ri]][k]:
            row = n - 1 - vi
            ax.plot(k * CYCLE + CYCLE / 2, row + 0.36, marker="o", ms=3.2,
                    mfc="#e8f0f8", mec="none")

ax.set_yticks([(n - 1 - i) + 0.36 for i in range(n)])
ax.set_yticklabels(SIGNALS, fontsize=8.5, family="monospace", color="#c9d5e2")
ax.set_ylim(-0.35, n + 0.15)
ax.set_xlim(0, n_cyc * CYCLE + 30)
ax.set_xlabel("time (ns)   -   cyan = VALID, yellow = READY, dot = handshake (VALID & READY)",
              color="#8fa3b8", fontsize=9, family="monospace")
ax.tick_params(axis="x", colors="#8fa3b8", labelsize=8.5)
ax.tick_params(axis="y", length=0)
ax.grid(axis="x", color="#1d2733", lw=0.7)
for k in (1, 2, 3, 4):
    ax.axhline(n - 2 * k, color="#2a3644", lw=0.7)

ax.axvline(1128, color="#39465a", lw=0.8, ls="--")
ax.text(520, n - 0.02, "6 writes on mst0 (slave 0 stalls, slave 2 ready)", color="#8fa3b8",
        fontsize=8.5, family="monospace", ha="center", va="bottom")
ax.text(1330, n - 0.02, "1 read on mst0 (slave 1): AR stalled, R delayed", color="#8fa3b8", fontsize=8.5,
        family="monospace", ha="center", va="bottom")

ax.set_title("AXI4-Lite crossbar - master 0 channels under slave-side backpressure - "
             "test_channel_backpressure (seed 1)", color="#d5dde6", fontsize=10.5,
             family="monospace", pad=8)
fig.text(0.008, 0.012,
         f"waveform: {VCD} (Verilator 5.052 --trace + cocotb 2.1.0, 10 ns clock)"
         f"   |   view interactively: surfer {VCD}"
         f"   |   regen: make waves",
         color="#65788e", fontsize=7.4, family="monospace")

fig.tight_layout(rect=[0, 0.035, 1, 1])
fig.savefig(OUT, facecolor=fig.get_facecolor())

print(f"wrote {OUT} ({OUT.stat().st_size // 1024} KB), t_end={t_end_ns:.0f} ns, cycles={n_cyc}")
for name in SIGNALS:
    highs = [k for k in range(n_cyc) if d[name][k]]
    spans, s = [], None
    for k in range(n_cyc + 1):
        v = d[name][k] if k < n_cyc else 0
        if v and s is None:
            s = k
        elif not v and s is not None:
            spans.append(f"{s}" if k - 1 == s else f"{s}-{k - 1}")
            s = None
    print(f"  {name:16s} high cycles: {', '.join(spans)}")

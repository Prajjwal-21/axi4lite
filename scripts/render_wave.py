#!/usr/bin/env python3
"""Render a cycle-accurate waveform view of a crossbar VCD trace as a PNG.

The generic counterpart of `plot_waveform.py` (which draws the fixed master-0
view of the backpressure trace).  A scenario picks

  * the signals to draw - 1-bit rows via `m0.awvalid` / `s1.wready` selectors
    (master m / slave s bit of the packed harness port) or `rst` / `clk`,
  * bus rows via `m0.wdata` / `s1.awaddr` (drawn as hex value tracks),
  * a window in cycles and optional annotation lines.

Values are sampled once per 10 ns cycle just after each cycle boundary, so the
figure shows the cycle-accurate handshake waveform rather than Verilator's
half-cycle delta artefacts.  Handshake cycles (VALID & READY both high in the
same sampled cycle) are marked with a dot.

Usage:
    render_wave.py <vcd> <spec.json> <out.png>
    render_wave.py --list-specs           (prints the built-in spec keys)

Spec JSON:
    {
      "title":  "...",                    figure title
      "scope":  "crossbar_checker_top",   VCD scope that holds the signals
      "rows":   [["group", "write path"], ["bit", "m0.awvalid"], ...],
      "window": [start_cycle, end_cycle], optional, default: whole trace
      "marks":  [[cycle, "text"], ...]    optional vertical dashed lines
    }
Row kinds: "group" (heading), "bit", "bus", "gap".
"""

from __future__ import annotations

import json
import sys
from pathlib import Path

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt  # noqa: E402

CYCLE = 10_000          # ps (10 ns clock, matches the cocotb runner timescale)
ROOT_REF = Path(__file__).resolve().parents[1]


# ---------------------------------------------------------------------------
# VCD parsing
# ---------------------------------------------------------------------------

class Vcd:
    """Minimal VCD reader: scope tree, var widths and per-id value changes."""

    def __init__(self, path: Path):
        self.width: dict[str, int] = {}
        self.path_of: dict[str, str] = {}
        self.events: dict[str, list[tuple[int, str]]] = {}
        self.t_end = 0
        self._parse(path)

    def _parse(self, path: Path) -> None:
        scope: list[str] = []
        in_defs = True
        t = 0
        pending: list[tuple[str, str]] = []          # (id, value) batch
        with path.open() as fh:
            for raw in fh:
                line = raw.strip()
                if in_defs:
                    if line.startswith("$scope"):
                        # $scope module <name> $end  (flattened: take leaf name)
                        scope.append(line.split()[2])
                    elif line.startswith("$upscope"):
                        scope.pop()
                    elif line.startswith("$var"):
                        tok = line.split()
                        width, vid, name = int(tok[2]), tok[3], tok[4]
                        self.width[vid] = width
                        self.path_of[vid] = "/" + "/".join(scope + [name])
                        self.events.setdefault(vid, [])
                    elif line.startswith("$enddefinitions"):
                        in_defs = False
                    continue
                if not line or line.startswith("$"):
                    continue
                if line.startswith("#"):
                    for vid, val in pending:         # apply batch at old t
                        self.events[vid].append((t, val))
                    pending.clear()
                    t = int(line[1:])
                    self.t_end = max(self.t_end, t)
                elif line[0] in "bBr":
                    bits, vid = line[1:].split()
                    pending.append((vid, bits))
                elif line[0] in "01xzXZ":
                    pending.append((line[1:], line[0]))
        for vid, val in pending:
            self.events[vid].append((t, val))
            self.t_end = max(self.t_end, t)

    # -- lookup ------------------------------------------------------------

    def find(self, scope: str, name: str) -> str | None:
        """Return the id of `name` directly inside `scope` (leaf-name match)."""
        matches = [vid for vid, p in self.path_of.items()
                   if p == f"/{scope}/{name}"]
        if len(matches) == 1:
            return matches[0]
        if len(matches) > 1:
            raise KeyError(f"ambiguous VCD var {scope}/{name}")
        return None


def _bit(bits: str, width: int, hi: int, lo: int) -> int | None:
    """Extract [hi:lo] of an MSB-first VCD value string; None on x/z."""
    if len(bits) < width:                # left-padded values are legal
        bits = "x" * (width - len(bits)) + bits
    seg = bits[width - 1 - hi: width - lo]
    if any(c not in "01" for c in seg):
        return None
    return int(seg, 2)


# ---------------------------------------------------------------------------
# Scenario resolution
# ---------------------------------------------------------------------------

def resolve(vcd: Vcd, scope: str, sel: str):
    """Map a selector to (kind, payload).

    `rst`/`clk` -> 1-bit top signals; `mN.<sig>` / `sN.<sig>` -> bit N of the
    packed port array `m_axil_<sig>` / `s_axil_<sig>`; a trailing `[h:l]`
    slices a bus (default: the whole word the selector names, which for the
    per-slave packed arrays is the correct slave slice).
    """
    sel = sel.strip()
    hi = lo = None
    if "[" in sel:
        base, rng = sel[:-1].split("[")
        hi, lo = (int(x) for x in rng.split(":"))
        sel = base
    if sel in ("clk", "rst"):
        vid = vcd.find(scope, sel)
        if vid is None:
            raise KeyError(f"{scope}/{sel} not in VCD")
        return "bit", vid, 0, 0
    side, rest = sel.split(".", 1)
    if side.startswith("m"):
        idx, sig = int(side[1:]), f"m_axil_{rest}"
    elif side.startswith("s"):
        idx, sig = int(side[1:]), f"s_axil_{rest}"
    else:
        raise ValueError(f"bad selector {sel!r}")
    vid = vcd.find(scope, sig)
    if vid is None:
        raise KeyError(f"{scope}/{sig} not in VCD")
    width = vcd.width[vid]
    if hi is None:
        # default slice from the harness packing: fixed-width per-master/slave
        # fields (resp/prot/wstrb), single bits for the handshake wires, and
        # 32-bit payload words for everything else.
        fw = {"awprot": 3, "arprot": 3, "bresp": 2, "rresp": 2, "wstrb": 4} \
            .get(rest)
        if fw is not None:
            hi, lo = fw * (idx + 1) - 1, fw * idx
        elif width <= 3:                         # per-master/slave packed bits
            hi = lo = idx
        else:                                    # payload: idx-th 32-bit word
            hi, lo = 32 * idx + 31, 32 * idx
    if hi == lo and width <= 3:
        return "bit", vid, hi, lo
    return "bus", vid, hi, lo


# ---------------------------------------------------------------------------
# Rendering
# ---------------------------------------------------------------------------

def sample(vcd: Vcd, vid: str, width: int, hi: int, lo: int,
           c0: int, c1: int) -> list[int | None]:
    """Per-cycle sampled value of a var (or its [hi:lo] slice), cycles c0..c1."""
    ev = vcd.events.get(vid, [])
    out: list[int | None] = []
    i, cur = 0, None
    for k in range(c0, c1 + 1):
        ts = k * CYCLE + 50                        # just after the boundary
        while i < len(ev) and ev[i][0] <= ts:
            cur = ev[i][1]
            i += 1
        out.append(None if cur is None else _bit(cur, width, hi, lo))
    return out


def render(vcd_path: Path, spec: dict, out_png: Path) -> None:
    vcd = Vcd(vcd_path)
    scope = spec.get("scope", "crossbar_checker_top")
    if vcd.find(scope, "clk") is None:             # tolerate a missing scope
        for cand in sorted({p.rsplit("/", 1)[0][1:] for p in vcd.path_of.values()}):
            if vcd.find(cand, "clk") is not None:
                scope = cand
                break

    c0, c1 = spec.get("window") or (0, None)
    if c1 is None:
        c1 = max((e[0] for evs in vcd.events.values() for e in evs),
                 default=0) // CYCLE
    cycles = list(range(c0, c1 + 1))

    rows: list[tuple[str, dict]] = []
    for item in spec["rows"]:
        kind = item[0]
        if kind == "group":
            rows.append(("group", {"label": item[1]}))
        elif kind == "gap":
            rows.append(("gap", {"h": item[1] if len(item) > 1 else 0.5}))
        else:
            k, vid, hi, lo = resolve(vcd, scope, item[1])
            vals = sample(vcd, vid, vcd.width[vid], hi, lo, c0, c1)
            rows.append((k, {"label": item[1], "vals": vals}))

    n_dig = sum(1 for k, _ in rows if k in ("bit", "bus", "group", "gap"))
    row_h = 1.0
    fig_h = 1.15 + 0.42 * n_dig
    fig, ax = plt.subplots(figsize=(14.6, fig_h), dpi=110)
    fig.patch.set_facecolor("#0b0f14")
    ax.set_facecolor("#11161d")
    for spine in ax.spines.values():
        spine.set_color("#232c37")

    y = 0.0
    yticks, ylabels = [], []
    drawn: list[tuple[str, float, str, list[int | None]]] = []
    for kind, meta in rows:
        if kind == "group":
            y -= 0.55
            ax.text(0, y + 0.28, meta["label"], color="#7d94ad", fontsize=8.0,
                    family="monospace", style="italic", va="bottom")
            y -= 0.75
            continue
        if kind == "gap":
            y -= meta["h"]
            continue
        label = meta["label"]
        drawn.append((kind, y, label, meta["vals"]))
        yticks.append(y + 0.36)
        ylabels.append(label)
        y -= row_h
    ax.set_ylim(y + 0.1, 0.9)
    ax.set_yticks(yticks)
    ax.set_yticklabels(ylabels, fontsize=8.2, family="monospace", color="#c9d5e2")
    ax.tick_params(axis="y", length=0)

    xs = [(k - c0) * CYCLE / 1000.0 for k in cycles]      # ns for the x axis
    for kind, yrow, label, vals in drawn:
        if kind == "bit":
            color = "#9ece6a" if label == "rst" else "#7dcfff"
            lvl = [yrow + 0.72 * (v if v is not None else 0) for v in vals]
            ax.step(xs, lvl, where="post", color=color, lw=1.35)
            ax.fill_between(xs, yrow, lvl, step="post", color=color, alpha=0.13,
                            lw=0)
        else:                                    # bus row
            ax.hlines(yrow + 0.1, xs[0], xs[-1], color="#2a3644", lw=0.8)
            k = 0
            while k < len(vals):
                v = vals[k]
                j = k
                while j + 1 < len(vals) and vals[j + 1] == v:
                    j += 1
                if v is not None:
                    nxt = xs[j + 1] if j + 1 < len(xs) else xs[-1]
                    mid = 0.5 * (xs[k] + nxt)
                    text = (f"0x{v:08X}" if v >= (1 << 16)
                            else f"0x{v:04X}" if v > 0xF else f"0x{v:X}")
                    ax.text(mid, yrow + 0.5, text,
                            color="#c0caf5", fontsize=6.6, family="monospace",
                            ha="center", va="center",
                            bbox=dict(boxstyle="round,pad=0.15",
                                      fc="#1a2332", ec="#3b4a61", lw=0.6))
                k = j + 1
            continue

    # handshake dots: pair every *valid row with the matching *ready row
    def get_row(lbl: str):
        for k2, yrow, lab, vals in drawn:
            if k2 in ("bit", "bus") and lab == lbl:
                return yrow, vals
        return None, None

    for kind, yrow, label, vals in drawn:
        if kind != "bit" or not label.endswith("valid"):
            continue
        yy, rv = get_row(label.replace("valid", "ready"))
        if rv is None:
            continue
        for k in range(len(cycles)):
            if vals[k] and rv[k]:
                ax.plot(xs[k], yrow + 0.36, marker="o", ms=3.4,
                        mfc="#e8f0f8", mec="none", zorder=5)

    # annotation lines
    for cyc, text in spec.get("marks", []):
        x = (cyc - c0) * CYCLE / 1000.0
        ax.axvline(x, color="#39465a", lw=0.8, ls="--")
        if text:
            ax.text(x + 4, 0.62, text, color="#8fa3b8", fontsize=7.6,
                    family="monospace", ha="left", va="top")

    ax.set_xlim(0, xs[-1] + 25)
    ax.set_xlabel("time (ns)   -   cyan = VALID, green = reset, violet = payload bus,"
                  " dot = handshake (VALID & READY)",
                  color="#8fa3b8", fontsize=9, family="monospace")
    ax.tick_params(axis="x", colors="#8fa3b8", labelsize=8.5)
    ax.grid(axis="x", color="#1d2733", lw=0.7)

    try:
        vcd_disp = vcd_path.relative_to(ROOT_REF)
    except ValueError:
        vcd_disp = vcd_path
    ax.set_title(spec["title"], color="#d5dde6", fontsize=10.5,
                 family="monospace", pad=8)
    fig.text(0.008, 0.012,
             f"waveform: {vcd_disp} (Verilator 5.052 --trace + cocotb 2.1.0,"
             f" 10 ns clock)   |   view: surfer {vcd_disp}"
             f"   |   regen: make waves",
             color="#65788e", fontsize=7.4, family="monospace")
    fig.tight_layout(rect=[0, 0.04, 1, 1])
    out_png.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(out_png, facecolor=fig.get_facecolor())
    plt.close(fig)
    print(f"  wrote {out_png} ({out_png.stat().st_size // 1024} KB),"
          f" cycles {c0}..{c1} ({scope})")


# ---------------------------------------------------------------------------

if __name__ == "__main__":
    if len(sys.argv) == 2 and sys.argv[1] == "--selftest":
        _v = Vcd(Path("tests/dump.vcd"))
        print("ids:", len(_v.path_of), "t_end:", _v.t_end)
        sys.exit(0)
    if len(sys.argv) < 4:
        sys.exit("usage: render_wave.py <vcd> <spec.json> <out.png>")
    render(Path(sys.argv[1]), json.loads(Path(sys.argv[2]).read_text()),
           Path(sys.argv[3]))

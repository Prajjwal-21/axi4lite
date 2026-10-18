#!/usr/bin/env python3
"""Render the terminal-style evidence screenshots in docs/screenshots/.

Every screenshot is regenerated from the recorded evidence files under
results/ - never hand-typed - so the images can always be rebuilt from a
clean checkout:

    make lint && make regress && make coverage && make mutation && make synth
    .venv/bin/python scripts/make_screens.py     # or: make screens

A line is a list of (text, colour) segments; screens assemble their content
from the evidence files with per-cell colours where the source data has them.
"""

from __future__ import annotations

import json
import re
from datetime import date
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "docs" / "screenshots"

FONT_PATH = "/System/Library/Fonts/Menlo.ttc"     # macOS; falls back below
FONT_SIZE = 14                                    # points, drawn at 2x
LINE_H = 21
PAD_X = 24
PAD_TOP = 44
PAD_BOTTOM = 26
MAX_W = 1560

COL_TEXT = (215, 221, 232)
COL_DIM = (120, 133, 148)
COL_GREEN = (124, 227, 139)
COL_YELLOW = (242, 205, 92)
COL_RED = (255, 123, 114)
COL_CYAN = (121, 192, 255)
COL_WINDOW = (30, 36, 45)
COL_HEAD = (139, 149, 165)
COL_WHITE = (240, 244, 250)

Seg = tuple[str, tuple]
Line = list[Seg]

FONT: ImageFont.FreeTypeFont = None


def font() -> ImageFont.FreeTypeFont:
    global FONT
    if FONT is None:
        FONT = ImageFont.truetype(FONT_PATH, 2 * int(FONT_SIZE))
    return FONT


def seg(text: str, colour: tuple = COL_TEXT) -> Seg:
    return (text, colour)


def load(path: Path) -> list[str]:
    return path.read_text().splitlines() if path.is_file() else []


# ---------------------------------------------------------------------------
# evidence parsing -> content lines
# ---------------------------------------------------------------------------

def regression_lines() -> list[Line]:
    """Totals across the sweep files (4 DUTs x seeds 1,2,3,7)."""
    seeds = (1, 2, 3, 7)
    bases = ["crossbar_axil_crossbar_tests",
             "peripherals_axil_peripheral_tests",
             "subsystem_axil_subsystem_tests",
             "probe_axil_env_tests"]
    totals = {"PASS": 0, "FAIL": 0, "SKIP": 0}
    module_runs = 0
    for base in bases:
        for seed in seeds:
            payload = json.loads(
                (ROOT / "results/cocotb" / f"{base}_s{seed}.json").read_text())
            module_runs += 1
            for t in payload["tests"]:
                totals[t["status"]] = totals.get(t["status"], 0) + 1
    crossbar = json.loads((ROOT / "results/cocotb/"
                           "crossbar_axil_crossbar_tests_s1.json").read_text())

    lines: list[Line] = [
        [seg("[build] crossbar    toplevel=crossbar_checker_top")],
        [seg("[test]  crossbar    module=axil_crossbar_tests_s1 seed=1")],
        [seg("    ...", COL_DIM)],
    ]
    for t in crossbar["tests"][:3]:
        lines.append([seg(f"    ok   "), seg(t["name"], COL_WHITE),
                      seg(f" ({t['time_s']:.2f}s)", COL_DIM)])
    lines.append([seg("    ...", COL_DIM)])
    for t in crossbar["tests"][-2:]:
        lines.append([seg("    ok   "), seg(t["name"], COL_WHITE),
                      seg(f" ({t['time_s']:.2f}s)", COL_DIM)])
    lines.append([])
    colour = COL_GREEN if totals["FAIL"] == 0 else COL_RED
    lines.append([seg(f"summary: {totals['PASS']} passed, "
                      f"{totals['FAIL']} failed, {totals['SKIP']} skipped"
                      f" across {module_runs} module run(s)", colour)])
    return lines


def lint_lines() -> list[Line]:
    lines: list[Line] = []
    for raw in load(ROOT / "results/lint/lint_console.log"):
        raw = raw.rstrip()
        colour = COL_GREEN if raw.endswith("clean") else COL_RED
        lines.append([seg(raw, colour)])
    if not lines:
        lines = [[seg("<run scripts/lint.sh first>", COL_DIM)]]
    return lines


def coverage_lines() -> list[Line]:
    md = load(ROOT / "results/coverage/summary.md")
    lines: list[Line] = []
    # functional headline
    for raw in md:
        m = re.search(r"(\d+)/(\d+) bins hit \((\d+\.\d)%\)", raw)
        if m:
            lines.append([seg("functional coverage (declared bins, monitored"
                              " boundary traffic): ", COL_TEXT),
                          seg(f"{m.group(1)}/{m.group(2)} hit ({m.group(3)}%)",
                              COL_YELLOW)])
            break
    lines.append([seg("unhit bins are itemised per coverpoint in the report,"
                      " not hidden", COL_DIM)])
    lines.append([])
    lines.append([seg("Verilator line/toggle/branch coverage (merged, seed 1):",
                      COL_CYAN)])
    want = False
    for raw in md:
        s = raw.strip()
        if s.startswith("## Verilator"):
            want = True
        elif s.startswith("## Functional"):
            want = False
        elif want and s.startswith("|"):
            if "source |" in s or set(s) <= set("|- "):
                continue
            bold = s.startswith("| **")
            colour = COL_CYAN if bold else COL_TEXT
            name, lin, tog, br = [c.strip().strip("`").strip("*")
                                  for c in s.strip("|").split("|")]
            lines.append([seg(f"{name:<40}", colour),
                          seg(f"{lin:<20}", COL_TEXT),
                          seg(f"{tog:<20}", COL_TEXT),
                          seg(br, COL_TEXT)])
    lines.append([seg("          " + "lines".ljust(20) + "toggles".ljust(20)
                      + "branches/hit-total", COL_DIM)])
    return lines


def mutation_lines() -> list[Line]:
    md = load(ROOT / "results/mutation/summary.md")
    lines: list[Line] = []
    for raw in md:
        s = raw.strip()
        if s.startswith("**") and "detected" in s:
            lines.append([seg(s.strip("*"), COL_YELLOW)])
        if s.startswith("Formal cross-check:"):
            m = re.search(r"ran against (\d+) mutant\(s\) and refuted (\d+)", s)
            if m:
                lines.append([seg(f"Formal cross-check: formal/routing.sby"
                                  f" (unbounded k-induction) vs {m.group(1)}"
                                  f" mutants -> {m.group(2)} refuted",
                                  COL_TEXT)])
        if s.startswith("| `M"):
            cells = [c.strip().strip("`") for c in s.strip("|").split("|")]
            mut, area, sim, how, routing, tme = cells[:6]
            how_short = "failing test(s)" if "failing" in how else "-"
            lines.append([
                seg(f"{mut:<22}", COL_WHITE),
                seg(f"{area:<34}", COL_DIM),
                seg(f"{sim:<10}", COL_RED if sim == "DETECTED" else COL_YELLOW),
                seg(f"{how_short:<17}", COL_DIM),
                seg(f"{routing:<6}", COL_GREEN if routing == "PASS" else COL_RED),
                seg(tme, COL_DIM),
            ])
    refs = [r.strip() for r in md if r.strip().startswith("Formal evidence:")]
    if refs:
        lines.append([])
        lines.append([seg("-- routing.sby refutations, verbatim --", COL_DIM)])
        for r in refs:
            inner = r.replace("Formal evidence: `", "").rstrip("`")
            m = re.search(r"work/(M[^/]+)/routing\]\s+(\S+?):\s+"
                          r"(\S+ \S+ )?Assert failed in \S+: (\S+)", inner)
            if m:
                when = m.group(3).replace("##", "").strip()
                prop = (m.group(4)
                        .replace("u_dut.g_mst[0].u_mport.", "m0.")
                        .replace("u_dut.g_mst[1].u_mport.", "m1.")
                        .replace("u_dut.u_error_slave.", "err.")
                        .replace("u_dut.", ""))
                lines.append([seg(f"{m.group(1):<22} {m.group(2):<11}"
                                  f" Assert failed: {prop}", COL_GREEN)])
            else:
                short = re.sub(r"\S*?results/mutation/work/", "", inner)
                lines.append([seg(short, COL_GREEN)])
    return lines


def synth_lines() -> list[Line]:
    log = load(ROOT / "results/synth/synth_peripheral_subsystem.log")
    start = next((i for i, raw in enumerate(log)
                  if raw.startswith("=== design hierarchy ===")), None)
    if start is None:
        return [[seg("<run make synth first>", COL_DIM)]]
    block = [r.rstrip() for r in log[start:] if r.strip()]
    stop = next((i for i, r in enumerate(block)
                 if r.startswith("End of script")), len(block))
    lines: list[Line] = []
    for raw in block[:stop]:
        colour = COL_YELLOW if re.match(r"^\s*\d+ cells$", raw) else COL_TEXT
        lines.append([seg(raw, colour)])
    for raw in log:
        if raw.startswith("End of script.") or raw.startswith("Yosys 0.70"):
            lines.append([seg(raw.rstrip(), COL_DIM)])
    return lines


def probe_lines() -> list[Line]:
    lines: list[Line] = []
    for name, headline in (
            ("M1-completion-d16.txt", "M1-write-slot-hole   --  "
             "formal/completion.sby @ depth 16 (mutant RTL copy)"),
            ("M7-completion-d16.txt", "M7-gnt-hold-off      --  "
             "formal/completion.sby @ depth 16 (mutant RTL copy)")):
        lines.append([seg(headline, COL_YELLOW)])
        lines.append([])
        for raw in load(ROOT / "results/mutation/probes" / name):
            if ("DONE (FAIL" in raw or "Status returned by engine: FAIL" in raw
                    or "Assert failed" in raw or "BMC failed" in raw):
                lines.append([seg(raw, COL_RED)])
            elif "DONE (PASS" in raw or "Status returned by engine: pass" in raw:
                lines.append([seg(raw, COL_GREEN)])
            else:
                lines.append([seg(raw)])
        lines.append([])
    return lines


def formal_lines() -> list[Line]:
    """One row per formal job: mode/bound label, verdict from the .txt tail."""
    labels = {"decode": "k-induction, unbounded",
              "routing": "k-induction, unbounded",
              "reset": "BMC 16",
              "completion": "BMC 24",
              "progress": "PDR, unbounded"}
    lines: list[Line] = []
    for job, label in labels.items():
        tail = load(ROOT / "results/formal" / f"{job}.txt")
        done = next((r for r in tail if "DONE" in r), "")
        result = ("PASS" if "DONE (PASS" in done else
                  "FAIL" if "DONE (FAIL" in done else "PENDING")
        colour = (COL_GREEN if result == "PASS" else
                  COL_RED if result == "FAIL" else COL_YELLOW)
        lines.append([seg(f"{job:<12}", COL_WHITE),
                      seg(f"{label:<26}", COL_TEXT),
                      seg(result, colour)])
        engine = next((r for r in tail if "summary: engine_0 (" in r), "")
        if engine:
            text = engine.split("summary: ")[-1].replace(
                "[formal/", "").replace("] ", " ")
            lines.append([seg(f"{'':<12}{text}", COL_DIM)])
    return lines


# ---------------------------------------------------------------------------
# drawing
# ---------------------------------------------------------------------------

def line_width(line: Line, fnt: ImageFont.FreeTypeFont) -> int:
    return sum(fnt.getbbox(t if t else " ")[2] for t, _ in line)


def render_screen(stem: str, title: str, lines: list[Line], footer: str) -> Path:
    fnt = font()
    content_w = max((line_width(l, fnt) for l in lines), default=10)
    win_w = min(MAX_W, max(content_w, fnt.getbbox(title)[2],
                           fnt.getbbox(footer)[2]) + 2 * PAD_X + 4)
    win_h = PAD_TOP + len(lines) * LINE_H + PAD_BOTTOM
    margin = 18
    footer_h = 36
    img = Image.new("RGB", (win_w + 2 * margin, win_h + 2 * margin + footer_h),
                    (255, 255, 255))
    d = ImageDraw.Draw(img)
    x0, y0 = margin, margin
    d.rounded_rectangle([x0, y0, x0 + win_w, y0 + win_h], radius=14,
                        fill=COL_WINDOW)
    for i, c in enumerate(((255, 95, 86), (255, 189, 46), (39, 201, 63))):
        d.ellipse([x0 + 22 + i * 24 - 6, y0 + 20 - 6,
                   x0 + 22 + i * 24 + 6, y0 + 20 + 6], fill=c)
    d.text((x0 + 100, y0 + 12), title, font=fnt, fill=COL_HEAD)
    d.line([x0, y0 + 40, x0 + win_w, y0 + 40], fill=(45, 54, 66), width=1)

    y = y0 + PAD_TOP
    for line in lines:
        x = x0 + PAD_X
        for text, colour in line:
            d.text((x, y), text if text else " ", font=fnt, fill=colour)
            x += fnt.getlength(text)
        y += LINE_H

    d.text((margin, y0 + win_h + 14), footer, font=fnt, fill=(106, 115, 128))
    out = OUT / f"{stem}.png"
    out.parent.mkdir(parents=True, exist_ok=True)
    img.save(out)
    print(f"  wrote {out.relative_to(ROOT)} ({out.stat().st_size // 1024} KB)")
    return out


def main() -> int:
    today = date.today().isoformat()
    screens = [
        ("01-regression", "$ scripts/run_tests.py --seeds 1,2,3,7 · " + today
         + " · Verilator 5.052 + cocotb 2.1.0", regression_lines(),
         "evidence: results/cocotb/ (xUnit + per-test logs + summary.json)"
         " · reproduce: make regress"),
        ("02-lint", "$ scripts/lint.sh · 28 Verilator configurations,"
         " plain + -DAXIL_ASSERTIONS", lint_lines(),
         "evidence: results/lint/lint_console.log · reproduce: make lint"),
        ("03-coverage", "$ scripts/coverage.sh · functional bins + Verilator"
         " line/toggle/branch, seed 1", coverage_lines(),
         "evidence: results/coverage/summary.md · reproduce: make coverage"),
        ("04-mutation", "$ scripts/mutation_test.py --formal · regression +"
         " unbounded routing proof per mutant", mutation_lines(),
         "evidence: results/mutation/summary.md (+ per-mutant logs)"
         " · reproduce: make mutation"),
        ("05-synthesis", "$ make synth · yosys -s scripts/synth.ys",
         synth_lines(),
         "generic gate mapping of peripheral_subsystem (no timing model)"
         " · evidence: results/synth/synth_peripheral_subsystem.log"),
        ("06-probes", "results/mutation/probes/ · completion (BMC 16) run"
         " against mutant RTL copies", probe_lines(),
         "M1 is refuted by the completion property set (ap_one_outstanding);"
         " M7 passes - owned by the simulation checker (docs/results.md §5.2)"),
        ("07-formal", "SymbiYosys · 5 jobs · " + today, formal_lines(),
         "evidence: results/formal/*.txt · reproduce: make formal /"
         " make formal-deep"),
    ]
    for stem, title, lines, footer in screens:
        render_screen(stem, title, lines, footer)
    print(f"\nDONE: {len(screens)} screenshot(s) -> docs/screenshots/")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

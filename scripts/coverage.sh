#!/usr/bin/env bash
# -----------------------------------------------------------------------------
# scripts/coverage.sh -- collect all coverage evidence into results/coverage/.
#
# Steps
#   1. run the whole cocotb regression once (seed 1) with Verilator line+toggle
#      instrumentation; the per-DUT databases land in results/coverage/*.dat and
#      the functional-coverage reports (records/results/coverage/functional_*.json)
#   2. merge the Verilator databases into results/coverage/coverage.info and
#      write per-source annotations under results/coverage/annotate/
#   3. render results/coverage/summary.md: line/toggle hit rates per RTL file,
#      functional coverpoints, and the regression xUnit totals
#
# Usage:
#   scripts/coverage.sh                 # seed 1 (default)
#   scripts/coverage.sh --seed 7        # any single seed
#   scripts/coverage.sh --dut crossbar  # restrict DUTs (pass-through to runner)
#
# The job refuses multi-seed runs: the coverage database of the last run per
# DUT would overwrite the earlier ones.
# -----------------------------------------------------------------------------
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

PY="${PYTHON:-$ROOT/.venv/bin/python}"
OUT="results/coverage"
mkdir -p "$OUT"

if [ ! -x "$PY" ]; then
  echo "coverage: python interpreter not found at $PY (set PYTHON=...)" >&2
  exit 1
fi

rm -f "$OUT"/functional_*.json "$OUT"/coverage.info
rm -rf "$OUT"/annotate
rm -f "$OUT"/*.dat

echo "== step 1/3: regression with Verilator line+toggle coverage"
"$PY" scripts/run_tests.py --coverage "$@"

echo
echo "== step 2/3: merging Verilator databases"
shopt -s nullglob
DATS=("$OUT"/*.dat)
shopt -u nullglob
if [ "${#DATS[@]}" -eq 0 ]; then
  echo "coverage: no .dat files were collected; nothing to merge" >&2
  exit 1
fi
verilator_coverage --write "$OUT/coverage.info" "${DATS[@]}"
verilator_coverage --annotate "$OUT/annotate" "$OUT/coverage.info"
echo "   merged ${#DATS[@]} database(s): ${DATS[*]}"

echo
echo "== step 3/3: rendering $OUT/summary.md"
"$PY" - "$OUT" <<'PYEOF'
import json
import sys
import time
import xml.etree.ElementTree as ET
from collections import defaultdict
from pathlib import Path

out_dir = Path(sys.argv[1])
root = out_dir.resolve().parents[1]

# ---- Verilator line + toggle coverage --------------------------------------
# coverage.info is a SystemC::Coverage record list.  Each C record carries its
# key/value fields separated by 0x01 (key) / 0x02 (value):
#   C '\x01f\x02<file>\x01l\x02<line>\x01n\x02<col>\x01t\x02<type>...' <count>
def parse_record(payload: str) -> dict:
    fields = {}
    for chunk in payload.split("\x01")[1:]:
        key, _, value = chunk.partition("\x02")
        fields[key] = value
    return fields

stats = defaultdict(lambda: {"line": [0, 0], "toggle": [0, 0], "branch": [0, 0]})
for raw in (out_dir / "coverage.info").read_text().splitlines():
    if not raw.startswith("C '"):
        continue
    payload, _, count = raw.rpartition("' ")
    fields = parse_record(payload[3:])
    f = fields.get("f")
    t = fields.get("t", "")
    if not f or t not in stats[f]:
        continue
    stats[f][t][1] += 1
    stats[f][t][0] += 1 if int(count) else 0

# ---- functional coverage ----------------------------------------------------
func = {}
for path in sorted(out_dir.glob("functional_*.json")):
    report = json.loads(path.read_text())
    agg = func.setdefault(report["name"], defaultdict(int))
    for point in report["points"]:
        agg[(point["coverpoint"], point["bin"])] += point["count"]

# ---- regression totals (this coverage run only) ------------------------------
summary_path = root / "results" / "cocotb" / "summary.json"
if summary_path.is_file():
    run = json.loads(summary_path.read_text())
    totals = {"passed": run["totals"].get("PASS", 0),
              "failed": run["totals"].get("FAIL", 0),
              "skipped": run["totals"].get("SKIP", 0)}
    module_runs = len(run.get("modules", {}))
else:
    totals = {"passed": 0, "failed": 0, "skipped": 0}
    module_runs = 0
    for path in sorted((root / "results" / "cocotb").glob("*.xml")):
        for case in ET.parse(path).iter("testcase"):
            tags = {child.tag for child in case}
            if "failure" in tags or "error" in tags:
                totals["failed"] += 1
            elif "skipped" in tags:
                totals["skipped"] += 1
            else:
                totals["passed"] += 1

# ---- render ------------------------------------------------------------------
def pct(hit: int, total: int) -> str:
    return f"{100.0 * hit / total:.1f}%" if total else "n/a"

lines = []
lines.append("# Coverage summary")
lines.append("")
lines.append(f"Generated {time.strftime('%Y-%m-%d %H:%M:%S %Z')} by "
             f"`scripts/coverage.sh` (cocotb regression, seed 1; Verilator "
             f"`--coverage-line --coverage-toggle`).")
lines.append("")
lines.append("## Verification regression")
lines.append("")
lines.append(f"* {totals['passed']} tests passed, {totals['failed']} failed, "
             f"{totals['skipped']} skipped across {module_runs} module run(s) "
             f"(this run; xUnit files under `results/cocotb/`)")
lines.append("")
lines.append("## Verilator line + toggle coverage")
lines.append("")
lines.append("| source | lines hit/total | toggles hit/total | branches hit/total |")
lines.append("| --- | --- | --- | --- |")
rtl_l = [0, 0]; rtl_t = [0, 0]; rtl_b = [0, 0]
tb_l = [0, 0]; tb_t = [0, 0]; tb_b = [0, 0]
for path in sorted(stats):
    rel = Path(path)
    try:
        rel = rel.relative_to(root)
    except ValueError:
        pass
    s = stats[path]
    is_rtl = str(rel).startswith("rtl/")
    for kind, rtl_acc, tb_acc in (("line", rtl_l, tb_l), ("toggle", rtl_t, tb_t),
                                  ("branch", rtl_b, tb_b)):
        acc = rtl_acc if is_rtl else tb_acc
        acc[0] += s[kind][0]
        acc[1] += s[kind][1]
    lines.append(f"| `{rel}` | {s['line'][0]}/{s['line'][1]} | "
                 f"{s['toggle'][0]}/{s['toggle'][1]} | "
                 f"{s['branch'][0]}/{s['branch'][1]} |")
lines.append(f"| **rtl/ total** | {rtl_l[0]}/{rtl_l[1]} ({pct(*rtl_l)}) | "
             f"{rtl_t[0]}/{rtl_t[1]} ({pct(*rtl_t)}) | "
             f"{rtl_b[0]}/{rtl_b[1]} ({pct(*rtl_b)}) |")
lines.append(f"| tb/ + harness total | {tb_l[0]}/{tb_l[1]} ({pct(*tb_l)}) | "
             f"{tb_t[0]}/{tb_t[1]} ({pct(*tb_t)}) | "
             f"{tb_b[0]}/{tb_b[1]} ({pct(*tb_b)}) |")
lines.append("")
lines.append("Per-source annotated listings: `results/coverage/annotate/` "
             "(`verilator_coverage --annotate`); branch coverage comes from "
             "Verilator's expression/condition instrumentation.")
lines.append("")
lines.append("## Functional coverage (cocotb, crossbar DUT)")
lines.append("")
for name, agg in sorted(func.items()):
    bins_hit = sum(1 for v in agg.values() if v)
    lines.append(f"### {name}: {bins_hit}/{len(agg)} bins hit "
                 f"({pct(bins_hit, len(agg))})")
    lines.append("")
    lines.append("| coverpoint | bin | count |")
    lines.append("| --- | --- | --- |")
    for (cp, b), count in sorted(agg.items()):
        lines.append(f"| `{cp}` | `{b}` | {count} |")
    lines.append("")
if not func:
    lines.append("_No functional-coverage reports were produced._")
    lines.append("")
lines.append("## Reproduce")
lines.append("")
lines.append("```sh")
lines.append("scripts/coverage.sh            # regression + .dat + info + this report")
lines.append("verilator_coverage --rank results/coverage/coverage.info")
lines.append("```")

(out_dir / "summary.md").write_text("\n".join(lines) + "\n")
print(f"   wrote {out_dir / 'summary.md'}")
PYEOF

echo
echo "COVERAGE DONE: $OUT/summary.md"

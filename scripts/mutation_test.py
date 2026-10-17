#!/usr/bin/env python3
"""Mutation testing for the AXI4-Lite crossbar + peripheral subsystem.

For every mutant below the script

  1. copies rtl/ into results/mutation/work/<id>/rtl and applies ONE textual
     edit to the copy (the pattern must occur exactly once, or the run aborts -
     a silent no-op mutation would be a fake clean result),
  2. runs the same cocotb regression as scripts/run_tests.py against that copy,
     isolated through the AXIL_RTL_DIR / AXIL_RESULTS_DIR overrides so neither
     the tree under test nor the real results/ directory is touched,
  3. classifies the outcome honestly:

       DETECTED     the regression failed - with the evidence of *how*
                    (failing tests, simulator abort with the assertion name,
                    or runner error),
       SURVIVED     the regression passed: the test suite does NOT catch this
                    mutation.  Reported as a coverage gap, not hidden.
       BUILD_ERROR  the mutant did not elaborate (invalid mutation, not a test
                    verdict),
       TIMEOUT      the regression did not finish within the budget (a hang
                    counts as caught-by-timeout; the per-test cocotb timeouts
                    normally fire first).

With --formal the script ALSO runs the unbounded routing proof
(formal/routing.sby, k-induction) against every mutant's RTL copy and records
the two verdicts side by side.  A mutant that survives one side and is refuted
by the other is a concrete measure of what that side contributes; the
response-mask mutants M2/M2b are exactly that case.

The baseline entry (no edit) is run first and must pass; if it does not, the
harness itself is broken and no mutation verdict would mean anything.

Outputs
    results/mutation/summary.md     human-readable report (committed evidence)
    results/mutation/summary.json   machine-readable record
    results/mutation/work/<id>/     rtl copy, applied.diff, run.log, repro.sh,
                                    per-mutant xUnit logs under results/cocotb/

Usage
    scripts/mutation_test.py                       # baseline + all mutants
    scripts/mutation_test.py --formal              # + routing.sby per mutant
    scripts/mutation_test.py --mutant M1-write-slot-hole
    scripts/mutation_test.py --list                # validate mutant patterns
    scripts/mutation_test.py --seed 7 --timeout 3600

Exit status is 0 when every run finished (survivors are still reported); pass
--fail-on-survivor to make SURVIVED nonzero, e.g. for a strict CI gate.
"""

from __future__ import annotations

import argparse
import difflib
import json
import os
import shutil
import subprocess
import sys
import time
import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path
from typing import Dict, List, Optional, Sequence

ROOT = Path(__file__).resolve().parents[1]
RTL = ROOT / "rtl"
RESULTS = ROOT / "results" / "mutation"
WORK = RESULTS / "work"
RUNNER = ROOT / "scripts" / "run_tests.py"

#: DUTs a mutation run exercises.  `probe` is skipped deliberately: its
#: harness contains no file from rtl/, so no mutant can influence it (it checks
#: the testbench's own timing convention).
MUTATION_DUTS = ["crossbar", "peripherals", "subsystem"]


# ---------------------------------------------------------------------------
# Mutant catalogue
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class Mutant:
    mid: str
    area: str
    file: str           # relative to rtl/
    description: str
    old: str
    new: str


MUTANTS: List[Mutant] = [
    Mutant(
        mid="M0-baseline",
        area="control",
        file="axi_lite_master_port.sv",
        description=(
            "No edit at all: end-to-end control proving the mutation harness "
            "runs the same regression and reports honestly.  Must pass."
        ),
        old="",
        new="",
    ),
    Mutant(
        mid="M1-write-slot-hole",
        area="master port / write commit",
        file="axi_lite_master_port.sv",
        description=(
            "wr_start is committed when EITHER half of the write is dispatched "
            "(`aw_done | w_done`).  The mutation requires both dispatches in the "
            "same cycle, reopening the window in which a second AW can be "
            "accepted while the first W is still pending.  This is the bug "
            "formal/routing.sby found historically (ap_one_outstanding); the "
            "in-RTL protocol assertions (ap_w_hold) and directed test 13 also "
            "target it."
        ),
        old="    assign wr_start = aw_done | w_done;",
        new="    assign wr_start = aw_done & w_done;",
    ),
    Mutant(
        mid="M2-rsp-mask-off",
        area="master port / response gating",
        file="axi_lite_master_port.sv",
        description=(
            "w_rsp_en drops the 'no half still pending' mask: a target that "
            "answers before it has taken both write halves completes the write "
            "early, the stale half survives, the next AW is accepted under it "
            "and the port glues two transactions together before deadlocking.  "
            "Simulation targets are protocol-conformant, so it survives the "
            "regression - and the first run of this study showed it ALSO "
            "survived formal/routing.sby, because no invariant pinned the mask: "
            "the damage needs an out-of-contract target, and every current "
            "property is satisfied by the mixed transaction.  The response-"
            "contract assertion added to the master port (ap_b_rsp_needs_full_"
            "dispatch; a tautology over this RTL, see the diff context) closes "
            "the gap, and the formal cross-check below records routing.sby "
            "refuting the mutant."
        ),
        old="    assign w_rsp_en = wr_wait_q & ~aw_pend_q & ~w_pend_q;",
        new="    assign w_rsp_en = wr_wait_q;",
    ),
    Mutant(
        mid="M2b-rsp-mask-off-read",
        area="master port / response gating (read)",
        file="axi_lite_master_port.sv",
        description=(
            "Read-side twin of M2: r_rsp_en drops ~ar_pend_q.  An early RVALID "
            "can then consume the read slot while the AR is still pending - the "
            "class of trace formal/routing.sby originally found (the second AR "
            "was accepted and then dropped by the shared pending flag).  The "
            "mask is the fix and the contract assertion ap_r_rsp_needs_dispatch "
            "keeps it pinned: simulation cannot see it (targets answer after "
            "the AR), the formal cross-check can."
        ),
        old="    assign r_rsp_en = rd_active_q & ~ar_pend_q;",
        new="    assign r_rsp_en = rd_active_q;",
    ),
    Mutant(
        mid="M3-wstrb-drop",
        area="master port / W payload capture",
        file="axi_lite_master_port.sv",
        description=(
            "The captured write strobe is replaced with all-ones, i.e. every "
            "byte write becomes a full-word write.  Byte-enable tests and the "
            "scoreboard comparators must catch the wrong bytes landing."
        ),
        old="                w_strb_q <= wstrb_i;",
        new="                w_strb_q <= {DATA_WIDTH/8{1'b1}};",
    ),
    Mutant(
        mid="M4-decode-drop-last",
        area="address decoder",
        file="axi_lite_address_decoder.sv",
        description=(
            "The region loop stops one slave short, so the last real region "
            "(TIMER) decodes to the error target (DECERR) instead of its "
            "registers.  Every crossbar/subsystem access to the TIMER window "
            "must notice."
        ),
        old="        for (int unsigned i = 0; i < NSLV_REAL; i++) begin",
        new="        for (int unsigned i = 0; i < NSLV_REAL - 1; i++) begin",
    ),
    Mutant(
        mid="M5-bresp-okay",
        area="error target",
        file="axil_error_slave.sv",
        description=(
            "The invalid-address write response flips from DECERR to OKAY "
            "(read side left intact: a single-channel response-code bug).  "
            "Tests that check the response code of unmapped writes must fail."
        ),
        old="    assign bresp   = `AXIL_RESP_DECERR;",
        new="    assign bresp   = `AXIL_RESP_OKAY;",
    ),
    Mutant(
        mid="M6-rr-ptr-frozen",
        area="arbiter / fairness",
        file="axi_lite_arbiter.sv",
        description=(
            "The round-robin priority pointer no longer advances on grants, so "
            "with two contending masters the same one always wins and the "
            "other starves.  Contention tests (both masters hammering one "
            "slave) must fail instead of completing."
        ),
        old="                nxt_idx = (i == (N - 1)) ? {PTRW{1'b0}} : PTRW'(i + 1);",
        new="                nxt_idx = ptr;",
    ),
    Mutant(
        mid="M7-gnt-hold-off",
        area="arbiter / hold-until-done",
        file="axi_lite_arbiter.sv",
        description=(
            "The arbiter re-selects every cycle instead of holding the grant "
            "until the transaction completes, so the target-side owner can "
            "change while a slave still owns a transaction: response-routing "
            "by owner breaks.  The slave-port/crossbar ownership assertions and "
            "the protocol checker must catch it."
        ),
        old="        end else if (done || (|gnt_q == 1'b0)) begin",
        new="        end else if (1'b1) begin",
    ),
    Mutant(
        mid="M8-awaddr-swap",
        area="slave port / payload mux",
        file="axi_lite_slave_port.sv",
        description=(
            "The address presented to the granted target is taken from the "
            "other master's payload mux input - classical misrouting/cross-talk "
            "between masters.  The crossbar provenance assertion and the "
            "scoreboard's address/data pairing must catch it."
        ),
        old="            if (w_gnt_w[m]) begin\n                awaddr_o = w_addr_i[m];",
        new="            if (w_gnt_w[m]) begin\n                awaddr_o = w_addr_i[(m + 1) % NMST];",
    ),
]


# ---------------------------------------------------------------------------
# Outcome model
# ---------------------------------------------------------------------------

@dataclass
class FormalOutcome:
    """Verdict of formal/routing.sby run against a mutant's RTL copy."""
    status: str = ""        # PASS / FAIL / ERROR / SKIP
    kind: str = ""
    evidence: str = ""
    rc: Optional[int] = None
    seconds: float = 0.0


@dataclass
class Outcome:
    status: str = ""
    kind: str = ""
    evidence: str = ""
    failing: List[str] = field(default_factory=list)
    rc: Optional[int] = None
    seconds: float = 0.0
    formal: Optional[FormalOutcome] = None


def read_failing_tests(cocotb_dir: Path) -> List[str]:
    failures: List[str] = []
    if not cocotb_dir.is_dir():
        return failures
    for xml in sorted(cocotb_dir.glob("*.xml")):
        try:
            tree = ET.parse(xml)
        except ET.ParseError:
            failures.append(f"{xml.name}: unparsable xUnit (simulator aborted mid-run?)")
            continue
        for case in tree.iter("testcase"):
            for child in case:
                if child.tag in ("failure", "error"):
                    msg = (child.get("message") or child.text or "").strip()
                    msg = " ".join(msg.split())[:240]
                    failures.append(f"{case.get('name', '?')}: {msg}")
    return failures


def first_pattern_line(text: str, patterns: Sequence[str]) -> str:
    for line in text.splitlines():
        if any(p in line for p in patterns):
            return " ".join(line.split())[:240]
    return ""


def classify(
    rc: int,
    timed_out: bool,
    log_text: str,
    work: Path,
    timeout: int,
) -> Outcome:
    if timed_out:
        return Outcome(
            status="TIMEOUT",
            kind=f"no verdict within {timeout}s (hang)",
            evidence=first_pattern_line(log_text, ("[test]", "Checking", "FAILED")),
            rc=rc,
        )
    if rc == 0:
        return Outcome(status="SURVIVED", rc=rc)
    build_line = first_pattern_line(log_text, ("[build] FAILED",))
    if build_line:
        return Outcome(status="BUILD_ERROR", kind="did not elaborate", evidence=build_line, rc=rc)
    failing = read_failing_tests(work / "results" / "cocotb")
    if failing:
        return Outcome(
            status="DETECTED",
            kind="failing test(s)",
            evidence="; ".join(failing[:6]) + (" ..." if len(failing) > 6 else ""),
            failing=failing,
            rc=rc,
        )
    assert_line = first_pattern_line(log_text, ("Assertion failed", "%Error", "Fatal"))
    kind = "simulator abort" if assert_line else "runner error"
    return Outcome(status="DETECTED", kind=kind, evidence=assert_line or first_pattern_line(
        log_text, ("Traceback", "RuntimeError", "Error")), rc=rc)


# ---------------------------------------------------------------------------
# Execution
# ---------------------------------------------------------------------------

def guarded_rmtree(path: Path) -> None:
    """rmtree restricted to this script's own workspace tree."""
    path = path.resolve()
    if WORK.resolve() not in path.parents:
        raise SystemExit(f"refusing to remove {path} (outside {WORK})")
    shutil.rmtree(path)


def prepare(mutant: Mutant) -> Path:
    work = WORK / mutant.mid
    if work.exists():
        guarded_rmtree(work)
    (work / "results").mkdir(parents=True)
    shutil.copytree(RTL, work / "rtl")
    if mutant.old == "" and mutant.new == "":
        (work / "applied.diff").write_text(
            f"# {mutant.mid}: no edit (baseline control)\n")
        return work
    src = work / "rtl" / mutant.file
    text = src.read_text()
    count = text.count(mutant.old)
    if count != 1:
        raise SystemExit(
            f"{mutant.mid}: pattern occurs {count} times in rtl/{mutant.file} "
            f"(expected exactly 1); refusing to run a silently different "
            f"mutation:\n{mutant.old}")
    mutated = text.replace(mutant.old, mutant.new)
    src.write_text(mutated)
    diff = "".join(difflib.unified_diff(
        text.splitlines(keepends=True), mutated.splitlines(keepends=True),
        fromfile=f"a/rtl/{mutant.file}", tofile=f"b/rtl/{mutant.file}"))
    (work / "applied.diff").write_text(diff)
    return work


def python_for_runs() -> str:
    venv = ROOT / ".venv" / "bin" / "python"
    return str(venv) if venv.is_file() else sys.executable


def run_formal_routing(work: Path) -> FormalOutcome:
    """Run the unbounded routing proof against the mutant's own RTL copy.

    sby resolves the paths in the .sby `[files]`/`[script]` sections relative
    to the invocation CWD and puts the job workdir NEXT TO the .sby file, so
    the job file is copied into the mutant workspace and sby is invoked with
    cwd=work: the proof then reads work/rtl (the mutant), and nothing in the
    repository's formal/ tree is touched.
    """
    sby = shutil.which("sby")
    if not sby:
        return FormalOutcome(status="SKIP", kind="sby not installed")
    (work / "formal").mkdir(exist_ok=True)
    shutil.copyfile(ROOT / "formal" / "axil_crossbar_harness.sv",
                    work / "formal" / "axil_crossbar_harness.sv")
    job = work / "routing.sby"
    shutil.copyfile(ROOT / "formal" / "routing.sby", job)
    start = time.monotonic()
    try:
        proc = subprocess.run(
            [sby, "-f", str(job)], cwd=work, capture_output=True, text=True,
            timeout=3600)
        rc, output = proc.returncode, proc.stdout + proc.stderr
    except subprocess.TimeoutExpired as exc:
        rc = -1
        output = (exc.stdout or "") + (exc.stderr or "")
        if isinstance(output, bytes):       # pragma: no cover - text mode guard
            output = output.decode(errors="replace")
    seconds = time.monotonic() - start
    (work / "run_routing.log").write_text(output)
    if rc == 0:
        return FormalOutcome(status="PASS", kind="mutant not distinguished by "
                             "the unbounded routing invariants", rc=rc,
                             seconds=seconds)
    if rc != 0:
        line = first_pattern_line(output, ("Assert failed in",))
        if line:
            return FormalOutcome(status="FAIL", kind="refuted by routing.sby",
                                 evidence=line, rc=rc, seconds=seconds)
        line = first_pattern_line(output, ("ERROR", "Error", "error"))
        return FormalOutcome(status="ERROR", kind=f"routing.sby rc={rc}",
                             evidence=line, rc=rc, seconds=seconds)
    return FormalOutcome(status="ERROR", kind=f"routing.sby rc={rc}",
                         rc=rc, seconds=seconds)


def run_mutant(mutant: Mutant, python: str, seed: int, timeout: int,
               formal_ok: bool = False) -> Outcome:
    work = prepare(mutant)
    cmd = [python, str(RUNNER),
           *[f"--dut={d}" for d in MUTATION_DUTS],
           "--seed", str(seed)]
    env = dict(os.environ)
    env.pop("PYTHONPATH", None)
    env["AXIL_RTL_DIR"] = str(work / "rtl")
    env["AXIL_RESULTS_DIR"] = str(work / "results")

    repro = work / "repro.sh"
    repro.write_text(
        "#!/bin/sh\n"
        f"# Exact reproduction of mutant {mutant.mid} ({mutant.area}).\n"
        f"# Run from anywhere; resolves the repository root itself.\n"
        f"cd \"$(dirname \"$0\")/../../../..\" || exit 1\n"
        f"AXIL_RTL_DIR={work / 'rtl'} \\\n"
        f"AXIL_RESULTS_DIR={work / 'results'} \\\n"
        f"exec {python} scripts/run_tests.py "
        + " ".join(f"--dut {d}" for d in MUTATION_DUTS)
        + f" --seed {seed}\n")
    repro.chmod(0o755)

    print(f"[mutation] {mutant.mid:<18} {mutant.area}")
    print(f"           cmd: {' '.join(cmd)}")
    start = time.monotonic()
    timed_out = False
    try:
        proc = subprocess.run(
            cmd, cwd=ROOT, env=env, capture_output=True, text=True,
            timeout=timeout)
        rc, output = proc.returncode, proc.stdout + proc.stderr
    except subprocess.TimeoutExpired as exc:
        timed_out = True
        rc = -1
        output = (exc.stdout or "") + (exc.stderr or "")
        if isinstance(output, bytes):       # pragma: no cover - text mode guard
            output = output.decode(errors="replace")
    elapsed = time.monotonic() - start

    (work / "run.log").write_text(output)
    outcome = classify(rc, timed_out, output, work, timeout)
    outcome.seconds = elapsed

    # The simulation build trees are large and fully regenerable; keep the
    # evidence (xUnit, logs, diffs, rtl copy) but not the object files.
    sim_dir = work / "results" / "sim"
    if sim_dir.is_dir():
        shutil.rmtree(sim_dir)

    if formal_ok:
        outcome.formal = run_formal_routing(work)
    return outcome


# ---------------------------------------------------------------------------
# Reporting
# ---------------------------------------------------------------------------

def render_summary(entries: List[tuple], seed: int, python: str, elapsed: float) -> str:
    lines: List[str] = []
    total = len(entries)
    counts: Dict[str, int] = {}
    for _, outcome, _ in entries:
        counts[outcome.status] = counts.get(outcome.status, 0) + 1
    detected = counts.get("DETECTED", 0) + counts.get("TIMEOUT", 0)
    survived = counts.get("SURVIVED", 0)

    lines.append("# Mutation testing report")
    lines.append("")
    lines.append(
        f"Regression: `scripts/run_tests.py` on DUTs "
        f"{', '.join(f'`{d}`' for d in MUTATION_DUTS)}, seed {seed}, "
        f"Python driver `{python}`.  Generated {time.strftime('%Y-%m-%d %H:%M:%S %Z')} "
        f"in {elapsed/60:.1f} min.")
    lines.append("")
    lines.append(
        "Detection means the regression failed for the mutant; each verdict "
        "lists *how* it failed.  SURVIVED is a real gap in the test suite and "
        "is reported as such - the in-rtl/formal flows may still catch it, "
        "which is noted per mutant where applicable.")
    lines.append("")
    lines.append(f"**{detected}/{total} detected (including hangs), "
                 f"{survived}/{total} survived, "
                 f"{counts.get('BUILD_ERROR', 0)} build error(s).**")
    formal_ran = [o.formal for _, o, _ in entries if o.formal]
    if formal_ran:
        refuted = sum(1 for f in formal_ran if f.status == "FAIL")
        lines.append("")
        lines.append(
            f"Formal cross-check: `formal/routing.sby` (unbounded k-induction) "
            f"ran against {len(formal_ran)} mutant(s) and refuted {refuted}.  "
            f"A mutant that survives one side and is caught by the other is a "
            f"concrete measure of what that side contributes.")
    lines.append("")
    lines.append("| mutant | area | sim verdict | how | routing.sby | time |")
    lines.append("|---|---|---|---|---|---|")
    for mutant, outcome, _ in entries:
        how = outcome.kind or "-"
        formal = outcome.formal.status if outcome.formal else "-"
        lines.append(f"| `{mutant.mid}` | {mutant.area} | {outcome.status} | "
                     f"{how} | {formal} | {outcome.seconds:.0f}s |")
    lines.append("")

    for mutant, outcome, work in entries:
        lines.append(f"## {mutant.mid} - {mutant.area}")
        lines.append("")
        lines.append(mutant.description)
        lines.append("")
        lines.append(f"Edit `rtl/{mutant.file}`:")
        lines.append("")
        diff = (work / "applied.diff").read_text().strip() or "(no edit)"
        lines.append("```diff")
        lines.append(diff)
        lines.append("```")
        lines.append("")
        lines.append(f"Verdict: **{outcome.status}**"
                     + (f" ({outcome.kind})" if outcome.kind else "")
                     + (f", runner rc={outcome.rc}" if outcome.rc is not None else ""))
        if outcome.evidence:
            lines.append("")
            lines.append(f"Evidence: `{outcome.evidence}`")
        if outcome.formal:
            f = outcome.formal
            lines.append("")
            lines.append(
                f"Unbounded routing proof against this mutant "
                f"(`formal/routing.sby`, k-induction + basecase): "
                f"**{f.status}**"
                + (f" ({f.kind})" if f.kind else "")
                + (f", rc={f.rc}" if f.rc is not None else "")
                + (f", {f.seconds:.1f}s" if f.seconds else ""))
            if f.evidence:
                lines.append("")
                lines.append(f"Formal evidence: `{f.evidence}`")
            lines.append("")
            lines.append("Reproduce the formal side:")
            lines.append("")
            lines.append("```sh")
            lines.append(f"cd results/mutation/work/{mutant.mid} && "
                         f"sby -f routing.sby")
            lines.append("```")
        lines.append("")
        lines.append("Reproduce:")
        lines.append("")
        lines.append("```sh")
        lines.append(f"./results/mutation/work/{mutant.mid}/repro.sh")
        lines.append("```")
        lines.append("")

    return "\n".join(lines)


# ---------------------------------------------------------------------------
# Entry point
# ---------------------------------------------------------------------------

def main(argv: Optional[Sequence[str]] = None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--mutant", action="append", dest="mutants",
                        help="run only the given mutant id (repeatable)")
    parser.add_argument("--seed", type=int, default=1,
                        help="cocotb seed for the mutation runs (default 1)")
    parser.add_argument("--formal", action="store_true",
                        help="also run the unbounded routing proof "
                             "(formal/routing.sby) against every mutant's RTL "
                             "copy and record the verdict side by side with "
                             "the simulation verdict")
    parser.add_argument("--timeout", type=int, default=1800,
                        help="per-mutant wall-clock budget in seconds "
                             "(default 1800; a timeout is reported as a hang)")
    parser.add_argument("--list", action="store_true",
                        help="list mutants and validate that every pattern "
                             "still matches the current RTL exactly once")
    parser.add_argument("--fail-on-survivor", action="store_true",
                        help="exit nonzero when any mutant survived (strict "
                             "mode for CI; default reports and exits 0)")
    args = parser.parse_args(argv)

    selected = MUTANTS
    if args.mutants:
        wanted = set(args.mutants)
        selected = [m for m in MUTANTS if m.mid in wanted]
        missing = wanted - {m.mid for m in selected}
        if missing:
            parser.error(f"unknown mutant id(s): {', '.join(sorted(missing))}")

    if args.list:
        ok = True
        for mutant in MUTANTS:
            if mutant.old == "":
                print(f"{mutant.mid:<18} baseline (no edit)")
                continue
            text = (RTL / mutant.file).read_text()
            count = text.count(mutant.old)
            status = "ok (1 match)" if count == 1 else f"BROKEN ({count} matches)"
            if count != 1:
                ok = False
            print(f"{mutant.mid:<18} {mutant.area:<28} {status}")
        return 0 if ok else 1

    python = python_for_runs()
    print(f"[mutation] driver: {python}")
    print(f"[mutation] seed={args.seed} timeout={args.timeout}s "
          f"mutants={len(selected)}")

    WORK.mkdir(parents=True, exist_ok=True)
    entries: List[tuple] = []
    start = time.monotonic()
    baseline_ok = True
    for mutant in selected:
        outcome = run_mutant(mutant, python, args.seed, args.timeout,
                             formal_ok=args.formal)
        entries.append((mutant, outcome, WORK / mutant.mid))
        print(f"           verdict: {outcome.status} "
              f"({outcome.kind or 'no failure'}) in {outcome.seconds:.0f}s")
        if outcome.evidence:
            print(f"           evidence: {outcome.evidence}")
        if outcome.formal:
            f = outcome.formal
            print(f"           routing.sby: {f.status}"
                  + (f" - {f.evidence}" if f.evidence else "")
                  + f" ({f.seconds:.1f}s)")
        if mutant.mid.startswith("M0"):
            baseline_ok = outcome.status == "SURVIVED"
    elapsed = time.monotonic() - start

    if not baseline_ok:
        print("\n[mutation] BASELINE DID NOT PASS - the harness or tree under "
              "test is broken; mutation verdicts above are not meaningful.")

    (RESULTS / "summary.md").write_text(
        render_summary(entries, args.seed, python, elapsed) + "\n")

    payload = {
        "seed": args.seed,
        "duts": MUTATION_DUTS,
        "python": python,
        "elapsed_s": round(elapsed, 1),
        "baseline_ok": baseline_ok,
        "mutants": [
            {
                "id": m.mid,
                "area": m.area,
                "file": m.file,
                "status": o.status,
                "kind": o.kind,
                "evidence": o.evidence,
                "failing": o.failing,
                "rc": o.rc,
                "seconds": round(o.seconds, 1),
                "diff": (WORK / m.mid / "applied.diff").read_text(),
                "formal": (
                    {
                        "status": o.formal.status,
                        "kind": o.formal.kind,
                        "evidence": o.formal.evidence,
                        "rc": o.formal.rc,
                        "seconds": round(o.formal.seconds, 1),
                        "log": f"results/mutation/work/{m.mid}/run_routing.log",
                    } if o.formal else None),
            }
            for m, o, _ in entries
        ],
    }
    (RESULTS / "summary.json").write_text(json.dumps(payload, indent=2) + "\n")

    survived = [m.mid for m, o, _ in entries
                if o.status == "SURVIVED" and not m.mid.startswith("M0")]
    print(f"\n[mutation] summary written to "
          f"{RESULTS.relative_to(ROOT)}/summary.md  "
          f"({elapsed/60:.1f} min)")
    if survived:
        print(f"[mutation] SURVIVED: {', '.join(survived)}")
    if not baseline_ok:
        return 1
    if args.fail_on_survivor and survived:
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())

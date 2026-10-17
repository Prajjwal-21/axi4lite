#!/usr/bin/env python3
"""cocotb regression driver.

Runs the cocotb test modules against the four simulation DUTs, records one xUnit
results file and one log per (DUT, module), prints a summary, and exits non-zero
if anything failed.  cocotb's `test()` entry point does not raise on test
failure, so the exit status is derived from the xUnit XML -- never from the
absence of a Python traceback.

DUTs
    crossbar    rtl/axi_lite_crossbar.sv        2 masters, 3 Python stallable
                                                slave models (unit tests)
    subsystem   rtl/peripheral_subsystem.sv     crossbar + real peripherals
    peripherals tb/harness/peripheral_unit_harness.sv
                                                the three peripherals behind
                                                their own flat AXI4-Lite ports
    probe       tb/harness/conv_probe.sv        timing-convention self-check

Usage
    scripts/run_tests.py --list
    scripts/run_tests.py                          # everything, seed 1
    scripts/run_tests.py --seeds 1,2,3,7          # sweep several seeds
    scripts/run_tests.py --dut crossbar --test test_simultaneous_distinct
    scripts/run_tests.py --seed 12345 --waves
    scripts/run_tests.py --module axil_crossbar_tests --module axil_subsystem_tests

Every DUT that instantiates assertion-bearing RTL is built with Verilator
`--assert` and `AXIL_ASSERTIONS` defined, so the in-RTL protocol properties are
re-checked on every simulated cycle in addition to the formal proofs.

The environment is sanitised at import time (see `sanitize_environment`): the
Homebrew `sby` package installs a `python3.15` and the shell may inherit a
`PYTHONPATH` pointing at a different interpreter's site-packages, which makes
`verilator_includer` abort.  Both are neutralised here so the regression is
reproducible from any shell.
"""

from __future__ import annotations

import argparse
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
#: RTL directory.  Overridable so scripts/mutation_test.py can build the same
#: regression against a mutated copy of the design without touching the tree
#: under test.  The default is the real one.
RTL = Path(os.environ.get("AXIL_RTL_DIR", ROOT / "rtl")).resolve()
TB = ROOT / "tb"
TB_COCOTB = TB / "cocotb"
TB_HARNESS = TB / "harness"
TESTS = ROOT / "tests"
#: Results directory (builds, xUnit, logs, summaries).  Overridable so
#: scripts/mutation_test.py can keep every mutant's artifacts in its own tree
#: instead of clobbering the regression results.  The default is the real one.
RESULTS = Path(os.environ.get("AXIL_RESULTS_DIR", ROOT / "results")).resolve()


def sanitize_environment() -> None:
    """Make the toolchain behave the same from every shell."""
    os.environ.pop("PYTHONPATH", None)
    venv_bin = str(ROOT / ".venv" / "bin")
    parts = [
        p for p in os.environ.get("PATH", "").split(os.pathsep)
        if p and "oss-cad-suite" not in p
    ]
    if venv_bin not in parts:
        parts.insert(0, venv_bin)
    os.environ["PATH"] = os.pathsep.join(parts)

    # cocotb's runner passes THIS interpreter's sys.path to the simulation
    # process as PYTHONPATH, so curate sys.path rather than the environment:
    # drop inherited site-packages of a different Python version, and make the
    # testbench modules (`tb/cocotb`) importable by the test modules.
    this_version = f"python{sys.version_info.major}.{sys.version_info.minor}"
    curated = []
    for entry in sys.path:
        if not entry:
            continue
        if "site-packages" in entry and this_version not in entry:
            continue
        if entry not in curated:
            curated.append(entry)
    if str(TB_COCOTB) not in curated:
        curated.insert(0, str(TB_COCOTB))
    sys.path[:] = curated


sanitize_environment()

from cocotb_tools.runner import get_runner  # noqa: E402  (after env sanitising)


# ---------------------------------------------------------------------------
# DUT definitions
# ---------------------------------------------------------------------------

CROSSBAR_SRCS = [
    RTL / "axi_lite_arbiter.sv",
    RTL / "axi_lite_address_decoder.sv",
    RTL / "axil_error_slave.sv",
    RTL / "axi_lite_master_port.sv",
    RTL / "axi_lite_slave_port.sv",
    RTL / "axi_lite_crossbar.sv",
]

PERIPH_SRCS = [
    RTL / "axil_regfile_slave.sv",
    RTL / "uart_regs.sv",
    RTL / "gpio_regs.sv",
    RTL / "timer_regs.sv",
]

ALL_RTL_SRCS = CROSSBAR_SRCS + PERIPH_SRCS + [RTL / "peripheral_subsystem.sv"]

#: Testbench-only sources.  `axil_protocol_checker.sv` is the independent
#: boundary checker; each harness instantiated on top of a DUT pulls it in.
PROTOCOL_CHECKER = TB / "assertions" / "axil_protocol_checker.sv"


@dataclass
class DutDef:
    name: str
    toplevel: str
    sources: List[Path]
    includes: List[Path]
    test_modules: List[str]
    defines: Dict[str, int] = field(default_factory=dict)
    parameters: Dict[str, object] = field(default_factory=dict)
    build_args: List[str] = field(default_factory=list)
    description: str = ""


#: `--assert` makes Verilator check the concurrent/immediate assertions that the
#: RTL contains behind `AXIL_ASSERTIONS`; defining the macro enables them.  They
#: are the same properties the formal flow proves, checked here on every
#: simulation cycle as a second, independent line of defence.
ASSERT_BUILD_ARGS = ["--assert"]
ASSERT_DEFINES = {"AXIL_ASSERTIONS": 1}


DUTS: Dict[str, DutDef] = {
    "probe": DutDef(
        name="probe",
        toplevel="conv_probe",
        sources=[TB_HARNESS / "conv_probe.sv"],
        includes=[],
        test_modules=["axil_env_tests"],
        description="timing-convention and BFM self-check",
    ),
    "crossbar": DutDef(
        name="crossbar",
        toplevel="crossbar_checker_top",
        sources=CROSSBAR_SRCS + [TB_HARNESS / "crossbar_checker_top.sv", PROTOCOL_CHECKER],
        includes=[RTL],
        test_modules=["axil_crossbar_tests"],
        defines=dict(ASSERT_DEFINES),
        build_args=list(ASSERT_BUILD_ARGS),
        description="2x3 crossbar unit tests with Python slave models",
    ),
    "peripherals": DutDef(
        name="peripherals",
        toplevel="peripheral_unit_harness",
        sources=PERIPH_SRCS + [TB_HARNESS / "peripheral_unit_harness.sv",
                               PROTOCOL_CHECKER],
        includes=[RTL],
        test_modules=["axil_peripheral_tests"],
        defines=dict(ASSERT_DEFINES),
        build_args=list(ASSERT_BUILD_ARGS),
        description="UART/GPIO/TIMER registers behind flat AXI4-Lite ports",
    ),
    "subsystem": DutDef(
        name="subsystem",
        toplevel="subsystem_checker_top",
        sources=ALL_RTL_SRCS + [TB_HARNESS / "subsystem_checker_top.sv",
                                PROTOCOL_CHECKER],
        includes=[RTL],
        test_modules=["axil_subsystem_tests"],
        defines=dict(ASSERT_DEFINES),
        build_args=list(ASSERT_BUILD_ARGS),
        description="crossbar + real peripherals (integration)",
    ),
}


# ---------------------------------------------------------------------------
# Results handling
# ---------------------------------------------------------------------------

@dataclass
class TestResult:
    name: str
    status: str
    messages: List[str] = field(default_factory=list)
    time_s: float = 0.0


def parse_results_xml(path: Path) -> List[TestResult]:
    cases: List[TestResult] = []
    if not path.is_file():
        return cases
    tree = ET.parse(path)
    for case in tree.iter("testcase"):
        status = "PASS"
        messages: List[str] = []
        for child in case:
            if child.tag in ("failure", "error"):
                status = "FAIL"
                message = (child.get("message") or "").strip()
                text = (child.text or "").strip()
                messages.append(" ".join(x for x in (message, text) if x)[:4000])
            elif child.tag == "skipped":
                status = "SKIP"
                messages.append((child.get("message") or "").strip())
        try:
            duration = float(case.get("time") or 0.0)
        except ValueError:
            duration = 0.0
        cases.append(TestResult(case.get("name", "?"), status, messages, duration))
    return cases


def first_lines(text: str, limit: int = 3) -> str:
    lines = [line for line in text.splitlines() if line.strip()]
    return " | ".join(lines[:limit])


# ---------------------------------------------------------------------------
# Runner
# ---------------------------------------------------------------------------

def build_dut(runner, dut: DutDef, *, always: bool, waves: bool, verbose: bool,
              coverage: bool = False) -> bool:
    build_dir = RESULTS / "sim" / dut.name
    build_dir.mkdir(parents=True, exist_ok=True)
    build_args = list(dut.build_args)
    if coverage:
        # Verilator line+toggle instrumentation.  Behaviour-identical to the
        # plain build; the .dat file is collected per DUT after the runs.
        build_args += ["--coverage-line", "--coverage-toggle"]
    print(f"[build] {dut.name:<12} toplevel={dut.toplevel}"
          + (" (coverage)" if coverage else ""))
    try:
        runner.build(
            sources=[Path(s) for s in dut.sources],
            includes=[Path(i) for i in dut.includes],
            defines=dut.defines,
            parameters=dut.parameters,
            build_args=build_args,
            hdl_toplevel=dut.toplevel,
            build_dir=build_dir,
            always=always,
            waves=waves,
            verbose=verbose,
            timescale=("1ns", "1ps"),
            log_file=RESULTS / "sim" / f"{dut.name}_build.log",
        )
    except Exception as exc:                       # noqa: BLE001
        print(f"[build] FAILED: {type(exc).__name__}: {exc}")
        return False
    return True


def collect_coverage(dut: DutDef) -> Optional[Path]:
    """Copy the DUT's Verilator coverage database into results/coverage/.

    The simulation writes `coverage.dat` into its working directory, which for
    the cocotb runner is the test directory (`tests/`); older layouts used the
    build directory, so both are accepted.  With one seed and one module per
    DUT (which `--coverage` requires) that single file holds every point of
    the run.  The source file is removed after copying so a later DUT (or a
    later run) cannot pick up a stale database.  Returns None when nothing was
    produced, which the caller reports as a failure: a coverage run that
    silently collects nothing would be worse than no coverage run at all.
    """
    sim_dir = RESULTS / "sim" / dut.name
    candidates = [TESTS / "coverage.dat", sim_dir / "coverage.dat"]
    matches = [c for c in candidates if c.is_file()]
    if not matches and sim_dir.is_dir():
        matches = sorted(sim_dir.rglob("coverage.dat"))
    if not matches:
        return None
    out_dir = RESULTS / "coverage"
    out_dir.mkdir(parents=True, exist_ok=True)
    out = out_dir / f"{dut.name}.dat"
    shutil.copyfile(matches[0], out)
    for match in matches:
        match.unlink()
    print(f"[cover] {dut.name:<12} -> {out.relative_to(ROOT)} "
          f"({out.stat().st_size} B)")
    return out


def run_module(
    runner,
    dut: DutDef,
    module: str,
    *,
    seed: Optional[int],
    suffix: str = "",
    waves: bool,
    verbose: bool,
    testcases: Optional[Sequence[str]] = None,
) -> List[TestResult]:
    build_dir = RESULTS / "sim" / dut.name
    out_dir = RESULTS / "cocotb"
    out_dir.mkdir(parents=True, exist_ok=True)
    xml_path = out_dir / f"{dut.name}_{module}{suffix}.xml"
    log_path = out_dir / f"{dut.name}_{module}{suffix}.log"
    print(f"[test]  {dut.name:<12} module={module}{suffix}"
          + (f" seed={seed}" if seed is not None else ""))
    runner.test(
        test_module=module,
        hdl_toplevel=dut.toplevel,
        build_dir=build_dir,
        test_dir=TESTS,
        results_xml=str(xml_path),
        seed=seed,
        testcase=list(testcases) if testcases else None,
        extra_env={"PYTHONPATH": str(TB_COCOTB)},
        waves=waves,
        verbose=verbose,
        log_file=log_path,
        timescale=("1ns", "1ps"),
    )
    results = parse_results_xml(xml_path)
    payload = {
        "dut": dut.name,
        "toplevel": dut.toplevel,
        "module": module,
        "seed": seed,
        "results_xml": str(xml_path.relative_to(ROOT)),
        "log": str(log_path.relative_to(ROOT)),
        "tests": [
            {"name": r.name, "status": r.status, "time_s": r.time_s,
             "messages": r.messages}
            for r in results
        ],
    }
    summary_path = out_dir / f"{dut.name}_{module}{suffix}.json"
    summary_path.write_text(json.dumps(payload, indent=2) + "\n")
    return results


TOOL_VERSION_CMDS = [
    ("verilator", ["verilator", "--version"]),
    ("yosys", ["yosys", "-V"]),
    ("sby", ["sby", "--version"]),
    ("iverilog", ["iverilog", "-V"]),
    ("surfer", ["surfer", "--version"]),
    ("python", [sys.executable, "--version"]),
    ("cocotb", [sys.executable, "-c", "import cocotb; print(cocotb.__version__)"]),
    ("cc", ["cc", "--version"]),
    ("uname", ["uname", "-a"]),
]


def record_tool_versions() -> None:
    lines = [f"# Tool versions recorded {time.strftime('%Y-%m-%d %H:%M:%S %Z')}"]
    for label, cmd in TOOL_VERSION_CMDS:
        exe = shutil.which(cmd[0])
        try:
            out = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
            text = (out.stdout or out.stderr).strip().splitlines()
            version = text[0] if text else f"<no output, rc={out.returncode}>"
        except Exception as exc:                    # noqa: BLE001
            version = f"<not runnable: {exc}>"
        lines.append(f"{label:<10} {exe or '<not found>':<40} {version}")
    RESULTS.mkdir(exist_ok=True)
    (RESULTS / "tool_versions.txt").write_text("\n".join(lines) + "\n")
    print("\n".join(lines))


def main(argv: Optional[Sequence[str]] = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--dut", action="append", choices=sorted(DUTS),
                        help="restrict to one DUT (repeatable)")
    parser.add_argument("--module", action="append",
                        help="restrict to one cocotb test module (repeatable)")
    parser.add_argument("--test", action="append", dest="testcases",
                        help="restrict to one cocotb test case (repeatable)")
    parser.add_argument("--seed", type=int, default=1,
                        help="cocotb random seed (default 1, so the regression "
                             "is reproducible out of the box)")
    parser.add_argument("--seeds", metavar="S1,S2,...",
                        help="comma-separated seeds; runs every module once per "
                             "seed, overrides --seed")
    parser.add_argument("--waves", action="store_true", help="record waveforms")
    parser.add_argument("--verbose", action="store_true")
    parser.add_argument("--coverage", action="store_true",
                        help="build with Verilator line+toggle coverage and "
                             "collect results/coverage/<dut>.dat (single seed "
                             "only: the last run per DUT overwrites the "
                             "database)")
    parser.add_argument("--no-build", action="store_true",
                        help="skip the build step (use the existing binaries)")
    parser.add_argument("--list", action="store_true", help="list DUTs and exit")
    parser.add_argument("--tool-versions", action="store_true",
                        help="record and print tool versions, then continue")
    args = parser.parse_args(argv)

    if args.list:
        for dut in DUTS.values():
            print(f"{dut.name:<12} {dut.toplevel:<28} "
                  f"modules={','.join(dut.test_modules):<28} {dut.description}")
        return 0

    if args.tool_versions:
        record_tool_versions()
        print()

    selected = [DUTS[n] for n in (args.dut or sorted(DUTS))]
    failures: List[str] = []
    all_results: Dict[str, List[TestResult]] = {}

    seeds = [args.seed]
    if args.seeds:
        try:
            seeds = [int(s) for s in args.seeds.replace(" ", "").split(",") if s]
        except ValueError:
            parser.error(f"--seeds expects comma-separated integers, got {args.seeds!r}")
        if not seeds:
            parser.error("--seeds was given but no seeds could be parsed")
    multi_seed = len(seeds) > 1
    if args.coverage and multi_seed:
        parser.error("--coverage cannot be combined with a multi-seed run: the "
                     "coverage database of the last run per DUT would overwrite "
                     "the earlier ones.  Run one seed per coverage collection.")

    for dut in selected:
        modules = dut.test_modules
        if args.module:
            modules = [m for m in modules if m in set(args.module)]
        if not modules:
            continue
        runner = get_runner("verilator")
        if not args.no_build:
            if not build_dut(runner, dut, always=False, waves=args.waves,
                             verbose=args.verbose, coverage=args.coverage):
                failures.append(f"{dut.name}: build failed")
                continue
        for seed in seeds:
            suffix = f"_s{seed}" if multi_seed else ""
            for module in modules:
                results = run_module(
                    runner, dut, module, seed=seed, suffix=suffix,
                    waves=args.waves, verbose=args.verbose,
                    testcases=args.testcases,
                )
                key = f"{dut.name}/{module}" + (f"@s{seed}" if multi_seed else "")
                all_results[key] = results
                if not results:
                    failures.append(f"{key}: no test results recorded")
                for result in results:
                    colour = {"PASS": "ok  ", "FAIL": "FAIL",
                              "SKIP": "skip"}[result.status]
                    print(f"    {colour} {result.name} ({result.time_s:.2f}s)")
                    if result.status == "FAIL":
                        failures.append(f"{key}::{result.name}")
                        for message in result.messages:
                            print(f"         {first_lines(message)}")
        if args.coverage:
            if collect_coverage(dut) is None:
                failures.append(f"{dut.name}: --coverage requested but no "
                                f"coverage.dat was produced under "
                                f"results/sim/{dut.name}/")

    print()
    totals = {"PASS": 0, "FAIL": 0, "SKIP": 0}
    for results in all_results.values():
        for result in results:
            totals[result.status] = totals.get(result.status, 0) + 1
    print(f"summary: {totals['PASS']} passed, {totals['FAIL']} failed, "
          f"{totals['SKIP']} skipped across {len(all_results)} module run(s)")

    (RESULTS / "cocotb" / "summary.json").write_text(json.dumps({
        "totals": totals,
        "failures": failures,
        "modules": {k: [{"name": r.name, "status": r.status} for r in v]
                    for k, v in all_results.items()},
    }, indent=2) + "\n")

    if failures:
        print("\nFAILED:")
        for failure in failures:
            print(f"  - {failure}")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())

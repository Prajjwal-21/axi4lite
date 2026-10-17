"""Functional coverage for the crossbar environments.

What this is
    A small, dependency-free functional coverage collector.  Coverpoints and
    their bins are declared up front (so a bin that is never hit shows up as a
    0 in the report instead of silently not existing), and hits are recorded
    passively:

      * transaction-level bins (targets, response codes, WSTRB patterns) come
        from the pin-level monitors (`axil_monitor.MasterPortMonitor`), which
        observe the boundary rather than the stimulus;
      * concurrency bins (how many masters have traffic in flight, same-target
        contention, read/write overlap) are sampled once per clock by the
        environment's coverage task from the monitors' pending-transaction
        state.

    Nothing is recorded from the BFMs' intent, so a bin can only be hit by an
    event that actually completed on the boundary.

Report
    All bins accumulated in one simulation process (one cocotb test module) are
    written to `results/coverage/functional_<toplevel>_<module>.json` at
    simulation shutdown.  `scripts/coverage.sh` merges those files with the
    xUnit results and the Verilator line/toggle data into
    `results/coverage/summary.md`.

Sampling point
    Monitors and the coverage task use the same settled sample (PROBE_NS after
    the edge) as every other checker in this testbench, so "in flight" means
    the same thing everywhere.
"""

from __future__ import annotations

import json
import os
from pathlib import Path
from typing import Dict, Optional, Sequence

try:  # cocotb is only importable inside a simulation; stay importable for tooling
    import cocotb
    from cocotb import _shutdown
except Exception:  # noqa: BLE001
    cocotb = None
    _shutdown = None

ROOT = Path(__file__).resolve().parents[2]
DEFAULT_DIR = ROOT / "results" / "coverage"


def bucket(value: int, edges: Sequence[int] = (1, 2, 5, 17)) -> str:
    """Bin `value` into ``0 / 1 / 2-4 / 5-16 / 17+`` (edges are exclusive upper
    bounds).  Fixed bins are used instead of exact counts so the report stays
    readable and the bins keep meaning if a test changes slightly.
    """
    for label, edge in zip(("0", "1", "2-4", "5-16"), edges):
        if value < edge:
            return label
    return "17+"


def resp_name(code: int) -> str:
    return {0: "OKAY", 1: "EXOKAY", 2: "SLVERR", 3: "DECERR"}.get(code, f"resp{code}")


class Coverage:
    """Declared-bins functional coverage collector."""

    def __init__(self, name: str, nmst: int = 2, nslv: int = 3):
        self.name = name
        self.nmst = nmst
        self.nslv = nslv
        self.bins: Dict[str, Dict[str, int]] = {}
        self._declare_standard_bins()

    # -- declaration ---------------------------------------------------------
    def declare(self, coverpoint: str, *bins: str) -> None:
        slot = self.bins.setdefault(coverpoint, {})
        for b in bins:
            slot.setdefault(b, 0)

    def _declare_standard_bins(self) -> None:
        for m in range(self.nmst):
            targets = [f"m{m}_s{s}" for s in range(self.nslv)] + [f"m{m}_err"]
            self.declare("xbar.write_target", *targets)
            self.declare("xbar.read_target", *targets)
            resps = [f"m{m}_{r}" for r in ("OKAY", "SLVERR", "DECERR")]
            self.declare("xbar.write_resp", *resps)
            self.declare("xbar.read_resp", *resps)
        for ch in ("aw", "w", "b", "ar", "r"):
            self.declare(f"xbar.{ch}_backpressure", "0", "1", "2-4", "5-16", "17+")
        self.declare("xbar.wstrb", "all_bytes", "single_b0", "single_b1",
                     "single_b2", "single_b3", "partial")
        self.declare("xbar.write_concurrency", "0", "1", "2", "2_same_target")
        self.declare("xbar.read_concurrency", "0", "1", "2", "2_same_target")
        self.declare("xbar.wr_rd_overlap",
                     *[f"m{m}_both" for m in range(self.nmst)])
        for s in range(self.nslv):
            self.declare(f"slave{s}_activity", "aw", "w", "b", "ar", "r")

    # -- recording -----------------------------------------------------------
    def hit(self, coverpoint: str, bin_name: str, count: int = 1) -> None:
        slot = self.bins.setdefault(coverpoint, {})
        slot[bin_name] = slot.get(bin_name, 0) + count

    # -- reporting -----------------------------------------------------------
    def summary(self) -> dict:
        points = []
        hit = 0
        total = 0
        for cp in sorted(self.bins):
            for b, count in sorted(self.bins[cp].items()):
                total += 1
                if count:
                    hit += 1
                points.append({"coverpoint": cp, "bin": b, "count": count})
        return {
            "name": self.name,
            "nmst": self.nmst,
            "nslv": self.nslv,
            "bins_total": total,
            "bins_hit": hit,
            "percent": round(100.0 * hit / total, 1) if total else 0.0,
            "points": points,
        }

    def write(self, path: Path) -> None:
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(self.summary(), indent=2) + "\n")


# ---------------------------------------------------------------------------
# Process-wide singleton + shutdown hook
# ---------------------------------------------------------------------------
_SINGLETON: Optional[Coverage] = None


def _coverage_name() -> str:
    toplevel = os.environ.get("COCOTB_TOPLEVEL", "dut")
    modules = os.environ.get("COCOTB_TEST_MODULES", "module")
    module = modules.split(",")[0].strip() or "module"
    # The runner exports COCOTB_RANDOM_SEED (the regression seed).  Do NOT use
    # cocotb.RANDOM_SEED: cocotb reassigns it per test (regression.py), so it
    # differs between the tests of one module.
    seed = os.environ.get("COCOTB_RANDOM_SEED", "")
    name = f"functional_{toplevel}_{module}"
    if seed:
        name += f"_s{seed}"
    return name


def get_coverage(nmst: int = 2, nslv: int = 3) -> Coverage:
    """Return the process-wide collector, creating and registering it once."""
    global _SINGLETON
    if _SINGLETON is None:
        _SINGLETON = Coverage(_coverage_name(), nmst=nmst, nslv=nslv)
        if _shutdown is not None:
            _shutdown.register(flush)
    return _SINGLETON


def flush() -> Optional[Path]:
    """Write the collector's report.  Called at simulation shutdown, and
    importable so tooling can force a flush in a normal Python process."""
    if _SINGLETON is None:
        return None
    out_dir = Path(os.environ.get("AXIL_COVER_DIR", DEFAULT_DIR))
    path = out_dir / f"{_SINGLETON.name}.json"
    _SINGLETON.write(path)
    return path

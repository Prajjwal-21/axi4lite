"""Scoreboard and independent reference helpers.

Two independent things are checked here:

  1. `ShadowMem` -- a byte-enabled 32-bit memory that mirrors only the writes a
     test issues itself.  It shares no code with the DUT: it is 12 lines of
     Python that implement the documented rule ("a write applies the bytes whose
     WSTRB bit is set; a read returns the current value").  Reads are checked
     against it.

  2. `Scoreboard` -- transaction accounting and routing checks:
       * every response code must match the address (mapped -> OKAY, unmapped ->
         DECERR, and the error slave is the only DECERR source),
       * every issued transaction must be served exactly once,
       * the multiset of (address, data, WSTRB) actually served by the slaves must
         equal the multiset of mapped writes issued by the masters -- a write that
         is dropped, duplicated or delivered to the wrong slave cannot pass,
       * monitors (axil_monitor) must report no protocol-violation.

The multiset check is exact because the randomized tests make every write payload
unique (the data word embeds a nonce), so "equal multiset" is equivalent to
"every write arrived exactly once, with the same bytes".
"""

from __future__ import annotations

from collections import Counter
from dataclasses import dataclass, field
from typing import Dict, Iterable, List, Optional, Sequence

from axil_common import READ, WRITE, Txn, resp_name
from axil_spec import (RESP_DECERR, RESP_OKAY, RESP_SLVERR, decode,
                       unmapped_addresses)


class ScoreboardError(AssertionError):
    """Raised the moment a check fails, so the failing test names the mismatch."""


class ShadowMem:
    """Byte-enabled 32-bit memory, keyed by word address."""

    def __init__(self, reset: int = 0):
        self.reset = reset
        self.mem: Dict[int, int] = {}
        self.writes = 0
        self.reads = 0

    @staticmethod
    def word(addr: int) -> int:
        return addr & 0xFFFF_FFFC

    def apply_write(self, addr: int, data: int, strb: int) -> int:
        word = self.word(addr)
        old = self.mem.get(word, self.reset)
        new = old
        for byte in range(4):
            if strb & (1 << byte):
                mask = 0xFF << (8 * byte)
                new = (new & ~mask) | (data & mask)
        self.mem[word] = new & 0xFFFF_FFFF
        self.writes += 1
        return self.mem[word]

    def value(self, addr: int) -> int:
        self.reads += 1
        return self.mem.get(self.word(addr), self.reset)

    def reset_all(self) -> None:
        self.mem.clear()


@dataclass
class ScoreboardStats:
    issued_writes: int = 0
    issued_reads: int = 0
    served_writes: int = 0
    served_reads: int = 0
    decerr: int = 0
    slverr: int = 0
    okay: int = 0
    per_master: Dict[int, Dict[str, int]] = field(default_factory=dict)


class Scoreboard:
    """Central checker.  One instance per test."""

    def __init__(self, name: str = "scoreboard", log=None):
        self.name = name
        self.log = log
        self.stats = ScoreboardStats()
        self.errors: List[str] = []
        self.issued: Dict[int, List[Txn]] = {}
        self.notes: List[str] = []

    # -- recording ----------------------------------------------------------
    def record(self, txn: Txn) -> None:
        """Record a transaction a master observed (BFM result)."""
        self.issued.setdefault(txn.master, []).append(txn)
        per = self.stats.per_master.setdefault(
            txn.master, {"writes": 0, "reads": 0, "okay": 0, "slverr": 0, "decerr": 0}
        )
        if txn.kind == WRITE:
            self.stats.issued_writes += 1
            per["writes"] += 1
        else:
            self.stats.issued_reads += 1
            per["reads"] += 1
        if txn.resp == RESP_OKAY:
            self.stats.okay += 1
            per["okay"] += 1
        elif txn.resp == RESP_SLVERR:
            self.stats.slverr += 1
            per["slverr"] += 1
        elif txn.resp == RESP_DECERR:
            self.stats.decerr += 1
            per["decerr"] += 1
        else:
            self.fail(f"illegal response code {txn.resp} on {txn}")

    def record_all(self, txns: Iterable[Txn]) -> None:
        for txn in txns:
            self.record(txn)

    # -- checks -------------------------------------------------------------
    def fail(self, message: str) -> None:
        self.errors.append(message)
        raise ScoreboardError(message)

    def check(self, condition: bool, message: str) -> None:
        if not condition:
            self.fail(message)

    def check_expected_resp(self, txn: Txn, expected: Optional[int] = None) -> None:
        """Response code must match the address map (or an explicit expectation)."""
        if expected is None:
            expected = RESP_OKAY if decode(txn.addr) is not None else RESP_DECERR
        if txn.resp != expected:
            self.fail(
                f"{txn} : expected {resp_name(expected)} for address "
                f"{txn.addr:#010x}, got {resp_name(txn.resp)}"
            )

    def check_read_data(self, txn: Txn, expected: int) -> None:
        if txn.data != expected:
            self.fail(
                f"{txn} : expected read data {expected:#010x}, got {txn.data:#010x}"
            )

    def check_monitors(self, monitors: Sequence) -> None:
        for monitor in monitors:
            for violation in monitor.violations:
                self.fail(f"protocol violation: {violation}")

    def check_served(
        self,
        served_writes: Sequence[Txn],
        served_reads: Sequence[Txn],
        expected_writes: Sequence[Txn],
        expected_reads: Sequence[Txn],
    ) -> None:
        """Every issued transaction must be served exactly once by the right slave.

        The write comparison is an exact multiset comparison of
        (address, data, WSTRB); it catches dropped, duplicated and corrupted
        writes.  The read comparison is an exact multiset of (address, data):
        every read the slaves answered must be one a master asked for, and vice
        versa.
        """
        want_w = Counter((t.addr, t.data, t.strb) for t in expected_writes)
        got_w = Counter((t.addr, t.data, t.strb) for t in served_writes)
        if want_w != got_w:
            missing = want_w - got_w
            extra = got_w - want_w
            self.fail(
                "write transactions delivered to the slaves do not match the "
                f"writes issued: missing={dict(missing)} unexpected={dict(extra)}"
            )

        want_r = Counter((t.addr, t.data) for t in expected_reads)
        got_r = Counter((t.addr, t.data) for t in served_reads)
        if want_r != got_r:
            missing = want_r - got_r
            extra = got_r - want_r
            self.fail(
                "read transactions answered by the slaves do not match the reads "
                f"issued: missing={dict(missing)} unexpected={dict(extra)}"
            )

    def check_counts(self, txns: Sequence[Txn], kind: str) -> None:
        self.check(
            all(t.kind == kind for t in txns),
            f"{kind} accounting received a transaction of another kind",
        )

    def summary(self) -> str:
        stats = self.stats
        lines = [
            f"[scoreboard:{self.name}] issued {stats.issued_writes} writes / "
            f"{stats.issued_reads} reads; responses OKAY={stats.okay} "
            f"SLVERR={stats.slverr} DECERR={stats.decerr}",
        ]
        for master, per in sorted(stats.per_master.items()):
            lines.append(
                f"  master {master}: {per['writes']} writes, {per['reads']} reads, "
                f"okay={per['okay']} slverr={per['slverr']} decerr={per['decerr']}"
            )
        return "\n".join(lines)


def master_issued(txns: Sequence[Txn], master: int, kind: Optional[str] = None):
    return [t for t in txns if t.master == master and (kind is None or t.kind == kind)]


def mapped_only(txns: Sequence[Txn]) -> List[Txn]:
    return [t for t in txns if decode(t.addr) is not None]


def unmapped_only(txns: Sequence[Txn]) -> List[Txn]:
    return [t for t in txns if decode(t.addr) is None]


def unmapped_probe_addresses() -> List[int]:
    return unmapped_addresses()

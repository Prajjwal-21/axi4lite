"""Address map / register map specification, parsed from the RTL header.

`rtl/axil_defs.svh` is the single source of truth for the address map.  The RTL
`include`s it, and this module re-parses it at run time, so a testbench can never
disagree with the RTL about where a peripheral lives or what its ID register
contains.  If a base address changes in the header, the tests, the reference
model and the coverage model all move with it.

Nothing in this file is hand-copied from the RTL: everything comes either from
the header or from `docs/register_map.md` (which is the human-readable contract
that the header encodes).

The module also *validates* the map (distinct, aligned, ordered bases) so a
mistake in the header shows up as a test failure rather than as a silent
misroute.
"""

from __future__ import annotations

import re
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Tuple

# ---------------------------------------------------------------------------
# Header parsing
# ---------------------------------------------------------------------------

_HEADER = "rtl/axil_defs.svh"

_DEFINE_RE = re.compile(
    r"^\s*`define\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s+(?P<value>[^\s/]+)"
)


def _parse_literal(text: str) -> int:
    """Parse a Verilog integer literal: 32'h0000_4000, 6'h3C, 2'b00, 12."""
    value = text.strip().rstrip(",")
    value = value.replace("_", "")
    match = re.match(r"^(?:\d+)?'([sS]?)([hbodHBOD])([0-9a-fA-F]+)$", value)
    if match:
        _, base_char, digits = match.groups()
        base = {"h": 16, "b": 2, "o": 8, "d": 10}[base_char.lower()]
        return int(digits, base)
    return int(value, 0)


def parse_header(path: Path) -> Dict[str, int]:
    """Return every ``define in the header as {name: int}."""
    if not path.is_file():
        raise FileNotFoundError(f"RTL header not found: {path}")
    defines: Dict[str, int] = {}
    for line in path.read_text().splitlines():
        match = _DEFINE_RE.match(line)
        if not match:
            continue
        name = match.group("name")
        try:
            defines[name] = _parse_literal(match.group("value"))
        except ValueError:
            # Non-numeric macros (guard names, string-ish helpers) are ignored.
            continue
    return defines


def _repo_root() -> Path:
    return Path(__file__).resolve().parents[2]


def load_defines(header: str = _HEADER) -> Dict[str, int]:
    return parse_header(_repo_root() / header)


# ---------------------------------------------------------------------------
# Geometry
# ---------------------------------------------------------------------------

DEFS: Dict[str, int] = load_defines()

ADDR_WIDTH: int = DEFS["AXIL_ADDR_WIDTH"]
DATA_WIDTH: int = DEFS["AXIL_DATA_WIDTH"]
STRB_WIDTH: int = DEFS["AXIL_STRB_WIDTH"]
NMST: int = DEFS["AXIL_NMST"]
NSLV: int = DEFS["AXIL_NSLV"]
REGION_LSB: int = DEFS["AXIL_REGION_LSB"]
REGION_SIZE: int = 1 << REGION_LSB
PERIPH_LOCAL_ADDR_W: int = DEFS["AXIL_PERIPH_LOCAL_ADDR_W"]
PERIPH_LOCAL_MASK: int = (1 << PERIPH_LOCAL_ADDR_W) - 1
DATA_MASK: int = (1 << DATA_WIDTH) - 1

RESP_OKAY: int = DEFS["AXIL_RESP_OKAY"]
RESP_EXOKAY: int = DEFS["AXIL_RESP_EXOKAY"]
RESP_SLVERR: int = DEFS["AXIL_RESP_SLVERR"]
RESP_DECERR: int = DEFS["AXIL_RESP_DECERR"]
RESP_NAMES: Dict[int, str] = {
    RESP_OKAY: "OKAY",
    RESP_EXOKAY: "EXOKAY",
    RESP_SLVERR: "SLVERR",
    RESP_DECERR: "DECERR",
}


# ---------------------------------------------------------------------------
# Regions
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class Region:
    index: int
    name: str
    base: int
    id_value: int

    @property
    def end(self) -> int:
        """Last byte address inside the region."""
        return self.base + REGION_SIZE - 1

    @property
    def region_select(self) -> int:
        """Value of addr[ADDR_WIDTH-1:REGION_LSB] that selects this region."""
        return self.base >> REGION_LSB

    def contains(self, addr: int) -> bool:
        return self.region_select == (addr >> REGION_LSB)

    def local_offset(self, addr: int) -> int:
        """Byte offset inside the region (only the low PERIPH_LOCAL_ADDR_W bits)."""
        return (addr - self.base) & PERIPH_LOCAL_MASK


REGIONS: Tuple[Region, ...] = (
    Region(0, "UART", DEFS["AXIL_UART_BASE"], DEFS["AXIL_UART_ID"]),
    Region(1, "GPIO", DEFS["AXIL_GPIO_BASE"], DEFS["AXIL_GPIO_ID"]),
    Region(2, "TIMER", DEFS["AXIL_TIMER_BASE"], DEFS["AXIL_TIMER_ID"]),
)

#: Slave index of the internal error target (DECERR) inside the crossbar.
ERROR_TARGET_INDEX: int = NSLV

#: Number of targets inside the crossbar = real slaves + 1 error target.
NTGT: int = NSLV + 1


def decode(addr: int) -> Optional[int]:
    """Return the slave index for `addr`, or None when the address is unmapped.

    Mirrors `axi_lite_address_decoder`: it compares addr[31:REGION_LSB] and
    ignores the low bits entirely, so every byte inside a region hits that
    region.
    """
    for region in REGIONS:
        if region.contains(addr):
            return region.index
    return None


def target_index(addr: int) -> int:
    """Slave index as seen *inside* the crossbar: real slave, or the error target."""
    index = decode(addr)
    return ERROR_TARGET_INDEX if index is None else index


def region_of(index: int) -> Region:
    return REGIONS[index]


def mapped_addresses(offset: int = 0) -> List[int]:
    """One representative mapped address per region (used for smoke tests)."""
    return [region.base + offset for region in REGIONS]


def unmapped_addresses() -> List[int]:
    """Addresses that must decode to the internal error target.

    The gaps between regions and beyond the map were left unmapped on purpose in
    the header, so these are not arbitrary: they are the documented holes.
    """
    candidates = [
        0x0000_1000,  # gap between UART and GPIO
        0x0000_2000,
        0x0000_3000,
        0x0000_5000,  # gap between GPIO and TIMER
        0x0000_6000,
        0x0000_7000,
        0x0000_9000,  # just past TIMER
        0x0000_FFFF,
        0x0001_0000,
        0x1000_0000,
        0x8000_0000,
        0xFFFF_FFFF,
    ]
    return [addr for addr in candidates if decode(addr) is None]


# ---------------------------------------------------------------------------
# Register map (mirrors docs/register_map.md; offsets come from the header)
# ---------------------------------------------------------------------------

# Access kinds
RW = "RW"      # read/write
RO = "RO"      # read-only; writes -> SLVERR
WO = "WO"      # write-only; reads return 0 with OKAY
W1C = "W1C"    # read/write-1-to-clear
WO_ALIAS = "WO_ALIAS"  # WO, but reads are OKAY with no data (TXDATA)


@dataclass(frozen=True)
class RegSpec:
    name: str
    offset: int
    access: str
    reset: int = 0
    #: (lsb, width, field_name) -- purely documentation / coverage
    fields: Tuple[Tuple[int, int, str], ...] = ()


@dataclass(frozen=True)
class PeriphSpec:
    name: str
    region: Region
    regs: Tuple[RegSpec, ...]

    def by_offset(self) -> Dict[int, RegSpec]:
        return {reg.offset: reg for reg in self.regs}

    def offset_names(self) -> Dict[int, str]:
        return {reg.offset: reg.name for reg in self.regs}


UART_CTRL_FIELDS = (
    (DEFS["AXIL_UART_CTRL_TX_EN"], 1, "TX_EN"),
    (DEFS["AXIL_UART_CTRL_RX_EN"], 1, "RX_EN"),
    (DEFS["AXIL_UART_CTRL_LOOPBACK"], 1, "LOOPBACK"),
    (DEFS["AXIL_UART_CTRL_TXDONE_EN"], 1, "TXDONE_EN"),
    (DEFS["AXIL_UART_CTRL_RXAVL_EN"], 1, "RXAVL_EN"),
    (DEFS["AXIL_UART_CTRL_RXOVR_EN"], 1, "RXOVR_EN"),
    (DEFS["AXIL_UART_CTRL_RXFRM_EN"], 1, "RXFRM_EN"),
)

UART_STATUS_FIELDS = (
    (DEFS["AXIL_UART_ST_TX_READY"], 1, "TX_READY"),
    (DEFS["AXIL_UART_ST_RX_VALID"], 1, "RX_VALID"),
    (DEFS["AXIL_UART_ST_TX_BUSY"], 1, "TX_BUSY"),
    (DEFS["AXIL_UART_ST_RX_OVERRUN"], 1, "RX_OVERRUN"),
    (DEFS["AXIL_UART_ST_RX_FRAME_ERR"], 1, "RX_FRAME_ERR"),
)

UART_ISTAT_FIELDS = (
    (DEFS["AXIL_UART_IS_TX_DONE"], 1, "TX_DONE"),
    (DEFS["AXIL_UART_IS_RX_AVAIL"], 1, "RX_AVAIL"),
    (DEFS["AXIL_UART_IS_RX_OVERRUN"], 1, "RX_OVERRUN"),
    (DEFS["AXIL_UART_IS_RX_FRAME_ERR"], 1, "RX_FRAME_ERR"),
)

UART_SPEC = PeriphSpec(
    name="UART",
    region=REGIONS[0],
    regs=(
        RegSpec("CTRL", DEFS["AXIL_UART_CTRL_OFF"], RW, 0x0, UART_CTRL_FIELDS),
        RegSpec("BAUD", DEFS["AXIL_UART_BAUD_OFF"], RW, 0x0,
                ((0, DEFS["AXIL_UART_BAUD_W"], "DIV"),)),
        RegSpec("STATUS", DEFS["AXIL_UART_STATUS_OFF"], RO, 0x1, UART_STATUS_FIELDS),
        RegSpec("TXDATA", DEFS["AXIL_UART_TXDATA_OFF"], WO, 0,
                ((0, 8, "TXDATA"),)),
        RegSpec("RXDATA", DEFS["AXIL_UART_RXDATA_OFF"], RO, 0,
                ((0, 8, "RXDATA"),)),
        RegSpec("INT_STATUS", DEFS["AXIL_UART_ISTAT_OFF"], W1C, 0x0, UART_ISTAT_FIELDS),
        RegSpec("INT_ENABLE", DEFS["AXIL_UART_IEN_OFF"], RW, 0x0,
                ((0, 4, "IE"),)),
        RegSpec("ID", DEFS["AXIL_UART_ID_OFF"], RO, DEFS["AXIL_UART_ID"], ()),
    ),
)

GPIO_SPEC = PeriphSpec(
    name="GPIO",
    region=REGIONS[1],
    regs=(
        RegSpec("DIR", DEFS["AXIL_GPIO_DIR_OFF"], RW, 0x00),
        RegSpec("OUT", DEFS["AXIL_GPIO_OUT_OFF"], RW, 0x00),
        RegSpec("IN", DEFS["AXIL_GPIO_IN_OFF"], RO, 0x00),
        RegSpec("INT_ENABLE", DEFS["AXIL_GPIO_IEN_OFF"], RW, 0x00),
        RegSpec("INT_STATUS", DEFS["AXIL_GPIO_ISTAT_OFF"], W1C, 0x00),
        RegSpec("INT_TYPE", DEFS["AXIL_GPIO_ITYPE_OFF"], RW, 0x00),
        RegSpec("ID", DEFS["AXIL_GPIO_ID_OFF"], RO, DEFS["AXIL_GPIO_ID"], ()),
    ),
)

TIMER_SPEC = PeriphSpec(
    name="TIMER",
    region=REGIONS[2],
    regs=(
        RegSpec("CTRL", DEFS["AXIL_TIMER_CTRL_OFF"], RW, 0x0,
                ((DEFS["AXIL_TIMER_CTRL_EN"], 1, "EN"),
                 (DEFS["AXIL_TIMER_CTRL_IRQ_EN"], 1, "IRQ_EN"),
                 (DEFS["AXIL_TIMER_CTRL_ONE_SHOT"], 1, "ONE_SHOT"),
                 (DEFS["AXIL_TIMER_CTRL_PSC_EN"], 1, "PRESCALE_EN"))),
        RegSpec("LOAD", DEFS["AXIL_TIMER_LOAD_OFF"], RW, 0xFFFF_FFFF),
        RegSpec("VALUE", DEFS["AXIL_TIMER_VALUE_OFF"], RO, 0xFFFF_FFFF),
        RegSpec("INT_STATUS", DEFS["AXIL_TIMER_ISTAT_OFF"], W1C, 0x0,
                ((DEFS["AXIL_TIMER_IS_EXPIRED"], 1, "EXPIRED"),)),
        RegSpec("PRESCALE", DEFS["AXIL_TIMER_PRESCALE_OFF"], RW, 0x0000,
                ((0, 16, "DIV"),)),
        RegSpec("ID", DEFS["AXIL_TIMER_ID_OFF"], RO, DEFS["AXIL_TIMER_ID"], ()),
    ),
)

PERIPH_SPECS: Tuple[PeriphSpec, ...] = (UART_SPEC, GPIO_SPEC, TIMER_SPEC)

#: Peripherals by slave index.
SPEC_BY_INDEX: Dict[int, PeriphSpec] = {spec.region.index: spec for spec in PERIPH_SPECS}


def periph_for(addr: int) -> Optional[PeriphSpec]:
    index = decode(addr)
    return None if index is None else SPEC_BY_INDEX[index]


def implemented_offsets(addr: int) -> Iterable[int]:
    spec = periph_for(addr)
    return () if spec is None else spec.by_offset().keys()


def is_implemented(addr: int) -> bool:
    """True when the address names a real register of a real peripheral."""
    spec = periph_for(addr)
    if spec is None:
        return False
    return spec.region.local_offset(addr) in spec.by_offset()


# ---------------------------------------------------------------------------
# Map validation
# ---------------------------------------------------------------------------

def validate() -> List[str]:
    """Check the map invariants. Returns a list of human-readable problems."""
    problems: List[str] = []

    bases = [region.base for region in REGIONS]
    if len(set(bases)) != len(bases):
        problems.append(f"region bases are not distinct: {[hex(b) for b in bases]}")
    if bases != sorted(bases):
        problems.append(f"region bases are not ascending: {[hex(b) for b in bases]}")
    for region in REGIONS:
        if region.base & (REGION_SIZE - 1):
            problems.append(
                f"{region.name} base {hex(region.base)} is not {REGION_SIZE}-byte aligned"
            )
    for region in REGIONS:
        for other in REGIONS:
            if region is other:
                continue
            if region.region_select == other.region_select:
                problems.append(f"{region.name} and {other.name} overlap")

    # Every declared register offset must be representable in the local address
    # field and must be word aligned.
    for spec in PERIPH_SPECS:
        seen = set()
        for reg in spec.regs:
            if reg.offset != (reg.offset & PERIPH_LOCAL_MASK):
                problems.append(
                    f"{spec.name}.{reg.name} offset {hex(reg.offset)} exceeds "
                    f"the {PERIPH_LOCAL_ADDR_W}-bit local address"
                )
            if reg.offset & 0x3:
                problems.append(
                    f"{spec.name}.{reg.name} offset {hex(reg.offset)} is not word aligned"
                )
            if reg.offset in seen:
                problems.append(f"{spec.name}.{reg.name} offset {hex(reg.offset)} duplicated")
            seen.add(reg.offset)

    # Sanity: the decoder must place the ID register inside each region and
    # return the matching slave index.
    for spec in PERIPH_SPECS:
        id_regs = [reg for reg in spec.regs if reg.name == "ID"]
        if len(id_regs) != 1:
            problems.append(f"{spec.name} must declare exactly one ID register")
            continue
        id_reg = id_regs[0]
        addr = spec.region.base + id_reg.offset
        if decode(addr) != spec.region.index:
            problems.append(f"{spec.name} ID address {hex(addr)} does not decode to it")
        if id_reg.reset != spec.region.id_value:
            problems.append(
                f"{spec.name} ID reset value {id_reg.reset:#010x} does not match "
                f"the header ID {spec.region.id_value:#010x}"
            )

    return problems


def _selfcheck() -> None:
    problems = validate()
    if problems:
        raise AssertionError("address map validation failed:\n  " + "\n  ".join(problems))


_selfcheck()


if __name__ == "__main__":  # pragma: no cover - manual inspection helper
    print(f"header           : {_HEADER}")
    print(f"geometry         : addr={ADDR_WIDTH} data={DATA_WIDTH} "
          f"strb={STRB_WIDTH} nmst={NMST} nslv={NSLV} region_lsb={REGION_LSB}")
    for region in REGIONS:
        print(f"region {region.index}       : {region.name:<5} "
              f"{region.base:#010x} .. {region.end:#010x}  id={region.id_value:#010x}")
        spec = SPEC_BY_INDEX[region.index]
        for reg in spec.regs:
            print(f"    {reg.offset:#04x} {reg.name:<11} {reg.access:<9} "
                  f"reset={reg.reset:#010x}")
    print("unmapped probes  :", [hex(a) for a in unmapped_addresses()])

#!/usr/bin/env bash
# -----------------------------------------------------------------------------
# scripts/lint.sh -- Verilator lint of the synthesizable RTL.
#
# Two passes:
#   1. subsystem top   -- full-hierarchy elaboration of the deliverable top
#   2. per-module tops  -- each reusable module elaborated on its own, which
#                          catches unused/undriven ports that a full
#                          instantiation would otherwise mask
#
# Each pass is run twice: once plain, and once with -DAXIL_ASSERTIONS so the
# in-RTL assertion blocks are syntax- and semantics-checked too (they are
# compile-time optional and therefore would otherwise never be linted).
#
# Warning policy: -Wall, and ANY warning fails the gate. Warnings are not
# silenced to get a green build; they are fixed, or an explicit, commented
# "unused_ok" sink is used for signals that are deliberately unused (e.g. PROT,
# which this subsystem does not implement a privilege model for).
#
# Usage:
#   scripts/lint.sh                 # lint the default top set
#   TOP=axi_lite_crossbar scripts/lint.sh
#   STANDALONE=0 scripts/lint.sh    # subsystem top only (fast)
#   ASSERTIONS=0 scripts/lint.sh    # skip the -DAXIL_ASSERTIONS pass
# -----------------------------------------------------------------------------
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

VERILATOR="${VERILATOR:-verilator}"
OUT_DIR="${OUT_DIR:-results/lint}"
STANDALONE="${STANDALONE:-1}"
ASSERTIONS="${ASSERTIONS:-1}"
mkdir -p "$OUT_DIR"
# The full console transcript lands here so the evidence screenshots
# (scripts/make_screens.py -> docs/screenshots/02-lint.png) can be regenerated
# from the recorded run instead of a hand-copied excerpt.
exec > >(tee "$OUT_DIR/lint_console.log") 2>&1


RTL_SRCS=(
  rtl/axi_lite_arbiter.sv
  rtl/axi_lite_address_decoder.sv
  rtl/axil_error_slave.sv
  rtl/axi_lite_master_port.sv
  rtl/axi_lite_slave_port.sv
  rtl/axi_lite_crossbar.sv
  rtl/axil_regfile_slave.sv
  rtl/uart_regs.sv
  rtl/gpio_regs.sv
  rtl/timer_regs.sv
  rtl/peripheral_subsystem.sv
)

if [ -n "${TOP:-}" ]; then
  TOPS=("$TOP")
elif [ "$STANDALONE" = "1" ]; then
  TOPS=(peripheral_subsystem axi_lite_crossbar axi_lite_master_port
        axi_lite_slave_port axi_lite_arbiter axi_lite_address_decoder
        axil_error_slave axil_regfile_slave uart_regs gpio_regs timer_regs)
else
  TOPS=(peripheral_subsystem)
fi

overall=0
if [ "$ASSERTIONS" = "1" ]; then
  PASSES=("" "-DAXIL_ASSERTIONS")
  SUFFIXES=("" "_assert")
else
  PASSES=("")
  SUFFIXES=("")
fi

passes=0

# -----------------------------------------------------------------------------
# lint_one <top> <defs> <suffix> <sources...>
#   -Wall, and ANY warning fails the gate for the file set given.
# -----------------------------------------------------------------------------
lint_one() {
  local top="$1" defs="$2" suffix="$3"
  shift 3
  local log="$OUT_DIR/lint_${top}${suffix}.log"
  printf '== Verilator lint: %-24s %-16s ' "$top" "${defs:-plain}"
  set +e
  # shellcheck disable=SC2086
  "$VERILATOR" --lint-only -Wall \
    -Wno-DECLFILENAME -Wno-UNUSEDPARAM \
    -Irtl $defs \
    --top-module "$top" \
    "$@" > "$log" 2>&1
  local rc=$?
  set -e
  passes=$((passes + 1))

  local warn=0
  if grep -qE "^%Warning" "$log"; then warn=1; fi

  if [ "$rc" -ne 0 ] || [ "$warn" -ne 0 ]; then
    echo "FAIL (rc=$rc, warnings=$(grep -cE '^%Warning' "$log"))"
    grep -E "^%(Warning|Error)" "$log" | sed 's/^/      /' | head -30
    overall=1
  else
    echo "clean"
  fi
}

for top in "${TOPS[@]}"; do
  for i in "${!PASSES[@]}"; do
    lint_one "$top" "${PASSES[$i]}" "${SUFFIXES[$i]}" "${RTL_SRCS[@]}"
  done
done

# -----------------------------------------------------------------------------
# Testbench-only sources (protocol checker, harnesses).  These are not part of
# the deliverable, but they are compiled into every simulation build, so they get
# the same -Wall treatment: a warning here would otherwise only show up in a
# build log nobody reads.
#
# The protocol checker is linted once per role, because the reset-idle checks
# live inside `if (DUT_IS_SLAVE)` / `if (DUT_IS_MASTER)` constant conditions and
# would otherwise never be elaborated.
# -----------------------------------------------------------------------------
TB_SRCS=(
  tb/assertions/axil_protocol_checker.sv
  tb/harness/crossbar_checker_top.sv
  tb/harness/subsystem_checker_top.sv
  tb/harness/peripheral_unit_harness.sv
  tb/harness/conv_probe.sv
)

if [ "${LINT_TB:-1}" = "1" ]; then
  lint_one axil_protocol_checker "-GDUT_IS_SLAVE=1" "_slave" \
    "${TB_SRCS[@]:0:1}"
  lint_one axil_protocol_checker "-GDUT_IS_MASTER=1" "_master" \
    "${TB_SRCS[@]:0:1}"
  lint_one crossbar_checker_top "" "" \
    "${RTL_SRCS[@]}" "${TB_SRCS[@]:0:2}"
  lint_one subsystem_checker_top "" "" \
    "${RTL_SRCS[@]}" "${TB_SRCS[@]:0:1}" "${TB_SRCS[@]:2:1}"
  lint_one peripheral_unit_harness "" "" \
    "${RTL_SRCS[@]}" "${TB_SRCS[@]:0:1}" "${TB_SRCS[@]:3:1}"
  lint_one conv_probe "" "" "${TB_SRCS[@]:4:1}"
fi

if [ "$overall" -ne 0 ]; then
  echo "LINT FAILED"
  exit 1
fi

echo "LINT CLEAN ($passes pass(es))"

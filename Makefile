# -----------------------------------------------------------------------------
# Makefile -- one-command entry points for the AXI4-Lite crossbar project.
#
# Every target is a thin wrapper around the checked-in script that produces the
# corresponding evidence, so this file, the documentation, and CI cannot drift
# from each other.  See docs/verification_plan.md for what each layer verifies
# and docs/results.md for the recorded results.
#
#   make help            this list
#   make venv            create .venv and install cocotb (once)
#   make lint test       the fast everyday loop
#   make regress         cocotb regression across SEEDS (default 1,2,3,7)
#   make formal          fast formal jobs (includes the UNBOUNDED routing proof)
#   make formal-deep     the long BMC jobs (completion, progress)
#   make coverage        functional + Verilator line/toggle coverage
#   make mutation        mutation testing (simulation + formal cross-check)
#   make synth           generic-technology synthesis + stat
#   make clean           remove generated build products (all git-ignored)
# -----------------------------------------------------------------------------

.DEFAULT_GOAL := help
SHELL := /bin/bash

ROOT := $(patsubst %/,%,$(dir $(realpath $(firstword $(MAKEFILE_LIST)))))
PY   ?= $(ROOT)/.venv/bin/python

SEEDS       ?= 1,2,3,7
FORMAL_FAST ?= routing decode reset
FORMAL_DEEP ?= progress completion

.PHONY: help venv lint test regress coverage formal formal-fast formal-deep \
        formal-all mutation synth clean

help:  ## list the targets
	@awk 'BEGIN {FS = ":.*?## "} /^[a-zA-Z_-]+:.*?## / {printf "  make %-12s %s\n", $$1, $$2}' $(MAKEFILE_LIST)

venv:  ## create .venv and install the Python side (cocotb)
	python3 -m venv $(ROOT)/.venv
	$(ROOT)/.venv/bin/pip install --upgrade pip
	$(ROOT)/.venv/bin/pip install -r $(ROOT)/requirements.txt

lint:  ## Verilator -Wall lint: RTL + TB harnesses, both assertion modes
	cd $(ROOT) && scripts/lint.sh

test:  ## cocotb regression, seed 1 only
	cd $(ROOT) && $(PY) scripts/run_tests.py --seed 1

regress:  ## cocotb regression across SEEDS (default 1,2,3,7)
	cd $(ROOT) && $(PY) scripts/run_tests.py --seeds $(SEEDS)

coverage:  ## functional coverage + Verilator line/toggle coverage
	cd $(ROOT) && scripts/coverage.sh

formal: formal-fast

formal-fast:  ## fast formal jobs; routing is an UNBOUNDED k-induction proof
	cd $(ROOT) && for job in $(FORMAL_FAST); do \
		echo "== sby $$job"; sby -f formal/$$job.sby || exit 1; done

formal-deep:  ## long bounded-model-checking jobs (depth 24 / depth 64)
	cd $(ROOT) && for job in $(FORMAL_DEEP); do \
		echo "== sby $$job"; sby -f formal/$$job.sby || exit 1; done

formal-all: formal-fast formal-deep  ## every formal job (can take hours)

mutation:  ## mutation testing incl. formal cross-check -> results/mutation/
	cd $(ROOT) && $(PY) scripts/mutation_test.py --formal

synth:  ## generic-technology synthesis + stat -> results/synth/
	cd $(ROOT) && mkdir -p results/synth && \
		yosys -l results/synth/synth_peripheral_subsystem.log -s scripts/synth.ys

clean:  ## remove generated build products (every path here is git-ignored)
	cd $(ROOT) && rm -rf results/sim results/mutation/work
	cd $(ROOT) && rm -rf formal/routing formal/decode formal/reset \
		formal/progress formal/completion
	cd $(ROOT) && find . -name __pycache__ -type d -prune -exec rm -rf {} +

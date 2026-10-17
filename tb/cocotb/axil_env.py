"""Testbench environments: one per DUT configuration.

Four DUTs are used by the regression:

  * `CrossbarUnitEnv`    -- `axi_lite_crossbar` alone, with the three slave
                            ports attached to Python stallable slave models, so
                            every slave-side handshake is under testbench
                            control.  Used for the routing/arbitration/
                            backpressure/deadlock tests.
  * `PeripheralUnitEnv`  -- `peripheral_unit_harness`: UART, GPIO and TIMER
                            behind three independent flat AXI4-Lite ports.
                            Single transactions are driven with `PinnedAxil`, so
                            every register semantics check (WSTRB, RO/WO
                            responses, read-before-write, counter/flag timing) is
                            cycle-exact against `axil_refmodel`.
  * `SubsystemEnv`       -- `peripheral_subsystem` (crossbar + real UART/GPIO/
                            TIMER RTL).  Used for the register-map integration
                            tests, where the Python reference model predicts read
                            data and response codes and the BFMs provide traffic.
  * (the `probe` timing self-check uses a plain environment.)

Every environment starts a clock, holds reset, drives idle values, starts the
background model loops, and exposes the masters/slaves (or pinned accessors) to
the test.
"""

from __future__ import annotations

from typing import Dict, List, Optional, Sequence

import cocotb
from cocotb.triggers import Timer

from axil_common import Cycle, reset_dut, start_clock
from axil_cover import get_coverage
from axil_master import AxilMaster, StimConfig
from axil_monitor import PROBE_NS, MasterPortMonitor, SlavePortMonitor
from axil_pinned import PinnedAxil
from axil_refmodel import AxilRefModel
from axil_slave_model import AxilSlaveModel, SlaveModelConfig
from axil_spec import NMST, NSLV, REGIONS


class BaseEnv:
    """Clock/reset/teardown plumbing shared by every environment."""

    def __init__(self, dut, *, reset_cycles: int = 4):
        self.dut = dut
        self.reset_cycles = reset_cycles
        self.tasks: List = []
        self.cyc = Cycle(dut.clk)
        #: Env-wide cycle counter, advanced once per clock cycle by a background
        #: task.  Every transaction recorded by the BFMs is stamped with it, which
        #: gives all masters one common time base for overlap analysis.
        self.global_cycle = Cycle(dut.clk)
        #: Reference model, present in every environment that can reach a real
        #: peripheral.  `_model_clock` steps it once per clock edge.
        self.model: Optional[AxilRefModel] = None
        #: Levels the model and the DUT pins both see (set at drive points).
        self.gpio_level = 0
        self.uart_rx_level = 1
        self._model_started = False
        #: One entry per clock edge, appended by environments that compare the
        #: peripheral boundary pins against the model (see `_record_trace`).
        self.trace: List[dict] = []

    def _start_task(self, coro):
        task = cocotb.start_soon(coro)
        self.tasks.append(task)
        return task

    async def _count_cycles(self) -> None:
        while True:
            await self.global_cycle.sample()

    def _start_globals(self) -> None:
        self._start_task(self._count_cycles())

    def _start_model_clock(self) -> None:
        """Step the reference model once per clock edge, after the DUT settles.

        The task registers its edge wait before any test-issued helper does, so
        at every edge the model reaches its new state before the helper that is
        comparing against it resumes (cocotb resumes triggers in registration
        order).  It uses its own Cycle object so the env-wide `global_cycle`
        counter stays exactly one edge per cycle.

        After each step the environment may record a boundary-pin trace entry
        (`_record_trace`), taken at the same settled instant, so the observed
        pins and the predicted values belong to the same cycle by construction.
        """
        assert self.model is not None
        self.model.reset()
        self._model_started = True
        model_cyc = Cycle(self.dut.clk)

        async def _clock():
            while True:
                await model_cyc.sample()
                self.model.step(gpio_in=self.gpio_level, uart_rx=self.uart_rx_level)
                self._record_trace()

        self.trace.clear()
        self._start_task(_clock())

    # -- boundary trace -----------------------------------------------------
    def _record_trace(self) -> None:
        """Append one boundary sample.  Overridden by the pin-level environments."""

    def compare_pin_trace(self, lo: int = 0, hi: Optional[int] = None,
                          where: str = "") -> int:
        """Compare recorded boundary samples in `[lo, hi)` with the model.

        Every cycle recorded by `_record_trace` holds the observed pin values and
        the model's predictions for the same instant, so this is a cycle-by-cycle
        equivalence check of the peripheral boundary, independent of the
        register-access path that a test is exercising.  Returns the number of
        cycles compared and raises with the first mismatches otherwise.
        """
        hi = len(self.trace) if hi is None else hi
        bad = []
        for entry in self.trace[lo:hi]:
            for key, want in entry["exp"].items():
                got = entry["obs"][key]
                if got != want:
                    bad.append((entry["step"], key, got, want))
        if bad:
            detail = "\n".join(f"    step {step}: {key}: dut={got!r} model={want!r}"
                               for step, key, got, want in bad[:12])
            raise AssertionError(
                f"boundary pin trace mismatch{(' ' + where) if where else ''}: "
                f"{len(bad)} mismatching cycle/field pair(s) in [{lo}, {hi}):\n"
                f"{detail}")
        return hi - lo

    async def idle(self, cycles: int = 1) -> None:
        """Let `cycles` whole clock cycles pass with no new stimulus."""
        await self.cyc.wait_cycles(cycles)

    async def check_irqs(self, where: str = "") -> None:
        """Compare the DUT's interrupt pins with the model at the next edge."""
        await self.cyc.sample()
        if self.model is None:
            return
        observed = {
            "UART": int(self.dut.u_irq.value) if hasattr(self.dut, "u_irq") else None,
            "GPIO": int(self.dut.g_irq.value) if hasattr(self.dut, "g_irq") else None,
            "TIMER": int(self.dut.t_irq.value) if hasattr(self.dut, "t_irq") else None,
        }
        if all(value is None for value in observed.values()):
            if not hasattr(self.dut, "irq"):
                return
            bits = int(self.dut.irq.value)
            observed = {"UART": bits & 1, "GPIO": (bits >> 1) & 1, "TIMER": (bits >> 2) & 1}
        expected = {"UART": self.model.uart.irq, "GPIO": self.model.gpio.irq,
                    "TIMER": self.model.timer.irq}
        bad = {k: (observed[k], expected[k]) for k in observed if observed[k] != expected[k]}
        if bad:
            detail = ", ".join(f"{k}: dut={o} model={e}" for k, (o, e) in bad.items())
            raise AssertionError(f"irq mismatch {('at ' + where) if where else ''}: {detail}")

    def stop(self) -> None:
        for task in self.tasks:
            task.kill()
        self.tasks.clear()


class CrossbarUnitEnv(BaseEnv):
    """`axi_lite_crossbar` + Python slave models on all three real slave ports."""

    def __init__(
        self,
        dut,
        *,
        slave_cfgs: Optional[Sequence[Optional[SlaveModelConfig]]] = None,
        reset_cycles: int = 4,
        timeout_cycles: int = 512,
        monitors: bool = True,
    ):
        super().__init__(dut, reset_cycles=reset_cycles)
        self.timeout_cycles = timeout_cycles
        cfgs: List[Optional[SlaveModelConfig]] = list(slave_cfgs or [None] * NSLV)
        while len(cfgs) < NSLV:
            cfgs.append(None)
        self.masters = [
            AxilMaster(dut, i, timeout_cycles=timeout_cycles,
                       timer=self.global_cycle)
            for i in range(NMST)
        ]
        self.slaves = [
            AxilSlaveModel(dut, i, name=REGIONS[i].name, config=cfgs[i],
                           timeout_cycles=timeout_cycles)
            for i in range(NSLV)
        ]
        #: Functional-coverage collector, shared by the monitors and the
        #: per-cycle concurrency sampler; drained to results/coverage/ when the
        #: simulation shuts down (see axil_cover).
        self.cover = get_coverage(nmst=NMST, nslv=NSLV)
        self.master_monitors = [MasterPortMonitor(dut, i, cover=self.cover)
                                for i in range(NMST)] \
            if monitors else []
        self.slave_monitors = [SlavePortMonitor(dut, i, cover=self.cover)
                               for i in range(NSLV)] \
            if monitors else []
        self.monitors = [*self.master_monitors, *self.slave_monitors]

    async def start(self, reset_cycles: Optional[int] = None) -> None:
        await start_clock(self.dut)
        self._start_globals()
        for master in self.masters:
            master.drive_idle()
        for slave in self.slaves:
            slave.drive_idle()
        # Start the passive monitors and the slave loops before releasing reset,
        # so the ports are never floating and the models observe reset from
        # cycle 0.
        for monitor in self.monitors:
            self._start_task(monitor.run())
        for slave in self.slaves:
            self._start_task(slave.run())
        self._start_task(self._cover_loop())
        n = self.reset_cycles if reset_cycles is None else reset_cycles
        await reset_dut(self.dut, cycles=n)

    async def _cover_loop(self) -> None:
        """Sample cross-master concurrency into the collector once per cycle.

        Runs at the same settled instant as the monitors (PROBE_NS after the
        clock edge) and reads only their pending-transaction state, so the bins
        describe what the boundary is actually doing, not what the stimulus
        asked for.
        """
        while True:
            await Timer(PROBE_NS, "ns")
            if not self.master_monitors:
                continue
            cover = self.cover
            pending_w = [m for m in self.master_monitors if m.wr_inflight]
            pending_r = [m for m in self.master_monitors if m.rd_inflight]
            if len(pending_w) >= 2:
                same = len({m.wr_tgt for m in pending_w}) == 1
                cover.hit("xbar.write_concurrency",
                          "2_same_target" if same else "2")
            else:
                cover.hit("xbar.write_concurrency", str(len(pending_w)))
            if len(pending_r) >= 2:
                same = len({m.rd_tgt for m in pending_r}) == 1
                cover.hit("xbar.read_concurrency",
                          "2_same_target" if same else "2")
            else:
                cover.hit("xbar.read_concurrency", str(len(pending_r)))
            for monitor in self.master_monitors:
                if monitor.wr_inflight and monitor.rd_inflight:
                    cover.hit("xbar.wr_rd_overlap", f"m{monitor.index}_both")


class PeripheralUnitEnv(BaseEnv):
    """`peripheral_unit_harness`: the three peripherals on flat, independent ports.

    This environment is the only place where the register semantics can be
    checked cycle by cycle: each peripheral has its own AXI4-Lite port, so a
    single transaction's accept edge, register-apply edge and response edge are
    all determined by `PinnedAxil` and observable without the crossbar in the way.

    It also drives the peripheral boundary signals: `gpio_in`, `uart_rx` (and
    observes `gpio_out`, `gpio_dir`, `uart_tx`, and the three `irq` lines).
    """

    def __init__(self, dut, *, reset_cycles: int = 4, gpio_width: int = 8,
                 model: bool = True):
        super().__init__(dut, reset_cycles=reset_cycles)
        self.gpio_width = gpio_width
        self.pinned = {
            "UART": PinnedAxil(dut, "u", None, name="pin.UART", timer=self.global_cycle),
            "GPIO": PinnedAxil(dut, "g", None, name="pin.GPIO", timer=self.global_cycle),
            "TIMER": PinnedAxil(dut, "t", None, name="pin.TIMER", timer=self.global_cycle),
        }
        if model:
            self.model = AxilRefModel(gpio_width=gpio_width,
                                      log=dut._log if hasattr(dut, "_log") else None)

    async def start(self, reset_cycles: Optional[int] = None) -> None:
        await start_clock(self.dut)
        self._start_globals()
        for pins in self.pinned.values():
            pins.drive_idle()
        self.dut.gpio_in.value = 0
        self.dut.uart_rx.value = 1
        self.uart_rx_level = 1
        n = self.reset_cycles if reset_cycles is None else reset_cycles
        await reset_dut(self.dut, cycles=n)
        if self.model is not None:
            self._start_model_clock()

    # -- boundary trace -----------------------------------------------------
    def _record_trace(self) -> None:
        """Sample the boundary pins and the model's prediction for this cycle."""
        assert self.model is not None
        irq = self.model.boundary()["irq"]
        self.trace.append({
            "step": self.model.steps,
            "obs": {"uart_tx": self.uart_tx,
                    "gpio_out": self.gpio_out,
                    "gpio_dir": self.gpio_dir,
                    "irq": (self.irq("UART"), self.irq("GPIO"), self.irq("TIMER"))},
            "exp": {"uart_tx": self.model.uart.tx_line,
                    "gpio_out": self.model.gpio.out,
                    "gpio_dir": self.model.gpio.dir,
                    "irq": ((irq >> 0) & 1, (irq >> 1) & 1, (irq >> 2) & 1)},
        })

    # -- boundary stimulus --------------------------------------------------
    def set_gpio_in(self, value: int) -> None:
        """Drive the GPIO pins.  Call at a drive point (every helper returns at one)."""
        self.gpio_level = value & ((1 << self.gpio_width) - 1)
        self.dut.gpio_in.value = self.gpio_level

    def set_uart_rx(self, value: int) -> None:
        self.uart_rx_level = 1 if value else 0
        self.dut.uart_rx.value = self.uart_rx_level

    @property
    def gpio_out(self) -> int:
        return int(self.dut.gpio_out.value)

    @property
    def gpio_dir(self) -> int:
        return int(self.dut.gpio_dir.value)

    @property
    def uart_tx(self) -> int:
        return int(self.dut.uart_tx.value)

    def irq(self, which: str) -> int:
        """Peripheral IRQ pin: `which` is one of `UART`, `GPIO`, `TIMER`."""
        prefix = {"UART": "u", "GPIO": "g", "TIMER": "t"}[which.upper()]
        return int(getattr(self.dut, f"{prefix}_irq").value)


class SubsystemEnv(BaseEnv):
    """`peripheral_subsystem`: real peripherals, two master BFMs.

    The GPIO/UART pins are driven/observed here so peripheral behaviour that is
    visible at the boundary (GPIO output value, UART TX line) can be checked
    against the reference model without reaching into internal signals.

    Because the crossbar sits between the master ports and the register bridges,
    a transaction's register-apply edge is not derivable from the master-side
    handshake alone.  Tests that need cycle-exact register timing therefore use
    `PinnedAxil` on the `peripheral_unit_harness` DUT instead; here the model is
    used for response/data predictions and for eventual-state checks (documented
    per test).
    """

    def __init__(self, dut, *, reset_cycles: int = 4, timeout_cycles: int = 4096,
                 gpio_width: int = 8, model: bool = True):
        super().__init__(dut, reset_cycles=reset_cycles)
        self.gpio_width = gpio_width
        self.masters = [
            AxilMaster(dut, i, timeout_cycles=timeout_cycles,
                       timer=self.global_cycle)
            for i in range(NMST)
        ]
        self.timeout_cycles = timeout_cycles
        if model:
            self.model = AxilRefModel(gpio_width=gpio_width,
                                      log=dut._log if hasattr(dut, "_log") else None)
        #: Pinned accessors on the same master ports, for tests that need exact
        #: timing without the BFM's pipelining freedom.
        self.pinned = [
            PinnedAxil(dut, "m_axil", i, name=f"pin.m{i}", timer=self.global_cycle)
            for i in range(NMST)
        ]

    async def start(self, reset_cycles: Optional[int] = None) -> None:
        await start_clock(self.dut)
        self._start_globals()
        for master in self.masters:
            master.drive_idle()
        for pins in self.pinned:
            pins.drive_idle()
        self.dut.gpio_in.value = 0
        self.dut.uart_rx.value = 1
        self.uart_rx_level = 1
        n = self.reset_cycles if reset_cycles is None else reset_cycles
        await reset_dut(self.dut, cycles=n)
        if self.model is not None:
            self._start_model_clock()

    def set_gpio_in(self, value: int) -> None:
        self.gpio_level = value & ((1 << self.gpio_width) - 1)
        self.dut.gpio_in.value = self.gpio_level

    def set_uart_rx(self, value: int) -> None:
        self.uart_rx_level = 1 if value else 0
        self.dut.uart_rx.value = self.uart_rx_level

    @property
    def gpio_out(self) -> int:
        return int(self.dut.gpio_out.value)

    @property
    def gpio_dir(self) -> int:
        return int(self.dut.gpio_dir.value)

    @property
    def uart_tx(self) -> int:
        return int(self.dut.uart_tx.value)

    @property
    def irq(self) -> int:
        return int(self.dut.irq.value)

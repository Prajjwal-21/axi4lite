"""Crossbar unit tests.

DUT: `axi_lite_crossbar` with the three slave ports attached to Python stallable
slave models (axil_slave_model).  Every slave-side handshake is under testbench
control here, so the arbitration, routing, buffering and backpressure behaviour
can be exercised exactly as intended.

Test list (the required scenarios are marked):

  test_simultaneous_distinct_slaves   (1) both masters, different slaves
  test_simultaneous_same_slave        (2) both masters, same slave
  test_aw_w_arrival_orders            (3) independent AW/W, either order first
  test_channel_backpressure           (4) backpressure on AW/W/AR/B/R
  test_delayed_response_routing       (5) delayed B/R, routing to the right master
  test_wstrb_partial_and_zero         (6) WSTRB: partial and zero strobes
  test_invalid_address_decerr         (7) unmapped addresses -> DECERR
  test_reset_idle_and_in_flight       (8) reset while idle and while in flight
  test_concurrent_read_write          (9) read and write on one slave at once
  test_contention_round_robin        (10) repeated contention -> fairness
  test_randomized_multi_master       (11) randomized multi-master traffic
  test_fault_injection_detected      (12) the checker catches injected faults
  test_deadlock_is_detected          (12) a stalled slave fails the test, loudly

  test_second_aw_held_off            directed regression for the write-slot
                                     hole that formal/routing.sby found: an
                                     out-of-contract master presenting a second
                                     AW while a write is in flight must be held
                                     off, not accepted
"""

from __future__ import annotations

from typing import List, Optional

import cocotb
from cocotb.triggers import Timer

from axil_common import READ, WRITE, Txn, gather, resp_name
from axil_env import CrossbarUnitEnv
from axil_master import PROBE_NS, MasterAgent, ReadJob, StimConfig, WriteJob
from axil_scoreboard import Scoreboard, ScoreboardError, ShadowMem, unmapped_probe_addresses
from axil_slave_model import SlaveModelConfig, StallPattern
from axil_spec import (NMST, NSLV, REGIONS, RESP_DECERR, RESP_OKAY, REGION_SIZE,
                       decode, target_index)

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

_nonce = [0]


def unique_data(tag: int = 0) -> int:
    """A write payload that is unique across the whole test run.

    Uniqueness is what upgrades the served-vs-issued comparison from "same
    multiset" to "the same transaction arrived exactly once": no two writes in a
    test share an (address, data, WSTRB) triple.
    """
    _nonce[0] += 1
    return 0xA500_0000 | ((tag & 0xF) << 20) | (_nonce[0] & 0xFFFFF)


def reg_addr(slave: int, offset: int = 0) -> int:
    return REGIONS[slave].base + offset


def cfgs(
    awready: Optional[StallPattern] = None,
    wready: Optional[StallPattern] = None,
    arready: Optional[StallPattern] = None,
    bvalid_delay: int = 0,
    rvalid_delay: int = 0,
) -> List[SlaveModelConfig]:
    def make() -> SlaveModelConfig:
        return SlaveModelConfig(
            awready=awready or StallPattern(),
            wready=wready or StallPattern(),
            arready=arready or StallPattern(),
            bvalid_delay=bvalid_delay,
            rvalid_delay=rvalid_delay,
        )
    return [make() for _ in range(NSLV)]


async def bring_up(dut, slave_cfgs: Optional[List[SlaveModelConfig]] = None,
                   **kwargs) -> CrossbarUnitEnv:
    env = CrossbarUnitEnv(dut, slave_cfgs=slave_cfgs, **kwargs)
    await env.start()
    return env


def served_by(env, slave: int, kind: str) -> List[Txn]:
    return [t for t in env.slaves[slave].served if t.kind == kind]


def all_served(env, kind: str) -> List[Txn]:
    return [t for s in env.slaves for t in s.served if t.kind == kind]


# ---------------------------------------------------------------------------
# (1) both masters, different slaves
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_simultaneous_distinct_slaves(dut):
    """Two masters access two different slaves in the same cycle window."""
    env = await bring_up(dut)
    sb = Scoreboard("distinct", log=dut._log)

    addr0 = reg_addr(0, 0x10)
    addr1 = reg_addr(2, 0x20)
    data0, data1 = unique_data(0), unique_data(1)

    t0, t1 = await gather(
        env.masters[0].write(addr0, data0),
        env.masters[1].write(addr1, data1),
    )
    sb.record_all([t0, t1])
    sb.check_expected_resp(t0)
    sb.check_expected_resp(t1)

    r0, r1 = await gather(
        env.masters[0].read(addr0),
        env.masters[1].read(addr1),
    )
    sb.record_all([r0, r1])
    sb.check_expected_resp(r0)
    sb.check_expected_resp(r1)
    sb.check_read_data(r0, data0)
    sb.check_read_data(r1, data1)

    # Each slave saw exactly its own traffic, and never the other's.
    sb.check_served(served_by(env, 0, WRITE), served_by(env, 0, READ),
                    [t0], [r0])
    sb.check_served(served_by(env, 2, WRITE), served_by(env, 2, READ),
                    [t1], [r1])
    sb.check(len(served_by(env, 1, WRITE)) == 0,
             "slave 1 (GPIO) was served although it was not addressed")
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (2) both masters, same slave
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_simultaneous_same_slave(dut):
    """Two masters write the same slave at once: both are served exactly once."""
    env = await bring_up(dut)
    sb = Scoreboard("same-slave", log=dut._log)

    addr = reg_addr(1, 0x04)
    data0, data1 = unique_data(0), unique_data(1)

    t0, t1 = await gather(
        env.masters[0].write(addr, data0),
        env.masters[1].write(addr, data1),
    )
    sb.record_all([t0, t1])
    sb.check_expected_resp(t0)
    sb.check_expected_resp(t1)
    sb.check_served(served_by(env, 1, WRITE), [], [t0, t1], [])

    # The last write the slave applied is what a read must return.
    served = served_by(env, 1, WRITE)
    expected = served[-1].data
    r0 = await env.masters[0].read(addr)
    sb.record(r0)
    sb.check_read_data(r0, expected)

    # Both masters saw their own response, and only their own.
    sb.check(t0.resp == RESP_OKAY and t1.resp == RESP_OKAY,
             "both writes must complete with OKAY")
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())
    dut._log.info(f"served order: {[hex(t.data) for t in served]}")


# ---------------------------------------------------------------------------
# (3) independent AW/W arrival
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_aw_w_arrival_orders(dut):
    """AW and W are independent channels: either may arrive first, at the master
    port and at the slave port."""
    cfg = cfgs(awready=StallPattern(period=4, duty=1),
               wready=StallPattern(period=3, duty=1))
    env = await bring_up(dut, slave_cfgs=cfg)
    sb = Scoreboard("aw-w-order", log=dut._log)
    addr = reg_addr(0, 0x00)

    # (a) AW first at the master port.
    data_a = unique_data(1)
    ta = await env.masters[0].write(addr, data_a, aw_delay=0, w_delay=5)
    sb.record(ta)
    aw_events = [e for e in env.monitors[0].events if e.kind == "aw"]
    w_events = [e for e in env.monitors[0].events if e.kind == "w"]
    sb.check(aw_events and w_events and aw_events[0].cycle < w_events[0].cycle,
             "with w_delay=5 the AW handshake must precede the W handshake")

    # (b) W first at the master port.
    data_b = unique_data(2)
    tb = await env.masters[0].write(addr, data_b, aw_delay=5, w_delay=0)
    sb.record(tb)
    aw_events = [e for e in env.monitors[0].events if e.kind == "aw"]
    w_events = [e for e in env.monitors[0].events if e.kind == "w"]
    sb.check(w_events[-1].cycle < aw_events[-1].cycle,
             "with aw_delay=5 the W handshake must precede the AW handshake")

    # (c) same cycle.
    data_c = unique_data(3)
    tc = await env.masters[0].write(addr, data_c, aw_delay=0, w_delay=0)
    sb.record(tc)

    # (d) the slave takes AW and W in different cycles: with the stall patterns
    # above at least one of the two handshakes must land on another cycle.
    slave = env.slaves[0]
    sb.check(len(slave.aw_events) == 3 and len(slave.w_events) == 3,
             f"slave 0 must have seen 3 AW and 3 W handshakes, saw "
             f"{len(slave.aw_events)}/{len(slave.w_events)}")
    sb.check(any(a[0] != w[0] for a, w in zip(slave.aw_events, slave.w_events)),
             "the slave accepted every AW and W in the same cycle; the "
             "independent-AW/W path was not exercised")

    for txn in (ta, tb, tc):
        sb.check_expected_resp(txn)
    sb.check_served(served_by(env, 0, WRITE), [], [ta, tb, tc], [])
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (4) backpressure on every channel
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_channel_backpressure(dut):
    """Stalled READY on AW/W/AR and delayed B/R must not corrupt or lose data."""
    cfg = cfgs(
        awready=StallPattern(period=5, duty=2),
        wready=StallPattern(period=7, duty=3),
        arready=StallPattern(period=4, duty=1),
        bvalid_delay=6,
        rvalid_delay=7,
    )
    env = await bring_up(dut, slave_cfgs=cfg)
    sb = Scoreboard("backpressure", log=dut._log)

    shadow = ShadowMem()
    issued_w = []
    issued_r = []
    for slave in range(NSLV):
        for offset in (0x00, 0x04, 0x08):
            addr = reg_addr(slave, offset)
            data = unique_data(slave)
            strb = 0xF
            txn = await env.masters[slave % NMST].write(
                addr, data, strb=strb,
                aw_delay=offset // 4, w_delay=(offset // 4) % 3,
                bready_delay=(offset // 4) % 4,
            )
            sb.record(txn)
            sb.check_expected_resp(txn)
            shadow.apply_write(addr, data, strb)
            issued_w.append(txn)

    for slave in range(NSLV):
        addr = reg_addr(slave, 0x10)
        txn = await env.masters[(slave + 1) % NMST].read(
            addr, ar_delay=2, rready_delay=3)
        sb.record(txn)
        sb.check_expected_resp(txn)
        sb.check_read_data(txn, shadow.value(addr))
        issued_r.append(txn)

    sb.check_served(all_served(env, WRITE), all_served(env, READ),
                    issued_w, issued_r)
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (5) delayed B/R and response routing
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_delayed_response_routing(dut):
    """A slow slave response must reach only its owner, and the second request
    to the same slave must wait for it (grant held for the whole transaction)."""
    cfg = cfgs(bvalid_delay=12, rvalid_delay=15)
    env = await bring_up(dut, slave_cfgs=cfg)
    sb = Scoreboard("delayed-routing", log=dut._log)

    addr = reg_addr(1, 0x04)
    data0, data1 = unique_data(0), unique_data(1)

    t0, t1 = await gather(
        env.masters[0].write(addr, data0),
        env.masters[1].write(addr, data1),
    )
    sb.record_all([t0, t1])
    served = served_by(env, 1, WRITE)
    sb.check(len(served) == 2, f"slave 1 must serve both writes, served {len(served)}")
    sb.check_served(served, [], [t0, t1], [])

    r0, r1 = await gather(
        env.masters[0].read(addr),
        env.masters[1].read(addr),
    )
    sb.record_all([r0, r1])
    sb.check_served([], served_by(env, 1, READ), [], [r0, r1])
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (6) WSTRB
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_wstrb_partial_and_zero(dut):
    """Partial strobes change only the enabled bytes; a zero-strobe write is a
    legal no-op that still completes with OKAY."""
    env = await bring_up(dut)
    sb = Scoreboard("wstrb", log=dut._log)

    addr = reg_addr(2, 0x04)          # TIMER LOAD, a plain read/write register
    base = 0xFFFF_FFFF
    # The unit-test slave's initial memory content is testbench state: give the
    # model and the mirroring shadow the same starting value so the expected read
    # data is a non-trivial pattern from the very first access.
    env.slaves[2].mem[addr] = base
    shadow = ShadowMem()
    shadow.mem[ShadowMem.word(addr)] = base

    patterns = [
        (0x1, 0xAA00_0000), (0x2, 0x0000_BB00), (0x4, 0x0000_00CC), (0x8, 0xDD00_0000),
        (0x3, 0x0000_0000), (0xC, 0xFFFF_FFFF), (0x7, 0x1234_5678),
        (0x0, 0xFFFF_FFFF),   # zero strobe: must change nothing
    ]
    issued = []
    for strb, data in patterns:
        txn = await env.masters[0].write(addr, data, strb=strb)
        sb.record(txn)
        sb.check_expected_resp(txn)
        shadow.apply_write(addr, data, strb)
        check = await env.masters[0].read(addr)
        sb.record(check)
        sb.check_read_data(check, shadow.value(addr))
        issued.append(txn)

    sb.check_served(served_by(env, 2, WRITE), served_by(env, 2, READ),
                    issued, [t for t in env.masters[0].observed if t.kind == READ])
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (7) invalid addresses
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_invalid_address_decerr(dut):
    """Every unmapped address must be answered with DECERR by the internal error
    target, and no real slave may see it."""
    env = await bring_up(dut)
    sb = Scoreboard("decerr", log=dut._log)

    addrs = unmapped_probe_addresses()
    issued_w = []
    for addr in addrs:
        txn = await env.masters[0].write(addr, unique_data(0))
        sb.record(txn)
        sb.check(txn.resp == RESP_DECERR,
                 f"{txn} : unmapped write must be DECERR, got {resp_name(txn.resp)}")
        sb.check(decode(txn.addr) is None, "test used a mapped address")
        issued_w.append(txn)

    issued_r = []
    for addr in addrs[:4]:
        txn = await env.masters[1].read(addr)
        sb.record(txn)
        sb.check(txn.resp == RESP_DECERR,
                 f"{txn} : unmapped read must be DECERR, got {resp_name(txn.resp)}")
        sb.check_read_data(txn, 0)      # the error slave returns zero data
        issued_r.append(txn)

    sb.check(len(all_served(env, WRITE)) == 0 and len(all_served(env, READ)) == 0,
             "a real slave was served for an unmapped address")
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (8) reset
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_reset_idle_and_in_flight(dut):
    """While reset is asserted the crossbar must accept nothing; a transaction in
    flight when reset hits must be abandoned, and the crossbar must come back
    clean."""
    env = await bring_up(dut)

    # ---- reset while idle: drive valid with reset asserted -----------------
    dut.rst.value = 1
    for master in env.masters:
        master.h("awvalid").value = 1
        master.h("wvalid").value = 1
        master.h("arvalid").value = 1
        master.h("awaddr").value = reg_addr(0, 0x04)
        master.h("araddr").value = reg_addr(0, 0x04)
        master.h("bready").value = 1
        master.h("rready").value = 1
    await env.idle(4)
    for index, master in enumerate(env.masters):
        assert int(master.h("awready").value) == 0, \
            f"m{index}: AWREADY asserted during reset"
        assert int(master.h("arready").value) == 0, \
            f"m{index}: ARREADY asserted during reset"
        assert int(master.h("bvalid").value) == 0, \
            f"m{index}: BVALID asserted during reset"
        assert int(master.h("rvalid").value) == 0, \
            f"m{index}: RVALID asserted during reset"

    dut.rst.value = 0
    for master in env.masters:
        master.drive_idle()
    await env.idle(2)

    # ---- reset while a transaction is in flight ---------------------------
    env.slaves[0].hold["b"] = True          # the slave never returns B
    env.slaves[0].hold["r"] = True
    writer = env.masters[0]
    pending = cocotb.start_soon(writer.write(reg_addr(0, 0x00), unique_data(0), strb=0xF))

    # Give it time to be accepted by the slave, then reset.
    await env.idle(12)
    assert env.slaves[0].aw_events, "the AW never reached the slave before reset"
    assert int(writer.h("bvalid").value) == 0, "B must not appear while the slave holds it"

    dut.rst.value = 1
    await env.idle(3)

    # The abandoned transaction must not produce a response after reset.
    env.slaves[0].hold["b"] = False
    env.slaves[0].hold["r"] = False
    await env.idle(5)
    assert int(writer.h("bvalid").value) == 0, \
        "a B response appeared for a transaction that was reset"
    pending.kill()
    writer.force_idle()
    await env.idle(1)

    dut.rst.value = 0
    await env.idle(2)

    # ---- the crossbar must work again --------------------------------------
    sb = Scoreboard("post-reset", log=dut._log)
    addr = reg_addr(1, 0x00)
    data = unique_data(7)
    txn = await writer.write(addr, data)
    sb.record(txn)
    sb.check_expected_resp(txn)
    read = await env.masters[1].read(addr)
    sb.record(read)
    sb.check_read_data(read, data)
    sb.check_served(served_by(env, 1, WRITE), served_by(env, 1, READ),
                    [txn], [read])
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (9) concurrent read and write on the same slave
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_concurrent_read_write(dut):
    """One master reads a slave while the other writes it: both proceed, because
    each slave has independent read and write arbiters."""
    env = await bring_up(dut)
    sb = Scoreboard("concurrent-rw", log=dut._log)

    seed_addr = reg_addr(0, 0x18)
    read_addr = reg_addr(0, 0x04)
    seed = unique_data(1)
    seed_txn = await env.masters[0].write(read_addr, seed)
    sb.record(seed_txn)

    data = unique_data(0)
    t_w, t_r = await gather(
        env.masters[0].write(seed_addr, data),
        env.masters[1].read(read_addr),
    )
    sb.record_all([t_w, t_r])
    sb.check_expected_resp(t_w)
    sb.check_expected_resp(t_r)
    sb.check_read_data(t_r, seed)        # the read did not race with the write
    sb.check_served(served_by(env, 0, WRITE), served_by(env, 0, READ),
                    [seed_txn, t_w], [t_r])
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (10) contention and fairness
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_contention_round_robin(dut):
    """Both masters hammer one slave: every transaction completes, none is lost,
    and the grants rotate (round-robin) instead of starving one master.

    Each round issues at most one transaction per master (the DUT supports one
    outstanding write per master), and the rounds run back to back so both
    masters are requesting continuously.
    """
    env = await bring_up(dut)
    sb = Scoreboard("fairness", log=dut._log)

    addr = reg_addr(2, 0x04)
    rounds = 6
    issued = []
    for _ in range(rounds):
        pair = await gather(
            env.masters[0].write(addr, unique_data(0)),
            env.masters[1].write(addr, unique_data(1)),
        )
        issued.extend(pair)
    sb.record_all(issued)
    for txn in issued:
        sb.check_expected_resp(txn)

    served = served_by(env, 2, WRITE)
    sb.check(len(served) == len(issued),
             f"slave 2 served {len(served)} of {len(issued)} writes")
    sb.check_served(served, [], issued, [])

    # Reconstruct the grant order from the unique payloads.
    nonces = {t.data: t.master for t in issued}
    order = [nonces.get(t.data, -1) for t in served]
    sb.check(-1 not in order, f"a served write had an unknown payload: {order}")
    dut._log.info(f"grant order (master per served write): {order}")

    per_master = [order.count(m) for m in range(NMST)]
    sb.check(max(per_master) - min(per_master) <= 1,
             f"round-robin expected an even split, got {per_master}")

    # No master may own two consecutive grants while the other is requesting.
    longest = 1
    run = 1
    for previous, current in zip(order, order[1:]):
        run = run + 1 if current == previous else 1
        longest = max(longest, run)
    sb.check(longest <= 2,
             f"a master was granted {longest} times in a row; the arbiter is "
             f"not rotating (order={order})")
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())


# ---------------------------------------------------------------------------
# (11) randomized multi-master traffic
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_randomized_multi_master(dut):
    """Randomized concurrent traffic from both masters with randomized delays,
    strobes and addresses, checked transaction by transaction.

    Reproducibility: the seed comes from cocotb's random seed
    (COCOTB_RANDOM_SEED, recorded in the results XML and by scripts/run_tests.py).
    The stimulus draws from `MasterAgent`'s own RNG, seeded from that value, so a
    failing run can be replayed exactly with --seed.
    """
    import cocotb as _cocotb

    base_seed = int(_cocotb.RANDOM_SEED)
    dut._log.info(f"randomized traffic seed = {base_seed}")

    cfg = cfgs(awready=StallPattern(period=3, duty=2),
               wready=StallPattern(period=4, duty=3),
               arready=StallPattern(period=5, duty=2),
               bvalid_delay=2, rvalid_delay=3)
    env = await bring_up(dut, slave_cfgs=cfg)
    sb = Scoreboard("random", log=dut._log)

    # Disjoint window per master: the two masters contend for the same slave and
    # the same arbiter, but each address is written by exactly one master, so the
    # shadow memory is a valid reference for its reads.
    jobs_per_master = 24
    shadows = [ShadowMem() for _ in range(NMST)]
    agents = []
    for master in range(NMST):
        agent = MasterAgent(env.masters[master], StimConfig(seed=base_seed + 7 * master))
        # 4 addresses per region, private to this master
        addrs = [reg_addr(slave, 0x20 + 0x10 * master + 4 * k)
                 for slave in range(NSLV) for k in range(4)]
        # Give every window address a distinct known content in BOTH the slave
        # model and the mirroring shadow, so reads of never-written addresses are
        # still checked against a non-trivial value.
        for k, addr in enumerate(addrs):
            value = 0xDEAD_0000 | (master << 12) | (k << 8) | (addr & 0x3F)
            env.slaves[decode(addr)].mem[addr] = value
            shadows[master].mem[ShadowMem.word(addr)] = value
        for index in range(jobs_per_master):
            addr = addrs[(index * 5 + master) % len(addrs)]
            if index % 3 == 2:
                agent.add(ReadJob(addr=addr))
            else:
                agent.add(WriteJob(addr=addr, data=unique_data(master),
                                   strb=agent.random_strb(addr)))
        agents.append(agent)

    await gather(*(agent.run() for agent in agents))

    issued = [t for agent in agents for t in agent.results]
    sb.record_all(issued)
    for txn in issued:
        sb.check_expected_resp(txn)

    # Per-master data integrity: apply each master's writes to its own shadow
    # memory in issue order, and check its reads against it.
    for agent in agents:
        master = agent.bfm.index
        shadow = shadows[master]
        for txn in agent.results:
            if txn.kind == WRITE:
                shadow.apply_write(txn.addr, txn.data, txn.strb)
            else:
                sb.check_read_data(txn, shadow.value(txn.addr))

    writes = [t for t in issued if t.kind == WRITE]
    reads = [t for t in issued if t.kind == READ]
    sb.check_served(all_served(env, WRITE), all_served(env, READ), writes, reads)

    # Contention really happened: count transaction pairs from different masters
    # whose [t_start, t_end] intervals overlap on the env-wide cycle counter.  If
    # nothing overlapped, this test would not be exercising arbitration at all.
    overlaps = 0
    for t0 in agents[0].results:
        for t1 in agents[1].results:
            if t0.t_start < t1.t_end and t1.t_start < t0.t_end:
                overlaps += 1
    sb.check(overlaps > 0,
             "no transactions from the two masters overlapped in time; the "
             "randomized run did not exercise concurrent arbitration")
    sb.check_monitors(env.monitors)
    dut._log.info(sb.summary())
    dut._log.info(
        f"randomized: {len(writes)} writes, {len(reads)} reads, "
        f"{len(all_served(env, WRITE))} served writes, "
        f"{overlaps} overlapping master transaction pairs"
    )


# ---------------------------------------------------------------------------
# (12) fault detection
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_fault_injection_detected(dut):
    """The scoreboard must reject dropped, duplicated, corrupted and misrouted
    transactions.  This is a self-test of the checker: it is fed deliberately
    wrong transaction lists and must raise for each fault class."""
    sb = Scoreboard("fault-injection")
    addr0, addr1 = reg_addr(0, 0x00), reg_addr(1, 0x00)
    good_w = Txn(kind=WRITE, master=0, addr=addr0, data=0x1111_1111, strb=0xF,
                 resp=RESP_OKAY)
    good_r = Txn(kind=READ, master=0, addr=addr0, data=0x2222_2222, resp=RESP_OKAY)

    def expect_failure(description: str, fn) -> None:
        try:
            fn()
        except ScoreboardError:
            dut._log.info(f"fault detected as expected: {description}")
            return
        raise AssertionError(f"scoreboard did NOT detect: {description}")

    # dropped write
    expect_failure("dropped write", lambda: sb.check_served([], [], [good_w], []))
    # duplicated write
    expect_failure("duplicated write", lambda: sb.check_served(
        [good_w, good_w], [], [good_w], []))
    # corrupted write payload
    expect_failure("corrupted write data", lambda: sb.check_served(
        [Txn(kind=WRITE, master=0, addr=addr0, data=0xBAD0_0000, strb=0xF)],
        [], [good_w], []))
    # corrupted strobe
    expect_failure("corrupted WSTRB", lambda: sb.check_served(
        [Txn(kind=WRITE, master=0, addr=addr0, data=good_w.data, strb=0x1)],
        [], [good_w], []))
    # misrouted write
    expect_failure("misrouted write", lambda: sb.check_served(
        [Txn(kind=WRITE, master=0, addr=addr1, data=good_w.data, strb=0xF)],
        [], [good_w], []))
    # dropped read
    expect_failure("dropped read", lambda: sb.check_served([], [], [], [good_r]))
    # duplicated read
    expect_failure("duplicated read", lambda: sb.check_served(
        [], [good_r, good_r], [], [good_r]))
    # corrupted read data
    expect_failure("corrupted read data", lambda: sb.check_served(
        [], [Txn(kind=READ, master=0, addr=addr0, data=0x0)], [], [good_r]))
    # wrong response code
    expect_failure("wrong response code", lambda: sb.check_expected_resp(
        Txn(kind=WRITE, master=0, addr=unmapped_probe_addresses()[0],
            data=0, resp=RESP_OKAY)))
    # wrong read data
    expect_failure("wrong read data", lambda: sb.check_read_data(good_r, 0))


@cocotb.test()
async def test_deadlock_is_detected(dut):
    """A slave that never responds must fail the test through the BFM's cycle
    timeout instead of hanging the regression."""
    from axil_master import BfmError

    env = await bring_up(dut, slave_cfgs=cfgs(bvalid_delay=0), timeout_cycles=40)
    env.slaves[0].hold["b"] = True
    env.slaves[0].hold["aw"] = True
    env.slaves[0].hold["w"] = True
    try:
        await env.masters[0].write(reg_addr(0, 0x00), unique_data(0),
                                   timeout=30)
    except BfmError as exc:
        dut._log.info(f"deadlock detected as expected: {exc}")
    else:
        raise AssertionError(
            "the BFM completed a write to a slave that never asserted READY"
        )


# ---------------------------------------------------------------------------
# (13) out-of-contract master: a second AW while a write is in flight
# ---------------------------------------------------------------------------

@cocotb.test()
async def test_second_aw_held_off(dut):
    """Directed regression for the write-slot hole that formal/routing.sby found.

    The hole (fixed in axi_lite_master_port): wr_wait_q used to be raised only
    after BOTH halves of a write had been handed to the target.  Between the AW
    and the W dispatch awready_o was high, so a master presenting a second AW in
    that window had it accepted, and the second AW overwrote aw_addr_q/aw_sel_q
    while the first write's W was still queued - the first write's data could
    then have been dispatched to the second AW's target.  No random test hit the
    window because a conformant master never has two writes outstanding; a formal
    harness that lets the boundary misbehave did.

    This test drives the pins directly (the BFM correctly refuses a second
    outstanding write, so it cannot express the stimulus) and pins the behaviour
    down cycle by cycle:

      * AW#1 is presented alone, W#1 one cycle later;
      * the target's WREADY is stalled, so slave 0 takes AW#1 first - that byte
        of the transaction is what opens the window;
      * AW#2, addressed to a DIFFERENT slave, is presented and held for the whole
        window: AWREADY must stay low, and slave 2 must see nothing;
      * the stall is released; the first write must complete OKAY with its own
        address and data at slave 0;
      * only then is AW#2 accepted, and write #2 must land at slave 2 with its
        own payload.
    """
    env = await bring_up(dut)
    cyc = env.cyc
    m0 = env.masters[0]
    slave0, slave1, slave2 = env.slaves
    sb = Scoreboard("second-aw", log=dut._log)

    addr_a, addr_b = reg_addr(0, 0x04), reg_addr(2, 0x10)
    data_a, data_b = unique_data(0), unique_data(1)

    awvalid, awaddr, awready = m0.h("awvalid"), m0.h("awaddr"), m0.h("awready")
    wvalid, wdata, wstrb, wready = (m0.h("wvalid"), m0.h("wdata"),
                                    m0.h("wstrb"), m0.h("wready"))
    bvalid, bready, bresp = m0.h("bvalid"), m0.h("bready"), m0.h("bresp")

    async def step() -> dict:
        """Sample this cycle's boundary values, then advance one clock cycle.

        Same convention as the BFMs: an input driven at a drive point is
        captured by the rising edge that closes that cycle, so a READY read at
        the settled point inside the cycle means the handshake completes at the
        end of that cycle.
        """
        await Timer(PROBE_NS, "ns")
        seen = dict(
            awready=int(awready.value), wready=int(wready.value),
            bvalid=int(bvalid.value), bresp=int(bresp.value),
        )
        await cyc.drive_point()
        return seen

    bready.value = 1          # accept the B as soon as it is offered

    # --- write #1: AW and W in different cycles ----------------------------
    await cyc.drive_point()
    awaddr.value = addr_a
    awvalid.value = 1
    seen = await step()
    sb.check(seen["awready"] == 1,
             "the crossbar must accept AW#1 (nothing is outstanding)")

    awvalid.value = 0
    wvalid.value = 1
    wdata.value = data_a
    wstrb.value = 0xF
    seen = await step()
    sb.check(seen["wready"] == 1, "the crossbar must accept W#1")

    # --- open the window: slave 0 takes AW#1, but not W#1 ------------------
    wvalid.value = 0
    slave0.hold["w"] = True
    for _ in range(12):
        seen = await step()
        sb.check(seen["wready"] == 0,
                 "master-side WREADY must be low while the write is in flight")
        if len(slave0.aw_events) >= 1:
            break
    sb.check(len(slave0.aw_events) == 1,
             "slave 0 must have accepted AW#1 (the write is now in flight)")

    # --- the window: present AW#2, addressed to slave 2 --------------------
    awaddr.value = addr_b
    awvalid.value = 1
    window = 0
    for _ in range(6):
        seen = await step()
        window += 1
        sb.check(seen["awready"] == 0,
                 "AWREADY went high between the AW and W dispatches of the "
                 "first write: the write-slot hole is open again")
        sb.check(len(slave2.aw_events) == 0 and len(slave2.served) == 0,
                 "slave 2 was addressed before AW#2 was ever accepted")
    dut._log.info(f"second AW held off for {window} cycles of the window")

    # --- let the first write finish ----------------------------------------
    slave0.hold["w"] = False
    first_b = None
    for _ in range(64):
        seen = await step()
        if seen["bvalid"]:
            first_b = seen
            break
        sb.check(seen["awready"] == 0,
                 "AWREADY went high before the first write's B was taken")
    sb.check(first_b is not None, "the first write never produced a B response")
    sb.check(first_b and first_b["bresp"] == RESP_OKAY,
             "the first write must complete OKAY, got "
             f"{resp_name(first_b['bresp']) if first_b else 'no response'}")
    sb.check(len(slave2.served) == 0,
             "the first write's completion must not have touched slave 2")

    # --- AW#2 is accepted now, and write #2 completes ----------------------
    seen = await step()
    sb.check(seen["awready"] == 1,
             "the crossbar must accept AW#2 once the first write has completed")
    awvalid.value = 0
    wvalid.value = 1
    wdata.value = data_b
    wstrb.value = 0xF
    seen = await step()
    sb.check(seen["wready"] == 1, "the crossbar must accept W#2")
    wvalid.value = 0
    second_b = None
    for _ in range(64):
        seen = await step()
        if seen["bvalid"]:
            second_b = seen
            break
    sb.check(second_b is not None, "the second write never produced a B response")
    sb.check(second_b and second_b["bresp"] == RESP_OKAY,
             "the second write must complete OKAY, got "
             f"{resp_name(second_b['bresp']) if second_b else 'no response'}")

    # --- payload and routing integrity -------------------------------------
    s0_w = slave0.served_writes()
    s2_w = slave2.served_writes()
    sb.check(len(s0_w) == 1 and (s0_w[0].addr, s0_w[0].data, s0_w[0].strb) ==
             (addr_a, data_a, 0xF),
             f"slave 0 must serve exactly the first write "
             f"(addr={addr_a:#x}, data={data_a:#x}), saw {s0_w}")
    sb.check(len(s2_w) == 1 and (s2_w[0].addr, s2_w[0].data, s2_w[0].strb) ==
             (addr_b, data_b, 0xF),
             f"slave 2 must serve exactly the second write "
             f"(addr={addr_b:#x}, data={data_b:#x}), saw {s2_w}")
    sb.check(not slave1.served and not slave1.aw_events,
             f"slave 1 (GPIO) was touched: served={slave1.served} "
             f"aw_events={slave1.aw_events}")
    sb.check(len(slave2.aw_events) == 1 and slave2.aw_events[0][1] == addr_b,
             f"slave 2 saw unexpected AW events: {slave2.aw_events}")

    sb.check_monitors(env.monitors)
    dut._log.info(f"second-AW directed test: {sb.summary()}")

# Mutation testing report

Regression: `scripts/run_tests.py` on DUTs `crossbar`, `peripherals`, `subsystem`, seed 1, Python driver `/Users/prajjwalsingh/Desktop/axilite4/.venv/bin/python`.  Generated 2026-10-18 13:30:01 IST in 1.8 min.

Detection means the regression failed for the mutant; each verdict lists *how* it failed.  SURVIVED is a real gap in the test suite and is reported as such - the in-rtl/formal flows may still catch it, which is noted per mutant where applicable.

**6/10 detected (including hangs), 4/10 survived, 0 build error(s).**

Formal cross-check: `formal/routing.sby` (unbounded k-induction) ran against 10 mutant(s) and refuted 5.  A mutant that survives one side and is caught by the other is a concrete measure of what that side contributes.

| mutant | area | sim verdict | how | routing.sby | time |
|---|---|---|---|---|---|
| `M0-baseline` | control | SURVIVED | - | PASS | 9s |
| `M1-write-slot-hole` | master port / write commit | DETECTED | failing test(s) | PASS | 3s |
| `M2-rsp-mask-off` | master port / response gating | SURVIVED | - | FAIL | 8s |
| `M2b-rsp-mask-off-read` | master port / response gating (read) | SURVIVED | - | FAIL | 9s |
| `M3-wstrb-drop` | master port / W payload capture | DETECTED | failing test(s) | PASS | 9s |
| `M4-decode-drop-last` | address decoder | DETECTED | failing test(s) | FAIL | 4s |
| `M5-bresp-okay` | error target | DETECTED | failing test(s) | FAIL | 3s |
| `M6-rr-ptr-frozen` | arbiter / fairness | SURVIVED | - | PASS | 8s |
| `M7-gnt-hold-off` | arbiter / hold-until-done | DETECTED | failing test(s) | PASS | 3s |
| `M8-awaddr-swap` | slave port / payload mux | DETECTED | failing test(s) | FAIL | 3s |

## M0-baseline - control

No edit at all: end-to-end control proving the mutation harness runs the same regression and reports honestly.  Must pass.

Edit `rtl/axi_lite_master_port.sv`:

```diff
# M0-baseline: no edit (baseline control)
```

Verdict: **SURVIVED**, runner rc=0

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **PASS** (mutant not distinguished by the unbounded routing invariants), rc=0, 9.4s

Reproduce the formal side:

```sh
cd results/mutation/work/M0-baseline && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M0-baseline/repro.sh
```

## M1-write-slot-hole - master port / write commit

wr_start is committed when EITHER half of the write is dispatched (`aw_done | w_done`).  The mutation requires both dispatches in the same cycle, reopening the window in which a second AW can be accepted while the first W is still pending.  This is the bug formal/routing.sby found historically (ap_one_outstanding); the in-RTL protocol assertions (ap_w_hold) and directed test 13 also target it.

Edit `rtl/axi_lite_master_port.sv`:

```diff
--- a/rtl/axi_lite_master_port.sv
+++ b/rtl/axi_lite_master_port.sv
@@ -256,7 +256,7 @@
     // was found by formal/routing.sby (assertion ap_one_outstanding in the
     // harness); the window is closed here and the property is what keeps it
     // closed.
-    assign wr_start = aw_done | w_done;
+    assign wr_start = aw_done & w_done;
 
     // -----------------------------------------------------------------------
     // Write path sequential
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_aw_w_arrival_orders: m0: B handshake did not complete within 512 cycles (deadlock or DUT not responding); test_channel_backpressure: m0: B handshake did not complete within 512 cycles (deadlock or DUT not responding); test_randomized_multi_master: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_fault_injection_detected: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_deadlock_is_detected: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_second_aw_held_off: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **PASS** (mutant not distinguished by the unbounded routing invariants), rc=0, 11.8s

Reproduce the formal side:

```sh
cd results/mutation/work/M1-write-slot-hole && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M1-write-slot-hole/repro.sh
```

## M2-rsp-mask-off - master port / response gating

w_rsp_en drops the 'no half still pending' mask: a target that answers before it has taken both write halves completes the write early, the stale half survives, the next AW is accepted under it and the port glues two transactions together before deadlocking.  Simulation targets are protocol-conformant, so it survives the regression - and the first run of this study showed it ALSO survived formal/routing.sby, because no invariant pinned the mask: the damage needs an out-of-contract target, and every current property is satisfied by the mixed transaction.  The response-contract assertion added to the master port (ap_b_rsp_needs_full_dispatch; a tautology over this RTL, see the diff context) closes the gap, and the formal cross-check below records routing.sby refuting the mutant.

Edit `rtl/axi_lite_master_port.sv`:

```diff
--- a/rtl/axi_lite_master_port.sv
+++ b/rtl/axi_lite_master_port.sv
@@ -236,7 +236,7 @@
     // trace (an early RVALID cleared rd_active_q, a second AR was accepted, and
     // the shared ar_pend_q then dropped it); the mask makes the port immune to
     // it, so the routing proof needs no assumption about target response timing.
-    assign w_rsp_en = wr_wait_q & ~aw_pend_q & ~w_pend_q;
+    assign w_rsp_en = wr_wait_q;
     assign r_rsp_en = rd_active_q & ~ar_pend_q;
 
     assign b_hs = w_rsp_en & w_bvalid_i & bready_i;
```

Verdict: **SURVIVED**, runner rc=0

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **FAIL** (refuted by routing.sby), rc=2, 1.3s

Formal evidence: `SBY 13:28:56 [/Users/prajjwalsingh/Desktop/axilite4/results/mutation/work/M2-rsp-mask-off/routing] engine_0.basecase: ## 0:00:00 Assert failed in axil_crossbar_harness: u_dut.g_mst[0].u_mport.ap_b_rsp_needs_full_dispatch`

Reproduce the formal side:

```sh
cd results/mutation/work/M2-rsp-mask-off && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M2-rsp-mask-off/repro.sh
```

## M2b-rsp-mask-off-read - master port / response gating (read)

Read-side twin of M2: r_rsp_en drops ~ar_pend_q.  An early RVALID can then consume the read slot while the AR is still pending - the class of trace formal/routing.sby originally found (the second AR was accepted and then dropped by the shared pending flag).  The mask is the fix and the contract assertion ap_r_rsp_needs_dispatch keeps it pinned: simulation cannot see it (targets answer after the AR), the formal cross-check can.

Edit `rtl/axi_lite_master_port.sv`:

```diff
--- a/rtl/axi_lite_master_port.sv
+++ b/rtl/axi_lite_master_port.sv
@@ -237,7 +237,7 @@
     // the shared ar_pend_q then dropped it); the mask makes the port immune to
     // it, so the routing proof needs no assumption about target response timing.
     assign w_rsp_en = wr_wait_q & ~aw_pend_q & ~w_pend_q;
-    assign r_rsp_en = rd_active_q & ~ar_pend_q;
+    assign r_rsp_en = rd_active_q;
 
     assign b_hs = w_rsp_en & w_bvalid_i & bready_i;
     assign r_hs = r_rsp_en & r_rvalid_i & rready_i;
```

Verdict: **SURVIVED**, runner rc=0

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **FAIL** (refuted by routing.sby), rc=2, 0.9s

Formal evidence: `SBY 13:29:06 [/Users/prajjwalsingh/Desktop/axilite4/results/mutation/work/M2b-rsp-mask-off-read/routing] engine_0.basecase: ## 0:00:00 Assert failed in axil_crossbar_harness: u_dut.g_mst[1].u_mport.ap_r_rsp_needs_dispatch`

Reproduce the formal side:

```sh
cd results/mutation/work/M2b-rsp-mask-off-read && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M2b-rsp-mask-off-read/repro.sh
```

## M3-wstrb-drop - master port / W payload capture

The captured write strobe is replaced with all-ones, i.e. every byte write becomes a full-word write.  Byte-enable tests and the scoreboard comparators must catch the wrong bytes landing.

Edit `rtl/axi_lite_master_port.sv`:

```diff
--- a/rtl/axi_lite_master_port.sv
+++ b/rtl/axi_lite_master_port.sv
@@ -287,7 +287,7 @@
             if (w_accept) begin
                 w_pend_q <= 1'b1;
                 w_data_q <= wdata_i;
-                w_strb_q <= wstrb_i;
+                w_strb_q <= {DATA_WIDTH/8{1'b1}};
             end else if (w_done) begin
                 w_pend_q <= 1'b0;
             end
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_wstrb_partial_and_zero: READ m0 @0x00008004 data=0xaa000000 resp=OKAY : expected read data 0xffffff00, got 0xaa000000; test_randomized_multi_master: write transactions delivered to the slaves do not match the writes issued: missing={(32, 2768240687, 12): 1, (16420, 2768240688, 7): 1, (32804, 2768240693, 8): 1, (40, 2768240694, 0): 1, (32, 2768240695, 14): 1, (44, 2768240697, 4): 1, (164; test_two_masters_concurrent_access: assert 2863267840 == 2863285316; test_randomized_register_traffic: @0x00000000: read 0x00000018, shadow 0x00000014 assert 24 == 20 + where 20 = get(0) + where get = <axil_subsystem_tests.Shadow object at 0x1093156a0>.get`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **PASS** (mutant not distinguished by the unbounded routing invariants), rc=0, 7.4s

Reproduce the formal side:

```sh
cd results/mutation/work/M3-wstrb-drop && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M3-wstrb-drop/repro.sh
```

## M4-decode-drop-last - address decoder

The region loop stops one slave short, so the last real region (TIMER) decodes to the error target (DECERR) instead of its registers.  Every crossbar/subsystem access to the TIMER window must notice.

Edit `rtl/axi_lite_address_decoder.sv`:

```diff
--- a/rtl/axi_lite_address_decoder.sv
+++ b/rtl/axi_lite_address_decoder.sv
@@ -38,7 +38,7 @@
     always_comb begin
         sel = {(NSLV_REAL + 1) {1'b0}};
 
-        for (int unsigned i = 0; i < NSLV_REAL; i++) begin
+        for (int unsigned i = 0; i < NSLV_REAL - 1; i++) begin
             if (addr[ADDR_WIDTH-1:REGION_LSB] ==
                 BASE_FLAT[i*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                 sel[i] = 1'b1;
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_simultaneous_distinct_slaves: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_simultaneous_same_slave: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_aw_w_arrival_orders: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_channel_backpressure: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_delayed_response_routing: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_wstrb_partial_and_zero: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl ...`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **FAIL** (refuted by routing.sby), rc=2, 0.8s

Formal evidence: `SBY 13:29:26 [/Users/prajjwalsingh/Desktop/axilite4/results/mutation/work/M4-decode-drop-last/routing] engine_0.basecase: ## 0:00:00 Assert failed in axil_crossbar_harness: u_dut.ap_r_err_addr_unmapped`

Reproduce the formal side:

```sh
cd results/mutation/work/M4-decode-drop-last && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M4-decode-drop-last/repro.sh
```

## M5-bresp-okay - error target

The invalid-address write response flips from DECERR to OKAY (read side left intact: a single-channel response-code bug).  Tests that check the response code of unmapped writes must fail.

Edit `rtl/axil_error_slave.sv`:

```diff
--- a/rtl/axil_error_slave.sv
+++ b/rtl/axil_error_slave.sv
@@ -67,7 +67,7 @@
     assign awready = ~rst & ~aw_seen_q & ~b_pend_q;
     assign wready  = ~rst & ~w_seen_q  & ~b_pend_q;
     assign bvalid  = b_pend_q;
-    assign bresp   = `AXIL_RESP_DECERR;
+    assign bresp   = `AXIL_RESP_OKAY;
 
     assign arready = ~rst & ~r_pend_q;
     assign rvalid  = r_pend_q;
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_invalid_address_decerr: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_reset_idle_and_in_flight: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_concurrent_read_write: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_contention_round_robin: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_randomized_multi_master: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_fault_injection_detected: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl ...`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **FAIL** (refuted by routing.sby), rc=2, 2.0s

Formal evidence: `SBY 13:29:31 [/Users/prajjwalsingh/Desktop/axilite4/results/mutation/work/M5-bresp-okay/routing] engine_0.induction: ## 0:00:01 Assert failed in axil_crossbar_harness: u_dut.u_error_slave.ap_bresp_is_decerr`

Reproduce the formal side:

```sh
cd results/mutation/work/M5-bresp-okay && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M5-bresp-okay/repro.sh
```

## M6-rr-ptr-frozen - arbiter / fairness

The round-robin priority pointer no longer advances on grants, so with two contending masters the same one always wins and the other starves.  Contention tests (both masters hammering one slave) must fail instead of completing.

Edit `rtl/axi_lite_arbiter.sv`:

```diff
--- a/rtl/axi_lite_arbiter.sv
+++ b/rtl/axi_lite_arbiter.sv
@@ -65,7 +65,7 @@
         nxt_idx = ptr;
         for (int unsigned i = 0; i < N; i++) begin
             if (rr_gnt[i]) begin
-                nxt_idx = (i == (N - 1)) ? {PTRW{1'b0}} : PTRW'(i + 1);
+                nxt_idx = ptr;
             end
         end
     end
```

Verdict: **SURVIVED**, runner rc=0

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **PASS** (mutant not distinguished by the unbounded routing invariants), rc=0, 8.6s

Reproduce the formal side:

```sh
cd results/mutation/work/M6-rr-ptr-frozen && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M6-rr-ptr-frozen/repro.sh
```

## M7-gnt-hold-off - arbiter / hold-until-done

The arbiter re-selects every cycle instead of holding the grant until the transaction completes, so the target-side owner can change while a slave still owns a transaction: response-routing by owner breaks.  The slave-port/crossbar ownership assertions and the protocol checker must catch it.

Edit `rtl/axi_lite_arbiter.sv`:

```diff
--- a/rtl/axi_lite_arbiter.sv
+++ b/rtl/axi_lite_arbiter.sv
@@ -79,7 +79,7 @@
         if (rst) begin
             gnt_q <= {N{1'b0}};
             ptr   <= {PTRW{1'b0}};
-        end else if (done || (|gnt_q == 1'b0)) begin
+        end else if (1'b1) begin
             gnt_q <= rr_gnt;
             if (|rr_gnt) begin
                 ptr <= nxt_idx;
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_simultaneous_same_slave: m0: B handshake did not complete within 512 cycles (deadlock or DUT not responding); test_aw_w_arrival_orders: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_channel_backpressure: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_delayed_response_routing: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_wstrb_partial_and_zero: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_invalid_address_decerr: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl ...`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **PASS** (mutant not distinguished by the unbounded routing invariants), rc=0, 5.9s

Reproduce the formal side:

```sh
cd results/mutation/work/M7-gnt-hold-off && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M7-gnt-hold-off/repro.sh
```

## M8-awaddr-swap - slave port / payload mux

The address presented to the granted target is taken from the other master's payload mux input - classical misrouting/cross-talk between masters.  The crossbar provenance assertion and the scoreboard's address/data pairing must catch it.

Edit `rtl/axi_lite_slave_port.sv`:

```diff
--- a/rtl/axi_lite_slave_port.sv
+++ b/rtl/axi_lite_slave_port.sv
@@ -170,7 +170,7 @@
 
         for (int unsigned m = 0; m < NMST; m++) begin
             if (w_gnt_w[m]) begin
-                awaddr_o = w_addr_i[m];
+                awaddr_o = w_addr_i[(m + 1) % NMST];
                 awprot_o = w_prot_i[m];
                 wdata_o  = w_data_i[m];
                 wstrb_o  = w_strb_i[m];
```

Verdict: **DETECTED** (failing test(s)), runner rc=1

Evidence: `test_simultaneous_distinct_slaves: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_simultaneous_same_slave: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_aw_w_arrival_orders: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_channel_backpressure: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_delayed_response_routing: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl; test_wstrb_partial_and_zero: cocotb expected it would shut down the simulation, but the simulation ended prematurely. This could be due to an assertion failure or a call to an exit routine in the HDL, or due to the simulator running out of events to process (is your cl ...`

Unbounded routing proof against this mutant (`formal/routing.sby`, k-induction + basecase): **FAIL** (refuted by routing.sby), rc=2, 0.9s

Formal evidence: `SBY 13:30:01 [/Users/prajjwalsingh/Desktop/axilite4/results/mutation/work/M8-awaddr-swap/routing] engine_0.basecase: ## 0:00:00 Assert failed in axil_crossbar_harness: u_dut.ap_payload_from_owner`

Reproduce the formal side:

```sh
cd results/mutation/work/M8-awaddr-swap && sby -f routing.sby
```

Reproduce:

```sh
./results/mutation/work/M8-awaddr-swap/repro.sh
```


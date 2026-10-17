//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // tb/assertions/axil_protocol_checker.sv
        //
        // Independent, testbench-side AXI4-Lite protocol checker.
        //
        // WHAT THIS IS
        //   A passive monitor for ONE AXI4-Lite port.  It observes the five channels and
        //   asserts the handshake rules that hold for whoever drives the port.  The test
        //   harnesses instantiate it on every master-facing and slave-facing port of the
        //   DUT, so the rules are re-checked on every cycle of every simulation run, in
        //   addition to the concurrent SVA inside the RTL and the formal proofs.
        //
        // WHY IT IS WRITTEN INDEPENDENTLY
        //   The RTL's own assertion blocks are part of the design: a wrong assumption
        //   there would hide a wrong implementation.  This checker is written from the
        //   AXI4-Lite handshake rules alone and shares no code, no macros and no
        //   localparams with the RTL.  It is the second opinion, and it is deliberately
        //   the *simple* opinion: five channels, one clock, no configuration knowledge.
        //
        // WHAT IS CHECKED
        //   1. Hold rule, all five channels: once VALID is asserted it stays asserted,
        //      and its payload stays constant, until the transfer happens (or reset
        //      intervenes).
        //   2. Payload stability: AWADDR/AWPROT, WDATA/WSTRB, ARADDR/ARPROT, BRESP and
        //      RDATA/RRESP are checked while their VALID is asserted.
        //   3. No answer without a question: BVALID only for a write whose AW and W have
        //      both been accepted, RVALID only for an accepted AR.
        //   4. At most one outstanding write and one outstanding read: a second AW or W
        //      half, or a second AR, may not be accepted before the previous transaction
        //      has been answered.  This is the documented limit of the design
        //      (docs/protocol_assumptions.md), so a violation is a bug, not a
        //      configuration option.
        //   5. Response codes: EXOKAY is never produced.  The subsystem implements no
        //      exclusive access, so EXOKAY is a bug even though it is a legal AXI4-Lite
        //      encoding.
        //   6. Optional, MASTER_SIDE=1: while reset is asserted, the signals the DUT
        //      owns on a master-facing port (AWREADY/WREADY/ARREADY, BVALID, RVALID) are
        //      low, so no transaction can be accepted and then discarded by a reset.
        //   7. Optional, SLAVE_SIDE=1: the same for the signals the DUT owns on a
        //      slave-facing port (AWVALID/WVALID/ARVALID, BREADY, RREADY).
        //
        // HOW IT IS WRITTEN
        //   Immediate `assert` statements inside `always_ff`, comparing this cycle's
        //   signals against shadow registers from the previous cycle.  That form is
        //   understood identically by Verilator (simulation, with --assert) and by Yosys
        //   (formal), which is why the RTL uses the same style.  A failure is reported
        //   with the assertion's label, the source line and the instantiated path, so
        //   the offending port can be identified from the log alone.
        //
        // ASSUMPTIONS
        //   * BVALID/RVALID are registered (asserted at least one cycle after the
        //     request was accepted).  True for every responder in this project: the
        //     register bridges and the Python slave models all drive them from state,
        //     never combinationally from the request channel.
        //   * A request accepted in the same cycle in which the previous transaction's
        //     response completes is a legal pipeline step, and is tracked as the start
        //     of the next transaction rather than as a second outstanding one.
        //
        // WHAT IS NOT CHECKED
        //   * Liveness: a slave that never answers is protocol-legal.  Deadlocks are
        //     caught by BFM timeouts, the regression's timeouts and the bounded
        //     liveness properties in the formal flow, not here.
        //   * AW/W arrival order (both orders are legal), routing, address decoding and
        //     data integrity: those belong to the scoreboard and to the formal flow.
        //   * AXI4 burst and exclusive-access rules: AXI4-Lite has no bursts, and
        //     exclusives are not implemented.
        // -----------------------------------------------------------------------------
        
        module axil_protocol_checker #(
            parameter int unsigned ADDR_WIDTH  = 32,
            parameter int unsigned DATA_WIDTH  = 32,
            //: 1 when the DUT is the SLAVE on this port, i.e. it drives the READYs of
            //: AW/W/AR and the VALIDs of B/R; enables the reset-idle check on exactly
            //: those signals.
            parameter bit          DUT_IS_SLAVE  = 1'b0,
            //: 1 when the DUT is the MASTER on this port, i.e. it drives the VALIDs of
            //: AW/W/AR and the READYs of B/R; enables the reset-idle check on exactly
            //: those signals.
            parameter bit          DUT_IS_MASTER = 1'b0
        ) (
 004275     input logic clk,
 000045     input logic rst,
        
            // Write address channel
~000042     input logic [ADDR_WIDTH-1:0]   awaddr,
%000000     input logic [2:0]              awprot,
 000127     input logic                    awvalid,
 000356     input logic                    awready,
            // Write data channel
~000063     input logic [DATA_WIDTH-1:0]   wdata,
 000055     input logic [DATA_WIDTH/8-1:0] wstrb,
 000127     input logic                    wvalid,
 000301     input logic                    wready,
            // Write response channel
~000057     input logic [1:0]              bresp,
 000127     input logic                    bvalid,
 000126     input logic                    bready,
            // Read address channel
~000042     input logic [ADDR_WIDTH-1:0]   araddr,
%000000     input logic [2:0]              arprot,
 000160     input logic                    arvalid,
 000276     input logic                    arready,
            // Read data channel
~000038     input logic [DATA_WIDTH-1:0]   rdata,
~000041     input logic [1:0]              rresp,
 000160     input logic                    rvalid,
 000160     input logic                    rready
        );
        
            localparam logic [1:0] RESP_EXOKAY = 2'b01;
        
            localparam int unsigned PAY_AW = ADDR_WIDTH + 3;              // {awaddr,awprot}
            localparam int unsigned PAY_W  = DATA_WIDTH + DATA_WIDTH / 8;  // {wdata,wstrb}
            localparam int unsigned PAY_AR = ADDR_WIDTH + 3;              // {araddr,arprot}
            localparam int unsigned PAY_R  = DATA_WIDTH + 2;              // {rdata,rresp}
        
 000160     logic aw_hs, w_hs, ar_hs, b_hs, r_hs;
            assign aw_hs = awvalid & awready;
            assign w_hs  = wvalid  & wready;
            assign ar_hs = arvalid & arready;
            assign b_hs  = bvalid  & bready;
            assign r_hs  = rvalid  & rready;
        
            // ---------------------------------------------------------------------
            // (1) + (2)  AW: hold rule and payload stability
            // ---------------------------------------------------------------------
~000020     logic              aw_pend_q;
%000007     logic [PAY_AW-1:0] aw_pay_q;
        
 004275     always_ff @(posedge clk) begin
 000195         if (rst) begin
 000195             aw_pend_q <= 1'b0;
 000195             aw_pay_q  <= {PAY_AW{1'b0}};
~004107         end else if (awvalid && !awready) begin
~000057             aw_pend_q <= 1'b1;
~000057             aw_pay_q  <= {awaddr, awprot};
 004107         end else begin
 004107             aw_pend_q <= 1'b0;
                end
        
~004275         if (!rst && aw_pend_q) begin
~000056             ap_aw_hold:   assert (awvalid);
~000056             ap_aw_stable: assert ({awaddr, awprot} == aw_pay_q);
                end
            end
        
            // ---------------------------------------------------------------------
            // (1) + (2)  W: hold rule and payload stability
            // ---------------------------------------------------------------------
~000016     logic             w_pend_q;
%000009     logic [PAY_W-1:0] w_pay_q;
        
 004275     always_ff @(posedge clk) begin
 000195         if (rst) begin
 000195             w_pend_q <= 1'b0;
 000195             w_pay_q  <= {PAY_W{1'b0}};
~004107         end else if (wvalid && !wready) begin
~000056             w_pend_q <= 1'b1;
~000056             w_pay_q  <= {wdata, wstrb};
 004107         end else begin
 004107             w_pend_q <= 1'b0;
                end
        
~004275         if (!rst && w_pend_q) begin
~000055             ap_w_hold:   assert (wvalid);
~000055             ap_w_stable: assert ({wdata, wstrb} == w_pay_q);
                end
            end
        
            // ---------------------------------------------------------------------
            // (1) + (2)  B: hold rule and response stability
            // ---------------------------------------------------------------------
%000000     logic       b_pend_q;
%000000     logic [1:0] b_resp_q;
        
 004275     always_ff @(posedge clk) begin
 000195         if (rst) begin
 000195             b_pend_q <= 1'b0;
 000195             b_resp_q <= 2'b00;
~004107         end else if (bvalid && !bready) begin
%000000             b_pend_q <= 1'b1;
%000000             b_resp_q <= bresp;
 004107         end else begin
 004107             b_pend_q <= 1'b0;
                end
        
~004275         if (!rst && b_pend_q) begin
%000000             ap_b_hold:   assert (bvalid);
%000000             ap_b_stable: assert (bresp == b_resp_q);
                end
            end
        
            // ---------------------------------------------------------------------
            // (1) + (2)  AR: hold rule and payload stability
            // ---------------------------------------------------------------------
~000010     logic              ar_pend_q;
%000005     logic [PAY_AR-1:0] ar_pay_q;
        
 004275     always_ff @(posedge clk) begin
 000195         if (rst) begin
 000195             ar_pend_q <= 1'b0;
 000195             ar_pay_q  <= {PAY_AR{1'b0}};
~004107         end else if (arvalid && !arready) begin
~000014             ar_pend_q <= 1'b1;
~000014             ar_pay_q  <= {araddr, arprot};
 004107         end else begin
 004107             ar_pend_q <= 1'b0;
                end
        
~004275         if (!rst && ar_pend_q) begin
~000014             ap_ar_hold:   assert (arvalid);
~000014             ap_ar_stable: assert ({araddr, arprot} == ar_pay_q);
                end
            end
        
            // ---------------------------------------------------------------------
            // (1) + (2)  R: hold rule and payload stability
            // ---------------------------------------------------------------------
%000000     logic             r_pend_q;
%000000     logic [PAY_R-1:0] r_pay_q;
        
 004275     always_ff @(posedge clk) begin
 000195         if (rst) begin
 000195             r_pend_q <= 1'b0;
 000195             r_pay_q  <= {PAY_R{1'b0}};
~004107         end else if (rvalid && !rready) begin
%000000             r_pend_q <= 1'b1;
%000000             r_pay_q  <= {rdata, rresp};
 004107         end else begin
 004107             r_pend_q <= 1'b0;
                end
        
~004275         if (!rst && r_pend_q) begin
%000000             ap_r_hold:   assert (rvalid);
%000000             ap_r_stable: assert ({rdata, rresp} == r_pay_q);
                end
            end
        
            // ---------------------------------------------------------------------
            // (3) + (4)  Outstanding-transaction tracking
            //
            // A write transaction is outstanding from the cycle its AW (and its W) is
            // accepted until its B completes; the two halves may be accepted on
            // different cycles and in either order.  A read is outstanding from AR to R.
            // ---------------------------------------------------------------------
 000160     logic wr_aw_acc_q, wr_w_acc_q, rd_acc_q;
 000127     logic wr_full;
            assign wr_full = wr_aw_acc_q & wr_w_acc_q;
        
 004275     always_ff @(posedge clk) begin
 004107         if (rst) begin
 000195             wr_aw_acc_q <= 1'b0;
 000195             wr_w_acc_q  <= 1'b0;
 000195             rd_acc_q    <= 1'b0;
 004107         end else begin
                    // A completing response frees the slot; a request accepted in the
                    // same cycle opens the next one.
 003981             if (b_hs) begin
 000127                 wr_aw_acc_q <= aw_hs;
 000127                 wr_w_acc_q  <= w_hs;
 003981             end else begin
 003855                 if (aw_hs) wr_aw_acc_q <= 1'b1;
 003855                 if (w_hs)  wr_w_acc_q  <= 1'b1;
                    end
        
 000160             if (r_hs) begin
 000160                 rd_acc_q <= ar_hs;
 003787             end else if (ar_hs) begin
 000160                 rd_acc_q <= 1'b1;
                    end
                end
        
 004107         if (!rst) begin
 004107             ap_b_needs_write: assert (!bvalid || wr_full);
 004107             ap_r_needs_read:  assert (!rvalid || rd_acc_q);
        
 004107             ap_aw_one_outstanding: assert (!(aw_hs && wr_aw_acc_q && !b_hs));
 004107             ap_w_one_outstanding:  assert (!(w_hs  && wr_w_acc_q  && !b_hs));
 004107             ap_ar_one_outstanding: assert (!(ar_hs && rd_acc_q && !r_hs));
                end
            end
        
            // ---------------------------------------------------------------------
            // (5)  Response codes: OKAY / SLVERR / DECERR, never EXOKAY
            // ---------------------------------------------------------------------
 004275     always_ff @(posedge clk) begin
 004107         if (!rst) begin
 004107             ap_b_resp_code: assert (bresp != RESP_EXOKAY);
 004107             ap_r_resp_code: assert (rresp != RESP_EXOKAY);
                end
            end
        
            // ---------------------------------------------------------------------
            // (6) + (7)  Reset: the DUT's own side of the port is quiet
            // ---------------------------------------------------------------------
 004275     always_ff @(posedge clk) begin
 004107         if (rst) begin
~000195             if (DUT_IS_SLAVE) begin
~000168                 ap_rst_slave_awready: assert (!awready);
~000168                 ap_rst_slave_wready:  assert (!wready);
~000168                 ap_rst_slave_arready: assert (!arready);
~000168                 ap_rst_slave_bvalid:  assert (!bvalid);
~000168                 ap_rst_slave_rvalid:  assert (!rvalid);
                    end
~000195             if (DUT_IS_MASTER) begin
~000195                 ap_rst_master_awvalid: assert (!awvalid);
~000195                 ap_rst_master_wvalid:  assert (!wvalid);
~000195                 ap_rst_master_arvalid: assert (!arvalid);
~000195                 ap_rst_master_bready:  assert (!bready);
~000195                 ap_rst_master_rready:  assert (!rready);
                    end
                end
            end
        
        endmodule
        

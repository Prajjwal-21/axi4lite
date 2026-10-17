// -----------------------------------------------------------------------------
// axi_lite_master_port.sv
//
// Slave-facing port of one AXI4-Lite master into the crossbar.
//
// RESPONSIBILITY
//   * Absorb independent AW and W arrival into two 1-deep buffers.
//   * Capture AR and dispatch it immediately.
//   * Enforce AT MOST ONE outstanding read and AT MOST ONE outstanding write
//     per master (structurally, by gating the READY outputs).
//   * Decode the target slave for each captured address and present a one-hot
//     target select to the crossbar.
//   * Present AW and W to the slave using SEPARATE valid flags, so a slave that
//     asserts AWREADY and WREADY on different cycles is handled correctly.
//   * Multiplex the owner-routed B/R responses back to the master.
//
// WRITE STATE
//   aw_pend_q / w_pend_q hold the accepted-but-not-yet-dispatched halves.
//   A transaction is requested from the crossbar only when BOTH are present.
//   wr_wait_q is set as soon as the FIRST half has been handshaken away to the
//   target (see the FSM below) and blocks further acceptance until B
//   completes. That is exactly one outstanding write, no queueing, no
//   B reordering: the write slot is occupied from the first accepted half to B.
//
// READ STATE
//   rd_active_q spans AR-accept .. R-accept and gates arready_o, which is
//   exactly one outstanding read.
//
// Author: RTL portfolio project. Synthesizable SystemVerilog, single clock.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axi_lite_master_port #(
    parameter int unsigned ADDR_WIDTH = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH = `AXIL_DATA_WIDTH,
    parameter int unsigned NSLV_REAL  = `AXIL_NSLV,
    parameter int unsigned REGION_LSB = `AXIL_REGION_LSB,
    // Default: the address map of rtl/axil_defs.svh (see `AXIL_BASE_FLAT_3).
    parameter logic [NSLV_REAL*ADDR_WIDTH-1:0] BASE_FLAT = `AXIL_BASE_FLAT_3
) (
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // Master-facing AXI4-Lite slave port (an external master drives this)
    // ---------------------------------------------------------------------
    input  logic [ADDR_WIDTH-1:0] awaddr_i,
    input  logic [2:0]            awprot_i,
    input  logic                  awvalid_i,
    output logic                  awready_o,

    input  logic [DATA_WIDTH-1:0]   wdata_i,
    input  logic [DATA_WIDTH/8-1:0] wstrb_i,
    input  logic                    wvalid_i,
    output logic                    wready_o,

    output logic [1:0] bresp_o,
    output logic       bvalid_o,
    input  logic       bready_i,

    input  logic [ADDR_WIDTH-1:0] araddr_i,
    input  logic [2:0]            arprot_i,
    input  logic                  arvalid_i,
    output logic                  arready_o,

    output logic [DATA_WIDTH-1:0] rdata_o,
    output logic [1:0]            rresp_o,
    output logic                  rvalid_o,
    input  logic                  rready_i,

    // ---------------------------------------------------------------------
    // Write dispatch request to the crossbar
    //   w_req_o      : one-hot target (bit NSLV_REAL == internal error target),
    //                  asserted only when both AW and W have been captured
    //   w_awvalid_o  : AW half still awaiting a handshake with the target
    //   w_wvalid_o   : W  half still awaiting a handshake with the target
    // ---------------------------------------------------------------------
    output logic [NSLV_REAL:0]     w_req_o,
    output logic                   w_awvalid_o,
    output logic                   w_wvalid_o,
    output logic [ADDR_WIDTH-1:0]  w_addr_o,
    output logic [2:0]             w_prot_o,
    output logic [DATA_WIDTH-1:0]  w_data_o,
    output logic [DATA_WIDTH/8-1:0] w_strb_o,

    // ---------------------------------------------------------------------
    // Read dispatch request to the crossbar
    // ---------------------------------------------------------------------
    output logic [NSLV_REAL:0]     r_req_o,
    output logic [ADDR_WIDTH-1:0]  r_addr_o,
    output logic [2:0]             r_prot_o,

    // ---------------------------------------------------------------------
    // Grant + owner-routed target responses (owner masking is done in the
    // slave port; a non-owner master sees zeros here)
    // ---------------------------------------------------------------------
    input  logic                   w_gnt_i,
    input  logic                   w_awready_i,
    input  logic                   w_wready_i,
    input  logic                   w_bvalid_i,
    input  logic [1:0]             w_bresp_i,

    input  logic                   r_gnt_i,
    input  logic                   r_arready_i,
    input  logic                   r_rvalid_i,
    input  logic [DATA_WIDTH-1:0]  r_rdata_i,
    input  logic [1:0]             r_rresp_i
);

    localparam int unsigned NTGT = NSLV_REAL + 1;

    // -----------------------------------------------------------------------
    // Write address buffer
    // -----------------------------------------------------------------------
    logic                  aw_pend_q;
    logic [ADDR_WIDTH-1:0] aw_addr_q;
    logic [2:0]            aw_prot_q;
    logic [NSLV_REAL:0]    aw_sel_q;

    // -----------------------------------------------------------------------
    // Write data buffer
    // -----------------------------------------------------------------------
    logic                    w_pend_q;
    logic [DATA_WIDTH-1:0]   w_data_q;
    logic [DATA_WIDTH/8-1:0] w_strb_q;

    // -----------------------------------------------------------------------
    // Write transaction tracking ("dispatched, waiting for B")
    // -----------------------------------------------------------------------
    logic wr_wait_q;

    // -----------------------------------------------------------------------
    // Read transaction tracking
    // -----------------------------------------------------------------------
    logic                  rd_active_q;   // AR accepted .. R accepted
    logic                  ar_pend_q;     // AR not yet handshaken to the target
    logic [ADDR_WIDTH-1:0] ar_addr_q;
    logic [2:0]            ar_prot_q;
    logic [NSLV_REAL:0]    ar_sel_q;

    // -----------------------------------------------------------------------
    // Address decode (combinational on the incoming address; the result is
    // REGISTERED with the address, so each master carries its own target and
    // there is no shared decode state between masters)
    // -----------------------------------------------------------------------
    logic [NSLV_REAL:0] aw_sel_c, ar_sel_c;
    logic               aw_hit_c, ar_hit_c;

    axi_lite_address_decoder #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .NSLV_REAL  (NSLV_REAL),
        .REGION_LSB (REGION_LSB),
        .BASE_FLAT  (BASE_FLAT)
    ) u_aw_decode (
        .addr (awaddr_i),
        .sel  (aw_sel_c),
        .hit  (aw_hit_c)
    );

    axi_lite_address_decoder #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .NSLV_REAL  (NSLV_REAL),
        .REGION_LSB (REGION_LSB),
        .BASE_FLAT  (BASE_FLAT)
    ) u_ar_decode (
        .addr (araddr_i),
        .sel  (ar_sel_c),
        .hit  (ar_hit_c)
    );

    // -----------------------------------------------------------------------
    // Handshake conditions
    // -----------------------------------------------------------------------
    logic aw_accept, w_accept, ar_accept;
    logic aw_done, w_done, ar_done;
    logic b_hs, r_hs;
    logic wr_start;
    logic wr_anchored;
    logic w_rsp_en, r_rsp_en;

    // READY gating.
    //   * A write is outstanding  -> both READYs low (exactly one outstanding
    //     write per master, structurally).
    //   * A read is outstanding   -> ARREADY low.
    //   * Reset asserted          -> all READYs low.  The AXI spec permits READY
    //     to be high during reset, but a high READY combined with a master's
    //     VALID would hand the master a transaction that the reset then
    //     discards.  Keeping READY low means no transaction can ever be
    //     accepted (and lost) while reset is asserted.  Asserted in-RTL as
    //     ap_rst_blocks_ready and proved in formal/reset.sby.
    //   * Target grant held       -> all READYs low.  A grant exists only for
    //     the live transaction of this master (the arbiters take one from
    //     `w_req_o`/`r_req_o` and hold it until the response), so in reachable
    //     operation this is already implied and the term is redundant; it is
    //     stated anyway because it is what makes the captured address/select
    //     pair immutable while a target holds the grant - the property the
    //     crossbar's "a target only ever sees the address of the master it was
    //     granted for" invariant needs to be inductive rather than merely
    //     reachable.  Asserted as ap_w_gnt_blocks_ready/ap_r_gnt_blocks_ready.
    assign awready_o = ~rst & ~aw_pend_q & ~wr_wait_q & ~w_gnt_i;
    assign wready_o  = ~rst & ~w_pend_q  & ~wr_wait_q & ~w_gnt_i;
    assign arready_o = ~rst & ~rd_active_q & ~r_gnt_i;

    assign aw_accept = awvalid_i & awready_o;
    assign w_accept  = wvalid_i  & wready_o;
    assign ar_accept = arvalid_i & arready_o;

    // Handshakes with the target (both sides qualified by our own grant).
    //
    // wr_anchored is "the AW of this write has been accepted": from that edge
    // until the B completes, at least one of aw_pend_q / wr_wait_q stays set.
    // The W half may legally arrive before the AW (in which case the crossbar
    // does not request the transaction yet, so no grant can exist), and for
    // every protocol-conformant sequence the gate below is therefore a no-op:
    // a grant only exists once both halves were accepted.  It is stated anyway
    // because it turns "the captured select/address pair is consistent" into an
    // inductive invariant (ap_w_sel_decodes_addr) instead of a fact that only
    // holds in reachable states - the induction step would otherwise be free to
    // start from a state with a stale grant and a dangling half.
    assign wr_anchored = aw_pend_q | wr_wait_q;

    assign aw_done = w_gnt_i & aw_pend_q & w_awready_i;
    assign w_done  = w_gnt_i & w_pend_q  & wr_anchored & w_wready_i;
    assign ar_done = r_gnt_i & ar_pend_q & r_arready_i;

    // A response is only accepted for a request that has really been handed to
    // the target:
    //   * write: the target owns the write (wr_wait_q) AND has taken BOTH halves
    //     (no half still pending).  B can only be produced by a target that has
    //     received AW and W, so this is a no-op for a compliant target.
    //   * read : the AR has been dispatched (ar_pend_q cleared by ar_done).
    // Without this masking a target that violated the protocol by asserting
    // BVALID/RVALID *before* the request handshake could complete a transaction
    // the crossbar never dispatched.  formal/routing.sby found exactly that
    // trace (an early RVALID cleared rd_active_q, a second AR was accepted, and
    // the shared ar_pend_q then dropped it); the mask makes the port immune to
    // it, so the routing proof needs no assumption about target response timing.
    assign w_rsp_en = wr_wait_q & ~aw_pend_q & ~w_pend_q;
    assign r_rsp_en = rd_active_q & ~ar_pend_q;

    assign b_hs = w_rsp_en & w_bvalid_i & bready_i;
    assign r_hs = r_rsp_en & r_rvalid_i & rready_i;

    // wr_wait_q means "the target owns this write, wait for B".  It is set by
    // the FIRST half being handshaken away, not by the second one: once the
    // target has taken the AW (or the W) the transaction is committed and the
    // master's slot must stay occupied until B.
    //
    // This is what makes "one outstanding write per master" structural.  If the
    // flag were only raised after BOTH halves were dispatched, there would be a
    // window between the two dispatches in which aw_pend_q/Wr_wait_q are both
    // low, a second AW would be accepted, and aw_addr_q/aw_sel_q would be
    // overwritten while w_pend_q still holds the first write's data - i.e. the
    // first write's W could be dispatched to the second AW's target.  That hole
    // was found by formal/routing.sby (assertion ap_one_outstanding in the
    // harness); the window is closed here and the property is what keeps it
    // closed.
    assign wr_start = aw_done | w_done;

    // -----------------------------------------------------------------------
    // Write path sequential
    // -----------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            aw_pend_q <= 1'b0;
            aw_addr_q <= '0;
            aw_prot_q <= '0;
            aw_sel_q  <= '0;
            w_pend_q  <= 1'b0;
            w_data_q  <= '0;
            w_strb_q  <= '0;
            wr_wait_q <= 1'b0;
        end else begin
            // AW capture / release. aw_accept and aw_done are mutually exclusive
            // because awready_o is low whenever aw_pend_q is high.
            if (aw_accept) begin
                aw_pend_q <= 1'b1;
                aw_addr_q <= awaddr_i;
                aw_prot_q <= awprot_i;
                aw_sel_q  <= aw_sel_c;
            end else if (aw_done) begin
                aw_pend_q <= 1'b0;
            end

            // W capture / release
            if (w_accept) begin
                w_pend_q <= 1'b1;
                w_data_q <= wdata_i;
                w_strb_q <= wstrb_i;
            end else if (w_done) begin
                w_pend_q <= 1'b0;
            end

            // b_hs and wr_start are mutually exclusive by construction: wr_start
            // requires a still-pending half (aw_done needs aw_pend_q, w_done
            // needs w_pend_q) while b_hs requires that NEITHER half is pending.
            // The else-if is therefore a plain priority chain with no overlap.
            if (b_hs) begin
                wr_wait_q <= 1'b0;
            end else if (wr_start) begin
                wr_wait_q <= 1'b1;
            end
        end
    end

    // -----------------------------------------------------------------------
    // Read path sequential
    // -----------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            rd_active_q <= 1'b0;
            ar_pend_q   <= 1'b0;
            ar_addr_q   <= '0;
            ar_prot_q   <= '0;
            ar_sel_q    <= '0;
        end else begin
            // ar_accept and ar_done are mutually exclusive: ar_done requires
            // ar_pend_q high, ar_accept requires arready_o high which requires
            // rd_active_q low, and rd_active_q/ar_pend_q are set together.
            if (ar_accept) begin
                rd_active_q <= 1'b1;
                ar_pend_q   <= 1'b1;
                ar_addr_q   <= araddr_i;
                ar_prot_q   <= arprot_i;
                ar_sel_q    <= ar_sel_c;
            end

            if (ar_done) begin
                ar_pend_q <= 1'b0;
            end

            if (r_hs) begin
                rd_active_q <= 1'b0;
            end
        end
    end

    // -----------------------------------------------------------------------
    // Crossbar-facing request and payload outputs
    // -----------------------------------------------------------------------
    assign w_req_o     = (aw_pend_q & w_pend_q) ? aw_sel_q : {NTGT{1'b0}};
    assign w_awvalid_o = aw_pend_q;
    assign w_wvalid_o  = w_pend_q;
    assign w_addr_o    = aw_addr_q;
    assign w_prot_o    = aw_prot_q;
    assign w_data_o    = w_data_q;
    assign w_strb_o    = w_strb_q;

    assign r_req_o  = ar_pend_q ? ar_sel_q : {NTGT{1'b0}};
    assign r_addr_o = ar_addr_q;
    assign r_prot_o = ar_prot_q;

    // -----------------------------------------------------------------------
    // Responses back to the master (target responses already owner-masked).
    //
    // Reset-inert by construction: VALID is gated with ~rst as well as with the
    // transaction state, so no handshake can complete while reset is asserted.
    // The whole subsystem shares one reset, so a master that is being reset is
    // not waiting for a response either; what this buys is that a transaction
    // can never be *completed* at the boundary by a reset (the check
    // ap_rst_blocks_valid below is what fails if this gating is ever lost).
    //
    // The same enable that gates the handshake (w_rsp_en / r_rsp_en) also gates
    // VALID: the port never presents a response to the master for a request the
    // target has not taken yet.
    // -----------------------------------------------------------------------
    assign bvalid_o = ~rst & w_rsp_en & w_bvalid_i;
    assign bresp_o  = w_rsp_en ? w_bresp_i : `AXIL_RESP_OKAY;

    assign rvalid_o = ~rst & r_rsp_en & r_rvalid_i;
    assign rdata_o  = r_rsp_en ? r_rdata_i : {DATA_WIDTH{1'b0}};
    assign rresp_o  = r_rsp_en ? r_rresp_i : `AXIL_RESP_OKAY;

    // -----------------------------------------------------------------------
    // Local invariant assertions (enabled with AXIL_ASSERTIONS; not logic).
    //
    // STYLE: every property is a same-cycle implication written as
    // `assert property (!guard || condition)`.  Yosys (the formal front end)
    // reads only boolean property expressions - it rejects `|->` and clocking
    // events - so this form is what lets ONE set of properties be both
    // simulated (Verilator's --assert) and formally proven (formal/*.sby).
    // -----------------------------------------------------------------------
`ifdef AXIL_ASSERTIONS
    // -----------------------------------------------------------------------
    // Cross-invariant: the REGISTERED request select agrees with the decode of
    // the REGISTERED address while the transaction is live.
    //
    // Both registers are captured at the same edge (the decoder output and the
    // address input), so this holds in every state a real reset can lead to.
    // It is asserted rather than assumed for two reasons:
    //   * it is a real property of the design, so it belongs in the assertion
    //     set that simulation checks too,
    //   * as an asserted invariant it becomes part of the induction hypothesis,
    //     which is what lets the crossbar-level properties "a real slave only
    //     sees addresses of its own region" and "the error target only sees
    //     unmapped addresses" be proven by 1-induction: without this link the
    //     induction step may start from an unreachable state in which the
    //     registered select and the registered address disagree.
    // -----------------------------------------------------------------------
    logic [NSLV_REAL:0] aw_sel_q_dec, ar_sel_q_dec;
    logic               aw_sel_q_hit, ar_sel_q_hit;

    axi_lite_address_decoder #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .NSLV_REAL  (NSLV_REAL),
        .REGION_LSB (REGION_LSB),
        .BASE_FLAT  (BASE_FLAT)
    ) u_aw_decode_q (
        .addr (aw_addr_q),
        .sel  (aw_sel_q_dec),
        .hit  (aw_sel_q_hit)
    );

    axi_lite_address_decoder #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .NSLV_REAL  (NSLV_REAL),
        .REGION_LSB (REGION_LSB),
        .BASE_FLAT  (BASE_FLAT)
    ) u_ar_decode_q (
        .addr (ar_addr_q),
        .sel  (ar_sel_q_dec),
        .hit  (ar_sel_q_hit)
    );

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_w_sel_decodes_addr: assert property (
                !wr_anchored || (aw_sel_q == aw_sel_q_dec));
            ap_r_sel_decodes_addr: assert property (
                !rd_active_q || (ar_sel_q == ar_sel_q_dec));
            // A pending AR implies the read slot is occupied: the two flags are
            // set together and rd_active_q can only clear (r_hs) once the AR has
            // been dispatched, i.e. once ar_pend_q is already low.  This is the
            // link that carries the invariant above to the crossbar's "the error
            // target only sees unmapped addresses" property.
            ap_ar_pend_implies_active: assert property (!ar_pend_q || rd_active_q);
        end
    end

    // The registered-address decoders exist only for the two properties above;
    // sink their `hit` outputs so no tool reports them as unused.
    logic unused_dec_q_ok;
    assign unused_dec_q_ok = &{1'b0, aw_sel_q_hit, ar_sel_q_hit};

    always_ff @(posedge clk) begin
        // No READY and no response VALID while reset is asserted: no transaction
        // may be accepted, and none may be completed, and then discarded by the
        // reset.  (Combined with the same gating on the slave-facing port side,
        // this means no AXI handshake can complete anywhere while rst is high.)
        ap_rst_blocks_ready: assert property (
            !rst || (~awready_o & ~wready_o & ~arready_o));
        ap_rst_blocks_valid: assert property (
            !rst || (~bvalid_o & ~rvalid_o));
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_w_req_onehot:   assert property ($onehot0(w_req_o));
            ap_r_req_onehot:   assert property ($onehot0(r_req_o));
            ap_w_req_needs_both: assert property (!(|w_req_o) || (aw_pend_q & w_pend_q));
            ap_wait_blocks_aw: assert property (!wr_wait_q || !awready_o);
            ap_wait_blocks_w:  assert property (!wr_wait_q || !wready_o);
            ap_active_blocks_ar: assert property (!rd_active_q || !arready_o);
            ap_bvalid_gated:   assert property (wr_wait_q || !bvalid_o);
            ap_rvalid_gated:   assert property (rd_active_q || !rvalid_o);
            // The response contract: a B/R is consumed only for a transaction
            // the target has fully been handed - both write halves dispatched,
            // the AR dispatched.  b_hs/r_hs already imply this in *this* RTL
            // (they include w_rsp_en/r_rsp_en, which carry the same masks), so
            // the implications are tautologies that hold in every state and no
            // existing proof changes.  Their purpose is to pin the CONTRACT
            // rather than the implementation: with these lines present, any
            // edit that removes a mask (see scripts/mutation_test.py, mutants
            // M2-rsp-mask-off / M2b-rsp-mask-off-read) is refuted by
            // formal/routing.sby against a fully free, possibly out-of-contract
            // target instead of surviving unnoticed.  Mutation testing exposed
            // exactly that gap: before these assertions the write-side mask
            // removal was not distinguished by any invariant.
            ap_b_rsp_needs_full_dispatch: assert property (
                !b_hs || (~aw_pend_q & ~w_pend_q));
            ap_r_rsp_needs_dispatch: assert property (!r_hs || ~ar_pend_q);
            // While this master holds a grant no new transaction can be
            // accepted: the grant belongs to the live transaction, and freezing
            // the captured address/select pair under a grant is what makes the
            // crossbar-level grant/address invariants inductive.
            ap_w_gnt_blocks_ready: assert property (!w_gnt_i || (~awready_o & ~wready_o));
            ap_r_gnt_blocks_ready: assert property (!r_gnt_i || ~arready_o);
        end
    end
`endif


    // ---------------------------------------------------------------------
    // Deliberately unused: the decoder's `hit` flag. The selected target is
    // already carried one-hot in aw_sel_q / ar_sel_q (bit NSLV_REAL == error
    // target), so the master port does not need the separate flag. It is kept
    // on the decoder because the formal harness and the coverage model use it.
    // ---------------------------------------------------------------------
    logic unused_ok;
    assign unused_ok = &{1'b0, aw_hit_c, ar_hit_c};
endmodule

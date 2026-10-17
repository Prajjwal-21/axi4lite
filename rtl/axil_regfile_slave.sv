// -----------------------------------------------------------------------------
// axil_regfile_slave.sv
//
// Reusable AXI4-Lite -> register-port bridge used by every peripheral block.
// It factors out the parts of an AXI4-Lite slave that are identical for a
// register file, so each peripheral only contains its own behaviour:
//
//   * AW and W are captured INDEPENDENTLY (either may arrive first, or both in
//     the same cycle) using the same 1-deep buffer scheme as the crossbar master
//     port, without needing to buffer address/data payloads twice: each is
//     stored in its own register as soon as its channel is accepted.
//   * At most one outstanding read and one outstanding write.
//   * A write response is produced only after BOTH AW and W have been accepted.
//   * Read and write may be in flight simultaneously (independent channels).
//   * OKAY when the peripheral reports a hit for the addressed offset,
//     SLVERR otherwise (unimplemented offset, or wrong access direction).
//
// READ-BEFORE-WRITE (defined behaviour)
//   reg_rd_en is asserted in the cycle the read address is accepted. The
//   peripheral's read multiplexer must therefore present data combinationally
//   from reg_rd_addr in that same cycle. When a write and a read are accepted in
//   the same cycle the read returns the PRE-write value. This is defined here,
//   implemented identically in the Python reference model, and covered by a
//   directed test (test_read_during_write).
//
// REGISTER PORT TIMING
//   reg_wr_en : asserted (combinational) for exactly one cycle when the write is
//               applied. The peripheral updates its registers on that edge.
//   reg_rd_en : asserted (combinational) for exactly one cycle when the read
//               address is accepted. reg_rd_data/reg_rd_hit must be valid in the
//               same cycle.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axil_regfile_slave #(
    parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
    parameter int unsigned LOCAL_ADDR_W = `AXIL_PERIPH_LOCAL_ADDR_W
) (
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // AXI4-Lite slave port
    // ---------------------------------------------------------------------
    input  logic [ADDR_WIDTH-1:0]   s_awaddr,
    input  logic [2:0]              s_awprot,
    input  logic                    s_awvalid,
    output logic                    s_awready,

    input  logic [DATA_WIDTH-1:0]   s_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_wstrb,
    input  logic                    s_wvalid,
    output logic                    s_wready,

    output logic [1:0]              s_bresp,
    output logic                    s_bvalid,
    input  logic                    s_bready,

    input  logic [ADDR_WIDTH-1:0]   s_araddr,
    input  logic [2:0]              s_arprot,
    input  logic                    s_arvalid,
    output logic                    s_arready,

    output logic [DATA_WIDTH-1:0]   s_rdata,
    output logic [1:0]              s_rresp,
    output logic                    s_rvalid,
    input  logic                    s_rready,

    // ---------------------------------------------------------------------
    // Register port to the peripheral
    // ---------------------------------------------------------------------
    output logic [LOCAL_ADDR_W-1:0] reg_wr_addr,
    output logic [DATA_WIDTH-1:0]   reg_wr_data,
    output logic [DATA_WIDTH/8-1:0] reg_wr_strb,
    output logic                    reg_wr_en,
    input  logic                    reg_wr_hit,

    output logic [LOCAL_ADDR_W-1:0] reg_rd_addr,
    output logic                    reg_rd_en,
    input  logic [DATA_WIDTH-1:0]   reg_rd_data,
    input  logic                    reg_rd_hit
);


    localparam int unsigned LA_WIDTH   = LOCAL_ADDR_W;

    // Write address / data buffers. Only the low LOCAL_ADDR_W address bits are
    // stored: the peripheral region select is already done by the crossbar, so
    // nothing above the local offset is meaningful here.
    logic                    aw_pend_q;
    logic [LA_WIDTH-1:0]     aw_addr_q;
    logic [DATA_WIDTH-1:0]   w_data_q;
    logic [DATA_WIDTH/8-1:0] w_strb_q;
    logic                    w_pend_q;

    logic                    bvalid_q;
    logic [1:0]              bresp_q;

    logic                    rvalid_q;
    logic [DATA_WIDTH-1:0]   rdata_q;
    logic [1:0]              rresp_q;

    logic aw_hs, w_hs, ar_hs, b_hs, r_hs;
    logic wr_apply;

    // ---------------------------------------------------------------------
    // Handshake and acceptance
    // ---------------------------------------------------------------------
    // READY is gated by the buffer state, by any pending write response, and by
    // reset -- see the note in axi_lite_master_port: a HIGH READY during reset
    // could hand a master a transaction that the reset then discards.
    assign s_awready = ~rst & ~aw_pend_q & ~bvalid_q;
    assign s_wready  = ~rst & ~w_pend_q  & ~bvalid_q;
    assign s_arready = ~rst & ~rvalid_q;

    assign aw_hs = s_awvalid & s_awready;
    assign w_hs  = s_wvalid  & s_wready;
    assign ar_hs = s_arvalid & s_arready;
    assign b_hs  = s_bvalid  & s_bready;
    assign r_hs  = s_rvalid  & s_rready;

    // The write is applied in the cycle both halves are present and no response
    // is outstanding yet. reg_wr_addr/data/strb below are driven from the
    // captured registers, so they are stable in that cycle.
    assign wr_apply = aw_pend_q & w_pend_q & ~bvalid_q;

    assign reg_wr_addr = aw_addr_q;
    assign reg_wr_data = w_data_q;
    assign reg_wr_strb = w_strb_q;
    assign reg_wr_en   = wr_apply;

    assign reg_rd_addr = s_araddr[LOCAL_ADDR_W-1:0];
    assign reg_rd_en   = ar_hs;

    // ---------------------------------------------------------------------
    // Outputs
    // ---------------------------------------------------------------------
    assign s_bvalid = bvalid_q;
    assign s_bresp  = bresp_q;
    assign s_rvalid = rvalid_q;
    assign s_rdata  = rdata_q;
    assign s_rresp  = rresp_q;

    // ---------------------------------------------------------------------
    // Write path sequential
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            aw_pend_q <= 1'b0;
            aw_addr_q <= '0;
            w_pend_q  <= 1'b0;
            w_data_q  <= '0;
            w_strb_q  <= '0;
            bvalid_q  <= 1'b0;
            bresp_q   <= `AXIL_RESP_OKAY;
        end else begin
            if (aw_hs) begin
                aw_pend_q <= 1'b1;
                aw_addr_q <= s_awaddr[LA_WIDTH-1:0];
            end else if (wr_apply) begin
                aw_pend_q <= 1'b0;
            end

            if (w_hs) begin
                w_pend_q <= 1'b1;
                w_data_q <= s_wdata;
                w_strb_q <= s_wstrb;
            end else if (wr_apply) begin
                w_pend_q <= 1'b0;
            end

            if (wr_apply) begin
                bvalid_q <= 1'b1;
                bresp_q  <= reg_wr_hit ? `AXIL_RESP_OKAY : `AXIL_RESP_SLVERR;
            end else if (b_hs) begin
                bvalid_q <= 1'b0;
            end
        end
    end

    // ---------------------------------------------------------------------
    // Read path sequential
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            rvalid_q <= 1'b0;
            rdata_q  <= '0;
            rresp_q  <= `AXIL_RESP_OKAY;
        end else begin
            if (ar_hs) begin
                rvalid_q <= 1'b1;
                // Captured in the accept cycle => read-before-write semantics.
                rdata_q  <= reg_rd_data;
                rresp_q  <= reg_rd_hit ? `AXIL_RESP_OKAY : `AXIL_RESP_SLVERR;
            end else if (r_hs) begin
                rvalid_q <= 1'b0;
            end
        end
    end

    // ---------------------------------------------------------------------
    // Local invariant assertions
    // ---------------------------------------------------------------------
`ifdef AXIL_ASSERTIONS
    // STYLE: same-cycle implications are written as `!guard || condition`.
    // Yosys (the formal front end) reads only boolean property expressions, so
    // this form is simulated by Verilator's --assert and proven by Yosys alike.
    always_ff @(posedge clk) begin
        ap_rst_blocks_ready: assert property (
            !rst || (~s_awready & ~s_wready & ~s_arready));
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_aw_blocked:  assert property (!aw_pend_q || ~s_awready);
            ap_w_blocked:   assert property (!w_pend_q  || ~s_wready);
            ap_b_blocked:   assert property (!bvalid_q  || (~s_awready & ~s_wready));
            ap_r_blocked:   assert property (!rvalid_q  || ~s_arready);
            ap_wr_apply_needs_both:
                assert property (!wr_apply || (aw_pend_q & w_pend_q & ~bvalid_q));
            ap_reg_wr_en_implies_both:
                assert property (!reg_wr_en || (aw_pend_q & w_pend_q));
        end
    end
`endif


    // ---------------------------------------------------------------------
    // Deliberately unused interface signals.
    //   * AWPROT/ARPROT are accepted and ignored: no privilege model.
    //   * Address bits above LOCAL_ADDR_W do not address anything inside the
    //     region; the region select was performed by the crossbar.
    // ---------------------------------------------------------------------
    logic unused_ok;
    assign unused_ok = ^s_awprot ^ ^s_arprot
                     ^ ^s_awaddr[ADDR_WIDTH-1:LA_WIDTH]
                     ^ ^s_araddr[ADDR_WIDTH-1:LA_WIDTH];
endmodule

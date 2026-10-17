// -----------------------------------------------------------------------------
// axil_error_slave.sv
//
// Internal "error target": an always-ready AXI4-Lite slave that answers every
// transfer with DECERR. It is instantiated as slave-port index NSLV_REAL, which
// means the invalid-address case flows through exactly the same arbitration,
// handshake, and response-routing logic as a real slave. That is deliberate:
// there is no special-case bypass path that could hide a routing bug, and the
// DECERR path is covered by the same formal properties as the normal path.
//
// Write : AWREADY/WREADY asserted when idle; BRESP = DECERR, BDATA is not a
//         thing (AXI write responses carry no data).
// Read  : ARREADY asserted when idle; RDATA = 0, RRESP = DECERR.
//
// The slave enforces one outstanding write and one outstanding read internally
// as well, so it is safe even if used outside this crossbar.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axil_error_slave #(
    parameter int unsigned ADDR_WIDTH = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH = `AXIL_DATA_WIDTH
) (
    input  logic clk,
    input  logic rst,

    // AXI4-Lite slave
    input  logic [ADDR_WIDTH-1:0]  awaddr,
    input  logic [2:0]             awprot,
    input  logic                   awvalid,
    output logic                   awready,

    input  logic [DATA_WIDTH-1:0]  wdata,
    input  logic [DATA_WIDTH/8-1:0] wstrb,
    input  logic                   wvalid,
    output logic                   wready,

    output logic [1:0]             bresp,
    output logic                   bvalid,
    input  logic                   bready,

    input  logic [ADDR_WIDTH-1:0]  araddr,
    input  logic [2:0]             arprot,
    input  logic                   arvalid,
    output logic                   arready,

    output logic [DATA_WIDTH-1:0]  rdata,
    output logic [1:0]             rresp,
    output logic                   rvalid,
    input  logic                   rready
);

    logic aw_seen_q, w_seen_q, b_pend_q;
    logic r_pend_q;

    logic aw_hs, w_hs, b_hs, ar_hs, r_hs;

    assign aw_hs = awvalid & awready;
    assign w_hs  = wvalid  & wready;
    assign b_hs  = bvalid  & bready;
    assign ar_hs = arvalid & arready;
    assign r_hs  = rvalid  & rready;

    // READY is also gated by reset: no transaction may be accepted while reset
    // is asserted (see the note in axi_lite_master_port).
    assign awready = ~rst & ~aw_seen_q & ~b_pend_q;
    assign wready  = ~rst & ~w_seen_q  & ~b_pend_q;
    assign bvalid  = b_pend_q;
    assign bresp   = `AXIL_RESP_DECERR;

    assign arready = ~rst & ~r_pend_q;
    assign rvalid  = r_pend_q;
    assign rdata   = {DATA_WIDTH{1'b0}};
    assign rresp   = `AXIL_RESP_DECERR;

    always_ff @(posedge clk) begin
        if (rst) begin
            aw_seen_q <= 1'b0;
            w_seen_q  <= 1'b0;
            b_pend_q  <= 1'b0;
        end else begin
            if (aw_hs) aw_seen_q <= 1'b1;
            if (w_hs)  w_seen_q  <= 1'b1;

            // A write response may only be produced once BOTH the address and
            // the data have been accepted: a master that has not had its W
            // accepted is still holding WVALID.
            if (aw_seen_q & w_seen_q) begin
                b_pend_q <= 1'b1;
                aw_seen_q <= 1'b0;
                w_seen_q  <= 1'b0;
            end

            if (b_hs) b_pend_q <= 1'b0;
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            r_pend_q <= 1'b0;
        end else begin
            if (ar_hs)    r_pend_q <= 1'b1;
            if (r_hs)     r_pend_q <= 1'b0;
        end
    end

`ifdef AXIL_ASSERTIONS
    // STYLE: same-cycle implications are written as `!guard || condition`;
    // Yosys (the formal front end) reads only boolean property expressions, so
    // this form is simulated by Verilator and proven by Yosys alike.
    always_ff @(posedge clk) begin
        ap_rst_blocks_ready: assert property (
            !rst || (~awready & ~wready & ~arready));
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_bpending_blocks_aw:
                assert property (!b_pend_q || ~awready);
            ap_bpending_blocks_w:
                assert property (!b_pend_q || ~wready);
            ap_bvalid_only_when_pending:
                assert property (b_pend_q || ~bvalid);
            ap_bresp_is_decerr:
                assert property (!bvalid || (bresp == `AXIL_RESP_DECERR));
            ap_rresp_is_decerr:
                assert property (!rvalid || (rresp == `AXIL_RESP_DECERR));
            ap_rdata_zero:
                assert property (!rvalid || (rdata == {DATA_WIDTH{1'b0}}));
        end
    end
`endif


    // ---------------------------------------------------------------------
    // The error target ignores every payload signal: it answers every transfer
    // with DECERR and no data. The signals are still part of the AXI4-Lite
    // interface (the ports must exist) and are XOR-ed here purely so that the
    // deliberate non-use is explicit rather than an accident.
    // ---------------------------------------------------------------------
    logic unused_ok;
    assign unused_ok = ^awaddr ^ ^awprot ^ ^wdata ^ ^wstrb
                     ^ ^araddr ^ ^arprot;
endmodule

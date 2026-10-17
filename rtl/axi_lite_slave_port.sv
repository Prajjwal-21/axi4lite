// -----------------------------------------------------------------------------
// axi_lite_slave_port.sv
//
// Master-facing port of one AXI4-Lite slave into the crossbar.
//
// RESPONSIBILITY
//   * Run TWO independent round-robin arbiters for this slave: one for the write
//     path, one for the read path. Read and write therefore proceed
//     concurrently on the same slave, which is legal AXI and is what lets a
//     master read while another writes.
//   * Multiplex the granted master's channel payload onto the slave.
//   * Drive AWVALID and WVALID from the granted master's SEPARATE pending flags,
//     so the slave may accept AW and W on different cycles.
//   * Track the owner of each direction and route B/R responses only to that
//     owner. A non-owner master observes no response at all and its BREADY /
//     RREADY never reaches the slave, so it cannot terminate another master's
//     transaction.
//
// GRANT LIFETIME
//   The arbiter holds its grant until `done`:
//     write : B handshake with the slave
//     read  : R handshake with the slave
//   Holding the grant for the whole transaction is what removes the need for a
//   transaction table, response reordering, or ID tracking.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axi_lite_slave_port #(
    parameter int unsigned ADDR_WIDTH = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH = `AXIL_DATA_WIDTH,
    parameter int unsigned NMST       = `AXIL_NMST
) (
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // Requests and payload from the master ports.
    // One payload set is shared by all targets: payload is only sampled from
    // the master that is actually granted, so no cross-talk is possible.
    // ---------------------------------------------------------------------
    input  logic [NMST-1:0]                     w_req_i,      // write request (AW+W both present)
    input  logic [NMST-1:0]                     w_awvalid_i,  // AW half pending
    input  logic [NMST-1:0]                     w_wvalid_i,   // W  half pending
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]     w_addr_i,
    input  logic [NMST-1:0][2:0]                w_prot_i,
    input  logic [NMST-1:0][DATA_WIDTH-1:0]     w_data_i,
    input  logic [NMST-1:0][DATA_WIDTH/8-1:0]   w_strb_i,
    input  logic [NMST-1:0]                     w_bready_i,

    input  logic [NMST-1:0]                     r_req_i,      // AR pending
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]     r_addr_i,
    input  logic [NMST-1:0][2:0]                r_prot_i,
    input  logic [NMST-1:0]                     r_rready_i,

    // ---------------------------------------------------------------------
    // Slave-facing AXI4-Lite master port
    // ---------------------------------------------------------------------
    output logic [ADDR_WIDTH-1:0]   awaddr_o,
    output logic [2:0]              awprot_o,
    output logic                    awvalid_o,
    input  logic                    awready_i,

    output logic [DATA_WIDTH-1:0]   wdata_o,
    output logic [DATA_WIDTH/8-1:0] wstrb_o,
    output logic                    wvalid_o,
    input  logic                    wready_i,

    input  logic [1:0]              bresp_i,
    input  logic                    bvalid_i,
    output logic                    bready_o,

    output logic [ADDR_WIDTH-1:0]   araddr_o,
    output logic [2:0]              arprot_o,
    output logic                    arvalid_o,
    input  logic                    arready_i,

    input  logic [DATA_WIDTH-1:0]   rdata_i,
    input  logic [1:0]              rresp_i,
    input  logic                    rvalid_i,
    output logic                    rready_o,

    // ---------------------------------------------------------------------
    // Grants and owner-routed responses back to the master ports
    // ---------------------------------------------------------------------
    output logic [NMST-1:0]                   w_gnt_o,
    output logic [NMST-1:0]                   w_awready_o,
    output logic [NMST-1:0]                   w_wready_o,
    output logic [NMST-1:0]                   w_bvalid_o,
    output logic [NMST-1:0][1:0]              w_bresp_o,

    output logic [NMST-1:0]                   r_gnt_o,
    output logic [NMST-1:0]                   r_arready_o,
    output logic [NMST-1:0]                   r_rvalid_o,
    output logic [NMST-1:0][DATA_WIDTH-1:0]   r_rdata_o,
    output logic [NMST-1:0][1:0]              r_rresp_o
);

    localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;

    logic [NMST-1:0] w_gnt_w;   // registered write grant (one-hot0)
    logic [NMST-1:0] r_gnt_r;   // registered read  grant (one-hot0)

    logic w_done, r_done;

    // -----------------------------------------------------------------------
    // Response path gating. Only the owner's READY reaches the slave, therefore
    // only the owner can complete the transaction.
    //
    // RESET POLICY: while rst is asserted the crossbar drives every AXI-facing
    // output low, including BREADY/RREADY here (`ap_rst_blocks_ready` below).
    // The whole subsystem shares one reset, so a slave response that is in
    // flight when reset is asserted is dropped by the slave as well; leaving
    // BREADY high for that response would complete a transaction the reset has
    // already abandoned.  See docs/architecture.md ("Reset").
    // -----------------------------------------------------------------------
    assign bready_o = ~rst & |(w_gnt_w & w_bready_i);
    assign rready_o = ~rst & |(r_gnt_r & r_rready_i);

    assign w_done = bvalid_i & bready_o;
    assign r_done = rvalid_i & rready_o;

    // -----------------------------------------------------------------------
    // Independent round-robin arbiters: write path and read path
    // -----------------------------------------------------------------------
    axi_lite_arbiter #(
        .N (NMST)
    ) u_wr_arb (
        .clk  (clk),
        .rst  (rst),
        .req  (w_req_i),
        .done (w_done),
        .gnt  (w_gnt_w)
    );

    axi_lite_arbiter #(
        .N (NMST)
    ) u_rd_arb (
        .clk  (clk),
        .rst  (rst),
        .req  (r_req_i),
        .done (r_done),
        .gnt  (r_gnt_r)
    );

    // -----------------------------------------------------------------------
    // Slave-facing channel drives. VALID comes from the granted master's own
    // pending flag, which is registered and is cleared only by the matching
    // handshake, so VALID is stable while waiting for READY (AXI requirement).
    //
    // ~rst is ANDed in for the same reason as the READY path above: a grant
    // that is still registered in the cycle reset is asserted must not start a
    // handshake with the slave, otherwise the slave could accept a request
    // whose master state the reset is simultaneously discarding.  After reset
    // the grant is cleared, so this masks the reset cycle and nothing else.
    // -----------------------------------------------------------------------
    assign awvalid_o = ~rst & |(w_gnt_w & w_awvalid_i);
    assign wvalid_o  = ~rst & |(w_gnt_w & w_wvalid_i);
    assign arvalid_o = ~rst & |(r_gnt_r & r_req_i);

    // Payload multiplexer. Grants are one-hot, so OR-ing masked contributions is
    // a safe mux and needs no priority encoder.
    always_comb begin
        awaddr_o = {ADDR_WIDTH{1'b0}};
        awprot_o = 3'b000;
        wdata_o  = {DATA_WIDTH{1'b0}};
        wstrb_o  = {STRB_WIDTH{1'b0}};
        araddr_o = {ADDR_WIDTH{1'b0}};
        arprot_o = 3'b000;

        for (int unsigned m = 0; m < NMST; m++) begin
            if (w_gnt_w[m]) begin
                awaddr_o = w_addr_i[m];
                awprot_o = w_prot_i[m];
                wdata_o  = w_data_i[m];
                wstrb_o  = w_strb_i[m];
            end
            if (r_gnt_r[m]) begin
                araddr_o = r_addr_i[m];
                arprot_o = r_prot_i[m];
            end
        end
    end

    // -----------------------------------------------------------------------
    // Owner-routed responses
    // -----------------------------------------------------------------------
    always_comb begin
        for (int unsigned m = 0; m < NMST; m++) begin
            w_gnt_o[m]     = w_gnt_w[m];
            w_awready_o[m] = w_gnt_w[m] & awready_i;
            w_wready_o[m]  = w_gnt_w[m] & wready_i;
            w_bvalid_o[m]  = w_gnt_w[m] & bvalid_i;
            w_bresp_o[m]   = w_gnt_w[m] ? bresp_i : `AXIL_RESP_OKAY;

            r_gnt_o[m]     = r_gnt_r[m];
            r_arready_o[m] = r_gnt_r[m] & arready_i;
            r_rvalid_o[m]  = r_gnt_r[m] & rvalid_i;
            r_rdata_o[m]   = r_gnt_r[m] ? rdata_i : {DATA_WIDTH{1'b0}};
            r_rresp_o[m]   = r_gnt_r[m] ? rresp_i : `AXIL_RESP_OKAY;
        end
    end

    // -----------------------------------------------------------------------
    // Local invariant assertions
    //
    // STYLE: same-cycle implications are written as `assert property (!guard ||
    // condition)` because Yosys (the formal front end) reads only boolean
    // property expressions.  One property set, simulated and proven.
    // -----------------------------------------------------------------------
`ifdef AXIL_ASSERTIONS
    always_ff @(posedge clk) begin
        // Reset-inert: no VALID and no READY toward the slave, so the crossbar
        // can neither start nor complete a transaction while reset is asserted.
        ap_rst_blocks_ready: assert property (!rst || (~bready_o & ~rready_o));
        ap_rst_blocks_valid: assert property (!rst || (~awvalid_o & ~wvalid_o & ~arvalid_o));
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_w_gnt_onehot: assert property ($onehot0(w_gnt_w));
            ap_r_gnt_onehot: assert property ($onehot0(r_gnt_r));
            ap_awvalid_gnt:  assert property (!awvalid_o || |w_gnt_w);
            ap_wvalid_gnt:   assert property (!wvalid_o  || |w_gnt_w);
            ap_arvalid_gnt:  assert property (!arvalid_o || |r_gnt_r);
        end
    end
`endif

endmodule

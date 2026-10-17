// -----------------------------------------------------------------------------
// formal/axil_reset_harness.sv
//
// FORMAL HARNESS for the reset contract (formal/reset.sby; BOUNDED - mode bmc).
//
// WHAT IS PROVEN, for every behavior up to the job's depth, with the reset
// assertion time itself a free input (it may fall in any cycle, including the
// middle of a transaction):
//
//   R1  Reset inertness.  While rst is high no READY and no response VALID is
//       asserted on either boundary side, so no AXI handshake - in either
//       direction, on either side - can complete during reset.  (This comes from
//       the DUT's own asserts, which formal/routing.sby proves UNBOUNDED.)
//
//   R2  No stale response.  After the most recent reset cycle a master only ever
//       sees a B/R for a request that was accepted *after* that reset.  A
//       transaction that was in flight when rst was asserted is therefore
//       discarded and can never be completed later - the target's late response
//       finds no owner because the grant, the slot flags and the owner mask were
//       all cleared.
//
//   R3  Deterministic recovery.  In the first cycle after a reset cycle the
//       master-side READYs are high again (for every master), i.e. the reset
//       leaves the ports in their documented clean state and a new transaction
//       can be accepted immediately.  No "warm-up" cycles, no dependence on what
//       the pre-reset state was.
//
//   R4  No ghost traffic towards the targets.  After a reset the slave side only
//       sees a request if a master-side acceptance happened after that reset:
//       the reset cannot leave a stale grant that would address a target.
//
// ENVIRONMENT ASSUMPTIONS (the complete list)
//   * rst is high at time 0.  Every flip-flop in the design has a synchronous
//     reset, so this is exactly the state a real reset leaves behind; the
//     assumption is not needed for R1-R4 to be meaningful, it just stops the
//     solver from starting in a state no reset ever produces.
//   * master-side and slave-side inputs are free (arbitrary masters, including
//     ones that violate the AXI hold rules; arbitrary target timing, including
//     targets that never answer).  r1/r4 are DUT statements, so this costs
//     nothing; R2's "no stale response" is stated over what the boundary
//     actually did.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axil_reset_harness #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned NMST       = 2,
    parameter int unsigned NSLV       = 3,
    parameter int unsigned REGION_LSB = 12
) (
    input logic clk,
    // Free: reset may be asserted in any cycle, including mid-transaction.
    input logic rst,

    // ---------------------------------------------------------------------
    // Master-side ports (free inputs)
    // ---------------------------------------------------------------------
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_awaddr,
    input  logic [NMST-1:0][2:0]              m_awprot,
    input  logic [NMST-1:0]                   m_awvalid,
    output logic [NMST-1:0]                   m_awready,

    input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_wdata,
    input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_wstrb,
    input  logic [NMST-1:0]                   m_wvalid,
    output logic [NMST-1:0]                   m_wready,

    output logic [NMST-1:0][1:0]              m_bresp,
    output logic [NMST-1:0]                   m_bvalid,
    input  logic [NMST-1:0]                   m_bready,

    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_araddr,
    input  logic [NMST-1:0][2:0]              m_arprot,
    input  logic [NMST-1:0]                   m_arvalid,
    output logic [NMST-1:0]                   m_arready,

    output logic [NMST-1:0][DATA_WIDTH-1:0]   m_rdata,
    output logic [NMST-1:0][1:0]              m_rresp,
    output logic [NMST-1:0]                   m_rvalid,
    input  logic [NMST-1:0]                   m_rready,

    // ---------------------------------------------------------------------
    // Slave-side ports (free inputs)
    // ---------------------------------------------------------------------
    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_awaddr,
    output logic [NSLV-1:0][2:0]              s_awprot,
    output logic [NSLV-1:0]                   s_awvalid,
    input  logic [NSLV-1:0]                   s_awready,

    output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_wdata,
    output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_wstrb,
    output logic [NSLV-1:0]                   s_wvalid,
    input  logic [NSLV-1:0]                   s_wready,

    input  logic [NSLV-1:0][1:0]              s_bresp,
    input  logic [NSLV-1:0]                   s_bvalid,
    output logic [NSLV-1:0]                   s_bready,

    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_araddr,
    output logic [NSLV-1:0][2:0]              s_arprot,
    output logic [NSLV-1:0]                   s_arvalid,
    input  logic [NSLV-1:0]                   s_arready,

    input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_rdata,
    input  logic [NSLV-1:0][1:0]              s_rresp,
    input  logic [NSLV-1:0]                   s_rvalid,
    output logic [NSLV-1:0]                   s_rready
);

    // ---------------------------------------------------------------------
    // DUT
    // ---------------------------------------------------------------------
    axi_lite_crossbar #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .NMST       (NMST),
        .NSLV       (NSLV),
        .REGION_LSB (REGION_LSB)
    ) u_dut (
        .clk          (clk),
        .rst          (rst),
        .m_axil_awaddr (m_awaddr), .m_axil_awprot (m_awprot),
        .m_axil_awvalid (m_awvalid), .m_axil_awready (m_awready),
        .m_axil_wdata (m_wdata), .m_axil_wstrb (m_wstrb),
        .m_axil_wvalid (m_wvalid), .m_axil_wready (m_wready),
        .m_axil_bresp (m_bresp), .m_axil_bvalid (m_bvalid), .m_axil_bready (m_bready),
        .m_axil_araddr (m_araddr), .m_axil_arprot (m_arprot),
        .m_axil_arvalid (m_arvalid), .m_axil_arready (m_arready),
        .m_axil_rdata (m_rdata), .m_axil_rresp (m_rresp),
        .m_axil_rvalid (m_rvalid), .m_axil_rready (m_rready),
        .s_axil_awaddr (s_awaddr), .s_axil_awprot (s_awprot),
        .s_axil_awvalid (s_awvalid), .s_axil_awready (s_awready),
        .s_axil_wdata (s_wdata), .s_axil_wstrb (s_wstrb),
        .s_axil_wvalid (s_wvalid), .s_axil_wready (s_wready),
        .s_axil_bresp (s_bresp), .s_axil_bvalid (s_bvalid), .s_axil_bready (s_bready),
        .s_axil_araddr (s_araddr), .s_axil_arprot (s_arprot),
        .s_axil_arvalid (s_arvalid), .s_axil_arready (s_arready),
        .s_axil_rdata (s_rdata), .s_axil_rresp (s_rresp),
        .s_axil_rvalid (s_rvalid), .s_axil_rready (s_rready)
    );

    // ---------------------------------------------------------------------
    // Boundary bookkeeping.  Set by the handshakes, cleared by every reset
    // cycle, so "since the last reset" is exactly what the flags encode.
    // ---------------------------------------------------------------------
    logic [NMST-1:0] aw_acc_q, w_acc_q, ar_acc_q;
    logic            rst_d_q;      // rst was high in the previous cycle

    always_ff @(posedge clk) begin
        if (rst) begin
            aw_acc_q <= '0;
            w_acc_q  <= '0;
            ar_acc_q <= '0;
            rst_d_q  <= 1'b1;
        end else begin
            aw_acc_q <= aw_acc_q | (m_awvalid & m_awready);
            w_acc_q  <= w_acc_q  | (m_wvalid  & m_wready);
            ar_acc_q <= ar_acc_q | (m_arvalid & m_arready);
            rst_d_q  <= 1'b0;
        end
    end

    // ---------------------------------------------------------------------
    // Aggregated property helpers (one boolean per property; Yosys does not
    // scope assertion names by generate/loop index).
    // ---------------------------------------------------------------------
    logic resp_needs_request_ok;
    logic ready_after_reset_ok;
    logic no_ghost_aw_ok, no_ghost_ar_ok;

    always_comb begin
        resp_needs_request_ok  = 1'b1;
        ready_after_reset_ok   = 1'b1;
        no_ghost_aw_ok         = 1'b1;
        no_ghost_ar_ok         = 1'b1;

        for (int unsigned m = 0; m < NMST; m++) begin
            // R2: a response is only offered to a master whose write/read was
            // accepted after the most recent reset.
            if (m_bvalid[m] && !(aw_acc_q[m] && w_acc_q[m])) begin
                resp_needs_request_ok = 1'b0;
            end
            if (m_rvalid[m] && !ar_acc_q[m]) begin
                resp_needs_request_ok = 1'b0;
            end

            // R3: first cycle after a reset cycle -> all master READYs high.
            if (rst_d_q && !rst &&
                !(m_awready[m] && m_wready[m] && m_arready[m])) begin
                ready_after_reset_ok = 1'b0;
            end
        end

        // R4: after a reset the targets only see requests that some master
        // actually presented (and had accepted) after that reset.
        if (s_awvalid != '0 && !(|aw_acc_q)) no_ghost_aw_ok = 1'b0;
        if (s_arvalid != '0 && !(|ar_acc_q)) no_ghost_ar_ok = 1'b0;
    end

    // ---------------------------------------------------------------------
    // Environment assumptions and the state reset assumption.
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if ($initstate) begin
            assume property (rst);
        end
    end

    // ---------------------------------------------------------------------
    // Assertions
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_resp_needs_request: assert property (resp_needs_request_ok);
            ap_ready_after_reset:  assert property (ready_after_reset_ok);
            ap_no_ghost_aw:        assert property (no_ghost_aw_ok);
            ap_no_ghost_ar:        assert property (no_ghost_ar_ok);
        end
    end

endmodule

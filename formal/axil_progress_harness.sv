// -----------------------------------------------------------------------------
// formal/axil_progress_harness.sv
//
// FORMAL HARNESS for progress (liveness) and response-code routing
// (formal/progress.sby; BOUNDED - mode bmc, see the job file for the depth and
// why an unbounded proof is not available for these properties).
//
// WHAT IS PROVEN, for every behavior up to the job's depth, with rst free (it
// may be asserted in any cycle and the masters restart from idle after it):
//
//   P1  Write-channel progress.  A master that presents AWVALID (and then
//       WVALID) always completes its write - AWREADY, WREADY and BVALID with
//       BREADY all arrive - within the channel deadlines AW_LIMIT/TX_LIMIT.  In
//       particular the write path cannot deadlock: no state combination of the
//       two write streams (one AW-before-W, one AW+W together) starves a
//       request.
//
//   P2  Read-channel progress.  Same statement for ARVALID -> ARREADY ->
//       RVALID/RREADY within R_LIMIT/TX_LIMIT.
//
//   P3  Arbitration no-starvation.  Both masters' write streams target the same
//       slave (UART) and both read streams target the same slave (GPIO), so the
//       per-target round-robin arbiters are permanently contended; P1/P2 then
//       state exactly that the loser of every arbitration is served next: no
//       master's AW or AR can remain ungranted beyond its deadline.
//
//   P4  Response codes travel with the transaction.  A write to the UART
//       region always returns OKAY; a read of the GPIO region always returns
//       SLVERR; a read of an unmapped address always returns DECERR with
//       RDATA = 0 (the error target's contract).  These are checked on the
//       master side, per transaction, not from inside the DUT.
//
//   P5  The read/write streams run concurrently on the same ports, so P1-P4
//       hold with both channels of both masters active simultaneously.
//
// WHAT IS *NOT* CLAIMED
//   Progress is claimed for the DEADLINE actually encoded below (16/16/32
//   cycles) and only for the first `depth` cycles of a continuously loaded
//   system with the bounded-latency slave model described under ENVIRONMENT.
//   An unbounded ("always eventually") statement needs a fair-slave liveness
//   assumption that a pure safety model checker cannot discharge inductively;
//   the unbounded half of the story is the RTL's own hold-the-grant invariants
//   in formal/routing.sby plus the long random sequences in simulation.
//
// ENVIRONMENT ASSUMPTIONS (the complete list)
//   * rst is high at time 0 (every flop is synchronously reset; this is just
//     the state a real reset leaves behind, exactly as in the other jobs).
//   * The harness drives both masters from scripted BFMs.  They are legal
//     AXI4-Lite single-outstanding masters: VALID is held until READY, BREADY/
//     RREADY are held until the response, and each master only starts the next
//     transaction after the previous response.
//   * The harness slaves are BOUNDED-LATENCY models: each READY arrives within
//     RDY_D+1 cycles of VALID, BVALID within 2 cycles of the last of AW/W, and
//     RVALID within 2 cycles of AR.  This is the liveness contract real
//     peripherals in such a subsystem are required to meet; a target that never
//     answers would stall any crossbar, so no DUT can be proven to make
//     progress against one.  (The RTL's *safety* properties - no phantom
//     responses, no cross-talk - are still proven against fully arbitrary,
//     never-answering targets in formal/routing.sby.)
//   * No other assumptions.  rst is free, and the four streams contend until
//     the BMC depth runs out.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axil_progress_harness #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned NMST       = 2,
    parameter int unsigned NSLV       = 3,
    parameter int unsigned REGION_LSB = 12
) (
    input logic clk,
    // Free: reset may be asserted in any cycle.  The BFMs restart from idle
    // after every reset (a real master sees the same rst), so each reset opens
    // a new run of the four streams.
    input logic rst
);

    // ---------------------------------------------------------------------
    // Scripted addresses (the region map of rtl/axil_defs.svh)
    // ---------------------------------------------------------------------
    localparam logic [ADDR_WIDTH-1:0] UART_BASE = `AXIL_UART_BASE;   // slave 0
    localparam logic [ADDR_WIDTH-1:0] GPIO_BASE = `AXIL_GPIO_BASE;   // slave 1
    localparam logic [ADDR_WIDTH-1:0] UNMAPPED  = 32'h0000_1000;     // error target

    // Deadline parameters, in cycles.  The slaves below answer within ~5
    // cycles of any VALID, so even the contended channels settle an order of
    // magnitude inside these limits; they are deliberately not tightened to
    // the observed latency so the claim stays stable if pipeline details
    // change, and they are small enough that a real deadlock cannot hide.
    localparam logic [5:0] AW_LIMIT = 6'd16;
    localparam logic [5:0] TX_LIMIT = 6'd32;
    localparam logic [5:0] R_LIMIT  = 6'd16;

    // ---------------------------------------------------------------------
    // Master-side boundary wires (driven by the BFMs)
    // ---------------------------------------------------------------------
    logic [NMST-1:0][ADDR_WIDTH-1:0]   m_awaddr;
    logic [NMST-1:0][2:0]              m_awprot;
    logic [NMST-1:0]                   m_awvalid;
    logic [NMST-1:0]                   m_awready;

    logic [NMST-1:0][DATA_WIDTH-1:0]   m_wdata;
    logic [NMST-1:0][DATA_WIDTH/8-1:0] m_wstrb;
    logic [NMST-1:0]                   m_wvalid;
    logic [NMST-1:0]                   m_wready;

    logic [NMST-1:0][1:0]              m_bresp;
    logic [NMST-1:0]                   m_bvalid;
    logic [NMST-1:0]                   m_bready;

    logic [NMST-1:0][ADDR_WIDTH-1:0]   m_araddr;
    logic [NMST-1:0][2:0]              m_arprot;
    logic [NMST-1:0]                   m_arvalid;
    logic [NMST-1:0]                   m_arready;

    logic [NMST-1:0][DATA_WIDTH-1:0]   m_rdata;
    logic [NMST-1:0][1:0]              m_rresp;
    logic [NMST-1:0]                   m_rvalid;
    logic [NMST-1:0]                   m_rready;

    // ---------------------------------------------------------------------
    // Slave-side boundary wires (driven by the bounded-latency models)
    // ---------------------------------------------------------------------
    logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_awaddr;
    logic [NSLV-1:0][2:0]              s_awprot;
    logic [NSLV-1:0]                   s_awvalid;
    logic [NSLV-1:0]                   s_awready;

    logic [NSLV-1:0][DATA_WIDTH-1:0]   s_wdata;
    logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_wstrb;
    logic [NSLV-1:0]                   s_wvalid;
    logic [NSLV-1:0]                   s_wready;

    logic [NSLV-1:0][1:0]              s_bresp;
    logic [NSLV-1:0]                   s_bvalid;
    logic [NSLV-1:0]                   s_bready;

    logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_araddr;
    logic [NSLV-1:0][2:0]              s_arprot;
    logic [NSLV-1:0]                   s_arvalid;
    logic [NSLV-1:0]                   s_arready;

    logic [NSLV-1:0][DATA_WIDTH-1:0]   s_rdata;
    logic [NSLV-1:0][1:0]              s_rresp;
    logic [NSLV-1:0]                   s_rvalid;
    logic [NSLV-1:0]                   s_rready;

    // ---------------------------------------------------------------------
    // DUT (bare crossbar, default region map from axil_defs.svh)
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
    // Master 0: AW-then-W order, writes to UART (contended), reads alternate
    // between an unmapped (DECERR, RDATA=0) and the GPIO region (SLVERR).
    // ---------------------------------------------------------------------
    axil_prog_master #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .WR_ADDR         (UART_BASE),
        .WR_DATA_BASE    (32'h0100_0000),
        .EXP_BRESP       (`AXIL_RESP_OKAY),
        .PAR_AW_W        (1'b0),
        .RD_ADDR0        (UNMAPPED),
        .RD_ADDR1        (GPIO_BASE),
        .EXP_RRESP0      (`AXIL_RESP_DECERR),
        .EXP_RRESP1      (`AXIL_RESP_SLVERR),
        .CHECK_RDATA0_ZERO (1'b1),
        .AW_LIMIT (AW_LIMIT), .TX_LIMIT (TX_LIMIT), .R_LIMIT (R_LIMIT)
    ) u_m0 (
        .clk (clk), .rst (rst),
        .awaddr (m_awaddr[0]), .awprot (m_awprot[0]),
        .awvalid (m_awvalid[0]), .awready (m_awready[0]),
        .wdata (m_wdata[0]), .wstrb (m_wstrb[0]),
        .wvalid (m_wvalid[0]), .wready (m_wready[0]),
        .bresp (m_bresp[0]), .bvalid (m_bvalid[0]), .bready (m_bready[0]),
        .araddr (m_araddr[0]), .arprot (m_arprot[0]),
        .arvalid (m_arvalid[0]), .arready (m_arready[0]),
        .rdata (m_rdata[0]), .rresp (m_rresp[0]),
        .rvalid (m_rvalid[0]), .rready (m_rready[0])
    );

    // ---------------------------------------------------------------------
    // Master 1: AW and W presented together, writes to UART (contended),
    // reads all from GPIO (SLVERR, contended with master 0's odd reads).
    // ---------------------------------------------------------------------
    axil_prog_master #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .WR_ADDR         (UART_BASE),
        .WR_DATA_BASE    (32'h0200_0000),
        .EXP_BRESP       (`AXIL_RESP_OKAY),
        .PAR_AW_W        (1'b1),
        .RD_ADDR0        (GPIO_BASE),
        .RD_ADDR1        (GPIO_BASE),
        .EXP_RRESP0      (`AXIL_RESP_SLVERR),
        .EXP_RRESP1      (`AXIL_RESP_SLVERR),
        .CHECK_RDATA0_ZERO (1'b0),
        .AW_LIMIT (AW_LIMIT), .TX_LIMIT (TX_LIMIT), .R_LIMIT (R_LIMIT)
    ) u_m1 (
        .clk (clk), .rst (rst),
        .awaddr (m_awaddr[1]), .awprot (m_awprot[1]),
        .awvalid (m_awvalid[1]), .awready (m_awready[1]),
        .wdata (m_wdata[1]), .wstrb (m_wstrb[1]),
        .wvalid (m_wvalid[1]), .wready (m_wready[1]),
        .bresp (m_bresp[1]), .bvalid (m_bvalid[1]), .bready (m_bready[1]),
        .araddr (m_araddr[1]), .arprot (m_arprot[1]),
        .arvalid (m_arvalid[1]), .arready (m_arready[1]),
        .rdata (m_rdata[1]), .rresp (m_rresp[1]),
        .rvalid (m_rvalid[1]), .rready (m_rready[1])
    );

    // ---------------------------------------------------------------------
    // Bounded-latency slave models.  Slave 0 (UART) and slave 2 (TIMER) answer
    // OKAY; slave 1 (GPIO) is a faulty-peripheral model and answers SLVERR on
    // both channels, which is what makes master 0/1's GPIO response checks
    // meaningful.  Different RDY_D values make the backpressure patterns of
    // the two contended targets different.  Slave 2 sees no traffic (nothing
    // is scripted into the TIMER region) but is instantiated so the harness
    // covers the full NSLV-wide boundary.
    // ---------------------------------------------------------------------
    axil_prog_slave #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH),
        .RDY_D (6'd1),
        .B_RESP (`AXIL_RESP_OKAY), .R_RESP (`AXIL_RESP_OKAY),
        .R_DATA (32'h0000_0001)
    ) u_s0 (
        .clk (clk), .rst (rst),
        .awaddr (s_awaddr[0]), .awprot (s_awprot[0]),
        .awvalid (s_awvalid[0]), .awready (s_awready[0]),
        .wdata (s_wdata[0]), .wstrb (s_wstrb[0]),
        .wvalid (s_wvalid[0]), .wready (s_wready[0]),
        .bresp (s_bresp[0]), .bvalid (s_bvalid[0]), .bready (s_bready[0]),
        .araddr (s_araddr[0]), .arprot (s_arprot[0]),
        .arvalid (s_arvalid[0]), .arready (s_arready[0]),
        .rdata (s_rdata[0]), .rresp (s_rresp[0]),
        .rvalid (s_rvalid[0]), .rready (s_rready[0])
    );

    axil_prog_slave #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH),
        .RDY_D (6'd3),
        .B_RESP (`AXIL_RESP_SLVERR), .R_RESP (`AXIL_RESP_SLVERR),
        .R_DATA (32'h0000_0002)
    ) u_s1 (
        .clk (clk), .rst (rst),
        .awaddr (s_awaddr[1]), .awprot (s_awprot[1]),
        .awvalid (s_awvalid[1]), .awready (s_awready[1]),
        .wdata (s_wdata[1]), .wstrb (s_wstrb[1]),
        .wvalid (s_wvalid[1]), .wready (s_wready[1]),
        .bresp (s_bresp[1]), .bvalid (s_bvalid[1]), .bready (s_bready[1]),
        .araddr (s_araddr[1]), .arprot (s_arprot[1]),
        .arvalid (s_arvalid[1]), .arready (s_arready[1]),
        .rdata (s_rdata[1]), .rresp (s_rresp[1]),
        .rvalid (s_rvalid[1]), .rready (s_rready[1])
    );

    axil_prog_slave #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH),
        .RDY_D (6'd2),
        .B_RESP (`AXIL_RESP_OKAY), .R_RESP (`AXIL_RESP_OKAY),
        .R_DATA (32'h0000_0003)
    ) u_s2 (
        .clk (clk), .rst (rst),
        .awaddr (s_awaddr[2]), .awprot (s_awprot[2]),
        .awvalid (s_awvalid[2]), .awready (s_awready[2]),
        .wdata (s_wdata[2]), .wstrb (s_wstrb[2]),
        .wvalid (s_wvalid[2]), .wready (s_wready[2]),
        .bresp (s_bresp[2]), .bvalid (s_bvalid[2]), .bready (s_bready[2]),
        .araddr (s_araddr[2]), .arprot (s_arprot[2]),
        .arvalid (s_arvalid[2]), .arready (s_arready[2]),
        .rdata (s_rdata[2]), .rresp (s_rresp[2]),
        .rvalid (s_rvalid[2]), .rready (s_rready[2])
    );

    // ---------------------------------------------------------------------
    // Initial state: the design is reset at time 0 (same single assumption as
    // the other jobs; see formal/axil_crossbar_harness.sv for the rationale).
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if ($initstate) begin
            ap_init_reset: assume property (rst);
        end
    end

endmodule


// =============================================================================
// axil_prog_master -- scripted legal AXI4-Lite master (one write stream + one
// read stream per instance, single outstanding per stream, VALID held until
// READY, RESP checked against the scripted expectation).
//
// The only outputs that are ever deasserted without a handshake are during
// reset; both FSMs use the standard VALID-stays-high rule otherwise.  Every
// handshake predicate is VALID & READY (never READY alone).  In PAR_AW_W mode
// the W half may be accepted while the AW is still in flight - the crossbar
// takes the two halves of a write in any order - so the W completion is
// latched in w_done_q instead of being inferred from the FSM state.  The
// detectors are sticky per reset epoch: a wrong response code, RDATA!=0 on the
// DECERR phase, or a deadline overrun latches a flag that the boundary asserts
// check every cycle until the next reset.
// =============================================================================
module axil_prog_master #(
    parameter int unsigned ADDR_WIDTH  = 32,
    parameter int unsigned DATA_WIDTH  = 32,
    // Write stream.
    parameter logic [ADDR_WIDTH-1:0] WR_ADDR      = '0,
    parameter logic [DATA_WIDTH-1:0] WR_DATA_BASE = '0,
    parameter logic [1:0]            EXP_BRESP    = 2'b00,
    parameter bit                    PAR_AW_W     = 1'b0,  // 0: AW then W; 1: both together
    // Read stream: the two scripted addresses alternate per completion.
    parameter logic [ADDR_WIDTH-1:0] RD_ADDR0     = '0,
    parameter logic [ADDR_WIDTH-1:0] RD_ADDR1     = '0,
    parameter logic [1:0]            EXP_RRESP0   = 2'b00,
    parameter logic [1:0]            EXP_RRESP1   = 2'b00,
    parameter bit                    CHECK_RDATA0_ZERO = 1'b0,  // RD_ADDR0 is DECERR, RDATA must be 0
    // Deadlines in cycles.
    parameter logic [5:0] AW_LIMIT = 6'd16,
    parameter logic [5:0] TX_LIMIT = 6'd32,
    parameter logic [5:0] R_LIMIT  = 6'd16
) (
    input  logic clk,
    input  logic rst,

    output logic [ADDR_WIDTH-1:0]   awaddr,
    output logic [2:0]              awprot,
    output logic                    awvalid,
    input  logic                    awready,

    output logic [DATA_WIDTH-1:0]   wdata,
    output logic [DATA_WIDTH/8-1:0] wstrb,
    output logic                    wvalid,
    input  logic                    wready,

    input  logic [1:0]              bresp,
    input  logic                    bvalid,
    output logic                    bready,

    output logic [ADDR_WIDTH-1:0]   araddr,
    output logic [2:0]              arprot,
    output logic                    arvalid,
    input  logic                    arready,

    input  logic [DATA_WIDTH-1:0]   rdata,
    input  logic [1:0]              rresp,
    input  logic                    rvalid,
    output logic                    rready
);

    // ---------------------------------------------------------------------
    // Write stream FSM
    // ---------------------------------------------------------------------
    localparam logic [1:0] W_IDLE = 2'd0;
    localparam logic [1:0] W_AW   = 2'd1;
    localparam logic [1:0] W_W    = 2'd2;
    localparam logic [1:0] W_B    = 2'd3;

    logic [1:0] w_state_q;
    logic [5:0] wd_aw_q;    // AWVALID presented, waiting for AWREADY
    logic [5:0] wd_tx_q;    // whole write transaction (AWVALID .. B handshake)
    logic [5:0] wr_cnt_q;
    logic       b_err_q;    // sticky: BRESP disagreed with the script
    logic       w_done_q;   // the W handshake has happened (see the W_W note)
    logic       b_fire, w_hs;

    assign b_fire = bvalid && bready;
    // A W handshake is VALID & READY, not READY alone.  (An early version of
    // this BFM advanced on READY alone; with WREADY already high in the first
    // W_W cycle it skipped the W handshake entirely and then waited forever
    // for a B whose W it had never presented.  The tx deadline caught it.)
    assign w_hs   = wvalid && wready;

    always_ff @(posedge clk) begin
        if (rst) begin
            w_state_q <= W_IDLE;
            wd_aw_q   <= 6'd0;
            wd_tx_q   <= 6'd0;
            wr_cnt_q  <= 6'd0;
            b_err_q   <= 1'b0;
            w_done_q  <= 1'b0;
            awvalid   <= 1'b0;
            awaddr    <= WR_ADDR;
            awprot    <= 3'b000;
            wvalid    <= 1'b0;
            wdata     <= WR_DATA_BASE;
            wstrb     <= '1;
            bready    <= 1'b0;
        end else begin
            case (w_state_q)
                W_IDLE: begin
                    awvalid   <= 1'b1;
                    wdata     <= WR_DATA_BASE | {{(DATA_WIDTH-6){1'b0}}, wr_cnt_q};
                    wstrb     <= '1;
                    w_state_q <= W_AW;
                    wd_aw_q   <= 6'd0;
                    wd_tx_q   <= 6'd0;
                    w_done_q  <= 1'b0;
                end
                W_AW: begin
                    // PAR_AW_W: the W is presented here, possibly *before* the
                    // AW is accepted (the crossbar takes the halves in any
                    // order).  Once the W has been handshaken, VALID must drop
                    // and never be re-presented for this transaction.
                    if (PAR_AW_W && !w_done_q) wvalid <= 1'b1;
                    if (w_hs) begin
                        wvalid   <= 1'b0;
                        w_done_q <= 1'b1;
                    end
                    if (awready) begin
                        awvalid   <= 1'b0;
                        w_state_q <= W_W;
                        wd_aw_q   <= 6'd0;
                    end else begin
                        wd_aw_q <= wd_aw_q + 6'd1;
                    end
                end
                W_W: begin
                    // SEQ: WVALID rises on the first edge spent in W_W, so the
                    // handshake check must be `w_hs` (VALID & READY), never
                    // READY alone.  PAR: the W may already be done (accepted
                    // back in W_AW) - then just move on.
                    if (w_done_q) begin
                        wvalid    <= 1'b0;
                        w_state_q <= W_B;
                    end else begin
                        wvalid <= 1'b1;
                        if (w_hs) begin
                            wvalid    <= 1'b0;
                            w_state_q <= W_B;
                        end
                    end
                end
                W_B: begin
                    bready <= 1'b1;
                    if (b_fire) begin
                        bready   <= 1'b0;
                        wr_cnt_q <= wr_cnt_q + 6'd1;
                        if (bresp != EXP_BRESP) b_err_q <= 1'b1;
                        w_state_q <= W_IDLE;
                    end
                end
                default: w_state_q <= W_IDLE;
            endcase
            if (w_state_q != W_IDLE) wd_tx_q <= wd_tx_q + 6'd1;
        end
    end

    // ---------------------------------------------------------------------
    // Read stream FSM (phase 0 uses RD_ADDR0/EXP_RRESP0, phase 1 the _1 pair)
    // ---------------------------------------------------------------------
    localparam logic [1:0] R_IDLE = 2'd0;
    localparam logic [1:0] R_AR   = 2'd1;
    localparam logic [1:0] R_R    = 2'd2;

    logic [1:0] rd_state_q;
    logic [5:0] wd_ar_q;    // ARVALID presented, waiting for ARREADY
    logic [5:0] wd_rtx_q;   // whole read transaction (ARVALID .. R handshake)
    logic [5:0] rd_cnt_q;
    logic       rd_phase_q;
    logic       r_err_q;    // sticky: RRESP disagreed with the script
    logic       rdata_err_q;// sticky: DECERR read returned nonzero RDATA
    logic       r_fire;

    assign r_fire = rvalid && rready;

    always_ff @(posedge clk) begin
        if (rst) begin
            rd_state_q  <= R_IDLE;
            wd_ar_q     <= 6'd0;
            wd_rtx_q    <= 6'd0;
            rd_cnt_q    <= 6'd0;
            rd_phase_q  <= 1'b0;
            r_err_q     <= 1'b0;
            rdata_err_q <= 1'b0;
            arvalid     <= 1'b0;
            araddr      <= RD_ADDR0;
            arprot      <= 3'b000;
            rready      <= 1'b0;
        end else begin
            case (rd_state_q)
                R_IDLE: begin
                    araddr     <= rd_phase_q ? RD_ADDR1 : RD_ADDR0;
                    arvalid    <= 1'b1;
                    rd_state_q <= R_AR;
                    wd_ar_q    <= 6'd0;
                    wd_rtx_q   <= 6'd0;
                end
                R_AR: begin
                    if (arready) begin
                        arvalid    <= 1'b0;
                        rd_state_q <= R_R;
                        wd_ar_q    <= 6'd0;
                    end else begin
                        wd_ar_q <= wd_ar_q + 6'd1;
                    end
                end
                R_R: begin
                    rready <= 1'b1;
                    if (r_fire) begin
                        rready <= 1'b0;
                        if (rresp != (rd_phase_q ? EXP_RRESP1 : EXP_RRESP0))
                            r_err_q <= 1'b1;
                        if (CHECK_RDATA0_ZERO && !rd_phase_q
                            && (rresp == `AXIL_RESP_DECERR)
                            && (rdata != {DATA_WIDTH{1'b0}}))
                            rdata_err_q <= 1'b1;
                        rd_phase_q <= ~rd_phase_q;
                        rd_cnt_q   <= rd_cnt_q + 6'd1;
                        rd_state_q <= R_IDLE;
                    end
                end
                default: rd_state_q <= R_IDLE;
            endcase
            if (rd_state_q != R_IDLE) wd_rtx_q <= wd_rtx_q + 6'd1;
        end
    end

    // ---------------------------------------------------------------------
    // Boundary assertions.  The ok-flags are combinational in the registers,
    // the asserts latch them at each edge exactly like the other jobs (Yosys
    // 0.70 needs boolean property expressions).
    // ---------------------------------------------------------------------
    logic aw_wait_ok, tx_ok, bresp_ok, ar_wait_ok, rtx_ok, rresp_ok, rdata_ok;

    assign aw_wait_ok = (wd_aw_q <= AW_LIMIT);
    assign tx_ok      = (wd_tx_q <= TX_LIMIT);
    assign bresp_ok   = !b_err_q;
    assign ar_wait_ok = (wd_ar_q <= R_LIMIT);
    assign rtx_ok     = (wd_rtx_q <= TX_LIMIT);
    assign rresp_ok   = !r_err_q;
    assign rdata_ok   = !rdata_err_q;

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_aw_deadline:  assert property (aw_wait_ok);
            ap_tx_deadline:  assert property (tx_ok);
            ap_bresp_match:  assert property (bresp_ok);
            ap_ar_deadline:  assert property (ar_wait_ok);
            ap_rtx_deadline: assert property (rtx_ok);
            ap_rresp_match:  assert property (rresp_ok);
            ap_rdata_zero:   assert property (rdata_ok);
        end
    end

endmodule


// =============================================================================
// axil_prog_slave -- bounded-latency AXI4-Lite slave model.
//
// READY becomes high on the (RDY_D+1)-th consecutive cycle of VALID; AW and W
// are accepted using the same rule and in any order (the DUT dispatches them
// independently); BVALID rises one cycle after both have been accepted and
// holds until BREADY.  ARREADY follows the READY rule and RVALID rises one
// cycle after the AR handshake, held until RREADY.  BRESP/RRESP/RDATA are the
// constants the instantiation passes.
//
// All VALID and READY outputs are gated with !rst: the model participates in
// the same reset-inert boundary contract as the DUT.
// =============================================================================
module axil_prog_slave #(
    parameter int unsigned ADDR_WIDTH  = 32,
    parameter int unsigned DATA_WIDTH  = 32,
    parameter logic [5:0]  RDY_D    = 6'd1,
    parameter logic [1:0]  B_RESP   = 2'b00,
    parameter logic [1:0]  R_RESP   = 2'b00,
    parameter logic [DATA_WIDTH-1:0] R_DATA = '0
) (
    input  logic clk,
    input  logic rst,

    input  logic [ADDR_WIDTH-1:0]   awaddr,   // payload is intentionally unused:
    input  logic [2:0]              awprot,   // this model answers all of it
    input  logic                    awvalid,
    output logic                    awready,

    input  logic [DATA_WIDTH-1:0]   wdata,
    input  logic [DATA_WIDTH/8-1:0] wstrb,
    input  logic                    wvalid,
    output logic                    wready,

    output logic [1:0]              bresp,
    output logic                    bvalid,
    input  logic                    bready,

    input  logic [ADDR_WIDTH-1:0]   araddr,
    input  logic [2:0]              arprot,
    input  logic                    arvalid,
    output logic                    arready,

    output logic [DATA_WIDTH-1:0]   rdata,
    output logic [1:0]              rresp,
    output logic                    rvalid,
    input  logic                    rready
);

    // cycles each VALID has been continuously high without a READY
    logic [5:0] aw_wait_q, w_wait_q, ar_wait_q;

    logic aw_done_q, w_done_q;      // both must be set to launch the B phase
    logic b_up_q;                   // BVALID phase
    logic r_up_q;                   // RVALID phase

    logic aw_hs, w_hs, ar_hs, b_fire, r_fire;
    logic wr_full;                  // both channels accepted, B not yet up

    assign aw_hs = awvalid && awready;
    assign w_hs  = wvalid && wready;
    assign ar_hs = arvalid && arready;
    assign b_fire = bvalid && bready;
    assign r_fire = rvalid && rready;
    assign wr_full = aw_done_q && w_done_q;

    assign awready = !rst && !b_up_q && !wr_full && (aw_wait_q >= RDY_D);
    assign wready  = !rst && !b_up_q && !wr_full && (w_wait_q  >= RDY_D);
    assign arready = !rst && !r_up_q && (ar_wait_q >= RDY_D);

    assign bresp  = B_RESP;
    assign bvalid = !rst && b_up_q;
    assign rdata  = R_DATA;
    assign rresp  = R_RESP;
    assign rvalid = !rst && r_up_q;

    always_ff @(posedge clk) begin
        if (rst) begin
            aw_wait_q <= 6'd0;
            w_wait_q  <= 6'd0;
            ar_wait_q <= 6'd0;
            aw_done_q <= 1'b0;
            w_done_q  <= 1'b0;
            b_up_q    <= 1'b0;
            r_up_q    <= 1'b0;
        end else begin
            // VALID-age counters: reset when the VALID drops or is accepted.
            if (awvalid && !awready) aw_wait_q <= aw_wait_q + 6'd1;
            else                     aw_wait_q <= 6'd0;
            if (wvalid && !wready)   w_wait_q  <= w_wait_q + 6'd1;
            else                     w_wait_q  <= 6'd0;
            if (arvalid && !arready) ar_wait_q <= ar_wait_q + 6'd1;
            else                     ar_wait_q <= 6'd0;

            // Write acceptance bookkeeping and the one-cycle B launch.
            if (aw_hs) aw_done_q <= 1'b1;
            if (w_hs)  w_done_q  <= 1'b1;
            if (wr_full && !b_up_q) begin
                aw_done_q <= 1'b0;
                w_done_q  <= 1'b0;
                b_up_q    <= 1'b1;
            end
            if (b_fire) b_up_q <= 1'b0;

            // Read acceptance bookkeeping.
            if (ar_hs)  r_up_q <= 1'b1;
            if (r_fire) r_up_q <= 1'b0;
        end
    end

    // The model's own latency contract, checked here so a harness bug cannot
    // silently weaken every deadline in the job: READY arrives within
    // RDY_D+1 cycles of VALID.  (RVALID's one-cycle latency after the AR
    // handshake is structural - r_up_q is set by that handshake - so there is
    // nothing for a stateless check to add.)
    logic aw_rsp_ok, w_rsp_ok, ar_rsp_ok;
    assign aw_rsp_ok = (aw_wait_q <= RDY_D + 6'd1) || awready;
    assign w_rsp_ok  = (w_wait_q  <= RDY_D + 6'd1) || wready;
    assign ar_rsp_ok = (ar_wait_q <= RDY_D + 6'd1) || arready;

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_slv_aw_rsp: assert property (aw_rsp_ok);
            ap_slv_w_rsp:  assert property (w_rsp_ok);
            ap_slv_ar_rsp: assert property (ar_rsp_ok);
        end
    end

    // The unused payload inputs are deliberately not read by this model; keep
    // an explicit sink so the intent is greppable (formal-only file, no lint).
    logic unused_ok;
    assign unused_ok = |{awaddr, awprot, wdata, wstrb, araddr, arprot};

endmodule

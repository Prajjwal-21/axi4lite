//      // verilator_coverage annotation
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
 001142     input  logic clk,
~000015     input  logic rst,
        
            // AXI4-Lite slave
~000016     input  logic [ADDR_WIDTH-1:0]  awaddr,
%000000     input  logic [2:0]             awprot,
 000024     input  logic                   awvalid,
 000032     output logic                   awready,
        
~000023     input  logic [DATA_WIDTH-1:0]  wdata,
 000023     input  logic [DATA_WIDTH/8-1:0] wstrb,
 000024     input  logic                   wvalid,
 000032     output logic                   wready,
        
%000001     output logic [1:0]             bresp,
 000024     output logic                   bvalid,
 000023     input  logic                   bready,
        
~000013     input  logic [ADDR_WIDTH-1:0]  araddr,
%000000     input  logic [2:0]             arprot,
~000020     input  logic                   arvalid,
 000028     output logic                   arready,
        
%000000     output logic [DATA_WIDTH-1:0]  rdata,
%000001     output logic [1:0]             rresp,
~000020     output logic                   rvalid,
~000020     input  logic                   rready
        );
        
 000024     logic aw_seen_q, w_seen_q, b_pend_q;
~000020     logic r_pend_q;
        
~000024     logic aw_hs, w_hs, b_hs, ar_hs, r_hs;
        
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
        
 001142     always_ff @(posedge clk) begin
 001114         if (rst) begin
 000065             aw_seen_q <= 1'b0;
 000065             w_seen_q  <= 1'b0;
 000065             b_pend_q  <= 1'b0;
 001114         end else begin
 001090             if (aw_hs) aw_seen_q <= 1'b1;
 001090             if (w_hs)  w_seen_q  <= 1'b1;
        
                    // A write response may only be produced once BOTH the address and
                    // the data have been accepted: a master that has not had its W
                    // accepted is still holding WVALID.
 001090             if (aw_seen_q & w_seen_q) begin
 000024                 b_pend_q <= 1'b1;
 000024                 aw_seen_q <= 1'b0;
 000024                 w_seen_q  <= 1'b0;
                    end
        
 001090             if (b_hs) b_pend_q <= 1'b0;
                end
            end
        
 001142     always_ff @(posedge clk) begin
 001114         if (rst) begin
 000065             r_pend_q <= 1'b0;
 001114         end else begin
~001094             if (ar_hs)    r_pend_q <= 1'b1;
~001094             if (r_hs)     r_pend_q <= 1'b0;
                end
            end
        
        `ifdef AXIL_ASSERTIONS
            // STYLE: same-cycle implications are written as `!guard || condition`;
            // Yosys (the formal front end) reads only boolean property expressions, so
            // this form is simulated by Verilator and proven by Yosys alike.
 001142     always_ff @(posedge clk) begin
 001142         ap_rst_blocks_ready: assert property (
 001142             !rst || (~awready & ~wready & ~arready));
            end
        
 001142     always_ff @(posedge clk) begin
 001114         if (!rst) begin
 001114             ap_bpending_blocks_aw:
 001114                 assert property (!b_pend_q || ~awready);
 001114             ap_bpending_blocks_w:
 001114                 assert property (!b_pend_q || ~wready);
 001114             ap_bvalid_only_when_pending:
 001114                 assert property (b_pend_q || ~bvalid);
 001114             ap_bresp_is_decerr:
 001114                 assert property (!bvalid || (bresp == `AXIL_RESP_DECERR));
 001114             ap_rresp_is_decerr:
 001114                 assert property (!rvalid || (rresp == `AXIL_RESP_DECERR));
 001114             ap_rdata_zero:
 001114                 assert property (!rvalid || (rdata == {DATA_WIDTH{1'b0}}));
                end
            end
        `endif
        
        
            // ---------------------------------------------------------------------
            // The error target ignores every payload signal: it answers every transfer
            // with DECERR and no data. The signals are still part of the AXI4-Lite
            // interface (the ports must exist) and are XOR-ed here purely so that the
            // deliberate non-use is explicit rather than an accident.
            // ---------------------------------------------------------------------
 000021     logic unused_ok;
            assign unused_ok = ^awaddr ^ ^awprot ^ ^wdata ^ ^wstrb
                             ^ ^araddr ^ ^arprot;
        endmodule
        

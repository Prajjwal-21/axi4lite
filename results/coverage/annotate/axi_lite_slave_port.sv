//      // verilator_coverage annotation
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
 004568     input  logic clk,
 000060     input  logic rst,
        
            // ---------------------------------------------------------------------
            // Requests and payload from the master ports.
            // One payload set is shared by all targets: payload is only sampled from
            // the master that is actually granted, so no cross-talk is possible.
            // ---------------------------------------------------------------------
 000086     input  logic [NMST-1:0]                     w_req_i,      // write request (AW+W both present)
 000344     input  logic [NMST-1:0]                     w_awvalid_i,  // AW half pending
 000344     input  logic [NMST-1:0]                     w_wvalid_i,   // W  half pending
~000116     input  logic [NMST-1:0][ADDR_WIDTH-1:0]     w_addr_i,
%000000     input  logic [NMST-1:0][2:0]                w_prot_i,
~000112     input  logic [NMST-1:0][DATA_WIDTH-1:0]     w_data_i,
 000076     input  logic [NMST-1:0][DATA_WIDTH/8-1:0]   w_strb_i,
 000316     input  logic [NMST-1:0]                     w_bready_i,
        
 000077     input  logic [NMST-1:0]                     r_req_i,      // AR pending
~000104     input  logic [NMST-1:0][ADDR_WIDTH-1:0]     r_addr_i,
%000000     input  logic [NMST-1:0][2:0]                r_prot_i,
 000200     input  logic [NMST-1:0]                     r_rready_i,
        
            // ---------------------------------------------------------------------
            // Slave-facing AXI4-Lite master port
            // ---------------------------------------------------------------------
~000053     output logic [ADDR_WIDTH-1:0]   awaddr_o,
%000000     output logic [2:0]              awprot_o,
 000127     output logic                    awvalid_o,
 000384     input  logic                    awready_i,
        
~000101     output logic [DATA_WIDTH-1:0]   wdata_o,
 000110     output logic [DATA_WIDTH/8-1:0] wstrb_o,
 000127     output logic                    wvalid_o,
 000329     input  logic                    wready_i,
        
%000008     input  logic [1:0]              bresp_i,
 000127     input  logic                    bvalid_i,
 000122     output logic                    bready_o,
        
~000060     output logic [ADDR_WIDTH-1:0]   araddr_o,
%000000     output logic [2:0]              arprot_o,
 000148     output logic                    arvalid_o,
 000296     input  logic                    arready_i,
        
~000022     input  logic [DATA_WIDTH-1:0]   rdata_i,
%000004     input  logic [1:0]              rresp_i,
 000148     input  logic                    rvalid_i,
 000147     output logic                    rready_o,
        
            // ---------------------------------------------------------------------
            // Grants and owner-routed responses back to the master ports
            // ---------------------------------------------------------------------
 000086     output logic [NMST-1:0]                   w_gnt_o,
 000086     output logic [NMST-1:0]                   w_awready_o,
 000086     output logic [NMST-1:0]                   w_wready_o,
 000086     output logic [NMST-1:0]                   w_bvalid_o,
~000049     output logic [NMST-1:0][1:0]              w_bresp_o,
        
 000077     output logic [NMST-1:0]                   r_gnt_o,
 000077     output logic [NMST-1:0]                   r_arready_o,
 000077     output logic [NMST-1:0]                   r_rvalid_o,
~000032     output logic [NMST-1:0][DATA_WIDTH-1:0]   r_rdata_o,
~000024     output logic [NMST-1:0][1:0]              r_rresp_o
        );
        
            localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
        
 000086     logic [NMST-1:0] w_gnt_w;   // registered write grant (one-hot0)
 000077     logic [NMST-1:0] r_gnt_r;   // registered read  grant (one-hot0)
        
 000148     logic w_done, r_done;
        
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
 034348     always_comb begin
 034348         awaddr_o = {ADDR_WIDTH{1'b0}};
 034348         awprot_o = 3'b000;
 034348         wdata_o  = {DATA_WIDTH{1'b0}};
 034348         wstrb_o  = {STRB_WIDTH{1'b0}};
 034348         araddr_o = {ADDR_WIDTH{1'b0}};
 034348         arprot_o = 3'b000;
        
 068696         for (int unsigned m = 0; m < NMST; m++) begin
 065938             if (w_gnt_w[m]) begin
 003709                 awaddr_o = w_addr_i[m];
 003709                 awprot_o = w_prot_i[m];
 003709                 wdata_o  = w_data_i[m];
 003709                 wstrb_o  = w_strb_i[m];
                    end
 066600             if (r_gnt_r[m]) begin
 002096                 araddr_o = r_addr_i[m];
 002096                 arprot_o = r_prot_i[m];
                    end
                end
            end
        
            // -----------------------------------------------------------------------
            // Owner-routed responses
            // -----------------------------------------------------------------------
 034348     always_comb begin
 068696         for (int unsigned m = 0; m < NMST; m++) begin
 068696             w_gnt_o[m]     = w_gnt_w[m];
 068696             w_awready_o[m] = w_gnt_w[m] & awready_i;
 068696             w_wready_o[m]  = w_gnt_w[m] & wready_i;
 068696             w_bvalid_o[m]  = w_gnt_w[m] & bvalid_i;
 068696             w_bresp_o[m]   = w_gnt_w[m] ? bresp_i : `AXIL_RESP_OKAY;
        
 068696             r_gnt_o[m]     = r_gnt_r[m];
 068696             r_arready_o[m] = r_gnt_r[m] & arready_i;
 068696             r_rvalid_o[m]  = r_gnt_r[m] & rvalid_i;
 068696             r_rdata_o[m]   = r_gnt_r[m] ? rdata_i : {DATA_WIDTH{1'b0}};
 068696             r_rresp_o[m]   = r_gnt_r[m] ? rresp_i : `AXIL_RESP_OKAY;
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
 004568     always_ff @(posedge clk) begin
                // Reset-inert: no VALID and no READY toward the slave, so the crossbar
                // can neither start nor complete a transaction while reset is asserted.
 004568         ap_rst_blocks_ready: assert property (!rst || (~bready_o & ~rready_o));
 004568         ap_rst_blocks_valid: assert property (!rst || (~awvalid_o & ~wvalid_o & ~arvalid_o));
            end
        
 004568     always_ff @(posedge clk) begin
 004456         if (!rst) begin
 004456             ap_w_gnt_onehot: assert property ($onehot0(w_gnt_w));
 004456             ap_r_gnt_onehot: assert property ($onehot0(r_gnt_r));
 004456             ap_awvalid_gnt:  assert property (!awvalid_o || |w_gnt_w);
 004456             ap_wvalid_gnt:   assert property (!wvalid_o  || |w_gnt_w);
 004456             ap_arvalid_gnt:  assert property (!arvalid_o || |r_gnt_r);
                end
            end
        `endif
        
        endmodule
        

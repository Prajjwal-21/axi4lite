//      // verilator_coverage annotation
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
 004275     input  logic clk,
 000042     input  logic rst,
        
            // ---------------------------------------------------------------------
            // AXI4-Lite slave port
            // ---------------------------------------------------------------------
~000049     input  logic [ADDR_WIDTH-1:0]   s_awaddr,
%000000     input  logic [2:0]              s_awprot,
 000126     input  logic                    s_awvalid,
 000171     output logic                    s_awready,
        
~000078     input  logic [DATA_WIDTH-1:0]   s_wdata,
 000087     input  logic [DATA_WIDTH/8-1:0] s_wstrb,
 000126     input  logic                    s_wvalid,
 000171     output logic                    s_wready,
        
%000007     output logic [1:0]              s_bresp,
 000126     output logic                    s_bvalid,
 000126     input  logic                    s_bready,
        
~000056     input  logic [ADDR_WIDTH-1:0]   s_araddr,
%000000     input  logic [2:0]              s_arprot,
 000160     input  logic                    s_arvalid,
 000205     output logic                    s_arready,
        
~000035     output logic [DATA_WIDTH-1:0]   s_rdata,
%000003     output logic [1:0]              s_rresp,
 000160     output logic                    s_rvalid,
 000160     input  logic                    s_rready,
        
            // ---------------------------------------------------------------------
            // Register port to the peripheral
            // ---------------------------------------------------------------------
~000042     output logic [LOCAL_ADDR_W-1:0] reg_wr_addr,
~000039     output logic [DATA_WIDTH-1:0]   reg_wr_data,
 000027     output logic [DATA_WIDTH/8-1:0] reg_wr_strb,
 000126     output logic                    reg_wr_en,
~000010     input  logic                    reg_wr_hit,
        
~000056     output logic [LOCAL_ADDR_W-1:0] reg_rd_addr,
 000160     output logic                    reg_rd_en,
~000069     input  logic [DATA_WIDTH-1:0]   reg_rd_data,
~000024     input  logic                    reg_rd_hit
        );
        
        
            localparam int unsigned LA_WIDTH   = LOCAL_ADDR_W;
        
            // Write address / data buffers. Only the low LOCAL_ADDR_W address bits are
            // stored: the peripheral region select is already done by the crossbar, so
            // nothing above the local offset is meaningful here.
 000126     logic                    aw_pend_q;
~000042     logic [LA_WIDTH-1:0]     aw_addr_q;
~000039     logic [DATA_WIDTH-1:0]   w_data_q;
 000027     logic [DATA_WIDTH/8-1:0] w_strb_q;
 000126     logic                    w_pend_q;
        
 000126     logic                    bvalid_q;
%000007     logic [1:0]              bresp_q;
        
 000160     logic                    rvalid_q;
~000035     logic [DATA_WIDTH-1:0]   rdata_q;
%000003     logic [1:0]              rresp_q;
        
 000160     logic aw_hs, w_hs, ar_hs, b_hs, r_hs;
 000126     logic wr_apply;
        
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
 004275     always_ff @(posedge clk) begin
 004107         if (rst) begin
 000168             aw_pend_q <= 1'b0;
 000168             aw_addr_q <= '0;
 000168             w_pend_q  <= 1'b0;
 000168             w_data_q  <= '0;
 000168             w_strb_q  <= '0;
 000168             bvalid_q  <= 1'b0;
 000168             bresp_q   <= `AXIL_RESP_OKAY;
 004107         end else begin
 000126             if (aw_hs) begin
 000126                 aw_pend_q <= 1'b1;
 000126                 aw_addr_q <= s_awaddr[LA_WIDTH-1:0];
 003855             end else if (wr_apply) begin
 000126                 aw_pend_q <= 1'b0;
                    end
        
 000126             if (w_hs) begin
 000126                 w_pend_q <= 1'b1;
 000126                 w_data_q <= s_wdata;
 000126                 w_strb_q <= s_wstrb;
 003855             end else if (wr_apply) begin
 000126                 w_pend_q <= 1'b0;
                    end
        
 000126             if (wr_apply) begin
 000126                 bvalid_q <= 1'b1;
 000126                 bresp_q  <= reg_wr_hit ? `AXIL_RESP_OKAY : `AXIL_RESP_SLVERR;
 003855             end else if (b_hs) begin
 000126                 bvalid_q <= 1'b0;
                    end
                end
            end
        
            // ---------------------------------------------------------------------
            // Read path sequential
            // ---------------------------------------------------------------------
 004275     always_ff @(posedge clk) begin
 004107         if (rst) begin
 000168             rvalid_q <= 1'b0;
 000168             rdata_q  <= '0;
 000168             rresp_q  <= `AXIL_RESP_OKAY;
 004107         end else begin
 000160             if (ar_hs) begin
 000160                 rvalid_q <= 1'b1;
                        // Captured in the accept cycle => read-before-write semantics.
 000160                 rdata_q  <= reg_rd_data;
~000160                 rresp_q  <= reg_rd_hit ? `AXIL_RESP_OKAY : `AXIL_RESP_SLVERR;
 003787             end else if (r_hs) begin
 000160                 rvalid_q <= 1'b0;
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
 004275     always_ff @(posedge clk) begin
 004275         ap_rst_blocks_ready: assert property (
 004275             !rst || (~s_awready & ~s_wready & ~s_arready));
            end
        
 004275     always_ff @(posedge clk) begin
 004107         if (!rst) begin
 004107             ap_aw_blocked:  assert property (!aw_pend_q || ~s_awready);
 004107             ap_w_blocked:   assert property (!w_pend_q  || ~s_wready);
 004107             ap_b_blocked:   assert property (!bvalid_q  || (~s_awready & ~s_wready));
 004107             ap_r_blocked:   assert property (!rvalid_q  || ~s_arready);
 004107             ap_wr_apply_needs_both:
 004107                 assert property (!wr_apply || (aw_pend_q & w_pend_q & ~bvalid_q));
 004107             ap_reg_wr_en_implies_both:
 004107                 assert property (!reg_wr_en || (aw_pend_q & w_pend_q));
                end
            end
        `endif
        
        
            // ---------------------------------------------------------------------
            // Deliberately unused interface signals.
            //   * AWPROT/ARPROT are accepted and ignored: no privilege model.
            //   * Address bits above LOCAL_ADDR_W do not address anything inside the
            //     region; the region select was performed by the crossbar.
            // ---------------------------------------------------------------------
 000145     logic unused_ok;
            assign unused_ok = ^s_awprot ^ ^s_arprot
                             ^ ^s_awaddr[ADDR_WIDTH-1:LA_WIDTH]
                             ^ ^s_araddr[ADDR_WIDTH-1:LA_WIDTH];
        endmodule
        

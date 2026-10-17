//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // timer_regs.sv
        //
        // 32-bit auto-reload / one-shot timer with prescaler and interrupt.
        //
        // REGISTER MAP (local offset; see docs/register_map.md)
        //   0x00 CTRL       R/W  [0] EN, [1] IRQ_EN, [2] ONE_SHOT, [3] PRESCALE_EN
        //   0x04 LOAD       R/W  [31:0] reload / countdown value
        //   0x08 VALUE      RO   [31:0] current counter value
        //   0x0C INT_STATUS R/W1C[0]    expiry event, write 1 to clear
        //   0x10 PRESCALE   R/W  [15:0] prescaler divider
        //   0x3C ID         RO   0x54494D45
        //
        // DEFINED BEHAVIOUR (this is a specification, matched by the reference model)
        //   * tick rate: one tick per clock when PRESCALE_EN=0, otherwise one tick every
        //     (PRESCALE+1) clocks.
        //   * While EN=1 and a tick occurs:
        //       - VALUE == 0 : expiry event. INT_STATUS[0] is set. In auto-reload mode
        //                      VALUE <= LOAD; in one-shot mode EN clears and VALUE stays 0.
        //       - VALUE != 0 : VALUE <= VALUE - 1.
        //     Hence in auto-reload mode the period is exactly (LOAD+1) ticks.
        //   * Writing LOAD updates LOAD and VALUE together, so a period change applies
        //     immediately.
        //   * When EN=0 the counter holds its value.
        //   * Same-cycle priority: while a count/expiry event happens in one cycle, an
        //     enabled register write to CTRL/LOAD/PRESCALE takes effect as usual, and a
        //     W1C write to INT_STATUS clears the bits written as 1 of the post-event
        //     value (so a same-edge expiry is cleared if the software clears bit 0, and
        //     is never lost otherwise).  A zero-strobe write is not a write and cannot
        //     suppress an event.  Documented in docs/register_map.md §6.2 and tested.
        //   * irq = INT_STATUS[0] & CTRL[1].
        // -----------------------------------------------------------------------------
        
        `include "axil_defs.svh"
        
        module timer_regs #(
            parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
            parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
            parameter int unsigned LOCAL_ADDR_W = `AXIL_PERIPH_LOCAL_ADDR_W
        ) (
 001425     input  logic clk,
~000014     input  logic rst,
        
            // ---------------------------------------------------------------------
            // AXI4-Lite slave
            // ---------------------------------------------------------------------
~000034     input  logic [ADDR_WIDTH-1:0]   s_awaddr,
%000000     input  logic [2:0]              s_awprot,
 000068     input  logic                    s_awvalid,
 000083     output logic                    s_awready,
        
~000026     input  logic [DATA_WIDTH-1:0]   s_wdata,
 000028     input  logic [DATA_WIDTH/8-1:0] s_wstrb,
 000068     input  logic                    s_wvalid,
 000083     output logic                    s_wready,
        
%000002     output logic [1:0]              s_bresp,
 000068     output logic                    s_bvalid,
 000068     input  logic                    s_bready,
        
~000041     input  logic [ADDR_WIDTH-1:0]   s_araddr,
%000000     input  logic [2:0]              s_arprot,
 000083     input  logic                    s_arvalid,
 000098     output logic                    s_arready,
        
~000018     output logic [DATA_WIDTH-1:0]   s_rdata,
%000001     output logic [1:0]              s_rresp,
 000083     output logic                    s_rvalid,
 000083     input  logic                    s_rready,
        
            // ---------------------------------------------------------------------
%000002     output logic irq
        );
        
            localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
            localparam int unsigned PSC_W      = 16;
        
            // ---------------------------------------------------------------------
            // Register port from the AXI4-Lite bridge
            // ---------------------------------------------------------------------
~000023     logic [LOCAL_ADDR_W-1:0] reg_wr_addr;
~000021     logic [DATA_WIDTH-1:0]   reg_wr_data;
~000017     logic [STRB_WIDTH-1:0]   reg_wr_strb;
 000068     logic                    reg_wr_en;
%000003     logic                    reg_wr_hit;
~000022     logic [LOCAL_ADDR_W-1:0] reg_rd_addr;
 000083     logic                    reg_rd_en;
~000045     logic [DATA_WIDTH-1:0]   reg_rd_data;
%000008     logic                    reg_rd_hit;
        
            axil_regfile_slave #(
                .ADDR_WIDTH   (ADDR_WIDTH),
                .DATA_WIDTH   (DATA_WIDTH),
                .LOCAL_ADDR_W (LOCAL_ADDR_W)
            ) u_regfile (
                .clk         (clk), .rst (rst),
                .s_awaddr    (s_awaddr), .s_awprot (s_awprot), .s_awvalid (s_awvalid), .s_awready (s_awready),
                .s_wdata     (s_wdata),  .s_wstrb  (s_wstrb),  .s_wvalid  (s_wvalid),  .s_wready  (s_wready),
                .s_bresp     (s_bresp),  .s_bvalid (s_bvalid), .s_bready  (s_bready),
                .s_araddr    (s_araddr), .s_arprot (s_arprot), .s_arvalid (s_arvalid), .s_arready (s_arready),
                .s_rdata     (s_rdata),  .s_rresp  (s_rresp),  .s_rvalid  (s_rvalid),  .s_rready  (s_rready),
                .reg_wr_addr (reg_wr_addr), .reg_wr_data (reg_wr_data), .reg_wr_strb (reg_wr_strb),
                .reg_wr_en   (reg_wr_en),   .reg_wr_hit  (reg_wr_hit),
                .reg_rd_addr (reg_rd_addr), .reg_rd_en   (reg_rd_en),
                .reg_rd_data (reg_rd_data), .reg_rd_hit  (reg_rd_hit)
            );
        
            // ---------------------------------------------------------------------
            // WSTRB byte merge helper (see gpio_regs.sv for the rationale).
            // Two width-exact variants are needed: the 32-bit counters/control and the
            // 16-bit prescaler. Starting from `cur` guarantees a fully assigned result.
            // ---------------------------------------------------------------------
 000044     function automatic logic [DATA_WIDTH-1:0] strb_apply(
                input logic [DATA_WIDTH-1:0] cur,
                input logic [DATA_WIDTH-1:0] nxt,
                input logic [STRB_WIDTH-1:0] strb
            );
 000044         strb_apply = cur;
 000176         for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
~000168             if (strb[b]) strb_apply[b*8 +: 8] = nxt[b*8 +: 8];
                end
            endfunction
        
%000007     function automatic logic [PSC_W-1:0] strb_apply_psc(
                input logic [PSC_W-1:0]      cur,
                input logic [PSC_W-1:0]      nxt,
                input logic [STRB_WIDTH-1:0] strb
            );
%000007         strb_apply_psc = cur;
~000028         for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
~000016             if (strb[b]) begin
 000128                 for (int unsigned k = 0; k < 8; k++) begin
 000096                     if ((b*8 + k) < PSC_W) begin
 000096                         strb_apply_psc[b*8 + k] = nxt[b*8 + k];
                            end
                        end
                    end
                end
            endfunction
        
            // CTRL is four bits ([3] PRESCALE_EN .. [0] EN).  It is merged through the
            // same byte-enable rule as every other R/W register: a WSTRB bit that is 0
            // leaves the corresponding byte (and therefore its control bits) untouched,
            // so a zero-strobe or upper-byte-only write to CTRL cannot change the
            // control state -- see docs/register_map.md, "WSTRB combinations that touch
            // only unimplemented bytes of a register leave it unchanged".
~000019     function automatic logic [3:0] strb_apply_ctrl(
                input logic [3:0]            cur,
                input logic [3:0]            nxt,
                input logic [STRB_WIDTH-1:0] strb
            );
~000019         strb_apply_ctrl = cur;
~000076         for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
~000057             if (strb[b]) begin
 000216                 for (int unsigned k = 0; k < 8; k++) begin
 000188                     if ((b*8 + k) < 4) begin
 000072                         strb_apply_ctrl[b*8 + k] = nxt[b*8 + k];
                            end
                        end
                    end
                end
            endfunction
        
            // ---------------------------------------------------------------------
            // Storage
            // ---------------------------------------------------------------------
~000010     logic            en_q;
%000002     logic            irq_en_q;
%000002     logic            one_shot_q;
%000002     logic            psc_en_q;
~000010     logic [31:0]     load_q;
~000086     logic [31:0]     value_q;
%000002     logic [PSC_W-1:0] prescale_q;
~000023     logic [PSC_W-1:0] psc_cnt_q;
%000007     logic            expired_q;      // INT_STATUS[0]
        
%000009     logic tick;
~000019     logic expire_evt;
%000009     logic istat_wr;
        
 009644     assign tick = psc_en_q ? (psc_cnt_q == prescale_q) : 1'b1;
            assign expire_evt = en_q & tick & (value_q == 32'd0);
            assign irq = expired_q & irq_en_q;
        
            // INT_STATUS[0] lives in byte 0, so only a write that enables byte 0 can
            // change it.  A WSTRB==0 write therefore takes no write path at all and
            // cannot suppress a same-cycle expiry event (docs/register_map.md §6.1).
            assign istat_wr = reg_wr_en && (reg_wr_addr == `AXIL_TIMER_ISTAT_OFF)
                                        && reg_wr_strb[0];
        
            // ---------------------------------------------------------------------
            // Prescaler
            // ---------------------------------------------------------------------
 001425     always_ff @(posedge clk) begin
 000056         if (rst) begin
 000056             psc_cnt_q <= {PSC_W{1'b0}};
 001330         end else if (!psc_en_q) begin
 001330             psc_cnt_q <= {PSC_W{1'b0}};
~000061         end else if (tick) begin
~000061             psc_cnt_q <= {PSC_W{1'b0}};
 000046         end else begin
 000046             psc_cnt_q <= psc_cnt_q + {{(PSC_W-1){1'b0}}, 1'b1};
                end
            end
        
            // ---------------------------------------------------------------------
            // Write decoding
            // ---------------------------------------------------------------------
 009956     always_comb begin
 009956         case (reg_wr_addr)
                    `AXIL_TIMER_CTRL_OFF,
                    `AXIL_TIMER_LOAD_OFF,
                    `AXIL_TIMER_ISTAT_OFF,
 009487             `AXIL_TIMER_PRESCALE_OFF: reg_wr_hit = 1'b1;
 002531             default:                  reg_wr_hit = 1'b0;
                endcase
            end
        
            // ---------------------------------------------------------------------
            // Counter and control
            // ---------------------------------------------------------------------
 001425     always_ff @(posedge clk) begin
 001369         if (rst) begin
 000056             en_q        <= 1'b0;
 000056             irq_en_q    <= 1'b0;
 000056             one_shot_q  <= 1'b0;
 000056             psc_en_q    <= 1'b0;
 000056             load_q      <= 32'hFFFF_FFFF;
 000056             value_q     <= 32'hFFFF_FFFF;
 000056             prescale_q  <= {PSC_W{1'b0}};
 000056             expired_q   <= 1'b0;
 001369         end else begin
                    // ---- count / expire (lower priority than register writes) -----
~000026             if (expire_evt) begin
~000022                 if (one_shot_q) begin
%000004                     en_q <= 1'b0;
~000022                 end else begin
~000022                     value_q <= load_q;
                        end
 001277             end else if (en_q & tick & (value_q != 32'd0)) begin
 000163                 value_q <= value_q - 32'd1;
                    end
        
                    // ---- INT_STATUS : set on expiry, cleared by W1C --------------
                    // Same-cycle priority (docs/register_map.md §6.2): the expiry event
                    // is applied first, then a write that enables byte 0 clears bit 0 if
                    // it is written as 1.  So the software clear wins over a same-edge
                    // expiry (exactly the bit it cleared) and no other event is lost.
~001369             expired_q <= istat_wr ? ((expired_q | expire_evt) & ~reg_wr_data[0])
 001360                                   : (expired_q | expire_evt);
        
                    // ---- register writes (highest priority) ---------------------
 001305             if (reg_wr_en && (|reg_wr_strb)) begin
 000064                 case (reg_wr_addr)
~000019                     `AXIL_TIMER_CTRL_OFF: begin
~000019                         logic [3:0] ctrl_nxt;
~000019                         ctrl_nxt = strb_apply_ctrl(
~000019                             {psc_en_q, one_shot_q, irq_en_q, en_q},
~000019                             reg_wr_data[3:0], reg_wr_strb);
~000019                         en_q       <= ctrl_nxt[`AXIL_TIMER_CTRL_EN];
~000019                         irq_en_q   <= ctrl_nxt[`AXIL_TIMER_CTRL_IRQ_EN];
~000019                         one_shot_q <= ctrl_nxt[`AXIL_TIMER_CTRL_ONE_SHOT];
~000019                         psc_en_q   <= ctrl_nxt[`AXIL_TIMER_CTRL_PSC_EN];
                            end
~000022                     `AXIL_TIMER_LOAD_OFF: begin
                                // LOAD and VALUE are loaded together so the new period
                                // takes effect immediately.  This block is only entered
                                // for a strobed write, so a WSTRB==0 write leaves both
                                // LOAD and the running counter untouched.
~000022                         load_q  <= strb_apply(load_q, reg_wr_data, reg_wr_strb);
~000022                         value_q <= strb_apply(load_q, reg_wr_data, reg_wr_strb);
                            end
%000007                     `AXIL_TIMER_PRESCALE_OFF: begin
%000007                         prescale_q <= strb_apply_psc(prescale_q,
%000007                                                      reg_wr_data[PSC_W-1:0],
%000007                                                      reg_wr_strb);
                            end
 000016                     default: ;   // ISTAT handled above; VALUE is read-only
                        endcase
                    end
                end
            end
        
            // ---------------------------------------------------------------------
            // Read multiplexer
            // ---------------------------------------------------------------------
 009956     always_comb begin
 009956         reg_rd_hit = 1'b1;
 009956         case (reg_rd_addr)
 008119             `AXIL_TIMER_CTRL_OFF:     reg_rd_data = {28'b0, psc_en_q, one_shot_q, irq_en_q, en_q};
 000909             `AXIL_TIMER_LOAD_OFF:     reg_rd_data = load_q;
 001467             `AXIL_TIMER_VALUE_OFF:    reg_rd_data = value_q;
 000605             `AXIL_TIMER_ISTAT_OFF:    reg_rd_data = {31'b0, expired_q};
 000190             `AXIL_TIMER_PRESCALE_OFF: reg_rd_data = {{(DATA_WIDTH-PSC_W){1'b0}}, prescale_q};
 000315             `AXIL_TIMER_ID_OFF:       reg_rd_data = `AXIL_TIMER_ID;
 000098             default: begin
 000098                 reg_rd_data = {DATA_WIDTH{1'b0}};
 000098                 reg_rd_hit  = 1'b0;
                    end
                endcase
            end
        
        `ifdef AXIL_ASSERTIONS
            // Same-cycle implications as `!guard || condition`: readable by Verilator
            // --assert (simulation) and by Yosys (formal/*.sby) alike.
 001425     always_ff @(posedge clk) begin
 001369         if (!rst) begin
 001369             ap_irq_needs_both:  assert property (!irq || (expired_q & irq_en_q));
 001369             ap_expire_needs_en: assert property (!expire_evt || en_q);
                end
            end
        `endif
        
            // ---------------------------------------------------------------------
            // Deliberately unused interface signals: reg_rd_en (the read mux is purely
            // combinational on reg_rd_addr) and ARPROT (no privilege model).
            // ---------------------------------------------------------------------
 000083     logic unused_ok;
            assign unused_ok = ^reg_rd_en ^ ^s_arprot;
        endmodule
        

//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // uart_regs.sv
        //
        // UART peripheral: AXI4-Lite register block + TX serializer + RX sampler.
        //
        // REGISTER MAP (local offset; see docs/register_map.md)
        //   0x00 CTRL       R/W   [0] TX_EN, [1] RX_EN, [2] LOOPBACK,
        //                         [3] TXDONE_EN, [4] RXAVL_EN, [5] RXOVR_EN, [6] RXFRM_EN
        //   0x04 BAUD       R/W   [15:0] divisor, [31:16] reserved (write as 0)
        //   0x08 STATUS     RO    [0] TX_READY, [1] RX_VALID, [2] TX_BUSY,
        //                         [3] RX_OVERRUN, [4] RX_FRAME_ERR
        //   0x0C TXDATA     WO    write [7:0] to transmit; reads return 0
        //   0x10 RXDATA     RO    read [7:0]; reading clears RX_VALID and INT_STATUS[1]
        //   0x14 INT_STATUS R/W1C [0] TX_DONE, [1] RX_AVAIL, [2] RX_OVERRUN, [3] RX_FRAME_ERR
        //   0x18 INT_ENABLE R/W   [0..3] enables for the INT_STATUS bits
        //   0x3C ID         RO    0x55415254 ("UART")
        //
        // DEFINED BEHAVIOUR (specification; matched by the reference model)
        //   * Frame format: 1 start bit (0), 8 data bits LSB-first, 1 stop bit (1).
        //   * Effective bit period = max(4, BAUD[15:0]) clock cycles. The reset value
        //     BAUD=0 therefore means 4 cycles/bit. BAUD values below 4 are clamped so
        //     that RX mid-bit sampling stays coherent.
        //   * Writing TXDATA while TX_BUSY is 1 is accepted (OKAY) but the byte is
        //     DROPPED. Software must poll STATUS.TX_READY. Documented limitation.
        //   * Writing TXDATA with CTRL.TX_EN=0 is accepted (OKAY) but ignored.
        //   * RX: start-bit detect, mid-bit verification, then one sample per bit
        //     period. Stop bit != 1 sets RX_FRAME_ERR. A completed byte while RX_VALID
        //     is already set sets RX_OVERRUN and the old byte is kept.
        //   * STATUS[3]/STATUS[4] read the same sticky bits as INT_STATUS[2]/[3]; they
        //     clear only via the W1C write to INT_STATUS.
        //   * CTRL.LOOPBACK ties the serialiser output back to the receiver input.
        //   * irq = |(INT_STATUS[3:0] & INT_ENABLE[3:0] & CTRL[6:3]): bit i of
        //     INT_STATUS reaches the interrupt line only when INT_ENABLE[i] and the
        //     matching per-source CTRL enable (TXDONE_EN..RXFRM_EN) are both set.
        //   * Same-cycle priority for the sticky flags (docs/register_map.md §6.2):
        //     rx_done/tx_done events and the RXDATA read side effect are combined
        //     first; a strobed W1C write then clears the bits it writes as 1 of that
        //     combined value. A zero-strobe write is not a write at all.
        // -----------------------------------------------------------------------------
        
        `include "axil_defs.svh"
        
        module uart_regs #(
            parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
            parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
            parameter int unsigned LOCAL_ADDR_W = `AXIL_PERIPH_LOCAL_ADDR_W
        ) (
 001425     input  logic clk,
~000014     input  logic rst,
        
            // ---------------------------------------------------------------------
            // AXI4-Lite slave
            // ---------------------------------------------------------------------
~000012     input  logic [ADDR_WIDTH-1:0]   s_awaddr,
%000000     input  logic [2:0]              s_awprot,
 000035     input  logic                    s_awvalid,
 000050     output logic                    s_awready,
        
~000025     input  logic [DATA_WIDTH-1:0]   s_wdata,
~000028     input  logic [DATA_WIDTH/8-1:0] s_wstrb,
 000035     input  logic                    s_wvalid,
 000050     output logic                    s_wready,
        
%000003     output logic [1:0]              s_bresp,
 000035     output logic                    s_bvalid,
 000035     input  logic                    s_bready,
        
~000024     input  logic [ADDR_WIDTH-1:0]   s_araddr,
%000000     input  logic [2:0]              s_arprot,
 000049     input  logic                    s_arvalid,
 000064     output logic                    s_arready,
        
~000011     output logic [DATA_WIDTH-1:0]   s_rdata,
%000001     output logic [1:0]              s_rresp,
 000049     output logic                    s_rvalid,
 000049     input  logic                    s_rready,
        
            // ---------------------------------------------------------------------
            // Serial lines
            // ---------------------------------------------------------------------
~000015     input  logic uart_rx,
~000016     output logic uart_tx,
%000006     output logic irq
        );
        
            localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
            localparam int unsigned BAUD_W     = `AXIL_UART_BAUD_W;
            localparam int unsigned BAUD_MIN   = 4;
        
            typedef enum logic [1:0] {
                RX_IDLE,
                RX_START,
                RX_DATA,
                RX_STOP
            } rx_state_e;
        
            // ---------------------------------------------------------------------
            // Register port from the AXI4-Lite bridge
            // ---------------------------------------------------------------------
~000011     logic [LOCAL_ADDR_W-1:0] reg_wr_addr;
~000013     logic [DATA_WIDTH-1:0]   reg_wr_data;
%000008     logic [STRB_WIDTH-1:0]   reg_wr_strb;
 000035     logic                    reg_wr_en;
%000004     logic                    reg_wr_hit;
~000024     logic [LOCAL_ADDR_W-1:0] reg_rd_addr;
 000049     logic                    reg_rd_en;
~000023     logic [DATA_WIDTH-1:0]   reg_rd_data;
%000008     logic                    reg_rd_hit;
        
            axil_regfile_slave #(
                .ADDR_WIDTH   (ADDR_WIDTH),
                .DATA_WIDTH   (DATA_WIDTH),
                .LOCAL_ADDR_W (LOCAL_ADDR_W)
            ) u_regfile (
                .clk (clk), .rst (rst),
                .s_awaddr (s_awaddr), .s_awprot (s_awprot), .s_awvalid (s_awvalid), .s_awready (s_awready),
                .s_wdata  (s_wdata),  .s_wstrb  (s_wstrb),  .s_wvalid  (s_wvalid),  .s_wready  (s_wready),
                .s_bresp  (s_bresp),  .s_bvalid (s_bvalid), .s_bready  (s_bready),
                .s_araddr (s_araddr), .s_arprot (s_arprot), .s_arvalid (s_arvalid), .s_arready (s_arready),
                .s_rdata  (s_rdata),  .s_rresp  (s_rresp),  .s_rvalid  (s_rvalid),  .s_rready  (s_rready),
                .reg_wr_addr (reg_wr_addr), .reg_wr_data (reg_wr_data), .reg_wr_strb (reg_wr_strb),
                .reg_wr_en   (reg_wr_en),   .reg_wr_hit  (reg_wr_hit),
                .reg_rd_addr (reg_rd_addr), .reg_rd_en   (reg_rd_en),
                .reg_rd_data (reg_rd_data), .reg_rd_hit  (reg_rd_hit)
            );
        
            // ---------------------------------------------------------------------
            // WSTRB byte merge helper (see gpio_regs.sv). Two width-exact variants:
            // 32-bit control/status registers and the 16-bit baud divisor.
            // ---------------------------------------------------------------------
 000013     function automatic logic [DATA_WIDTH-1:0] strb_apply(
                input logic [DATA_WIDTH-1:0] cur,
                input logic [DATA_WIDTH-1:0] nxt,
                input logic [STRB_WIDTH-1:0] strb
            );
 000013         strb_apply = cur;
 000052         for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
~000039             if (strb[b]) strb_apply[b*8 +: 8] = nxt[b*8 +: 8];
                end
            endfunction
        
%000008     function automatic logic [BAUD_W-1:0] strb_apply_baud(
                input logic [BAUD_W-1:0]     cur,
                input logic [BAUD_W-1:0]     nxt,
                input logic [STRB_WIDTH-1:0] strb
            );
%000008         strb_apply_baud = cur;
~000032         for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
~000027             if (strb[b]) begin
 000216                 for (int unsigned k = 0; k < 8; k++) begin
 000112                     if ((b*8 + k) < BAUD_W) begin
 000112                         strb_apply_baud[b*8 + k] = nxt[b*8 + k];
                            end
                        end
                    end
                end
            endfunction
        
            // ---------------------------------------------------------------------
            // Storage
            // ---------------------------------------------------------------------
%000005     logic [DATA_WIDTH-1:0] ctrl_q;
%000003     logic [BAUD_W-1:0]     baud_q;
%000002     logic [DATA_WIDTH-1:0] ien_q;
%000005     logic [DATA_WIDTH-1:0] istat_q;
        
%000002     logic [7:0]  rx_data_q;
%000005     logic        rx_valid_q;
        
            // TX engine
~000016     logic [9:0]      tx_sr_q;
~000030     logic [3:0]      tx_bit_q;
~000140     logic [15:0]     tx_baud_cnt_q;
%000006     logic            tx_busy_q;
        
            // RX engine
~000015     rx_state_e       rx_st_q;
~000013     logic [7:0]      rx_sr_q;
~000028     logic [3:0]      rx_bit_q;
~000134     logic [15:0]     rx_baud_cnt_q;
        
            // ---------------------------------------------------------------------
            // Control aliases and derived timing
            // ---------------------------------------------------------------------
%000005     logic tx_en, rx_en, loopback;
%000003     logic [15:0] baud_div;
~000023     logic tx_line, rx_line;
        
            assign tx_en    = ctrl_q[`AXIL_UART_CTRL_TX_EN];
            assign rx_en    = ctrl_q[`AXIL_UART_CTRL_RX_EN];
            assign loopback = ctrl_q[`AXIL_UART_CTRL_LOOPBACK];
        
            // Clamp the divider so both TX and RX use an identical, coherent period.
 005374     assign baud_div = (baud_q < 16'(BAUD_MIN)) ? 16'(BAUD_MIN) : baud_q;
        
 008287     assign tx_line = tx_busy_q ? tx_sr_q[0] : 1'b1;
 007680     assign rx_line = loopback ? tx_line : uart_rx;
        
            assign uart_tx = tx_line;
        
            // Interrupt line: INT_STATUS bit i requires both INT_ENABLE[i] and the
            // matching per-source CTRL enable.  CTRL[6:3] is aligned bit-for-bit with
            // INT_STATUS[3:0] (TXDONE_EN/RXAVL_EN/RXOVR_EN/RXFRM_EN), so the two masks
            // can be ANDed directly (docs/register_map.md §3).
            assign irq = |(istat_q[3:0] & ien_q[3:0] & ctrl_q[6:3]);
        
%000007     logic tx_start;
%000006     logic tx_done_evt;
%000007     logic rx_done_evt;
~000023     logic rx_stop_ok;
%000008     logic wr_strobed;
        
            // A write with no byte enabled is accepted with the offset's normal
            // response but changes no state and triggers no action (WSTRB contract,
            // docs/register_map.md): it must not start a frame either.
            assign wr_strobed = |reg_wr_strb;
        
            assign tx_start = reg_wr_en && wr_strobed &&
                              (reg_wr_addr == `AXIL_UART_TXDATA_OFF) && tx_en;
            assign tx_done_evt = tx_busy_q && (tx_bit_q == 4'd9) &&
                                 (tx_baud_cnt_q == baud_div - 16'd1);
        
            // ---------------------------------------------------------------------
            // Write decoding
            // ---------------------------------------------------------------------
 009956     always_comb begin
 009956         case (reg_wr_addr)
                    `AXIL_UART_CTRL_OFF,
                    `AXIL_UART_BAUD_OFF,
                    `AXIL_UART_TXDATA_OFF,
                    `AXIL_UART_ISTAT_OFF,
 009331             `AXIL_UART_IEN_OFF: reg_wr_hit = 1'b1;
 003381             default:            reg_wr_hit = 1'b0;
                endcase
            end
        
            // ---------------------------------------------------------------------
            // TX serialiser
            // ---------------------------------------------------------------------
 001425     always_ff @(posedge clk) begin
 000056         if (rst) begin
 000056             tx_sr_q       <= 10'h3FF;
 000056             tx_bit_q      <= 4'd0;
 000056             tx_baud_cnt_q <= 16'd0;
 000056             tx_busy_q     <= 1'b0;
%000006         end else if (tx_start && !tx_busy_q) begin
                    // {stop, data[7:0], start} shifted out LSB-first => start, d0..d7, stop
%000006             tx_sr_q       <= {1'b1, reg_wr_data[7:0], 1'b0};
%000006             tx_bit_q      <= 4'd0;
%000006             tx_baud_cnt_q <= 16'd0;
%000006             tx_busy_q     <= 1'b1;
 001083         end else if (tx_busy_q) begin
 000220             if (tx_baud_cnt_q == baud_div - 16'd1) begin
 000060                 tx_baud_cnt_q <= 16'd0;
~000054                 if (tx_bit_q == 4'd9) begin
%000006                     tx_busy_q <= 1'b0;
%000006                     tx_sr_q   <= 10'h3FF;
~000054                 end else begin
~000054                     tx_sr_q  <= {1'b1, tx_sr_q[9:1]};
~000054                     tx_bit_q <= tx_bit_q + 4'd1;
                        end
 000220             end else begin
 000220                 tx_baud_cnt_q <= tx_baud_cnt_q + 16'd1;
                    end
                end
            end
        
            // ---------------------------------------------------------------------
            // RX sampler
            // ---------------------------------------------------------------------
 001425     always_ff @(posedge clk) begin
 000056         if (rst) begin
 000056             rx_st_q       <= RX_IDLE;
 000056             rx_sr_q       <= 8'h00;
 000056             rx_bit_q      <= 4'd0;
 000056             rx_baud_cnt_q <= 16'd0;
 001038         end else if (!rx_en) begin
 001038             rx_st_q       <= RX_IDLE;
 001038             rx_baud_cnt_q <= 16'd0;
 000493         end else begin
 000493             case (rx_st_q)
 000225                 RX_IDLE: begin
~000217                     if (!rx_line) begin
%000008                         rx_st_q       <= RX_START;
%000008                         rx_baud_cnt_q <= 16'd0;
                            end
                        end
        
~000016                 RX_START: begin
                            // Verify the start bit at its mid-point to reject glitches.
%000008                     if (rx_baud_cnt_q == (baud_div >> 1) - 16'd1) begin
%000008                         rx_baud_cnt_q <= 16'd0;
%000007                         if (!rx_line) begin
%000007                             rx_st_q  <= RX_DATA;
%000007                             rx_bit_q <= 4'd0;
%000001                         end else begin
%000001                             rx_st_q <= RX_IDLE;
                                end
%000008                     end else begin
%000008                         rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                            end
                        end
        
 000224                 RX_DATA: begin
~000168                     if (rx_baud_cnt_q == baud_div - 16'd1) begin
~000056                         rx_baud_cnt_q <= 16'd0;
~000056                         rx_sr_q       <= {rx_line, rx_sr_q[7:1]};
~000049                         if (rx_bit_q == 4'd7) rx_st_q <= RX_STOP;
~000049                         else                  rx_bit_q <= rx_bit_q + 4'd1;
 000168                     end else begin
 000168                         rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                            end
                        end
        
~000028                 RX_STOP: begin
~000021                     if (rx_baud_cnt_q == baud_div - 16'd1) begin
%000007                         rx_baud_cnt_q <= 16'd0;
%000007                         rx_st_q       <= RX_IDLE;
~000021                     end else begin
~000021                         rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                            end
                        end
        
%000000                 default: rx_st_q <= RX_IDLE;
                    endcase
                end
            end
        
            assign rx_done_evt = (rx_st_q == RX_STOP) &&
                                 (rx_baud_cnt_q == baud_div - 16'd1);
            assign rx_stop_ok  = rx_line;
        
            // ---------------------------------------------------------------------
            // Same-cycle combination for INT_STATUS / RX_VALID
            // ---------------------------------------------------------------------
            // Everything that can change the sticky flags in one cycle is combined
            // here first (rx_done / tx_done events, the RXDATA read side effect), and
            // the register write below then applies a W1C clear to that combined value.
            // This is the same-cycle priority rule of docs/register_map.md §6.2: a
            // software clear wins over a same-cycle event for exactly the bits it
            // clears, and no event is lost on any other bit.  A WSTRB==0 write takes no
            // write path at all, so it cannot suppress an event either.
%000006     logic [DATA_WIDTH-1:0] istat_evt;
%000005     logic                  rx_store_evt;
%000008     logic                  rxdata_rd_clr;
%000005     logic [DATA_WIDTH-1:0] istat_set;
%000005     logic                  rx_valid_set;
        
 009956     always_comb begin
 009956         istat_evt    = {DATA_WIDTH{1'b0}};
 009956         rx_store_evt = 1'b0;
~009911         if (rx_done_evt) begin
%000007             if (!rx_stop_ok) begin
%000007                 istat_evt[`AXIL_UART_IS_RX_FRAME_ERR] = 1'b1;
~000031             end else if (rx_valid_q) begin
%000007                 istat_evt[`AXIL_UART_IS_RX_OVERRUN]   = 1'b1;
~000031             end else begin
~000031                 istat_evt[`AXIL_UART_IS_RX_AVAIL]     = 1'b1;
~000031                 rx_store_evt                          = 1'b1;
                    end
                end
~009912         if (tx_done_evt) begin
~000044             istat_evt[`AXIL_UART_IS_TX_DONE] = 1'b1;
                end
            end
        
            assign rxdata_rd_clr = reg_rd_en && (reg_rd_addr == `AXIL_UART_RXDATA_OFF);
            assign istat_set     = (istat_q | istat_evt) &
                                   ~(rxdata_rd_clr
                                     ? ({{(DATA_WIDTH-1){1'b0}}, 1'b1} <<
                                        `AXIL_UART_IS_RX_AVAIL)
                                     : {DATA_WIDTH{1'b0}});
~009924     assign rx_valid_set  = rxdata_rd_clr ? 1'b0 : (rx_valid_q | rx_store_evt);
        
            // ---------------------------------------------------------------------
            // RX byte handoff, control, status and interrupt flags
            // ---------------------------------------------------------------------
 001425     always_ff @(posedge clk) begin
 001369         if (rst) begin
 000056             ctrl_q     <= '0;
 000056             baud_q     <= {BAUD_W{1'b0}};
 000056             ien_q      <= '0;
 000056             istat_q    <= '0;
 000056             rx_data_q  <= 8'h00;
 000056             rx_valid_q <= 1'b0;
 001369         end else begin
                    // ---- RX byte handoff ----------------------------------------
                    // The byte itself is stored whenever a good byte completes, even if
                    // the RX_VALID flag is cleared again in the same cycle by an RXDATA
                    // read (documented in docs/register_map.md §6.2).
~001364             if (rx_store_evt) begin
%000005                 rx_data_q <= rx_sr_q;
                    end
        
                    // ---- RX_VALID: event set / RXDATA read clear ----------------
 001369             rx_valid_q <= rx_valid_set;
        
                    // ---- INT_STATUS: events first, then a strobed W1C write -----
~001367             if (reg_wr_en && wr_strobed &&
%000002                 (reg_wr_addr == `AXIL_UART_ISTAT_OFF)) begin
%000002                 istat_q <= strb_apply(istat_set, istat_set & ~reg_wr_data,
%000002                                       reg_wr_strb);
 001367             end else begin
 001367                 istat_q <= istat_set;
                    end
        
                    // ---- register writes ----------------------------------------
                    // `wr_strobed` gates every write effect: a WSTRB==0 write is
                    // accepted but must not change state or trigger an action (it
                    // cannot start a frame either -- see `tx_start`).
 001336             if (reg_wr_en && wr_strobed) begin
 000033                 case (reg_wr_addr)
%000009                     `AXIL_UART_CTRL_OFF: begin
%000009                         ctrl_q <= strb_apply(ctrl_q, reg_wr_data & 32'h0000_007F,
%000009                                              reg_wr_strb);
                            end
%000008                     `AXIL_UART_BAUD_OFF: begin
%000008                         baud_q <= strb_apply_baud(baud_q,
%000008                                                   reg_wr_data[BAUD_W-1:0],
%000008                                                   reg_wr_strb);
                            end
%000005                     `AXIL_UART_IEN_OFF: begin
%000005                         ien_q <= strb_apply(ien_q, reg_wr_data & 32'h0000_000F,
%000005                                             reg_wr_strb);
                            end
 000016                     default: ;   // TXDATA triggers the serialiser; others are RO
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
 008050             `AXIL_UART_CTRL_OFF:   reg_rd_data = ctrl_q;
 000543             `AXIL_UART_BAUD_OFF:   reg_rd_data = {{(DATA_WIDTH-BAUD_W){1'b0}}, baud_q};
 000631             `AXIL_UART_STATUS_OFF: reg_rd_data = {27'b0,
 000631                                                   istat_q[`AXIL_UART_IS_RX_FRAME_ERR],
 000631                                                   istat_q[`AXIL_UART_IS_RX_OVERRUN],
 000631                                                   tx_busy_q,
 000631                                                   rx_valid_q,
                                                          ~tx_busy_q};
~000054             `AXIL_UART_TXDATA_OFF: reg_rd_data = {DATA_WIDTH{1'b0}};  // write-only
 001445             `AXIL_UART_RXDATA_OFF: reg_rd_data = {24'b0, rx_data_q};
 001734             `AXIL_UART_ISTAT_OFF:  reg_rd_data = istat_q & 32'h0000_000F;
 000072             `AXIL_UART_IEN_OFF:    reg_rd_data = ien_q & 32'h0000_000F;
 000184             `AXIL_UART_ID_OFF:     reg_rd_data = `AXIL_UART_ID;
 000321             default: begin
 000321                 reg_rd_data = {DATA_WIDTH{1'b0}};
 000321                 reg_rd_hit  = 1'b0;
                    end
                endcase
            end
        
        `ifdef AXIL_ASSERTIONS
            // Same-cycle implications as `!guard || condition`: readable by Verilator
            // --assert (simulation) and by Yosys (formal/*.sby) alike.
 001425     always_ff @(posedge clk) begin
 001369         if (!rst) begin
 001369             ap_irq_needs_both: assert property (!irq || |(istat_q & ien_q));
 001369             ap_txbusy_holds:   assert property (!tx_done_evt || tx_busy_q);
                end
            end
        `endif
        
            // ---------------------------------------------------------------------
            // Deliberately unused interface signal: ARPROT (no privilege model).
            // reg_rd_en is used only for the RXDATA-side-effect clear above and is
            // otherwise not needed because the read mux is combinational.
            // ---------------------------------------------------------------------
%000000     logic unused_ok;
            assign unused_ok = ^s_arprot;
        endmodule
        

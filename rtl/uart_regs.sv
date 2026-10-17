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
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // AXI4-Lite slave
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
    // Serial lines
    // ---------------------------------------------------------------------
    input  logic uart_rx,
    output logic uart_tx,
    output logic irq
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
    logic [LOCAL_ADDR_W-1:0] reg_wr_addr;
    logic [DATA_WIDTH-1:0]   reg_wr_data;
    logic [STRB_WIDTH-1:0]   reg_wr_strb;
    logic                    reg_wr_en;
    logic                    reg_wr_hit;
    logic [LOCAL_ADDR_W-1:0] reg_rd_addr;
    logic                    reg_rd_en;
    logic [DATA_WIDTH-1:0]   reg_rd_data;
    logic                    reg_rd_hit;

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
    function automatic logic [DATA_WIDTH-1:0] strb_apply(
        input logic [DATA_WIDTH-1:0] cur,
        input logic [DATA_WIDTH-1:0] nxt,
        input logic [STRB_WIDTH-1:0] strb
    );
        strb_apply = cur;
        for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
            if (strb[b]) strb_apply[b*8 +: 8] = nxt[b*8 +: 8];
        end
    endfunction

    function automatic logic [BAUD_W-1:0] strb_apply_baud(
        input logic [BAUD_W-1:0]     cur,
        input logic [BAUD_W-1:0]     nxt,
        input logic [STRB_WIDTH-1:0] strb
    );
        strb_apply_baud = cur;
        for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
            if (strb[b]) begin
                for (int unsigned k = 0; k < 8; k++) begin
                    if ((b*8 + k) < BAUD_W) begin
                        strb_apply_baud[b*8 + k] = nxt[b*8 + k];
                    end
                end
            end
        end
    endfunction

    // ---------------------------------------------------------------------
    // Storage
    // ---------------------------------------------------------------------
    logic [DATA_WIDTH-1:0] ctrl_q;
    logic [BAUD_W-1:0]     baud_q;
    logic [DATA_WIDTH-1:0] ien_q;
    logic [DATA_WIDTH-1:0] istat_q;

    logic [7:0]  rx_data_q;
    logic        rx_valid_q;

    // TX engine
    logic [9:0]      tx_sr_q;
    logic [3:0]      tx_bit_q;
    logic [15:0]     tx_baud_cnt_q;
    logic            tx_busy_q;

    // RX engine
    rx_state_e       rx_st_q;
    logic [7:0]      rx_sr_q;
    logic [3:0]      rx_bit_q;
    logic [15:0]     rx_baud_cnt_q;

    // ---------------------------------------------------------------------
    // Control aliases and derived timing
    // ---------------------------------------------------------------------
    logic tx_en, rx_en, loopback;
    logic [15:0] baud_div;
    logic tx_line, rx_line;

    assign tx_en    = ctrl_q[`AXIL_UART_CTRL_TX_EN];
    assign rx_en    = ctrl_q[`AXIL_UART_CTRL_RX_EN];
    assign loopback = ctrl_q[`AXIL_UART_CTRL_LOOPBACK];

    // Clamp the divider so both TX and RX use an identical, coherent period.
    assign baud_div = (baud_q < 16'(BAUD_MIN)) ? 16'(BAUD_MIN) : baud_q;

    assign tx_line = tx_busy_q ? tx_sr_q[0] : 1'b1;
    assign rx_line = loopback ? tx_line : uart_rx;

    assign uart_tx = tx_line;

    // Interrupt line: INT_STATUS bit i requires both INT_ENABLE[i] and the
    // matching per-source CTRL enable.  CTRL[6:3] is aligned bit-for-bit with
    // INT_STATUS[3:0] (TXDONE_EN/RXAVL_EN/RXOVR_EN/RXFRM_EN), so the two masks
    // can be ANDed directly (docs/register_map.md §3).
    assign irq = |(istat_q[3:0] & ien_q[3:0] & ctrl_q[6:3]);

    logic tx_start;
    logic tx_done_evt;
    logic rx_done_evt;
    logic rx_stop_ok;
    logic wr_strobed;

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
    always_comb begin
        case (reg_wr_addr)
            `AXIL_UART_CTRL_OFF,
            `AXIL_UART_BAUD_OFF,
            `AXIL_UART_TXDATA_OFF,
            `AXIL_UART_ISTAT_OFF,
            `AXIL_UART_IEN_OFF: reg_wr_hit = 1'b1;
            default:            reg_wr_hit = 1'b0;
        endcase
    end

    // ---------------------------------------------------------------------
    // TX serialiser
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            tx_sr_q       <= 10'h3FF;
            tx_bit_q      <= 4'd0;
            tx_baud_cnt_q <= 16'd0;
            tx_busy_q     <= 1'b0;
        end else if (tx_start && !tx_busy_q) begin
            // {stop, data[7:0], start} shifted out LSB-first => start, d0..d7, stop
            tx_sr_q       <= {1'b1, reg_wr_data[7:0], 1'b0};
            tx_bit_q      <= 4'd0;
            tx_baud_cnt_q <= 16'd0;
            tx_busy_q     <= 1'b1;
        end else if (tx_busy_q) begin
            if (tx_baud_cnt_q == baud_div - 16'd1) begin
                tx_baud_cnt_q <= 16'd0;
                if (tx_bit_q == 4'd9) begin
                    tx_busy_q <= 1'b0;
                    tx_sr_q   <= 10'h3FF;
                end else begin
                    tx_sr_q  <= {1'b1, tx_sr_q[9:1]};
                    tx_bit_q <= tx_bit_q + 4'd1;
                end
            end else begin
                tx_baud_cnt_q <= tx_baud_cnt_q + 16'd1;
            end
        end
    end

    // ---------------------------------------------------------------------
    // RX sampler
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            rx_st_q       <= RX_IDLE;
            rx_sr_q       <= 8'h00;
            rx_bit_q      <= 4'd0;
            rx_baud_cnt_q <= 16'd0;
        end else if (!rx_en) begin
            rx_st_q       <= RX_IDLE;
            rx_baud_cnt_q <= 16'd0;
        end else begin
            case (rx_st_q)
                RX_IDLE: begin
                    if (!rx_line) begin
                        rx_st_q       <= RX_START;
                        rx_baud_cnt_q <= 16'd0;
                    end
                end

                RX_START: begin
                    // Verify the start bit at its mid-point to reject glitches.
                    if (rx_baud_cnt_q == (baud_div >> 1) - 16'd1) begin
                        rx_baud_cnt_q <= 16'd0;
                        if (!rx_line) begin
                            rx_st_q  <= RX_DATA;
                            rx_bit_q <= 4'd0;
                        end else begin
                            rx_st_q <= RX_IDLE;
                        end
                    end else begin
                        rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                    end
                end

                RX_DATA: begin
                    if (rx_baud_cnt_q == baud_div - 16'd1) begin
                        rx_baud_cnt_q <= 16'd0;
                        rx_sr_q       <= {rx_line, rx_sr_q[7:1]};
                        if (rx_bit_q == 4'd7) rx_st_q <= RX_STOP;
                        else                  rx_bit_q <= rx_bit_q + 4'd1;
                    end else begin
                        rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                    end
                end

                RX_STOP: begin
                    if (rx_baud_cnt_q == baud_div - 16'd1) begin
                        rx_baud_cnt_q <= 16'd0;
                        rx_st_q       <= RX_IDLE;
                    end else begin
                        rx_baud_cnt_q <= rx_baud_cnt_q + 16'd1;
                    end
                end

                default: rx_st_q <= RX_IDLE;
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
    logic [DATA_WIDTH-1:0] istat_evt;
    logic                  rx_store_evt;
    logic                  rxdata_rd_clr;
    logic [DATA_WIDTH-1:0] istat_set;
    logic                  rx_valid_set;

    always_comb begin
        istat_evt    = {DATA_WIDTH{1'b0}};
        rx_store_evt = 1'b0;
        if (rx_done_evt) begin
            if (!rx_stop_ok) begin
                istat_evt[`AXIL_UART_IS_RX_FRAME_ERR] = 1'b1;
            end else if (rx_valid_q) begin
                istat_evt[`AXIL_UART_IS_RX_OVERRUN]   = 1'b1;
            end else begin
                istat_evt[`AXIL_UART_IS_RX_AVAIL]     = 1'b1;
                rx_store_evt                          = 1'b1;
            end
        end
        if (tx_done_evt) begin
            istat_evt[`AXIL_UART_IS_TX_DONE] = 1'b1;
        end
    end

    assign rxdata_rd_clr = reg_rd_en && (reg_rd_addr == `AXIL_UART_RXDATA_OFF);
    assign istat_set     = (istat_q | istat_evt) &
                           ~(rxdata_rd_clr
                             ? ({{(DATA_WIDTH-1){1'b0}}, 1'b1} <<
                                `AXIL_UART_IS_RX_AVAIL)
                             : {DATA_WIDTH{1'b0}});
    assign rx_valid_set  = rxdata_rd_clr ? 1'b0 : (rx_valid_q | rx_store_evt);

    // ---------------------------------------------------------------------
    // RX byte handoff, control, status and interrupt flags
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            ctrl_q     <= '0;
            baud_q     <= {BAUD_W{1'b0}};
            ien_q      <= '0;
            istat_q    <= '0;
            rx_data_q  <= 8'h00;
            rx_valid_q <= 1'b0;
        end else begin
            // ---- RX byte handoff ----------------------------------------
            // The byte itself is stored whenever a good byte completes, even if
            // the RX_VALID flag is cleared again in the same cycle by an RXDATA
            // read (documented in docs/register_map.md §6.2).
            if (rx_store_evt) begin
                rx_data_q <= rx_sr_q;
            end

            // ---- RX_VALID: event set / RXDATA read clear ----------------
            rx_valid_q <= rx_valid_set;

            // ---- INT_STATUS: events first, then a strobed W1C write -----
            if (reg_wr_en && wr_strobed &&
                (reg_wr_addr == `AXIL_UART_ISTAT_OFF)) begin
                istat_q <= strb_apply(istat_set, istat_set & ~reg_wr_data,
                                      reg_wr_strb);
            end else begin
                istat_q <= istat_set;
            end

            // ---- register writes ----------------------------------------
            // `wr_strobed` gates every write effect: a WSTRB==0 write is
            // accepted but must not change state or trigger an action (it
            // cannot start a frame either -- see `tx_start`).
            if (reg_wr_en && wr_strobed) begin
                case (reg_wr_addr)
                    `AXIL_UART_CTRL_OFF: begin
                        ctrl_q <= strb_apply(ctrl_q, reg_wr_data & 32'h0000_007F,
                                             reg_wr_strb);
                    end
                    `AXIL_UART_BAUD_OFF: begin
                        baud_q <= strb_apply_baud(baud_q,
                                                  reg_wr_data[BAUD_W-1:0],
                                                  reg_wr_strb);
                    end
                    `AXIL_UART_IEN_OFF: begin
                        ien_q <= strb_apply(ien_q, reg_wr_data & 32'h0000_000F,
                                            reg_wr_strb);
                    end
                    default: ;   // TXDATA triggers the serialiser; others are RO
                endcase
            end
        end
    end

    // ---------------------------------------------------------------------
    // Read multiplexer
    // ---------------------------------------------------------------------
    always_comb begin
        reg_rd_hit = 1'b1;
        case (reg_rd_addr)
            `AXIL_UART_CTRL_OFF:   reg_rd_data = ctrl_q;
            `AXIL_UART_BAUD_OFF:   reg_rd_data = {{(DATA_WIDTH-BAUD_W){1'b0}}, baud_q};
            `AXIL_UART_STATUS_OFF: reg_rd_data = {27'b0,
                                                  istat_q[`AXIL_UART_IS_RX_FRAME_ERR],
                                                  istat_q[`AXIL_UART_IS_RX_OVERRUN],
                                                  tx_busy_q,
                                                  rx_valid_q,
                                                  ~tx_busy_q};
            `AXIL_UART_TXDATA_OFF: reg_rd_data = {DATA_WIDTH{1'b0}};  // write-only
            `AXIL_UART_RXDATA_OFF: reg_rd_data = {24'b0, rx_data_q};
            `AXIL_UART_ISTAT_OFF:  reg_rd_data = istat_q & 32'h0000_000F;
            `AXIL_UART_IEN_OFF:    reg_rd_data = ien_q & 32'h0000_000F;
            `AXIL_UART_ID_OFF:     reg_rd_data = `AXIL_UART_ID;
            default: begin
                reg_rd_data = {DATA_WIDTH{1'b0}};
                reg_rd_hit  = 1'b0;
            end
        endcase
    end

`ifdef AXIL_ASSERTIONS
    // Same-cycle implications as `!guard || condition`: readable by Verilator
    // --assert (simulation) and by Yosys (formal/*.sby) alike.
    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_irq_needs_both: assert property (!irq || |(istat_q & ien_q));
            ap_txbusy_holds:   assert property (!tx_done_evt || tx_busy_q);
        end
    end
`endif

    // ---------------------------------------------------------------------
    // Deliberately unused interface signal: ARPROT (no privilege model).
    // reg_rd_en is used only for the RXDATA-side-effect clear above and is
    // otherwise not needed because the read mux is combinational.
    // ---------------------------------------------------------------------
    logic unused_ok;
    assign unused_ok = ^s_arprot;
endmodule

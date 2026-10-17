// -----------------------------------------------------------------------------
// gpio_regs.sv
//
// GPIO peripheral with an AXI4-Lite register interface.
//
// REGISTER MAP (local offset, see docs/register_map.md for the authoritative spec)
//   0x00 DIR        R/W  [GPIO_WIDTH-1:0]   1 = pin driven as output
//   0x04 OUT        R/W  [GPIO_WIDTH-1:0]   output value
//   0x08 IN         RO   [GPIO_WIDTH-1:0]   2-flop synchronised pin value
//   0x0C INT_ENABLE R/W  [GPIO_WIDTH-1:0]   per-pin interrupt enable
//   0x10 INT_STATUS R/W1C[GPIO_WIDTH-1:0]   pin-change event, write 1 to clear
//   0x14 INT_TYPE   R/W  [GPIO_WIDTH-1:0]   0 = any edge, 1 = rising edge only
//   0x3C ID         RO                      0x47494F00
//
// Behaviour notes
//   * IN is synchronised with two flops, so a pin change appears in IN one
//     clock after it reaches the first stage, i.e. two clock edges after the
//     pin is driven.  The change flag compares the second stage with its own
//     delayed copy, so INT_STATUS is set on the clock edge AFTER the new level
//     becomes visible in IN (see docs/register_map.md §4.1).
//   * INT_STATUS is set when a change is detected on an enabled pin. A write
//     with WSTRB byte b enabled clears the bits of that byte that are written
//     as 1 (write-1-to-clear); bits written as 0 keep their value, including a
//     same-cycle event set (docs/register_map.md §6.2).
//   * Writes to reserved bits are ignored; unused high bits read back as 0.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module gpio_regs #(
    parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
    parameter int unsigned GPIO_WIDTH   = 8,
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
    // GPIO pins
    // ---------------------------------------------------------------------
    input  logic [GPIO_WIDTH-1:0]   gpio_in,
    output logic [GPIO_WIDTH-1:0]   gpio_out,
    output logic [GPIO_WIDTH-1:0]   gpio_dir,
    output logic                    irq
);

    localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;

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
        .clk         (clk),
        .rst         (rst),
        .s_awaddr    (s_awaddr),
        .s_awprot    (s_awprot),
        .s_awvalid   (s_awvalid),
        .s_awready   (s_awready),
        .s_wdata     (s_wdata),
        .s_wstrb     (s_wstrb),
        .s_wvalid    (s_wvalid),
        .s_wready    (s_wready),
        .s_bresp     (s_bresp),
        .s_bvalid    (s_bvalid),
        .s_bready    (s_bready),
        .s_araddr    (s_araddr),
        .s_arprot    (s_arprot),
        .s_arvalid   (s_arvalid),
        .s_arready   (s_arready),
        .s_rdata     (s_rdata),
        .s_rresp     (s_rresp),
        .s_rvalid    (s_rvalid),
        .s_rready    (s_rready),
        .reg_wr_addr (reg_wr_addr),
        .reg_wr_data (reg_wr_data),
        .reg_wr_strb (reg_wr_strb),
        .reg_wr_en   (reg_wr_en),
        .reg_wr_hit  (reg_wr_hit),
        .reg_rd_addr (reg_rd_addr),
        .reg_rd_en   (reg_rd_en),
        .reg_rd_data (reg_rd_data),
        .reg_rd_hit  (reg_rd_hit)
    );

    // ---------------------------------------------------------------------
    // WSTRB byte merge helper.
    //
    // Bytes whose WSTRB bit is 0 keep their current value. The `if` guard makes
    // the helper correct for registers narrower than DATA_WIDTH (only the bytes
    // that overlap the register can change it), and the `= cur` initialisation
    // guarantees every bit of the result is assigned.
    // ---------------------------------------------------------------------
    localparam int unsigned RW_W = GPIO_WIDTH;

    function automatic logic [RW_W-1:0] strb_apply(
        input logic [RW_W-1:0]       cur,
        input logic [RW_W-1:0]       nxt,
        input logic [STRB_WIDTH-1:0] strb
    );
        strb_apply = cur;
        for (int unsigned b = 0; b < STRB_WIDTH; b++) begin
            if (strb[b]) begin
                for (int unsigned k = 0; k < 8; k++) begin
                    if ((b*8 + k) < RW_W) begin
                        strb_apply[b*8 + k] = nxt[b*8 + k];
                    end
                end
            end
        end
    endfunction

    // ---------------------------------------------------------------------
    // Register storage
    // ---------------------------------------------------------------------
    logic [GPIO_WIDTH-1:0] dir_q;
    logic [GPIO_WIDTH-1:0] out_q;
    logic [GPIO_WIDTH-1:0] ien_q;
    logic [GPIO_WIDTH-1:0] itype_q;
    logic [GPIO_WIDTH-1:0] istat_q;

    logic [GPIO_WIDTH-1:0] in_s1_q;
    logic [GPIO_WIDTH-1:0] in_s2_q;
    logic [GPIO_WIDTH-1:0] in_d_q;

    logic [GPIO_WIDTH-1:0] in_chg;
    logic [GPIO_WIDTH-1:0] in_evt;

    // Same-cycle priority for the sticky flags (docs/register_map.md §6.2): the
    // event set is applied first, then a strobed W1C write clears the bits
    // written as 1 of that post-event value.  A write that enables no byte is
    // not a write at all, so it cannot suppress a same-cycle event either.
    logic [GPIO_WIDTH-1:0] istat_set;
    logic [GPIO_WIDTH-1:0] istat_clr;
    logic                  istat_wr;

    assign istat_set = istat_q | (in_evt & ien_q);
    assign istat_clr = istat_set & ~reg_wr_data[GPIO_WIDTH-1:0];
    assign istat_wr  = reg_wr_en && (|reg_wr_strb) &&
                       (reg_wr_addr == `AXIL_GPIO_ISTAT_OFF);

    assign gpio_out = out_q;
    assign gpio_dir = dir_q;
    assign irq      = |(istat_q & ien_q);

    // ---------------------------------------------------------------------
    // Pin synchroniser and edge detect
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            in_s1_q <= '0;
            in_s2_q <= '0;
            in_d_q  <= '0;
        end else begin
            in_s1_q <= gpio_in;
            in_s2_q <= in_s1_q;
            in_d_q  <= in_s2_q;
        end
    end

    assign in_chg = in_s2_q ^ in_d_q;

    // Per-pin edge selection: ITYPE bit = 1 selects rising-edge-only.
    always_comb begin
        for (int unsigned i = 0; i < GPIO_WIDTH; i++) begin
            in_evt[i] = itype_q[i] ? (in_chg[i] & in_s2_q[i]) : in_chg[i];
        end
    end

    // ---------------------------------------------------------------------
    // Write decoding
    // ---------------------------------------------------------------------
    always_comb begin
        reg_wr_hit = 1'b1;
        case (reg_wr_addr)
            `AXIL_GPIO_DIR_OFF,
            `AXIL_GPIO_OUT_OFF,
            `AXIL_GPIO_IEN_OFF,
            `AXIL_GPIO_ISTAT_OFF,
            `AXIL_GPIO_ITYPE_OFF: reg_wr_hit = 1'b1;
            default:              reg_wr_hit = 1'b0;
        endcase
    end

    // ---------------------------------------------------------------------
    // Register updates
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            dir_q   <= '0;
            out_q   <= '0;
            ien_q   <= '0;
            itype_q <= '0;
            istat_q <= '0;
        end else begin
            // Interrupt status: event set first, then a strobed W1C write that
            // clears the bits written as 1 of the post-event value.  A WSTRB==0
            // write takes no write path and cannot lose the event either.
            istat_q <= istat_wr ? strb_apply(istat_set, istat_clr, reg_wr_strb)
                                : istat_set;

            if (reg_wr_en && (|reg_wr_strb)) begin
                case (reg_wr_addr)
                    `AXIL_GPIO_DIR_OFF: begin
                        dir_q <= strb_apply(dir_q, reg_wr_data[GPIO_WIDTH-1:0],
                                            reg_wr_strb);
                    end
                    `AXIL_GPIO_OUT_OFF: begin
                        out_q <= strb_apply(out_q, reg_wr_data[GPIO_WIDTH-1:0],
                                            reg_wr_strb);
                    end
                    `AXIL_GPIO_IEN_OFF: begin
                        ien_q <= strb_apply(ien_q, reg_wr_data[GPIO_WIDTH-1:0],
                                            reg_wr_strb);
                    end
                    `AXIL_GPIO_ITYPE_OFF: begin
                        itype_q <= strb_apply(itype_q, reg_wr_data[GPIO_WIDTH-1:0],
                                              reg_wr_strb);
                    end
                    default: ;   // INT_STATUS handled above; others are RO
                endcase
            end
        end
    end

    // ---------------------------------------------------------------------
    // Read multiplexer (combinational in the AR-accept cycle)
    // ---------------------------------------------------------------------
    always_comb begin
        reg_rd_hit = 1'b1;
        case (reg_rd_addr)
            `AXIL_GPIO_DIR_OFF:   reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, dir_q};
            `AXIL_GPIO_OUT_OFF:   reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, out_q};
            `AXIL_GPIO_IN_OFF:    reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, in_s2_q};
            `AXIL_GPIO_IEN_OFF:   reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, ien_q};
            `AXIL_GPIO_ISTAT_OFF: reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, istat_q};
            `AXIL_GPIO_ITYPE_OFF: reg_rd_data = {{(DATA_WIDTH-GPIO_WIDTH){1'b0}}, itype_q};
            `AXIL_GPIO_ID_OFF:    reg_rd_data = `AXIL_GPIO_ID;
            default: begin
                reg_rd_data = {DATA_WIDTH{1'b0}};
                reg_rd_hit  = 1'b0;
            end
        endcase
    end

`ifdef AXIL_ASSERTIONS
    // Same-cycle implication as `!guard || condition`: readable by Verilator
    // --assert (simulation) and by Yosys (formal/*.sby) alike.
    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_irq_needs_enable: assert property (!irq || |(istat_q & ien_q));
        end
    end
`endif

    // ---------------------------------------------------------------------
    // Deliberately unused interface signals.
    //
    //  * reg_rd_en pulses in the read-accept cycle, but the read mux below is
    //    purely combinational on reg_rd_addr, so the pulse is not needed.
    //  * WSTRB/WDATA bits above GPIO_WIDTH do not address any GPIO register bit.
    //  * AWPROT/ARPROT are accepted and ignored: this subsystem has no privilege
    //    or security model (documented in docs/protocol_assumptions.md).
    // ---------------------------------------------------------------------
    logic unused_ok;
    assign unused_ok = ^reg_rd_en ^ ^reg_wr_data ^ ^s_awprot ^ ^s_arprot;
endmodule

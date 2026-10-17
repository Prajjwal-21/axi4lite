// -----------------------------------------------------------------------------
// tb/harness/peripheral_unit_harness.sv
//
// Testbench-only harness (NOT part of the synthesizable deliverable).
//
// Exposes the three peripheral blocks as three INDEPENDENT flat AXI4-Lite slave
// ports, so a testbench can drive each one directly and control the arrival
// order of AW and W on every individual port.
//
// WHY THIS EXISTS
//   Through the subsystem top, the crossbar only arbitrates once both halves of
//   a write have been buffered, so the register bridge always sees AW and W in
//   the same cycle.  The bridge's independent-AW/W path, its per-channel READY
//   gating and its read-before-write semantics are therefore only directly
//   observable at this level.
//
// The ports are flat scalars (no packed arrays): each port is single-master, so
// array dimensions would only make the Python pin access ambiguous.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module peripheral_unit_harness #(
    parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
    parameter int unsigned GPIO_WIDTH   = 8,
    parameter int unsigned LOCAL_ADDR_W = `AXIL_PERIPH_LOCAL_ADDR_W
) (
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // UART AXI4-Lite slave port
    // ---------------------------------------------------------------------
    input  logic [ADDR_WIDTH-1:0]   u_awaddr,
    input  logic [2:0]              u_awprot,
    input  logic                    u_awvalid,
    output logic                    u_awready,
    input  logic [DATA_WIDTH-1:0]   u_wdata,
    input  logic [DATA_WIDTH/8-1:0] u_wstrb,
    input  logic                    u_wvalid,
    output logic                    u_wready,
    output logic [1:0]              u_bresp,
    output logic                    u_bvalid,
    input  logic                    u_bready,
    input  logic [ADDR_WIDTH-1:0]   u_araddr,
    input  logic [2:0]              u_arprot,
    input  logic                    u_arvalid,
    output logic                    u_arready,
    output logic [DATA_WIDTH-1:0]   u_rdata,
    output logic [1:0]              u_rresp,
    output logic                    u_rvalid,
    input  logic                    u_rready,
    input  logic                    uart_rx,
    output logic                    uart_tx,
    output logic                    u_irq,

    // ---------------------------------------------------------------------
    // GPIO AXI4-Lite slave port
    // ---------------------------------------------------------------------
    input  logic [ADDR_WIDTH-1:0]   g_awaddr,
    input  logic [2:0]              g_awprot,
    input  logic                    g_awvalid,
    output logic                    g_awready,
    input  logic [DATA_WIDTH-1:0]   g_wdata,
    input  logic [DATA_WIDTH/8-1:0] g_wstrb,
    input  logic                    g_wvalid,
    output logic                    g_wready,
    output logic [1:0]              g_bresp,
    output logic                    g_bvalid,
    input  logic                    g_bready,
    input  logic [ADDR_WIDTH-1:0]   g_araddr,
    input  logic [2:0]              g_arprot,
    input  logic                    g_arvalid,
    output logic                    g_arready,
    output logic [DATA_WIDTH-1:0]   g_rdata,
    output logic [1:0]              g_rresp,
    output logic                    g_rvalid,
    input  logic                    g_rready,
    input  logic [GPIO_WIDTH-1:0]   gpio_in,
    output logic [GPIO_WIDTH-1:0]   gpio_out,
    output logic [GPIO_WIDTH-1:0]   gpio_dir,
    output logic                    g_irq,

    // ---------------------------------------------------------------------
    // TIMER AXI4-Lite slave port
    // ---------------------------------------------------------------------
    input  logic [ADDR_WIDTH-1:0]   t_awaddr,
    input  logic [2:0]              t_awprot,
    input  logic                    t_awvalid,
    output logic                    t_awready,
    input  logic [DATA_WIDTH-1:0]   t_wdata,
    input  logic [DATA_WIDTH/8-1:0] t_wstrb,
    input  logic                    t_wvalid,
    output logic                    t_wready,
    output logic [1:0]              t_bresp,
    output logic                    t_bvalid,
    input  logic                    t_bready,
    input  logic [ADDR_WIDTH-1:0]   t_araddr,
    input  logic [2:0]              t_arprot,
    input  logic                    t_arvalid,
    output logic                    t_arready,
    output logic [DATA_WIDTH-1:0]   t_rdata,
    output logic [1:0]              t_rresp,
    output logic                    t_rvalid,
    input  logic                    t_rready,
    output logic                    t_irq
);

    uart_regs #(
        .ADDR_WIDTH   (ADDR_WIDTH),
        .DATA_WIDTH   (DATA_WIDTH),
        .LOCAL_ADDR_W (LOCAL_ADDR_W)
    ) u_uart (
        .clk (clk), .rst (rst),
        .s_awaddr (u_awaddr), .s_awprot (u_awprot), .s_awvalid (u_awvalid), .s_awready (u_awready),
        .s_wdata  (u_wdata),  .s_wstrb  (u_wstrb),  .s_wvalid  (u_wvalid),  .s_wready  (u_wready),
        .s_bresp  (u_bresp),  .s_bvalid (u_bvalid), .s_bready  (u_bready),
        .s_araddr (u_araddr), .s_arprot (u_arprot), .s_arvalid (u_arvalid), .s_arready (u_arready),
        .s_rdata  (u_rdata),  .s_rresp  (u_rresp),  .s_rvalid  (u_rvalid),  .s_rready  (u_rready),
        .uart_rx  (uart_rx),  .uart_tx  (uart_tx),  .irq (u_irq)
    );

    gpio_regs #(
        .ADDR_WIDTH   (ADDR_WIDTH),
        .DATA_WIDTH   (DATA_WIDTH),
        .GPIO_WIDTH   (GPIO_WIDTH),
        .LOCAL_ADDR_W (LOCAL_ADDR_W)
    ) u_gpio (
        .clk (clk), .rst (rst),
        .s_awaddr (g_awaddr), .s_awprot (g_awprot), .s_awvalid (g_awvalid), .s_awready (g_awready),
        .s_wdata  (g_wdata),  .s_wstrb  (g_wstrb),  .s_wvalid  (g_wvalid),  .s_wready  (g_wready),
        .s_bresp  (g_bresp),  .s_bvalid (g_bvalid), .s_bready  (g_bready),
        .s_araddr (g_araddr), .s_arprot (g_arprot), .s_arvalid (g_arvalid), .s_arready (g_arready),
        .s_rdata  (g_rdata),  .s_rresp  (g_rresp),  .s_rvalid  (g_rvalid),  .s_rready  (g_rready),
        .gpio_in  (gpio_in),  .gpio_out (gpio_out), .gpio_dir (gpio_dir), .irq (g_irq)
    );

    timer_regs #(
        .ADDR_WIDTH   (ADDR_WIDTH),
        .DATA_WIDTH   (DATA_WIDTH),
        .LOCAL_ADDR_W (LOCAL_ADDR_W)
    ) u_timer (
        .clk (clk), .rst (rst),
        .s_awaddr (t_awaddr), .s_awprot (t_awprot), .s_awvalid (t_awvalid), .s_awready (t_awready),
        .s_wdata  (t_wdata),  .s_wstrb  (t_wstrb),  .s_wvalid  (t_wvalid),  .s_wready  (t_wready),
        .s_bresp  (t_bresp),  .s_bvalid (t_bvalid), .s_bready  (t_bready),
        .s_araddr (t_araddr), .s_arprot (t_arprot), .s_arvalid (t_arvalid), .s_arready (t_arready),
        .s_rdata  (t_rdata),  .s_rresp  (t_rresp),  .s_rvalid  (t_rvalid),  .s_rready  (t_rready),
        .irq (t_irq)
    );

    // ---------------------------------------------------------------------
    // Boundary protocol checkers.
    //
    // The peripherals are the slaves of these ports: each one drives its READYs,
    // BVALID and RVALID, so DUT_IS_SLAVE enables the "own side is quiet during
    // reset" checks on exactly those signals.  The handshake and payload rules
    // are checked on every port unconditionally (see
    // tb/assertions/axil_protocol_checker.sv).
    // ---------------------------------------------------------------------
    axil_protocol_checker #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH), .DUT_IS_SLAVE (1'b1)
    ) u_chk_uart (
        .clk (clk), .rst (rst),
        .awaddr (u_awaddr), .awprot (u_awprot), .awvalid (u_awvalid), .awready (u_awready),
        .wdata (u_wdata), .wstrb (u_wstrb), .wvalid (u_wvalid), .wready (u_wready),
        .bresp (u_bresp), .bvalid (u_bvalid), .bready (u_bready),
        .araddr (u_araddr), .arprot (u_arprot), .arvalid (u_arvalid), .arready (u_arready),
        .rdata (u_rdata), .rresp (u_rresp), .rvalid (u_rvalid), .rready (u_rready)
    );

    axil_protocol_checker #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH), .DUT_IS_SLAVE (1'b1)
    ) u_chk_gpio (
        .clk (clk), .rst (rst),
        .awaddr (g_awaddr), .awprot (g_awprot), .awvalid (g_awvalid), .awready (g_awready),
        .wdata (g_wdata), .wstrb (g_wstrb), .wvalid (g_wvalid), .wready (g_wready),
        .bresp (g_bresp), .bvalid (g_bvalid), .bready (g_bready),
        .araddr (g_araddr), .arprot (g_arprot), .arvalid (g_arvalid), .arready (g_arready),
        .rdata (g_rdata), .rresp (g_rresp), .rvalid (g_rvalid), .rready (g_rready)
    );

    axil_protocol_checker #(
        .ADDR_WIDTH (ADDR_WIDTH), .DATA_WIDTH (DATA_WIDTH), .DUT_IS_SLAVE (1'b1)
    ) u_chk_timer (
        .clk (clk), .rst (rst),
        .awaddr (t_awaddr), .awprot (t_awprot), .awvalid (t_awvalid), .awready (t_awready),
        .wdata (t_wdata), .wstrb (t_wstrb), .wvalid (t_wvalid), .wready (t_wready),
        .bresp (t_bresp), .bvalid (t_bvalid), .bready (t_bready),
        .araddr (t_araddr), .arprot (t_arprot), .arvalid (t_arvalid), .arready (t_arready),
        .rdata (t_rdata), .rresp (t_rresp), .rvalid (t_rvalid), .rready (t_rready)
    );

endmodule

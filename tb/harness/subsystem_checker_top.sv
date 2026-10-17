// -----------------------------------------------------------------------------
// tb/harness/subsystem_checker_top.sv
//
// Simulation top for the subsystem integration tests: the deliverable
// `peripheral_subsystem` plus one `axil_protocol_checker` on each master-facing
// AXI4-Lite port.
//
// Only the master-facing ports are exposed by the subsystem (the crossbar ->
// peripheral interconnect is internal), so only those can be monitored from
// outside.  They are also the ports where the DUT drives the READYs, BVALID and
// RVALID, i.e. where the handshake rules are the DUT's responsibility.
//
// The wrapper declares the same ports as `peripheral_subsystem`, so the cocotb
// tests address the subsystem boundary unchanged, and `(.*)` connects by name.
// -----------------------------------------------------------------------------

module subsystem_checker_top #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned NMST       = 2,
    parameter int unsigned GPIO_WIDTH = 8
) (
    input  logic clk,
    input  logic rst,

    // Master-side AXI4-Lite ports (2 masters)
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_awaddr,
    input  logic [NMST-1:0][2:0]              m_axil_awprot,
    input  logic [NMST-1:0]                   m_axil_awvalid,
    output logic [NMST-1:0]                   m_axil_awready,

    input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_wdata,
    input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_axil_wstrb,
    input  logic [NMST-1:0]                   m_axil_wvalid,
    output logic [NMST-1:0]                   m_axil_wready,

    output logic [NMST-1:0][1:0]              m_axil_bresp,
    output logic [NMST-1:0]                   m_axil_bvalid,
    input  logic [NMST-1:0]                   m_axil_bready,

    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_araddr,
    input  logic [NMST-1:0][2:0]              m_axil_arprot,
    input  logic [NMST-1:0]                   m_axil_arvalid,
    output logic [NMST-1:0]                   m_axil_arready,

    output logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_rdata,
    output logic [NMST-1:0][1:0]              m_axil_rresp,
    output logic [NMST-1:0]                   m_axil_rvalid,
    input  logic [NMST-1:0]                   m_axil_rready,

    // GPIO pins
    input  logic [GPIO_WIDTH-1:0] gpio_in,
    output logic [GPIO_WIDTH-1:0] gpio_out,
    output logic [GPIO_WIDTH-1:0] gpio_dir,

    // UART pins
    input  logic uart_rx,
    output logic uart_tx,

    // Interrupts (one line per peripheral)
    output logic [2:0] irq
);

    peripheral_subsystem #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .NMST       (NMST),
        .GPIO_WIDTH (GPIO_WIDTH)
    ) u_dut (.*);

    genvar m;

    generate
        for (m = 0; m < NMST; m++) begin : gen_master_checkers
            axil_protocol_checker #(
                .ADDR_WIDTH  (ADDR_WIDTH),
                .DATA_WIDTH  (DATA_WIDTH),
                .DUT_IS_SLAVE  (1'b1)
            ) u_chk (
                .clk (clk), .rst (rst),
                .awaddr (m_axil_awaddr[m]), .awprot (m_axil_awprot[m]),
                .awvalid(m_axil_awvalid[m]), .awready(m_axil_awready[m]),
                .wdata  (m_axil_wdata[m]),  .wstrb  (m_axil_wstrb[m]),
                .wvalid (m_axil_wvalid[m]), .wready (m_axil_wready[m]),
                .bresp  (m_axil_bresp[m]),  .bvalid (m_axil_bvalid[m]),
                .bready (m_axil_bready[m]),
                .araddr (m_axil_araddr[m]), .arprot (m_axil_arprot[m]),
                .arvalid(m_axil_arvalid[m]), .arready(m_axil_arready[m]),
                .rdata  (m_axil_rdata[m]),  .rresp  (m_axil_rresp[m]),
                .rvalid (m_axil_rvalid[m]), .rready (m_axil_rready[m])
            );
        end
    endgenerate

endmodule

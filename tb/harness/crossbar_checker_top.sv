// -----------------------------------------------------------------------------
// tb/harness/crossbar_checker_top.sv
//
// Simulation top for the crossbar unit tests: the deliverable crossbar plus one
// `axil_protocol_checker` on every exposed AXI4-Lite port.
//
// WHY A WRAPPER AND NOT THE BARE CROSSBAR
//   The protocol checker must observe the DUT's boundary on every cycle, and it
//   needs both directions of each port as inputs.  A wrapper is used instead of
//   `bind` (which Verilator supports only partially) and instead of putting the
//   checks inside the RTL (which would defeat their independence).
//
// The wrapper declares the *same* port names and widths as `axi_lite_crossbar`,
// so the cocotb tests address the boundary exactly as before, and `(.*)`
// connects the instance by name: a name or width mismatch becomes a build error
// instead of a silently unconnected port.
//
// MASTER_SIDE=1 on the master-facing ports (the DUT drives the READYs, BVALID
// and RVALID there) and SLAVE_SIDE=1 on the slave-facing ports (the DUT drives
// the VALIDs, BREADY and RREADY there).
// -----------------------------------------------------------------------------

module crossbar_checker_top #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned NMST       = 2,
    parameter int unsigned NSLV       = 3
) (
    input  logic clk,
    input  logic rst,

    // Master-side AXI4-Lite ports (one entry per master)
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

    // Slave-side AXI4-Lite ports (one entry per real slave; the error target
    // inside the crossbar is not exposed)
    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_awaddr,
    output logic [NSLV-1:0][2:0]              s_axil_awprot,
    output logic [NSLV-1:0]                   s_axil_awvalid,
    input  logic [NSLV-1:0]                   s_axil_awready,

    output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_wdata,
    output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_axil_wstrb,
    output logic [NSLV-1:0]                   s_axil_wvalid,
    input  logic [NSLV-1:0]                   s_axil_wready,

    input  logic [NSLV-1:0][1:0]              s_axil_bresp,
    input  logic [NSLV-1:0]                   s_axil_bvalid,
    output logic [NSLV-1:0]                   s_axil_bready,

    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_araddr,
    output logic [NSLV-1:0][2:0]              s_axil_arprot,
    output logic [NSLV-1:0]                   s_axil_arvalid,
    input  logic [NSLV-1:0]                   s_axil_arready,

    input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_rdata,
    input  logic [NSLV-1:0][1:0]              s_axil_rresp,
    input  logic [NSLV-1:0]                   s_axil_rvalid,
    output logic [NSLV-1:0]                   s_axil_rready
);

    axi_lite_crossbar #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .NMST       (NMST),
        .NSLV       (NSLV)
    ) u_dut (.*);

    genvar m, s;

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

        for (s = 0; s < NSLV; s++) begin : gen_slave_checkers
            axil_protocol_checker #(
                .ADDR_WIDTH (ADDR_WIDTH),
                .DATA_WIDTH (DATA_WIDTH),
                .DUT_IS_MASTER (1'b1)
            ) u_chk (
                .clk (clk), .rst (rst),
                .awaddr (s_axil_awaddr[s]), .awprot (s_axil_awprot[s]),
                .awvalid(s_axil_awvalid[s]), .awready(s_axil_awready[s]),
                .wdata  (s_axil_wdata[s]),  .wstrb  (s_axil_wstrb[s]),
                .wvalid (s_axil_wvalid[s]), .wready (s_axil_wready[s]),
                .bresp  (s_axil_bresp[s]),  .bvalid (s_axil_bvalid[s]),
                .bready (s_axil_bready[s]),
                .araddr (s_axil_araddr[s]), .arprot (s_axil_arprot[s]),
                .arvalid(s_axil_arvalid[s]), .arready(s_axil_arready[s]),
                .rdata  (s_axil_rdata[s]),  .rresp  (s_axil_rresp[s]),
                .rvalid (s_axil_rvalid[s]), .rready (s_axil_rready[s])
            );
        end
    endgenerate

endmodule

//      // verilator_coverage annotation
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
 000768     input  logic clk,
 000015     input  logic rst,
        
            // Master-side AXI4-Lite ports (one entry per master)
~000015     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_awaddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_awprot,
 000062     input  logic [NMST-1:0]                   m_axil_awvalid,
 000075     output logic [NMST-1:0]                   m_axil_awready,
        
~000028     input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_wdata,
~000019     input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_axil_wstrb,
 000062     input  logic [NMST-1:0]                   m_axil_wvalid,
 000075     output logic [NMST-1:0]                   m_axil_wready,
        
~000012     output logic [NMST-1:0][1:0]              m_axil_bresp,
 000059     output logic [NMST-1:0]                   m_axil_bvalid,
 000047     input  logic [NMST-1:0]                   m_axil_bready,
        
%000008     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_araddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_arprot,
 000021     input  logic [NMST-1:0]                   m_axil_arvalid,
 000036     output logic [NMST-1:0]                   m_axil_arready,
        
~000019     output logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_rdata,
%000004     output logic [NMST-1:0][1:0]              m_axil_rresp,
 000020     output logic [NMST-1:0]                   m_axil_rvalid,
 000021     input  logic [NMST-1:0]                   m_axil_rready,
        
            // Slave-side AXI4-Lite ports (one entry per real slave; the error target
            // inside the crossbar is not exposed)
~000029     output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_awaddr,
%000000     output logic [NSLV-1:0][2:0]              s_axil_awprot,
 000035     output logic [NSLV-1:0]                   s_axil_awvalid,
 000129     input  logic [NSLV-1:0]                   s_axil_awready,
        
~000025     output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_wdata,
 000023     output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_axil_wstrb,
 000035     output logic [NSLV-1:0]                   s_axil_wvalid,
 000111     input  logic [NSLV-1:0]                   s_axil_wready,
        
%000000     input  logic [NSLV-1:0][1:0]              s_axil_bresp,
 000035     input  logic [NSLV-1:0]                   s_axil_bvalid,
 000029     output logic [NSLV-1:0]                   s_axil_bready,
        
~000014     output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_araddr,
%000000     output logic [NSLV-1:0][2:0]              s_axil_arprot,
~000016     output logic [NSLV-1:0]                   s_axil_arvalid,
 000096     input  logic [NSLV-1:0]                   s_axil_arready,
        
%000004     input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_rdata,
%000000     input  logic [NSLV-1:0][1:0]              s_axil_rresp,
~000016     input  logic [NSLV-1:0]                   s_axil_rvalid,
~000015     output logic [NSLV-1:0]                   s_axil_rready
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
        

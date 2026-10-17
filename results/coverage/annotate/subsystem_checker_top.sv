//      // verilator_coverage annotation
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
 001142     input  logic clk,
%000007     input  logic rst,
        
            // Master-side AXI4-Lite ports (2 masters)
~000029     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_awaddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_awprot,
 000086     input  logic [NMST-1:0]                   m_axil_awvalid,
 000094     output logic [NMST-1:0]                   m_axil_awready,
        
~000020     input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_wdata,
~000013     input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_axil_wstrb,
 000086     input  logic [NMST-1:0]                   m_axil_wvalid,
 000094     output logic [NMST-1:0]                   m_axil_wready,
        
~000049     output logic [NMST-1:0][1:0]              m_axil_bresp,
 000086     output logic [NMST-1:0]                   m_axil_bvalid,
 000079     input  logic [NMST-1:0]                   m_axil_bready,
        
~000026     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_araddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_arprot,
 000077     input  logic [NMST-1:0]                   m_axil_arvalid,
 000085     output logic [NMST-1:0]                   m_axil_arready,
        
~000020     output logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_rdata,
~000021     output logic [NMST-1:0][1:0]              m_axil_rresp,
 000077     output logic [NMST-1:0]                   m_axil_rvalid,
 000050     input  logic [NMST-1:0]                   m_axil_rready,
        
            // GPIO pins
%000001     input  logic [GPIO_WIDTH-1:0] gpio_in,
%000004     output logic [GPIO_WIDTH-1:0] gpio_out,
%000002     output logic [GPIO_WIDTH-1:0] gpio_dir,
        
            // UART pins
%000001     input  logic uart_rx,
%000005     output logic uart_tx,
        
            // Interrupts (one line per peripheral)
%000001     output logic [2:0] irq
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
        

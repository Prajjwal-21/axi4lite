//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // peripheral_subsystem.sv  --  DELIVERABLE TOP
        //
        // 2-master AXI4-Lite crossbar with three AXI4-Lite peripherals:
        //
        //   slave 0 : UART  region base 0x0000_0000   (4 KiB)
        //   slave 1 : GPIO  region base 0x0000_4000   (4 KiB)
        //   slave 2 : TIMER region base 0x0000_8000   (4 KiB)
        //
        // Addresses outside the three regions are answered with DECERR by the internal
        // error target inside the crossbar. Addresses inside a region that do not name an
        // implemented register are answered with SLVERR by the peripheral's register
        // bridge.
        //
        // The GPIO and UART pins are exposed so the subsystem is usable at the next
        // level up. UART LOOPBACK is available through CTRL[2], which makes the UART
        // verifiable without any external stimulus; the pins remain available for
        // external loopback / framing-error tests.
        // -----------------------------------------------------------------------------
        
        `include "axil_defs.svh"
        
        module peripheral_subsystem #(
            parameter int unsigned ADDR_WIDTH   = `AXIL_ADDR_WIDTH,
            parameter int unsigned DATA_WIDTH   = `AXIL_DATA_WIDTH,
            parameter int unsigned NMST         = `AXIL_NMST,
            parameter int unsigned GPIO_WIDTH   = 8,
            parameter int unsigned REGION_LSB   = `AXIL_REGION_LSB,
            parameter logic [3*ADDR_WIDTH-1:0] BASE_FLAT =
                {`AXIL_TIMER_BASE, `AXIL_GPIO_BASE, `AXIL_UART_BASE}
        ) (
 001142     input  logic clk,
%000007     input  logic rst,
        
            // ---------------------------------------------------------------------
            // Master-side AXI4-Lite ports (2 masters)
            // ---------------------------------------------------------------------
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
        
            // ---------------------------------------------------------------------
            // GPIO pins
            // ---------------------------------------------------------------------
%000001     input  logic [GPIO_WIDTH-1:0] gpio_in,
%000004     output logic [GPIO_WIDTH-1:0] gpio_out,
%000002     output logic [GPIO_WIDTH-1:0] gpio_dir,
        
            // ---------------------------------------------------------------------
            // UART pins
            // ---------------------------------------------------------------------
%000001     input  logic uart_rx,
%000005     output logic uart_tx,
        
            // ---------------------------------------------------------------------
            // Interrupts (one line per peripheral)
            // ---------------------------------------------------------------------
%000001     output logic [2:0] irq
        );
        
            localparam int unsigned NSLV       = 3;
            localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
            localparam int unsigned LOCAL_W    = `AXIL_PERIPH_LOCAL_ADDR_W;
        
            // ---------------------------------------------------------------------
            // Crossbar <-> peripheral interconnect
            // ---------------------------------------------------------------------
~000035     logic [NSLV-1:0][ADDR_WIDTH-1:0]   p_awaddr;
%000000     logic [NSLV-1:0][2:0]              p_awprot;
 000045     logic [NSLV-1:0]                   p_awvalid, p_awready;
~000027     logic [NSLV-1:0][DATA_WIDTH-1:0]   p_wdata;
 000031     logic [NSLV-1:0][STRB_WIDTH-1:0]   p_wstrb;
 000045     logic [NSLV-1:0]                   p_wvalid, p_wready;
%000003     logic [NSLV-1:0][1:0]              p_bresp;
 000037     logic [NSLV-1:0]                   p_bvalid, p_bready;
~000041     logic [NSLV-1:0][ADDR_WIDTH-1:0]   p_araddr;
%000000     logic [NSLV-1:0][2:0]              p_arprot;
 000054     logic [NSLV-1:0]                   p_arvalid, p_arready;
~000010     logic [NSLV-1:0][DATA_WIDTH-1:0]   p_rdata;
%000001     logic [NSLV-1:0][1:0]              p_rresp;
 000046     logic [NSLV-1:0]                   p_rvalid, p_rready;
        
            axi_lite_crossbar #(
                .ADDR_WIDTH (ADDR_WIDTH),
                .DATA_WIDTH (DATA_WIDTH),
                .NMST       (NMST),
                .NSLV       (NSLV),
                .REGION_LSB (REGION_LSB),
                .BASE_FLAT  (BASE_FLAT)
            ) u_crossbar (
                .clk          (clk),
                .rst          (rst),
        
                .m_axil_awaddr  (m_axil_awaddr),
                .m_axil_awprot  (m_axil_awprot),
                .m_axil_awvalid (m_axil_awvalid),
                .m_axil_awready (m_axil_awready),
        
                .m_axil_wdata   (m_axil_wdata),
                .m_axil_wstrb   (m_axil_wstrb),
                .m_axil_wvalid  (m_axil_wvalid),
                .m_axil_wready  (m_axil_wready),
        
                .m_axil_bresp   (m_axil_bresp),
                .m_axil_bvalid  (m_axil_bvalid),
                .m_axil_bready  (m_axil_bready),
        
                .m_axil_araddr  (m_axil_araddr),
                .m_axil_arprot  (m_axil_arprot),
                .m_axil_arvalid (m_axil_arvalid),
                .m_axil_arready (m_axil_arready),
        
                .m_axil_rdata   (m_axil_rdata),
                .m_axil_rresp   (m_axil_rresp),
                .m_axil_rvalid  (m_axil_rvalid),
                .m_axil_rready  (m_axil_rready),
        
                .s_axil_awaddr  (p_awaddr),
                .s_axil_awprot  (p_awprot),
                .s_axil_awvalid (p_awvalid),
                .s_axil_awready (p_awready),
        
                .s_axil_wdata   (p_wdata),
                .s_axil_wstrb   (p_wstrb),
                .s_axil_wvalid  (p_wvalid),
                .s_axil_wready  (p_wready),
        
                .s_axil_bresp   (p_bresp),
                .s_axil_bvalid  (p_bvalid),
                .s_axil_bready  (p_bready),
        
                .s_axil_araddr  (p_araddr),
                .s_axil_arprot  (p_arprot),
                .s_axil_arvalid (p_arvalid),
                .s_axil_arready (p_arready),
        
                .s_axil_rdata   (p_rdata),
                .s_axil_rresp   (p_rresp),
                .s_axil_rvalid  (p_rvalid),
                .s_axil_rready  (p_rready)
            );
        
            // ---------------------------------------------------------------------
            // Slave 0: UART
            // ---------------------------------------------------------------------
            uart_regs #(
                .ADDR_WIDTH   (ADDR_WIDTH),
                .DATA_WIDTH   (DATA_WIDTH),
                .LOCAL_ADDR_W (LOCAL_W)
            ) u_uart (
                .clk (clk), .rst (rst),
                .s_awaddr (p_awaddr[0]), .s_awprot (p_awprot[0]), .s_awvalid (p_awvalid[0]), .s_awready (p_awready[0]),
                .s_wdata  (p_wdata[0]),  .s_wstrb  (p_wstrb[0]),  .s_wvalid  (p_wvalid[0]),  .s_wready  (p_wready[0]),
                .s_bresp  (p_bresp[0]),  .s_bvalid (p_bvalid[0]),  .s_bready  (p_bready[0]),
                .s_araddr (p_araddr[0]), .s_arprot (p_arprot[0]), .s_arvalid (p_arvalid[0]), .s_arready (p_arready[0]),
                .s_rdata  (p_rdata[0]),  .s_rresp  (p_rresp[0]),  .s_rvalid  (p_rvalid[0]),  .s_rready  (p_rready[0]),
                .uart_rx  (uart_rx),
                .uart_tx  (uart_tx),
                .irq      (irq[0])
            );
        
            // ---------------------------------------------------------------------
            // Slave 1: GPIO
            // ---------------------------------------------------------------------
            gpio_regs #(
                .ADDR_WIDTH   (ADDR_WIDTH),
                .DATA_WIDTH   (DATA_WIDTH),
                .GPIO_WIDTH   (GPIO_WIDTH),
                .LOCAL_ADDR_W (LOCAL_W)
            ) u_gpio (
                .clk (clk), .rst (rst),
                .s_awaddr (p_awaddr[1]), .s_awprot (p_awprot[1]), .s_awvalid (p_awvalid[1]), .s_awready (p_awready[1]),
                .s_wdata  (p_wdata[1]),  .s_wstrb  (p_wstrb[1]),  .s_wvalid  (p_wvalid[1]),  .s_wready  (p_wready[1]),
                .s_bresp  (p_bresp[1]),  .s_bvalid (p_bvalid[1]),  .s_bready  (p_bready[1]),
                .s_araddr (p_araddr[1]), .s_arprot (p_arprot[1]), .s_arvalid (p_arvalid[1]), .s_arready (p_arready[1]),
                .s_rdata  (p_rdata[1]),  .s_rresp  (p_rresp[1]),  .s_rvalid  (p_rvalid[1]),  .s_rready  (p_rready[1]),
                .gpio_in  (gpio_in),
                .gpio_out (gpio_out),
                .gpio_dir (gpio_dir),
                .irq      (irq[1])
            );
        
            // ---------------------------------------------------------------------
            // Slave 2: TIMER
            // ---------------------------------------------------------------------
            timer_regs #(
                .ADDR_WIDTH   (ADDR_WIDTH),
                .DATA_WIDTH   (DATA_WIDTH),
                .LOCAL_ADDR_W (LOCAL_W)
            ) u_timer (
                .clk (clk), .rst (rst),
                .s_awaddr (p_awaddr[2]), .s_awprot (p_awprot[2]), .s_awvalid (p_awvalid[2]), .s_awready (p_awready[2]),
                .s_wdata  (p_wdata[2]),  .s_wstrb  (p_wstrb[2]),  .s_wvalid  (p_wvalid[2]),  .s_wready  (p_wready[2]),
                .s_bresp  (p_bresp[2]),  .s_bvalid (p_bvalid[2]),  .s_bready  (p_bready[2]),
                .s_araddr (p_araddr[2]), .s_arprot (p_arprot[2]), .s_arvalid (p_arvalid[2]), .s_arready (p_arready[2]),
                .s_rdata  (p_rdata[2]),  .s_rresp  (p_rresp[2]),  .s_rvalid  (p_rvalid[2]),  .s_rready  (p_rready[2]),
                .irq      (irq[2])
            );
        
        endmodule
        

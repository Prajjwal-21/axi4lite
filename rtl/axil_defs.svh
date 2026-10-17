// -----------------------------------------------------------------------------
// axil_defs.svh
//
// Single source of truth for the address map and peripheral register offsets.
//
// WHY A MACRO HEADER INSTEAD OF AN SV PACKAGE
//   The formal flow (Yosys / SymbiYosys 0.70) does not parse SystemVerilog
//   `package` / `import`.  Macros are supported identically by Verilator,
//   Yosys, and Icarus, so shared constants live here as `define macros.
//   The Python verification environment parses this file at run time so the
//   testbench and the RTL can never disagree about the address map.
//
// Only `define macros may live in this file.
// -----------------------------------------------------------------------------

`ifndef AXIL_DEFS_SVH
`define AXIL_DEFS_SVH

// ---------------------------------------------------------------------------
// Global geometry
// ---------------------------------------------------------------------------
`define AXIL_ADDR_WIDTH        32
`define AXIL_DATA_WIDTH        32
`define AXIL_STRB_WIDTH        4

// Number of AXI4-Lite masters and real slaves at the crossbar boundary.
`define AXIL_NMST              2
`define AXIL_NSLV              3

// Address decode granularity: one region = 2**AXIL_REGION_LSB bytes.
// Decoding compares addr[ADDR_WIDTH-1:AXIL_REGION_LSB] against the region base.
`define AXIL_REGION_LSB        12

// Number of byte-address bits a peripheral sees (region is 64 bytes => 16 regs).
`define AXIL_PERIPH_LOCAL_ADDR_W  6

// ---------------------------------------------------------------------------
// Slave region bases (must be 2**AXIL_REGION_LSB aligned and mutually distinct)
//   slave 0 : UART   0x0000_0000 .. 0x0000_0FFF
//   slave 1 : GPIO   0x0000_4000 .. 0x0000_4FFF
//   slave 2 : TIMER  0x0000_8000 .. 0x0000_8FFF
// Addresses outside these three regions decode to the internal error target
// and are answered with DECERR.
// ---------------------------------------------------------------------------
`define AXIL_UART_BASE         32'h0000_0000
`define AXIL_GPIO_BASE         32'h0000_4000
`define AXIL_TIMER_BASE        32'h0000_8000

// Default flat base vector for the 3-region configuration: slave 0 in the low
// word, slave 2 in the high word.  This is exactly the documented map above, so
// a crossbar instantiated without an explicit BASE_FLAT decodes addresses the
// way this project specifies instead of silently mapping everything to slave 0
// (which is what an all-zero default does).  The default is 3*ADDR_WIDTH bits
// wide: a configuration with a different number of real slaves must pass
// BASE_FLAT explicitly and gets an elaboration width error if it forgets.
`define AXIL_BASE_FLAT_3       {`AXIL_TIMER_BASE, `AXIL_GPIO_BASE, `AXIL_UART_BASE}

// ---------------------------------------------------------------------------
// Peripheral identification registers (read-only, offset 0x3C in every block)
// ---------------------------------------------------------------------------
`define AXIL_UART_ID           32'h5541_5254   // "UART"
`define AXIL_GPIO_ID           32'h4749_4F00   // "GIO\0"
`define AXIL_TIMER_ID          32'h5449_4D45   // "TIME"

// ---------------------------------------------------------------------------
// UART register offsets (local byte address within the 4 KiB region)
// ---------------------------------------------------------------------------
`define AXIL_UART_CTRL_OFF     6'h00
`define AXIL_UART_BAUD_OFF     6'h04
`define AXIL_UART_STATUS_OFF   6'h08
`define AXIL_UART_TXDATA_OFF   6'h0C
`define AXIL_UART_RXDATA_OFF   6'h10
`define AXIL_UART_ISTAT_OFF    6'h14
`define AXIL_UART_IEN_OFF      6'h18
`define AXIL_UART_ID_OFF       6'h3C

// CTRL bit positions
`define AXIL_UART_CTRL_TX_EN      0
`define AXIL_UART_CTRL_RX_EN      1
`define AXIL_UART_CTRL_LOOPBACK   2
`define AXIL_UART_CTRL_TXDONE_EN  3
`define AXIL_UART_CTRL_RXAVL_EN   4
`define AXIL_UART_CTRL_RXOVR_EN   5
`define AXIL_UART_CTRL_RXFRM_EN   6

// STATUS bit positions
`define AXIL_UART_ST_TX_READY     0
`define AXIL_UART_ST_RX_VALID     1
`define AXIL_UART_ST_TX_BUSY      2
`define AXIL_UART_ST_RX_OVERRUN   3
`define AXIL_UART_ST_RX_FRAME_ERR 4

// INT_STATUS bit positions (write-1-to-clear)
`define AXIL_UART_IS_TX_DONE      0
`define AXIL_UART_IS_RX_AVAIL     1
`define AXIL_UART_IS_RX_OVERRUN   2
`define AXIL_UART_IS_RX_FRAME_ERR 3

`define AXIL_UART_BAUD_W          16

// ---------------------------------------------------------------------------
// GPIO register offsets
// ---------------------------------------------------------------------------
`define AXIL_GPIO_DIR_OFF      6'h00
`define AXIL_GPIO_OUT_OFF      6'h04
`define AXIL_GPIO_IN_OFF       6'h08
`define AXIL_GPIO_IEN_OFF      6'h0C
`define AXIL_GPIO_ISTAT_OFF    6'h10
`define AXIL_GPIO_ITYPE_OFF    6'h14
`define AXIL_GPIO_ID_OFF       6'h3C

// ---------------------------------------------------------------------------
// TIMER register offsets
// ---------------------------------------------------------------------------
`define AXIL_TIMER_CTRL_OFF      6'h00
`define AXIL_TIMER_LOAD_OFF      6'h04
`define AXIL_TIMER_VALUE_OFF     6'h08
`define AXIL_TIMER_ISTAT_OFF     6'h0C
`define AXIL_TIMER_PRESCALE_OFF  6'h10
`define AXIL_TIMER_ID_OFF        6'h3C

`define AXIL_TIMER_CTRL_EN        0
`define AXIL_TIMER_CTRL_IRQ_EN    1
`define AXIL_TIMER_CTRL_ONE_SHOT  2
`define AXIL_TIMER_CTRL_PSC_EN    3

`define AXIL_TIMER_IS_EXPIRED     0

// ---------------------------------------------------------------------------
// AXI4-Lite response encodings
// ---------------------------------------------------------------------------
`define AXIL_RESP_OKAY    2'b00
`define AXIL_RESP_EXOKAY  2'b01
`define AXIL_RESP_SLVERR  2'b10
`define AXIL_RESP_DECERR  2'b11

`endif // AXIL_DEFS_SVH

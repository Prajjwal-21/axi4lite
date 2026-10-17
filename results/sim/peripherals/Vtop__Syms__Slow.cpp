// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_araddr", offsetof(Vtop___024root, g_araddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_arprot", offsetof(Vtop___024root, g_arprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"g_arready", offsetof(Vtop___024root, g_arready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_arvalid", offsetof(Vtop___024root, g_arvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_awaddr", offsetof(Vtop___024root, g_awaddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_awprot", offsetof(Vtop___024root, g_awprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"g_awready", offsetof(Vtop___024root, g_awready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_awvalid", offsetof(Vtop___024root, g_awvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_bready", offsetof(Vtop___024root, g_bready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_bresp", offsetof(Vtop___024root, g_bresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"g_bvalid", offsetof(Vtop___024root, g_bvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_irq", offsetof(Vtop___024root, g_irq), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_rdata", offsetof(Vtop___024root, g_rdata), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_rready", offsetof(Vtop___024root, g_rready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_rresp", offsetof(Vtop___024root, g_rresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"g_rvalid", offsetof(Vtop___024root, g_rvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_wdata", offsetof(Vtop___024root, g_wdata), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_wready", offsetof(Vtop___024root, g_wready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_wstrb", offsetof(Vtop___024root, g_wstrb), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"g_wvalid", offsetof(Vtop___024root, g_wvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"gpio_dir", offsetof(Vtop___024root, gpio_dir), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_in", offsetof(Vtop___024root, gpio_in), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_out", offsetof(Vtop___024root, gpio_out), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_araddr", offsetof(Vtop___024root, t_araddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_arprot", offsetof(Vtop___024root, t_arprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"t_arready", offsetof(Vtop___024root, t_arready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_arvalid", offsetof(Vtop___024root, t_arvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_awaddr", offsetof(Vtop___024root, t_awaddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_awprot", offsetof(Vtop___024root, t_awprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"t_awready", offsetof(Vtop___024root, t_awready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_awvalid", offsetof(Vtop___024root, t_awvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_bready", offsetof(Vtop___024root, t_bready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_bresp", offsetof(Vtop___024root, t_bresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"t_bvalid", offsetof(Vtop___024root, t_bvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_irq", offsetof(Vtop___024root, t_irq), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_rdata", offsetof(Vtop___024root, t_rdata), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_rready", offsetof(Vtop___024root, t_rready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_rresp", offsetof(Vtop___024root, t_rresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"t_rvalid", offsetof(Vtop___024root, t_rvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_wdata", offsetof(Vtop___024root, t_wdata), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_wready", offsetof(Vtop___024root, t_wready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_wstrb", offsetof(Vtop___024root, t_wstrb), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"t_wvalid", offsetof(Vtop___024root, t_wvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_araddr", offsetof(Vtop___024root, u_araddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_arprot", offsetof(Vtop___024root, u_arprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"u_arready", offsetof(Vtop___024root, u_arready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_arvalid", offsetof(Vtop___024root, u_arvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_awaddr", offsetof(Vtop___024root, u_awaddr), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_awprot", offsetof(Vtop___024root, u_awprot), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"u_awready", offsetof(Vtop___024root, u_awready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_awvalid", offsetof(Vtop___024root, u_awvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_bready", offsetof(Vtop___024root, u_bready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_bresp", offsetof(Vtop___024root, u_bresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"u_bvalid", offsetof(Vtop___024root, u_bvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_irq", offsetof(Vtop___024root, u_irq), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_rdata", offsetof(Vtop___024root, u_rdata), VLVT_UINT32, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_rready", offsetof(Vtop___024root, u_rready), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_rresp", offsetof(Vtop___024root, u_rresp), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"u_rvalid", offsetof(Vtop___024root, u_rvalid), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_wdata", offsetof(Vtop___024root, u_wdata), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_wready", offsetof(Vtop___024root, u_wready), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_wstrb", offsetof(Vtop___024root, u_wstrb), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"u_wvalid", offsetof(Vtop___024root, u_wvalid), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_rx", offsetof(Vtop___024root, uart_rx), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_tx", offsetof(Vtop___024root, uart_tx), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"g_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"g_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"g_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"g_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"g_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"g_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"g_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__g_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"gpio_dir", offsetof(Vtop___024root, peripheral_unit_harness__DOT__gpio_dir), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_in", offsetof(Vtop___024root, peripheral_unit_harness__DOT__gpio_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_out", offsetof(Vtop___024root, peripheral_unit_harness__DOT__gpio_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"t_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"t_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"t_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"t_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"t_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"t_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"t_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__t_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"u_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"u_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"u_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"u_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"u_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"u_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"u_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_rx", offsetof(Vtop___024root, peripheral_unit_harness__DOT__uart_rx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_tx", offsetof(Vtop___024root, peripheral_unit_harness__DOT__uart_tx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ar_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"ar_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_resp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_resp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {33, 0, 0, 0, 0, 0}},
    {"r_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {35, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"wr_aw_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_full", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_w_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable3[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ar_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"ar_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__b_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_resp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__b_resp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {33, 0, 0, 0, 0, 0}},
    {"r_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {35, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"wr_aw_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_full", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_w_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ar_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"ar_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {34, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__b_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_resp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__b_resp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {33, 0, 0, 0, 0, 0}},
    {"r_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rd_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pay_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pay_q), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {35, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"wr_aw_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_full", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_full), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_w_acc_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"dir_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__dir_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_dir", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_in", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__gpio_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"gpio_out", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"ien_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__ien_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"in_chg", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__in_chg), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"in_d_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"in_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__in_evt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"in_s1_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__in_s1_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"in_s2_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"istat_clr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__istat_clr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"istat_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__istat_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"istat_set", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__istat_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"istat_wr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__istat_wr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"itype_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__itype_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"out_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__out_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_addr_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_data_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_strb_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wr_apply", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"i", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[] = {
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"en_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__en_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"expire_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__expire_evt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"expired_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__expired_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"irq_en_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"istat_wr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__istat_wr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"load_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__load_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"one_shot_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"prescale_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__prescale_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"psc_cnt_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"psc_en_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tick", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__tick), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"value_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__value_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_addr_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_data_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_strb_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wr_apply", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[] = {
    {"ctrl_nxt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[] = {
    {"baud_div", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__baud_div), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"baud_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__baud_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"ctrl_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"ien_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__ien_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"irq", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__irq), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"istat_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__istat_evt), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"istat_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__istat_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"istat_set", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__istat_set), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"loopback", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__loopback), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_baud_cnt_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"rx_bit_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rx_data_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rx_done_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_line", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_line), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_sr_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {7, 0, 0, 0, 0, 0}},
    {"rx_st_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rx_stop_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_store_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_valid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rx_valid_set", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_set), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rxdata_rd_clr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_baud_cnt_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"tx_bit_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"tx_busy_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_done_evt", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_line", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_line), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"tx_sr_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {9, 0, 0, 0, 0, 0}},
    {"tx_start", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__tx_start), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_rx", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__uart_rx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"uart_tx", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__uart_tx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"wr_strobed", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[] = {
    {"ar_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_addr_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"aw_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"aw_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"b_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__b_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"bresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"bvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"r_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__r_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rdata_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_rd_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_rd_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_rd_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_addr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {5, 0, 0, 0, 0, 0}},
    {"reg_wr_data", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"reg_wr_en", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_hit", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_hit), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"reg_wr_strb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"rresp_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rvalid_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_araddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_araddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_arprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_arready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_arvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awaddr", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awaddr), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_awprot", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awprot), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {2, 0, 0, 0, 0, 0}},
    {"s_awready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_awvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_bresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_bvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_rready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_rresp", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"s_rvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wdata", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wdata), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"s_wready", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"s_wstrb", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wstrb), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"s_wvalid", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wvalid), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unused_ok", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__unused_ok), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_data_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"w_hs", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_hs), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_pend_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"w_strb_q", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"wr_apply", offsetof(Vtop___024root, peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness), "peripheral_unit_harness", "peripheral_unit_harness", "peripheral_unit_harness", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio), "peripheral_unit_harness.u_chk_gpio", "u_chk_gpio", "axil_protocol_checker", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_hold), "peripheral_unit_harness.u_chk_gpio.ap_ar_hold", "ap_ar_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_one_outstanding), "peripheral_unit_harness.u_chk_gpio.ap_ar_one_outstanding", "ap_ar_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_stable), "peripheral_unit_harness.u_chk_gpio.ap_ar_stable", "ap_ar_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_hold), "peripheral_unit_harness.u_chk_gpio.ap_aw_hold", "ap_aw_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_one_outstanding), "peripheral_unit_harness.u_chk_gpio.ap_aw_one_outstanding", "ap_aw_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_stable), "peripheral_unit_harness.u_chk_gpio.ap_aw_stable", "ap_aw_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_hold), "peripheral_unit_harness.u_chk_gpio.ap_b_hold", "ap_b_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_needs_write), "peripheral_unit_harness.u_chk_gpio.ap_b_needs_write", "ap_b_needs_write", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_resp_code), "peripheral_unit_harness.u_chk_gpio.ap_b_resp_code", "ap_b_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_stable), "peripheral_unit_harness.u_chk_gpio.ap_b_stable", "ap_b_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_hold), "peripheral_unit_harness.u_chk_gpio.ap_r_hold", "ap_r_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_needs_read), "peripheral_unit_harness.u_chk_gpio.ap_r_needs_read", "ap_r_needs_read", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_resp_code), "peripheral_unit_harness.u_chk_gpio.ap_r_resp_code", "ap_r_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_stable), "peripheral_unit_harness.u_chk_gpio.ap_r_stable", "ap_r_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_arready), "peripheral_unit_harness.u_chk_gpio.ap_rst_slave_arready", "ap_rst_slave_arready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_awready), "peripheral_unit_harness.u_chk_gpio.ap_rst_slave_awready", "ap_rst_slave_awready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_bvalid), "peripheral_unit_harness.u_chk_gpio.ap_rst_slave_bvalid", "ap_rst_slave_bvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_rvalid), "peripheral_unit_harness.u_chk_gpio.ap_rst_slave_rvalid", "ap_rst_slave_rvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_wready), "peripheral_unit_harness.u_chk_gpio.ap_rst_slave_wready", "ap_rst_slave_wready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_hold), "peripheral_unit_harness.u_chk_gpio.ap_w_hold", "ap_w_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_one_outstanding), "peripheral_unit_harness.u_chk_gpio.ap_w_one_outstanding", "ap_w_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_stable), "peripheral_unit_harness.u_chk_gpio.ap_w_stable", "ap_w_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer), "peripheral_unit_harness.u_chk_timer", "u_chk_timer", "axil_protocol_checker", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_hold), "peripheral_unit_harness.u_chk_timer.ap_ar_hold", "ap_ar_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_one_outstanding), "peripheral_unit_harness.u_chk_timer.ap_ar_one_outstanding", "ap_ar_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_stable), "peripheral_unit_harness.u_chk_timer.ap_ar_stable", "ap_ar_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_hold), "peripheral_unit_harness.u_chk_timer.ap_aw_hold", "ap_aw_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_one_outstanding), "peripheral_unit_harness.u_chk_timer.ap_aw_one_outstanding", "ap_aw_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_stable), "peripheral_unit_harness.u_chk_timer.ap_aw_stable", "ap_aw_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_hold), "peripheral_unit_harness.u_chk_timer.ap_b_hold", "ap_b_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_needs_write), "peripheral_unit_harness.u_chk_timer.ap_b_needs_write", "ap_b_needs_write", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_resp_code), "peripheral_unit_harness.u_chk_timer.ap_b_resp_code", "ap_b_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_stable), "peripheral_unit_harness.u_chk_timer.ap_b_stable", "ap_b_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_hold), "peripheral_unit_harness.u_chk_timer.ap_r_hold", "ap_r_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_needs_read), "peripheral_unit_harness.u_chk_timer.ap_r_needs_read", "ap_r_needs_read", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_resp_code), "peripheral_unit_harness.u_chk_timer.ap_r_resp_code", "ap_r_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_stable), "peripheral_unit_harness.u_chk_timer.ap_r_stable", "ap_r_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_arready), "peripheral_unit_harness.u_chk_timer.ap_rst_slave_arready", "ap_rst_slave_arready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_awready), "peripheral_unit_harness.u_chk_timer.ap_rst_slave_awready", "ap_rst_slave_awready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_bvalid), "peripheral_unit_harness.u_chk_timer.ap_rst_slave_bvalid", "ap_rst_slave_bvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_rvalid), "peripheral_unit_harness.u_chk_timer.ap_rst_slave_rvalid", "ap_rst_slave_rvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_wready), "peripheral_unit_harness.u_chk_timer.ap_rst_slave_wready", "ap_rst_slave_wready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_hold), "peripheral_unit_harness.u_chk_timer.ap_w_hold", "ap_w_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_one_outstanding), "peripheral_unit_harness.u_chk_timer.ap_w_one_outstanding", "ap_w_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_stable), "peripheral_unit_harness.u_chk_timer.ap_w_stable", "ap_w_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart), "peripheral_unit_harness.u_chk_uart", "u_chk_uart", "axil_protocol_checker", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_hold), "peripheral_unit_harness.u_chk_uart.ap_ar_hold", "ap_ar_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_one_outstanding), "peripheral_unit_harness.u_chk_uart.ap_ar_one_outstanding", "ap_ar_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_stable), "peripheral_unit_harness.u_chk_uart.ap_ar_stable", "ap_ar_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_hold), "peripheral_unit_harness.u_chk_uart.ap_aw_hold", "ap_aw_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_one_outstanding), "peripheral_unit_harness.u_chk_uart.ap_aw_one_outstanding", "ap_aw_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_stable), "peripheral_unit_harness.u_chk_uart.ap_aw_stable", "ap_aw_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_hold), "peripheral_unit_harness.u_chk_uart.ap_b_hold", "ap_b_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_needs_write), "peripheral_unit_harness.u_chk_uart.ap_b_needs_write", "ap_b_needs_write", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_resp_code), "peripheral_unit_harness.u_chk_uart.ap_b_resp_code", "ap_b_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_stable), "peripheral_unit_harness.u_chk_uart.ap_b_stable", "ap_b_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_hold), "peripheral_unit_harness.u_chk_uart.ap_r_hold", "ap_r_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_needs_read), "peripheral_unit_harness.u_chk_uart.ap_r_needs_read", "ap_r_needs_read", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_resp_code), "peripheral_unit_harness.u_chk_uart.ap_r_resp_code", "ap_r_resp_code", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_stable), "peripheral_unit_harness.u_chk_uart.ap_r_stable", "ap_r_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_arready), "peripheral_unit_harness.u_chk_uart.ap_rst_slave_arready", "ap_rst_slave_arready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_awready), "peripheral_unit_harness.u_chk_uart.ap_rst_slave_awready", "ap_rst_slave_awready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_bvalid), "peripheral_unit_harness.u_chk_uart.ap_rst_slave_bvalid", "ap_rst_slave_bvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_rvalid), "peripheral_unit_harness.u_chk_uart.ap_rst_slave_rvalid", "ap_rst_slave_rvalid", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_wready), "peripheral_unit_harness.u_chk_uart.ap_rst_slave_wready", "ap_rst_slave_wready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_hold), "peripheral_unit_harness.u_chk_uart.ap_w_hold", "ap_w_hold", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_one_outstanding), "peripheral_unit_harness.u_chk_uart.ap_w_one_outstanding", "ap_w_one_outstanding", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_stable), "peripheral_unit_harness.u_chk_uart.ap_w_stable", "ap_w_stable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio), "peripheral_unit_harness.u_gpio", "u_gpio", "gpio_regs", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__ap_irq_needs_enable), "peripheral_unit_harness.u_gpio.ap_irq_needs_enable", "ap_irq_needs_enable", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile), "peripheral_unit_harness.u_gpio.u_regfile", "u_regfile", "axil_regfile_slave", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_aw_blocked), "peripheral_unit_harness.u_gpio.u_regfile.ap_aw_blocked", "ap_aw_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_b_blocked), "peripheral_unit_harness.u_gpio.u_regfile.ap_b_blocked", "ap_b_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_r_blocked), "peripheral_unit_harness.u_gpio.u_regfile.ap_r_blocked", "ap_r_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_reg_wr_en_implies_both), "peripheral_unit_harness.u_gpio.u_regfile.ap_reg_wr_en_implies_both", "ap_reg_wr_en_implies_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_rst_blocks_ready), "peripheral_unit_harness.u_gpio.u_regfile.ap_rst_blocks_ready", "ap_rst_blocks_ready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_w_blocked), "peripheral_unit_harness.u_gpio.u_regfile.ap_w_blocked", "ap_w_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_wr_apply_needs_both), "peripheral_unit_harness.u_gpio.u_regfile.ap_wr_apply_needs_both", "ap_wr_apply_needs_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3), "peripheral_unit_harness.u_gpio.unnamedblk3", "unnamedblk3", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer), "peripheral_unit_harness.u_timer", "u_timer", "timer_regs", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__ap_expire_needs_en), "peripheral_unit_harness.u_timer.ap_expire_needs_en", "ap_expire_needs_en", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__ap_irq_needs_both), "peripheral_unit_harness.u_timer.ap_irq_needs_both", "ap_irq_needs_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile), "peripheral_unit_harness.u_timer.u_regfile", "u_regfile", "axil_regfile_slave", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_aw_blocked), "peripheral_unit_harness.u_timer.u_regfile.ap_aw_blocked", "ap_aw_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_b_blocked), "peripheral_unit_harness.u_timer.u_regfile.ap_b_blocked", "ap_b_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_r_blocked), "peripheral_unit_harness.u_timer.u_regfile.ap_r_blocked", "ap_r_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_reg_wr_en_implies_both), "peripheral_unit_harness.u_timer.u_regfile.ap_reg_wr_en_implies_both", "ap_reg_wr_en_implies_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_rst_blocks_ready), "peripheral_unit_harness.u_timer.u_regfile.ap_rst_blocks_ready", "ap_rst_blocks_ready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_w_blocked), "peripheral_unit_harness.u_timer.u_regfile.ap_w_blocked", "ap_w_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_wr_apply_needs_both), "peripheral_unit_harness.u_timer.u_regfile.ap_wr_apply_needs_both", "ap_wr_apply_needs_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6), "peripheral_unit_harness.u_timer.unnamedblk6", "unnamedblk6", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart), "peripheral_unit_harness.u_uart", "u_uart", "uart_regs", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__ap_irq_needs_both), "peripheral_unit_harness.u_uart.ap_irq_needs_both", "ap_irq_needs_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__ap_txbusy_holds), "peripheral_unit_harness.u_uart.ap_txbusy_holds", "ap_txbusy_holds", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile), "peripheral_unit_harness.u_uart.u_regfile", "u_regfile", "axil_regfile_slave", -9, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_aw_blocked), "peripheral_unit_harness.u_uart.u_regfile.ap_aw_blocked", "ap_aw_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_b_blocked), "peripheral_unit_harness.u_uart.u_regfile.ap_b_blocked", "ap_b_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_r_blocked), "peripheral_unit_harness.u_uart.u_regfile.ap_r_blocked", "ap_r_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_reg_wr_en_implies_both), "peripheral_unit_harness.u_uart.u_regfile.ap_reg_wr_en_implies_both", "ap_reg_wr_en_implies_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_rst_blocks_ready), "peripheral_unit_harness.u_uart.u_regfile.ap_rst_blocks_ready", "ap_rst_blocks_ready", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_w_blocked), "peripheral_unit_harness.u_uart.u_regfile.ap_w_blocked", "ap_w_blocked", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_wr_apply_needs_both), "peripheral_unit_harness.u_uart.u_regfile.ap_wr_apply_needs_both", "ap_wr_apply_needs_both", "<null>", -9, VerilatedScope::SCOPE_OTHER},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(326);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 105, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_peripheral_unit_harness);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_gpio);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_timer);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_uart);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_gpio);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_timer);
    __Vhier.add(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_uart);
    __Vhier.add(__Vscopep_peripheral_unit_harness__u_gpio, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile);
    __Vhier.add(__Vscopep_peripheral_unit_harness__u_gpio, __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3);
    __Vhier.add(__Vscopep_peripheral_unit_harness__u_timer, __Vscopep_peripheral_unit_harness__u_timer__u_regfile);
    __Vhier.add(__Vscopep_peripheral_unit_harness__u_timer, __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6);
    __Vhier.add(__Vscopep_peripheral_unit_harness__u_uart, __Vscopep_peripheral_unit_harness__u_uart__u_regfile);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 67, &(TOP));
    __Vscopep_peripheral_unit_harness->varsInsertFromTable(Vtop___024root__VpiVarTable1, 67, &(TOP));
    __Vscopep_peripheral_unit_harness->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness->varInsert("GPIO_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__GPIO_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varsInsertFromTable(Vtop___024root__VpiVarTable2, 40, &(TOP));
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("DUT_IS_MASTER", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__DUT_IS_MASTER))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("DUT_IS_SLAVE", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__DUT_IS_SLAVE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("PAY_AR", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_AR))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("PAY_AW", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("PAY_R", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_R))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("PAY_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_gpio->varInsert("RESP_EXOKAY", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_gpio__DOT__RESP_EXOKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varsInsertFromTable(Vtop___024root__VpiVarTable3, 40, &(TOP));
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("DUT_IS_MASTER", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__DUT_IS_MASTER))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("DUT_IS_SLAVE", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__DUT_IS_SLAVE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("PAY_AR", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_AR))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("PAY_AW", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("PAY_R", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_R))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("PAY_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_timer->varInsert("RESP_EXOKAY", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_timer__DOT__RESP_EXOKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varsInsertFromTable(Vtop___024root__VpiVarTable4, 40, &(TOP));
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("DUT_IS_MASTER", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__DUT_IS_MASTER))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("DUT_IS_SLAVE", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__DUT_IS_SLAVE))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_BITVAR, 0, 0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("PAY_AR", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_AR))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("PAY_AW", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_AW))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("PAY_R", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_R))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("PAY_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_chk_uart->varInsert("RESP_EXOKAY", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_chk_uart__DOT__RESP_EXOKAY))), true, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varsInsertFromTable(Vtop___024root__VpiVarTable5, 48, &(TOP));
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("GPIO_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__GPIO_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("RW_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__RW_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio->varInsert("STRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__STRB_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio__u_regfile->varsInsertFromTable(Vtop___024root__VpiVarTable6, 47, &(TOP));
    __Vscopep_peripheral_unit_harness__u_gpio__u_regfile->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio__u_regfile->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio__u_regfile->varInsert("LA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__LA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio__u_regfile->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3->varsInsertFromTable(Vtop___024root__VpiVarTable7, 1, &(TOP));
    __Vscopep_peripheral_unit_harness__u_timer->varsInsertFromTable(Vtop___024root__VpiVarTable8, 44, &(TOP));
    __Vscopep_peripheral_unit_harness__u_timer->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer->varInsert("PSC_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__PSC_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer->varInsert("STRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__STRB_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer__u_regfile->varsInsertFromTable(Vtop___024root__VpiVarTable9, 47, &(TOP));
    __Vscopep_peripheral_unit_harness__u_timer__u_regfile->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer__u_regfile->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer__u_regfile->varInsert("LA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__LA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer__u_regfile->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6->varsInsertFromTable(Vtop___024root__VpiVarTable10, 1, &(TOP));
    __Vscopep_peripheral_unit_harness__u_uart->varsInsertFromTable(Vtop___024root__VpiVarTable11, 64, &(TOP));
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("BAUD_MIN", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__BAUD_MIN))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("BAUD_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__BAUD_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart->varInsert("STRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__STRB_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart__u_regfile->varsInsertFromTable(Vtop___024root__VpiVarTable12, 47, &(TOP));
    __Vscopep_peripheral_unit_harness__u_uart__u_regfile->varInsert("ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart__u_regfile->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart__u_regfile->varInsert("LA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__LA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_peripheral_unit_harness__u_uart__u_regfile->varInsert("LOCAL_ADDR_W", const_cast<void*>(static_cast<const void*>(&(TOP.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__LOCAL_ADDR_W))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_peripheral_unit_harness);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_gpio);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_timer);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_chk_uart);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_gpio);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_timer);
    __Vhier.remove(__Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness__u_uart);
    __Vhier.remove(__Vscopep_peripheral_unit_harness__u_gpio, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile);
    __Vhier.remove(__Vscopep_peripheral_unit_harness__u_gpio, __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3);
    __Vhier.remove(__Vscopep_peripheral_unit_harness__u_timer, __Vscopep_peripheral_unit_harness__u_timer__u_regfile);
    __Vhier.remove(__Vscopep_peripheral_unit_harness__u_timer, __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6);
    __Vhier.remove(__Vscopep_peripheral_unit_harness__u_uart, __Vscopep_peripheral_unit_harness__u_uart__u_regfile);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness, __Vscopep_peripheral_unit_harness = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio, __Vscopep_peripheral_unit_harness__u_chk_gpio = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_hold, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_stable, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_hold, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_stable, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_hold, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_needs_write, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_needs_write = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_resp_code, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_stable, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_hold, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_needs_read, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_needs_read = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_resp_code, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_stable, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_arready, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_arready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_awready, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_awready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_bvalid, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_bvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_rvalid, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_rvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_wready, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_wready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_hold, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_stable, __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer, __Vscopep_peripheral_unit_harness__u_chk_timer = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_hold, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_stable, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_hold, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_stable, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_hold, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_needs_write, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_needs_write = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_resp_code, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_stable, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_hold, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_needs_read, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_needs_read = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_resp_code, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_stable, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_arready, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_arready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_awready, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_awready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_bvalid, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_bvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_rvalid, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_rvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_wready, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_wready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_hold, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_stable, __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart, __Vscopep_peripheral_unit_harness__u_chk_uart = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_hold, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_stable, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_hold, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_stable, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_hold, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_needs_write, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_needs_write = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_resp_code, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_stable, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_hold, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_needs_read, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_needs_read = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_resp_code, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_resp_code = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_stable, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_arready, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_arready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_awready, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_awready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_bvalid, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_bvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_rvalid, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_rvalid = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_wready, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_wready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_hold, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_hold = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_one_outstanding, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_one_outstanding = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_stable, __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_stable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio, __Vscopep_peripheral_unit_harness__u_gpio = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__ap_irq_needs_enable, __Vscopep_peripheral_unit_harness__u_gpio__ap_irq_needs_enable = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_aw_blocked, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_aw_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_b_blocked, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_b_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_r_blocked, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_r_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_reg_wr_en_implies_both, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_reg_wr_en_implies_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_rst_blocks_ready, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_rst_blocks_ready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_w_blocked, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_w_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_wr_apply_needs_both, __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_wr_apply_needs_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3, __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer, __Vscopep_peripheral_unit_harness__u_timer = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__ap_expire_needs_en, __Vscopep_peripheral_unit_harness__u_timer__ap_expire_needs_en = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__ap_irq_needs_both, __Vscopep_peripheral_unit_harness__u_timer__ap_irq_needs_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile, __Vscopep_peripheral_unit_harness__u_timer__u_regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_aw_blocked, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_aw_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_b_blocked, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_b_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_r_blocked, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_r_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_reg_wr_en_implies_both, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_reg_wr_en_implies_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_rst_blocks_ready, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_rst_blocks_ready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_w_blocked, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_w_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_wr_apply_needs_both, __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_wr_apply_needs_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6, __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart, __Vscopep_peripheral_unit_harness__u_uart = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__ap_irq_needs_both, __Vscopep_peripheral_unit_harness__u_uart__ap_irq_needs_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__ap_txbusy_holds, __Vscopep_peripheral_unit_harness__u_uart__ap_txbusy_holds = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile, __Vscopep_peripheral_unit_harness__u_uart__u_regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_aw_blocked, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_aw_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_b_blocked, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_b_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_r_blocked, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_r_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_reg_wr_en_implies_both, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_reg_wr_en_implies_both = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_rst_blocks_ready, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_rst_blocks_ready = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_w_blocked, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_w_blocked = nullptr);
    VL_DO_CLEAR(delete __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_wr_apply_needs_both, __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_wr_apply_needs_both = nullptr);
    // Tear down sub module instances
}

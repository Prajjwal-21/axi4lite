// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axil_awvalid & 0xfcU)))) {
        Verilated::overWidthError("m_axil_awvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axil_wvalid & 0xfcU)))) {
        Verilated::overWidthError("m_axil_wvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axil_bready & 0xfcU)))) {
        Verilated::overWidthError("m_axil_bready");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axil_arvalid & 0xfcU)))) {
        Verilated::overWidthError("m_axil_arvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axil_rready & 0xfcU)))) {
        Verilated::overWidthError("m_axil_rready");
    }
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");
    }
}
#endif  // VL_DEBUG

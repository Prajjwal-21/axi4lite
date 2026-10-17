// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expired_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expire_evt 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__en_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__irq 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__irq;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__istat_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__irq 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__irq;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__ien_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_uart__DOT__clk__0))) 
                                                          << 8U) 
                                                         | (((((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_timer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__clk__0)))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_timer__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_uart__DOT__clk__0 
            = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_body__nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<64>/*2047:0*/ Vtop__ConstPool__CONST_h4206ed40_0;
extern const VlWide<64>/*2047:0*/ Vtop__ConstPool__CONST_hac49ad39_0;
extern const VlWide<64>/*2047:0*/ Vtop__ConstPool__CONST_h37726ddb_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_en 
        = (1U & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                 >> 1U));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q));
    vlSelfRef.peripheral_unit_harness__DOT__gpio_in 
        = vlSelfRef.gpio_in;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_en 
        = (1U & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q);
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__irq 
        = (0U != ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q) 
                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick 
        = (1U & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q)) 
                 | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q) 
                    == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__irq 
        = (0U != (0x0000000fU & ((vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                                  >> 3U) & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                                            & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_wdata 
        = vlSelfRef.u_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_wstrb 
        = vlSelfRef.u_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__g_wdata 
        = vlSelfRef.g_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__g_wstrb 
        = vlSelfRef.g_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__t_wdata 
        = vlSelfRef.t_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__t_wstrb 
        = vlSelfRef.t_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_awaddr 
        = vlSelfRef.u_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_awprot 
        = vlSelfRef.u_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__g_awaddr 
        = vlSelfRef.g_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__t_awaddr 
        = vlSelfRef.t_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__t_awprot 
        = vlSelfRef.t_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_awvalid 
        = vlSelfRef.u_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_wvalid 
        = vlSelfRef.u_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_bready 
        = vlSelfRef.u_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_rready 
        = vlSelfRef.u_rready;
    vlSelfRef.peripheral_unit_harness__DOT__g_awvalid 
        = vlSelfRef.g_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_wvalid 
        = vlSelfRef.g_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_bready 
        = vlSelfRef.g_bready;
    vlSelfRef.peripheral_unit_harness__DOT__g_rready 
        = vlSelfRef.g_rready;
    vlSelfRef.peripheral_unit_harness__DOT__t_awvalid 
        = vlSelfRef.t_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__t_wvalid 
        = vlSelfRef.t_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__t_bready 
        = vlSelfRef.t_bready;
    vlSelfRef.peripheral_unit_harness__DOT__t_rready 
        = vlSelfRef.t_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q) 
           ^ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_arprot 
        = vlSelfRef.u_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__t_arprot 
        = vlSelfRef.t_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__g_awprot 
        = vlSelfRef.g_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__g_arprot 
        = vlSelfRef.g_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__clk = vlSelfRef.clk;
    vlSelfRef.peripheral_unit_harness__DOT__t_arvalid 
        = vlSelfRef.t_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_arvalid 
        = vlSelfRef.g_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__loopback 
        = (1U & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                 >> 2U));
    vlSelfRef.peripheral_unit_harness__DOT__uart_rx 
        = vlSelfRef.uart_rx;
    vlSelfRef.peripheral_unit_harness__DOT__u_arvalid 
        = vlSelfRef.u_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_araddr 
        = vlSelfRef.g_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line 
        = (1U & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q)) 
                 | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q)));
    vlSelfRef.peripheral_unit_harness__DOT__t_araddr 
        = vlSelfRef.t_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div 
        = ((4U > (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q))
            ? 4U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_araddr 
        = vlSelfRef.u_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__rst = vlSelfRef.rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_in 
        = vlSelfRef.peripheral_unit_harness__DOT__gpio_in;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data;
    vlSelfRef.peripheral_unit_harness__DOT__gpio_out 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out;
    vlSelfRef.peripheral_unit_harness__DOT__gpio_dir 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir;
    vlSelfRef.peripheral_unit_harness__DOT__g_irq = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__irq;
    vlSelfRef.peripheral_unit_harness__DOT__t_irq = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick) 
              & (0U == vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb;
    vlSelfRef.peripheral_unit_harness__DOT__u_irq = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i = 0U;
    while ((8U > vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))) 
                & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt)) 
               | (0x00ffU & ((1U & ((1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q) 
                                           >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)))
                                     ? (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg) 
                                         & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q)) 
                                        >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))
                                     : ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg) 
                                        >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)))) 
                             << (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))));
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__t_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__t_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__g_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__g_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_rx 
        = vlSelfRef.peripheral_unit_harness__DOT__uart_rx;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__g_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__g_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_tx 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__t_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__t_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q) 
           & ((9U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q)) 
              & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q) 
                 == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                    - (IData)(1U))))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt 
        = ((3U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q)) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q) 
              == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                 - (IData)(1U)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__rst;
    vlSelfRef.gpio_out = vlSelfRef.peripheral_unit_harness__DOT__gpio_out;
    vlSelfRef.gpio_dir = vlSelfRef.peripheral_unit_harness__DOT__gpio_dir;
    vlSelfRef.g_irq = vlSelfRef.peripheral_unit_harness__DOT__g_irq;
    vlSelfRef.t_irq = vlSelfRef.peripheral_unit_harness__DOT__t_irq;
    vlSelfRef.u_irq = vlSelfRef.peripheral_unit_harness__DOT__u_irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wstrb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wstrb;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed 
        = (0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb));
    vlSelfRef.peripheral_unit_harness__DOT__u_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__g_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__g_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__g_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__t_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__t_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__t_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awaddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awaddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit 
        = (1U & Vtop__ConstPool__CONST_h4206ed40_0[
           (0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))]);
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit 
        = (1U & Vtop__ConstPool__CONST_hac49ad39_0[
           (0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))]);
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit 
        = (1U & Vtop__ConstPool__CONST_h37726ddb_0[
           (0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))]);
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q) 
           | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__unused_ok 
        = (1U & VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arprot));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__t_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__t_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arprot 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__clk;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__loopback)
            ? (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line)
            : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_rx));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__uart_tx 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_tx;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_araddr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_araddr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__rst;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rst;
    vlSelfRef.u_bresp = vlSelfRef.peripheral_unit_harness__DOT__u_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_bresp;
    vlSelfRef.u_rdata = vlSelfRef.peripheral_unit_harness__DOT__u_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_rdata;
    vlSelfRef.u_rresp = vlSelfRef.peripheral_unit_harness__DOT__u_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_rresp;
    vlSelfRef.g_bresp = vlSelfRef.peripheral_unit_harness__DOT__g_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__g_bresp;
    vlSelfRef.g_rdata = vlSelfRef.peripheral_unit_harness__DOT__g_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__g_rdata;
    vlSelfRef.g_rresp = vlSelfRef.peripheral_unit_harness__DOT__g_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__g_rresp;
    vlSelfRef.t_bresp = vlSelfRef.peripheral_unit_harness__DOT__t_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__t_bresp;
    vlSelfRef.t_rdata = vlSelfRef.peripheral_unit_harness__DOT__t_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__t_rdata;
    vlSelfRef.t_rresp = vlSelfRef.peripheral_unit_harness__DOT__t_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__t_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__istat_wr 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en) 
           & ((0x0cU == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb)));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_wr 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en) 
           & ((0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb)) 
              & (0x10U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_start 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed) 
              & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_en) 
                 & (0x0cU == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_clr 
        = ((~ vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set));
    vlSelfRef.t_bvalid = vlSelfRef.peripheral_unit_harness__DOT__t_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_bvalid;
    vlSelfRef.t_rvalid = vlSelfRef.peripheral_unit_harness__DOT__t_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__t_rvalid;
    vlSelfRef.g_bvalid = vlSelfRef.peripheral_unit_harness__DOT__g_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_bvalid;
    vlSelfRef.g_rvalid = vlSelfRef.peripheral_unit_harness__DOT__g_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__g_rvalid;
    vlSelfRef.u_bvalid = vlSelfRef.peripheral_unit_harness__DOT__u_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_bvalid;
    vlSelfRef.u_rvalid = vlSelfRef.peripheral_unit_harness__DOT__u_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__unused_ok 
        = (1U & (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awprot) 
                 ^ (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arprot) 
                    ^ VL_REDXOR_32(((vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awaddr 
                                     ^ vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_araddr) 
                                    >> 6U)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_addr 
        = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_araddr);
    vlSelfRef.uart_tx = vlSelfRef.peripheral_unit_harness__DOT__uart_tx;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__unused_ok 
        = (1U & (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awprot) 
                 ^ (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arprot) 
                    ^ VL_REDXOR_32(((vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awaddr 
                                     ^ vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_araddr) 
                                    >> 6U)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_addr 
        = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_araddr);
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__unused_ok 
        = (1U & (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awprot) 
                 ^ (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arprot) 
                    ^ VL_REDXOR_32(((vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awaddr 
                                     ^ vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_araddr) 
                                    >> 6U)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_addr 
        = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_araddr);
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt = 0U;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt = 0U;
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt) {
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q)))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt = 1U;
            }
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q)
                    ? (4U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt)
                    : (2U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt));
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
                = (8U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt);
        }
    }
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt) {
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
            = (1U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt);
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_addr;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 1U;
    if ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
        if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
            if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                    if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
                    } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
                    } else {
                        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0x47494f00U;
                    }
                } else {
                    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
                    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
                }
            } else {
                vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
            }
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = 0U;
        } else {
            if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
            } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
            }
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data 
                = ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q))));
        }
    } else {
        if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
        } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = 0U;
        }
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data 
            = ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q))))
                : ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q)))));
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 1U;
    if ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
                if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
                    if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
                    } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
                    } else {
                        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0x54494d45U;
                    }
                } else {
                    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
                    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
                }
            } else {
                vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
            }
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
        } else if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
        } else if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
        } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = 0U;
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q;
        }
    } else {
        if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
        } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = 0U;
        }
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data 
            = ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                 ? 0U : vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q)))
                : ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                 ? 0U : vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                 ? 0U : ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q)))))));
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 1U;
    if ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                    if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
                    } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
                    } else {
                        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0x55415254U;
                    }
                } else {
                    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
                }
            } else {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
            }
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
            } else if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
            } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = 0U;
            } else {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data 
                    = (0x0000000fU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q);
            }
        } else {
            if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
            } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
            }
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data 
                = ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                 ? 0U : (0x0000000fU 
                                         & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q))));
        }
    } else {
        if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
        } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = 0U;
        }
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data 
            = ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                    ? 0U : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                             ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                      ? 0U : ((((6U 
                                                 & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                                                    >> 1U)) 
                                                | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q)) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q))))))))
                : ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                    ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                 ? 0U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q)))
                    : ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                        ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                 ? 0U : vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q))));
    }
    vlSelfRef.peripheral_unit_harness__DOT__t_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__t_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__t_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__g_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__g_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__g_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__u_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data;
    vlSelfRef.t_awready = vlSelfRef.peripheral_unit_harness__DOT__t_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_awready;
    vlSelfRef.t_wready = vlSelfRef.peripheral_unit_harness__DOT__t_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.t_arready = vlSelfRef.peripheral_unit_harness__DOT__t_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready 
        = vlSelfRef.peripheral_unit_harness__DOT__t_arready;
    vlSelfRef.g_awready = vlSelfRef.peripheral_unit_harness__DOT__g_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_awready;
    vlSelfRef.g_wready = vlSelfRef.peripheral_unit_harness__DOT__g_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_wready;
    vlSelfRef.g_arready = vlSelfRef.peripheral_unit_harness__DOT__g_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready 
        = vlSelfRef.peripheral_unit_harness__DOT__g_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.u_awready = vlSelfRef.peripheral_unit_harness__DOT__u_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_awready;
    vlSelfRef.u_wready = vlSelfRef.peripheral_unit_harness__DOT__u_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_wready;
    vlSelfRef.u_arready = vlSelfRef.peripheral_unit_harness__DOT__u_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unused_ok 
        = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en) 
                 ^ VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arprot)));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unused_ok 
        = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en) 
                 ^ (VL_REDXOR_32(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data) 
                    ^ (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot) 
                       ^ VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en) 
           & (0x10U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr)));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_set 
        = ((vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
            | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt) 
           & (0xfffffffdU | (- (IData)((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr)))))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_set 
        = ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr)) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q) 
              | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt)));
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
    }
    if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q = 0U;
    } else {
        if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wstrb;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q 
                = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awaddr);
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q = 0U;
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__t_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__t_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__t_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__t_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__t_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__t_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__t_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__t_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_wready;
    vlSelfRef.t_rdata = vlSelfRef.peripheral_unit_harness__DOT__t_rdata;
    vlSelfRef.t_rresp = vlSelfRef.peripheral_unit_harness__DOT__t_rresp;
    vlSelfRef.t_bresp = vlSelfRef.peripheral_unit_harness__DOT__t_bresp;
    vlSelfRef.t_rvalid = vlSelfRef.peripheral_unit_harness__DOT__t_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.t_arready = vlSelfRef.peripheral_unit_harness__DOT__t_arready;
    vlSelfRef.t_bvalid = vlSelfRef.peripheral_unit_harness__DOT__t_bvalid;
    vlSelfRef.t_awready = vlSelfRef.peripheral_unit_harness__DOT__t_awready;
    vlSelfRef.t_wready = vlSelfRef.peripheral_unit_harness__DOT__t_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unused_ok 
        = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en) 
                 ^ VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__s_arprot)));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
    }
    if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q = 0U;
    } else {
        if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wstrb;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q 
                = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awaddr);
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q = 0U;
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__g_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__g_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__g_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__g_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__g_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__g_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__g_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_wready;
    vlSelfRef.g_rdata = vlSelfRef.peripheral_unit_harness__DOT__g_rdata;
    vlSelfRef.g_rresp = vlSelfRef.peripheral_unit_harness__DOT__g_rresp;
    vlSelfRef.g_bresp = vlSelfRef.peripheral_unit_harness__DOT__g_bresp;
    vlSelfRef.g_rvalid = vlSelfRef.peripheral_unit_harness__DOT__g_rvalid;
    vlSelfRef.g_arready = vlSelfRef.peripheral_unit_harness__DOT__g_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.g_bvalid = vlSelfRef.peripheral_unit_harness__DOT__g_bvalid;
    vlSelfRef.g_awready = vlSelfRef.peripheral_unit_harness__DOT__g_awready;
    vlSelfRef.g_wready = vlSelfRef.peripheral_unit_harness__DOT__g_wready;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
    }
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q = 0U;
    } else {
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wstrb;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q 
                = (0x0000003fU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awaddr);
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q = 0U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit)
                    ? 0U : 2U);
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q = 0U;
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
           & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q)) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready 
        = (1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst) 
                    | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q) 
                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__r_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__b_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_hs 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wvalid) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_bresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_rdata 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rdata;
    vlSelfRef.peripheral_unit_harness__DOT__u_rresp 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rresp;
    vlSelfRef.peripheral_unit_harness__DOT__u_rvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_arready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs;
    vlSelfRef.peripheral_unit_harness__DOT__u_bvalid 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid;
    vlSelfRef.peripheral_unit_harness__DOT__u_awready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_awready;
    vlSelfRef.peripheral_unit_harness__DOT__u_wready 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__s_wready;
    vlSelfRef.u_bresp = vlSelfRef.peripheral_unit_harness__DOT__u_bresp;
    vlSelfRef.u_rdata = vlSelfRef.peripheral_unit_harness__DOT__u_rdata;
    vlSelfRef.u_rresp = vlSelfRef.peripheral_unit_harness__DOT__u_rresp;
    vlSelfRef.u_rvalid = vlSelfRef.peripheral_unit_harness__DOT__u_rvalid;
    vlSelfRef.u_arready = vlSelfRef.peripheral_unit_harness__DOT__u_arready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en;
    vlSelfRef.u_bvalid = vlSelfRef.peripheral_unit_harness__DOT__u_bvalid;
    vlSelfRef.u_awready = vlSelfRef.peripheral_unit_harness__DOT__u_awready;
    vlSelfRef.u_wready = vlSelfRef.peripheral_unit_harness__DOT__u_wready;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en) 
           & (0x10U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr)));
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)))) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst) {
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp) 
                                  != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wstrb))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bready))));
    if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_resp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q = 0U;
    } else {
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_resp_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp;
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awaddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wdata)) 
                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wstrb)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__araddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata)) 
                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp)));
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q = 1U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs;
        } else {
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q = 1U;
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q = 1U;
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q));
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)))) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst) {
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp) 
                                  != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wstrb))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready))));
    if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_resp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q = 0U;
    } else {
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_resp_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp;
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awaddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wdata)) 
                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wstrb)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__araddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata)) 
                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp)));
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q = 1U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs;
        } else {
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q = 1U;
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q = 1U;
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q));
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)))) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst) {
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp) 
                                  != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wstrb))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arprot))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
            if (((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)) 
                 & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pend_q))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp))) 
                                  != vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bready))));
    if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_resp_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pay_q = 0ULL;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q = 0U;
    } else {
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_resp_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp;
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awaddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wdata)) 
                    << 4U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wstrb)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__araddr)) 
                    << 3U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arprot)));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rready)))) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pay_q 
                = (((QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata)) 
                    << 2U) | (QData)((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp)));
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q = 1U;
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs) {
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs;
        } else {
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q = 1U;
            }
            if (vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs) {
                vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q = 1U;
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pend_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid) 
               & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rready))));
    vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_full 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q));
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__cur = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__strb = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__cur = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__cur = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__cur = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__strb = 0;
    SData/*15:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q = 0;
    CData/*0:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q = 0;
    CData/*0:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q = 0;
    CData/*0:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q = 0;
    CData/*0:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q = 0;
    IData/*31:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q = 0;
    IData/*31:0*/ __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expired_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: timer_regs.sv:308: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.ap_irq_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/timer_regs.sv", 308, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expire_evt)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__en_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: timer_regs.sv:309: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.ap_expire_needs_en", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/timer_regs.sv", 309, "");
                }
            }
        }
    }
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q;
    __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q;
    if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__rst) {
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q = 0xffffffffU;
        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q = 0xffffffffU;
    } else {
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q 
            = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q)
                ? ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick)
                    ? 0U : (0x0000ffffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q))))
                : 0U);
        if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt) {
            if (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q) {
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q = 0U;
            } else {
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q;
            }
        } else if ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q) 
                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick)) 
                    & (0U != vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q))) {
            __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q 
                = (vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q 
                   - (IData)(1U));
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en) 
             & (0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb)))) {
            if ((0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))) {
                if ((4U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))) {
                    if ((0x10U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))) {
                        __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__strb 
                            = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb;
                        __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__nxt 
                            = (0x0000ffffU & vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data);
                        __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__cur 
                            = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q;
                        __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout 
                            = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__cur;
                        if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout 
                                = ((0xff00U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout)) 
                                   | (0x000000ffU & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__nxt)));
                        }
                        if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout 
                                = ((0x00ffU & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout)) 
                                   | (0x0000ff00U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__nxt)));
                        }
                        __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q 
                            = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_psc__3__Vfuncout;
                    }
                }
            }
            if ((0U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))) {
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__strb 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__nxt 
                    = (0x0000000fU & vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data);
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__cur 
                    = ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q) 
                         << 3U) | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q) 
                                   << 2U)) | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q)));
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__Vfuncout 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__cur;
                if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__Vfuncout 
                        = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__nxt;
                }
                vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply_ctrl__0__Vfuncout;
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q 
                    = (1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt));
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q 
                    = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt) 
                             >> 1U));
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q 
                    = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt) 
                             >> 2U));
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q 
                    = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt) 
                             >> 3U));
            } else if ((4U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))) {
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__cur 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__cur;
                if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout 
                        = ((0xffffff00U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout) 
                           | (0x000000ffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt));
                }
                if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt));
                }
                if ((4U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt));
                }
                if ((8U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout) 
                           | (0xff000000U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__nxt));
                }
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__1__Vfuncout;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__cur 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q;
                __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__cur;
                if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout 
                        = ((0xffffff00U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout) 
                           | (0x000000ffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt));
                }
                if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt));
                }
                if ((4U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt));
                }
                if ((8U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout) 
                           | (0xff000000U & __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__nxt));
                }
                __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q 
                    = __Vfunc_peripheral_unit_harness__DOT__u_timer__DOT__strb_apply__2__Vfuncout;
            }
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__rst))) 
           && ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__istat_wr)
                ? (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q) 
                    | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt)) 
                   & (~ vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data))
                : ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q) 
                   | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__prescale_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__load_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__en_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__value_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q 
        = __Vdly__peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q) 
           & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick 
        = (1U & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q)) 
                 | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q) 
                    == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data 
        = ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
            ? ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                ? ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                    ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                        ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                            ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                     ? 0U : 0x54494d45U))
                        : 0U) : 0U) : 0U) : ((0x00000010U 
                                              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__prescale_q)))))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expired_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__load_q))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q)))))))));
    vlSelfRef.peripheral_unit_harness__DOT__t_irq = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__expire_evt 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__en_q) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__tick) 
              & (0U == vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__value_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data;
    vlSelfRef.t_irq = vlSelfRef.peripheral_unit_harness__DOT__t_irq;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__cur = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__strb = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__cur = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__strb = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__cur = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__strb = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__cur = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__strb = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__cur = 0;
    CData/*7:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__strb = 0;
    CData/*7:0*/ __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q = 0;
    CData/*7:0*/ __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q = 0;
    CData/*7:0*/ __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q = 0;
    CData/*7:0*/ __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__irq)) 
                                           | (0U != 
                                              ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__istat_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: gpio_regs.sv:292: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.ap_irq_needs_enable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/gpio_regs.sv", 292, "");
                }
            }
        }
    }
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q;
    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q;
    if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__rst) {
        __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s1_q = 0U;
    } else {
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en) 
             & (0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb)))) {
            if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr)))) {
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__strb 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__nxt 
                                        = (0x000000ffU 
                                           & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data);
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__cur 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__Vfuncout 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__cur;
                                    if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__strb))) {
                                        __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__Vfuncout 
                                            = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__nxt;
                                    }
                                    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__7__Vfuncout;
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr)))) {
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__strb 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__nxt 
                                        = (0x000000ffU 
                                           & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data);
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__cur 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__Vfuncout 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__cur;
                                    if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__strb))) {
                                        __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__Vfuncout 
                                            = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__nxt;
                                    }
                                    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__8__Vfuncout;
                                }
                            }
                        }
                    }
                    if ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))) {
                        if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr)))) {
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__strb 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__nxt 
                                        = (0x000000ffU 
                                           & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data);
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__cur 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__Vfuncout 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__cur;
                                    if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__strb))) {
                                        __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__Vfuncout 
                                            = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__nxt;
                                    }
                                    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__6__Vfuncout;
                                }
                            }
                        }
                    }
                }
                if ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))) {
                            if ((1U & (~ ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr)))) {
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__strb 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__nxt 
                                        = (0x000000ffU 
                                           & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data);
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__cur 
                                        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q;
                                    __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__Vfuncout 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__cur;
                                    if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__strb))) {
                                        __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__Vfuncout 
                                            = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__nxt;
                                    }
                                    __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q 
                                        = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__5__Vfuncout;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_wr) {
            __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__strb 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb;
            __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__nxt 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_clr;
            __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__cur 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT____VlemCall_0__strb_apply 
                = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__cur;
            if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__strb))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT____VlemCall_0__strb_apply 
                    = __Vfunc_peripheral_unit_harness__DOT__u_gpio__DOT__strb_apply__4__nxt;
            }
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT____VlemCall_0__strb_apply 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set;
        }
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT____VlemCall_0__strb_apply;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s1_q;
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s1_q 
            = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_in;
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q 
        = __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q 
        = __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q 
        = __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__itype_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q 
        = __Vdly__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__irq 
        = (0U != ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q) 
                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)));
    vlSelfRef.peripheral_unit_harness__DOT__gpio_out 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out;
    vlSelfRef.peripheral_unit_harness__DOT__gpio_dir 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir;
    vlSelfRef.peripheral_unit_harness__DOT__g_irq = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__irq;
    vlSelfRef.gpio_out = vlSelfRef.peripheral_unit_harness__DOT__gpio_out;
    vlSelfRef.gpio_dir = vlSelfRef.peripheral_unit_harness__DOT__gpio_dir;
    vlSelfRef.g_irq = vlSelfRef.peripheral_unit_harness__DOT__g_irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data 
        = ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
            ? ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                ? ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                    ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                        ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                            ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                     ? 0U : 0x47494f00U))
                        : 0U) : 0U) : 0U) : ((0x00000010U 
                                              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q)))))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__out_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__dir_q)))))));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q) 
           ^ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data;
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i = 0U;
    while ((8U > vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))) 
                & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt)) 
               | (0x00ffU & ((1U & ((1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__itype_q) 
                                           >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)))
                                     ? (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg) 
                                         & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q)) 
                                        >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))
                                     : ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_chg) 
                                        >> (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i)))) 
                             << (7U & vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i))));
        vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_q) 
           | ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__in_evt) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__ien_q)));
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__cur = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__cur = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__cur = 0;
    SData/*15:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__strb = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__cur;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__cur = 0;
    IData/*31:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt = 0;
    CData/*3:0*/ __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb;
    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb = 0;
    SData/*9:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q = 0;
    CData/*3:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q = 0;
    SData/*15:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q = 0;
    CData/*0:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = 0;
    CData/*1:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 0;
    CData/*7:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q = 0;
    CData/*3:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q = 0;
    SData/*15:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0;
    SData/*15:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q = 0;
    IData/*31:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q = 0;
    IData/*31:0*/ __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__irq)) 
                                           | (0U != 
                                              (vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                                               & vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__ien_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_regs.sv:463: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.ap_irq_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/uart_regs.sv", 463, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uart_regs.sv:464: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.ap_txbusy_holds", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/uart_regs.sv", 464, "");
                }
            }
        }
    }
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q;
    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q;
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rst) {
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q = 0x03ffU;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q = 0U;
        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q = 0U;
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q = 0U;
    } else {
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en) 
             & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed))) {
            if ((0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))) {
                if ((4U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))) {
                    if ((0x18U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))) {
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb 
                            = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb;
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt 
                            = (0x0000000fU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data);
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__cur 
                            = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q;
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout 
                            = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__cur;
                        if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout 
                                = ((0xffffff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout) 
                                   | (0x000000ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt));
                        }
                        if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout 
                                = ((0xffff00ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout) 
                                   | (0x0000ff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt));
                        }
                        if ((4U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout 
                                = ((0xff00ffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout) 
                                   | (0x00ff0000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt));
                        }
                        if ((8U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__strb))) {
                            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout 
                                = ((0x00ffffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout) 
                                   | (0xff000000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__nxt));
                        }
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q 
                            = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__12__Vfuncout;
                    }
                }
                if ((4U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__strb 
                        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb;
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__nxt 
                        = (0x0000ffffU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data);
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__cur 
                        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q;
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout 
                        = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__cur;
                    if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__strb))) {
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout 
                            = ((0xff00U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout)) 
                               | (0x000000ffU & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__nxt)));
                    }
                    if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__strb))) {
                        __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout 
                            = ((0x00ffU & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout)) 
                               | (0x0000ff00U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__nxt)));
                    }
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q 
                        = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply_baud__11__Vfuncout;
                }
            }
            if ((0U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))) {
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb;
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt 
                    = (0x0000007fU & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data);
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__cur 
                    = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q;
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout 
                    = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__cur;
                if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout 
                        = ((0xffffff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout) 
                           | (0x000000ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt));
                }
                if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout 
                        = ((0xffff00ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout) 
                           | (0x0000ff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt));
                }
                if ((4U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout 
                        = ((0xff00ffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout) 
                           | (0x00ff0000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt));
                }
                if ((8U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__strb))) {
                    __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout 
                        = ((0x00ffffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout) 
                           | (0xff000000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__nxt));
                }
                __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                    = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__10__Vfuncout;
            }
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_en) {
            if ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q))) {
                if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q))) {
                    if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q) 
                         == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                            - (IData)(1U))))) {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 0U;
                    } else {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q 
                            = (0x0000ffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q)));
                    }
                } else if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q) 
                            == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                               - (IData)(1U))))) {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q 
                        = (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line) 
                            << 7U) | (0x0000007fU & 
                                      ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q) 
                                       >> 1U)));
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
                    if ((7U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q))) {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 3U;
                    } else {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q)));
                    }
                } else {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q)));
                }
            } else if ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q))) {
                if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q) 
                     == (0x0000ffffU & (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                         >> 1U) - (IData)(1U))))) {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
                    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line) {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 0U;
                    } else {
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 2U;
                        __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q = 0U;
                    }
                } else {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q 
                        = (0x0000ffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q)));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line)))) {
                __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 1U;
                __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
            }
        } else {
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = 0U;
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = 0U;
        }
        if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_start) 
             & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q)))) {
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q 
                = (0x00000200U | (0x000001feU & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data 
                                                 << 1U)));
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q = 0U;
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q = 0U;
            __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = 1U;
        } else if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q) {
            if (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q) 
                 == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                    - (IData)(1U))))) {
                __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q = 0U;
                if ((9U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q))) {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = 0U;
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q = 0x03ffU;
                } else {
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q 
                        = (0x00000200U | (0x000001ffU 
                                          & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q) 
                                             >> 1U)));
                    __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q)));
                }
            } else {
                __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q)));
            }
        }
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt) {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q;
        }
        if ((((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en) 
              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed)) 
             & (0x14U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr)))) {
            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb;
            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt 
                = (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_set 
                   & (~ vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data));
            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__cur 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_set;
            __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout 
                = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__cur;
            if ((1U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb))) {
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout 
                    = ((0xffffff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout) 
                       | (0x000000ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt));
            }
            if ((2U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb))) {
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout 
                    = ((0xffff00ffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout) 
                       | (0x0000ff00U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt));
            }
            if ((4U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb))) {
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout 
                    = ((0xff00ffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout) 
                       | (0x00ff0000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt));
            }
            if ((8U & (IData)(__Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__strb))) {
                __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout 
                    = ((0x00ffffffU & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout) 
                       | (0xff000000U & __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__nxt));
            }
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                = __Vfunc_peripheral_unit_harness__DOT__u_uart__DOT__strb_apply__9__Vfuncout;
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_set;
        }
    }
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q 
        = ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rst))) 
           && (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_set));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ien_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__baud_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q 
        = __Vdly__peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div 
        = ((4U > (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q))
            ? 4U : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_en 
        = (1U & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                 >> 1U));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_en 
        = (1U & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q);
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__loopback 
        = (1U & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                 >> 2U));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line 
        = (1U & ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q)) 
                 | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q)));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__irq 
        = (0U != (0x0000000fU & ((vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q 
                                  >> 3U) & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                                            & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data 
        = ((0x00000020U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
            ? ((0x00000010U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                ? ((8U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                    ? ((4U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                        ? ((2U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                            ? 0U : ((1U & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                     ? 0U : 0x55415254U))
                        : 0U) : 0U) : 0U) : ((0x00000010U 
                                              & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : 
                                                    (0x0000000fU 
                                                     & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ien_q))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : 
                                                    (0x0000000fU 
                                                     & vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q)))))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : 
                                                    ((((6U 
                                                        & (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                                                           >> 1U)) 
                                                       | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q)) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q))))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_q)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr))
                                                     ? 0U
                                                     : vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q))))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q) 
           & ((9U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q)) 
              & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q) 
                 == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                    - (IData)(1U))))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt 
        = ((3U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q)) 
           & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q) 
              == (0x0000ffffU & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__baud_div) 
                                 - (IData)(1U)))));
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_tx 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line 
        = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__loopback)
            ? (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_line)
            : (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_rx));
    vlSelfRef.peripheral_unit_harness__DOT__u_irq = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__irq;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data;
    vlSelfRef.peripheral_unit_harness__DOT__uart_tx 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__uart_tx;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_line;
    vlSelfRef.u_irq = vlSelfRef.peripheral_unit_harness__DOT__u_irq;
    vlSelfRef.uart_tx = vlSelfRef.peripheral_unit_harness__DOT__uart_tx;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt = 0U;
    vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt = 0U;
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt) {
        if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok) {
            if ((1U & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q)))) {
                vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt = 1U;
            }
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q)
                    ? (4U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt)
                    : (2U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt));
        } else {
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
                = (8U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt);
        }
    }
    if (vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt) {
        vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt 
            = (1U | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt);
    }
}

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp 
                = vlSelfRef.peripheral_unit_harness__DOT__t_bresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__t_bvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready 
                = vlSelfRef.peripheral_unit_harness__DOT__t_awready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready 
                = vlSelfRef.peripheral_unit_harness__DOT__t_wready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready 
                = vlSelfRef.peripheral_unit_harness__DOT__t_arready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata 
                = vlSelfRef.peripheral_unit_harness__DOT__t_rdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp 
                = vlSelfRef.peripheral_unit_harness__DOT__t_rresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__t_rvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb;
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__bready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__awready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__wready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__arready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__rready));
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit 
                = (1U & Vtop__ConstPool__CONST_h4206ed40_0
                   [(0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr))]);
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__istat_wr 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en) 
                   & ((0x0cU == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr)) 
                      & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb)));
            vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_hit 
                = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit;
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp 
                = vlSelfRef.peripheral_unit_harness__DOT__g_bresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__g_bvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready 
                = vlSelfRef.peripheral_unit_harness__DOT__g_awready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready 
                = vlSelfRef.peripheral_unit_harness__DOT__g_wready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready 
                = vlSelfRef.peripheral_unit_harness__DOT__g_arready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata 
                = vlSelfRef.peripheral_unit_harness__DOT__g_rdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp 
                = vlSelfRef.peripheral_unit_harness__DOT__g_rresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__g_rvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr;
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready));
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__unused_ok 
                = (1U & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en) 
                         ^ (VL_REDXOR_32(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data) 
                            ^ (VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot) 
                               ^ VL_REDXOR_4(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot)))));
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit 
                = (1U & Vtop__ConstPool__CONST_hac49ad39_0
                   [(0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))]);
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_wr 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en) 
                   & ((0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb)) 
                      & (0x10U == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr))));
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit 
                = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit;
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp 
                = vlSelfRef.peripheral_unit_harness__DOT__u_bresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__u_bvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready 
                = vlSelfRef.peripheral_unit_harness__DOT__u_awready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready 
                = vlSelfRef.peripheral_unit_harness__DOT__u_wready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready 
                = vlSelfRef.peripheral_unit_harness__DOT__u_arready;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata 
                = vlSelfRef.peripheral_unit_harness__DOT__u_rdata;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp 
                = vlSelfRef.peripheral_unit_harness__DOT__u_rresp;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid 
                = vlSelfRef.peripheral_unit_harness__DOT__u_rvalid;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb;
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr;
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__bready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__awready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__wready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__arready));
            vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__rready));
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed 
                = (0U != (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb));
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit 
                = (1U & Vtop__ConstPool__CONST_h37726ddb_0
                   [(0x07ffffffU & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr))]);
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_hit 
                = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit;
        }
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_set 
                = ((~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr)) 
                   & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q) 
                      | (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt)));
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_set 
                = ((vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_q 
                    | vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__istat_evt) 
                   & (0xfffffffdU | (- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr)))))));
            vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_start 
                = ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en) 
                   & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed) 
                      & ((IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__tx_en) 
                         & (0x0cU == (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr)))));
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_clr 
                = ((~ vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data) 
                   & (IData)(vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__istat_set));
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

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
    if (VL_UNLIKELY(((vlSelfRef.u_awprot & 0xf8U)))) {
        Verilated::overWidthError("u_awprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_awvalid & 0xfeU)))) {
        Verilated::overWidthError("u_awvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_wstrb & 0xf0U)))) {
        Verilated::overWidthError("u_wstrb");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_wvalid & 0xfeU)))) {
        Verilated::overWidthError("u_wvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_bready & 0xfeU)))) {
        Verilated::overWidthError("u_bready");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_arprot & 0xf8U)))) {
        Verilated::overWidthError("u_arprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_arvalid & 0xfeU)))) {
        Verilated::overWidthError("u_arvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.u_rready & 0xfeU)))) {
        Verilated::overWidthError("u_rready");
    }
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_awprot & 0xf8U)))) {
        Verilated::overWidthError("g_awprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_awvalid & 0xfeU)))) {
        Verilated::overWidthError("g_awvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_wstrb & 0xf0U)))) {
        Verilated::overWidthError("g_wstrb");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_wvalid & 0xfeU)))) {
        Verilated::overWidthError("g_wvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_bready & 0xfeU)))) {
        Verilated::overWidthError("g_bready");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_arprot & 0xf8U)))) {
        Verilated::overWidthError("g_arprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_arvalid & 0xfeU)))) {
        Verilated::overWidthError("g_arvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.g_rready & 0xfeU)))) {
        Verilated::overWidthError("g_rready");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_awprot & 0xf8U)))) {
        Verilated::overWidthError("t_awprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_awvalid & 0xfeU)))) {
        Verilated::overWidthError("t_awvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_wstrb & 0xf0U)))) {
        Verilated::overWidthError("t_wstrb");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_wvalid & 0xfeU)))) {
        Verilated::overWidthError("t_wvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_bready & 0xfeU)))) {
        Verilated::overWidthError("t_bready");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_arprot & 0xf8U)))) {
        Verilated::overWidthError("t_arprot");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_arvalid & 0xfeU)))) {
        Verilated::overWidthError("t_arvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.t_rready & 0xfeU)))) {
        Verilated::overWidthError("t_rready");
    }
}
#endif  // VL_DEBUG

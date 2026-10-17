// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.u_wr_arb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_wr_arb__DOT__clk__0))) 
                                                       << 0x00000014U) 
                                                      | ((((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.u_rd_arb__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_rd_arb__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.u_wr_arb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_wr_arb__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.u_rd_arb__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_rd_arb__DOT__clk__0))))) 
                                                         << 0x00000010U)) 
                                                     | ((((((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.u_wr_arb__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_wr_arb__DOT__clk__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.u_rd_arb__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_rd_arb__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__clk__0))))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.u_wr_arb__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_wr_arb__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.u_rd_arb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_rd_arb__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__clk__0))))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__clk__0))))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__clk__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__clk__0 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_rd_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.u_rd_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_wr_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.u_wr_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_rd_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.u_rd_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_wr_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.u_wr_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_rd_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.u_rd_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_wr_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.u_wr_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_rd_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.u_rd_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_wr_arb__DOT__clk__0 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.u_wr_arb__DOT__clk;
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
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q;
    __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q;
    __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_error_slave.sv:113: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.u_error_slave.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_error_slave.sv", 113, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[8640]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) {
        ++(vlSelf->__Vcoverage[8642]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_error_slave.sv:120: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.u_error_slave.ap_bpending_blocks_aw", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_error_slave.sv", 120, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_error_slave.sv:122: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.u_error_slave.ap_bpending_blocks_w", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_error_slave.sv", 122, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_error_slave.sv:124: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.u_error_slave.ap_bvalid_only_when_pending", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_error_slave.sv", 124, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[8641]);
    }
    ++(vlSelf->__Vcoverage[8643]);
    __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q;
    __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q;
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) {
        ++(vlSelf->__Vcoverage[8637]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[8633]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[8634]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[8635]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[8636]);
        }
        ++(vlSelf->__Vcoverage[8638]);
    }
    ++(vlSelf->__Vcoverage[8639]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) {
        ++(vlSelf->__Vcoverage[8630]);
        __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q = 0U;
        __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_hs) {
            ++(vlSelf->__Vcoverage[8622]);
            __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[8623]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_hs) {
            ++(vlSelf->__Vcoverage[8624]);
            __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[8625]);
        }
        if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q) 
             & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q))) {
            ++(vlSelf->__Vcoverage[8626]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q = 1U;
            __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q = 0U;
            __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[8627]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[8628]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[8629]);
        }
        ++(vlSelf->__Vcoverage[8631]);
    }
    ++(vlSelf->__Vcoverage[8632]);
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q 
        = __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q 
        = __Vdly__crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8610, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) 
                    | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_pend_q))));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_seen_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8604, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_seen_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_seen_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_seen_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8606, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_seen_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_seen_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8608, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) 
                    | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_seen_q) 
                       | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q)))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rst) 
                    | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_pend_q) 
                       | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_seen_q)))));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8600, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_rvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8598, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_arready 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8522, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_bvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8444, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_awready 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8520, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_wready 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_rvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5596, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_rvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_rvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_rvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_rvalid;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_arready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5594, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_arready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_arready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_arready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_arready;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_bvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5592, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_bvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_bvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_bvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_bvalid;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_awready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5588, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_awready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_awready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_awready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_awready;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_wready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5590, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_wready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_wready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__err_wready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_wready;
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__awready_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wready_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__arready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:451: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 451, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__bvalid_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:453: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 453, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[6750]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[6746]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_anchored)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_dec)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:428: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_w_sel_decodes_addr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 428, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_dec)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:430: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_r_sel_decodes_addr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 430, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:437: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_ar_pend_implies_active", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 437, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[6745]);
    }
    ++(vlSelf->__Vcoverage[6747]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[6752]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:459: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_w_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 459, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:460: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_r_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 460, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o))) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:461: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_w_req_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 461, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__awready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:462: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_wait_blocks_aw", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 462, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:463: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_wait_blocks_w", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 463, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__arready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:464: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_active_blocks_ar", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 464, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__bvalid_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:465: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_bvalid_gated", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 465, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rvalid_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:466: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_rvalid_gated", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 466, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__b_hs)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:480: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_b_rsp_needs_full_dispatch", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 480, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_hs)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:482: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_r_rsp_needs_dispatch", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 482, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_gnt_i)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__awready_o)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wready_o))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:487: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_w_gnt_blocks_ready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 487, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_gnt_i)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__arready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:488: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.ap_r_gnt_blocks_ready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 488, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[6751]);
    }
    ++(vlSelf->__Vcoverage[6753]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[6712]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_accept) {
            ++(vlSelf->__Vcoverage[6706]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__araddr_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__arprot_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_c;
        } else {
            ++(vlSelf->__Vcoverage[6707]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_done) {
            ++(vlSelf->__Vcoverage[6708]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[6709]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[6710]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[6711]);
        }
        ++(vlSelf->__Vcoverage[6713]);
    }
    ++(vlSelf->__Vcoverage[6714]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[6703]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_accept) {
            ++(vlSelf->__Vcoverage[6696]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__awaddr_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__awprot_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_c;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_done) {
            ++(vlSelf->__Vcoverage[6694]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[6695]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_accept) {
            ++(vlSelf->__Vcoverage[6699]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wdata_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wstrb_i;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_done) {
            ++(vlSelf->__Vcoverage[6697]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[6698]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[6702]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q = 0U;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_start) {
            ++(vlSelf->__Vcoverage[6700]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[6701]);
        }
        ++(vlSelf->__Vcoverage[6704]);
    }
    ++(vlSelf->__Vcoverage[6705]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6568, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6642, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6570, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_rsp_en 
        = ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q)) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__rd_active_q));
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_pend_q) {
        ++(vlSelf->__Vcoverage[6717]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_1 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q;
    } else {
        ++(vlSelf->__Vcoverage[6718]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_1;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 6636, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_prot_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_prot_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6572, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_addr_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_addr_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6566, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6484, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6492, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_wvalid_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6412, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_anchored 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q) 
           | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_rsp_en 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_wait_q) 
           & ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q)) 
              & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_awvalid_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_pend_q) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_pend_q))) {
        ++(vlSelf->__Vcoverage[6715]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_0 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q;
    } else {
        ++(vlSelf->__Vcoverage[6716]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_0 = 0U;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____VlemCond_0;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 6478, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_prot_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_prot_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6494, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_q;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6558, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6414, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_addr_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_addr_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_rsp_en) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6692, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_rsp_en, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_rsp_en;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_req_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6248, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_req_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_req_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_prot_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 6320, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_prot_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_prot_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6754, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo 
        = (1U & VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i = 0U;
    while ((3U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i)) {
        __Vtemp_1[0U] = 0U;
        __Vtemp_1[1U] = 0x00004000U;
        __Vtemp_1[2U] = 0x00008000U;
        if (((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
              >> 0x0cU) == ((0x5fU >= (0x0000007fU 
                                       & ((IData)(0x0cU) 
                                          + (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                             << 5U))))
                             ? (0x000fffffU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0cU) 
                                                     + 
                                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                      << 5U))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_1
                                                 [(
                                                   ((IData)(0x00000013U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x0cU) 
                                                        + 
                                                        (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                         << 5U)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U)))))) 
                                               | (__Vtemp_1
                                                  [
                                                  (3U 
                                                   & (((IData)(0x0cU) 
                                                       + 
                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                        << 5U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U))))))
                             : 0U))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                   | (0x0fU & ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i))));
            ++(vlSelf->__Vcoverage[6828]);
        } else {
            ++(vlSelf->__Vcoverage[6829]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i);
        ++(vlSelf->__Vcoverage[6830]);
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel)) 
           | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel)))) 
                    << 3U)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                    >> 3U)));
    ++(vlSelf->__Vcoverage[6831]);
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_addr_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6256, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_addr_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_addr_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_wvalid_o) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6104, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_wvalid_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_wvalid_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_anchored) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6688, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_anchored, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__wr_anchored;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_rsp_en) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6690, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_rsp_en, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_rsp_en;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_awvalid_o) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6102, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_awvalid_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_awvalid_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_req_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6094, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_req_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_req_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_prot_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 6170, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_prot_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_prot_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6176, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_data_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6240, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6835, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo 
        = (1U & VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i = 0U;
    while ((3U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i)) {
        __Vtemp_3[0U] = 0U;
        __Vtemp_3[1U] = 0x00004000U;
        __Vtemp_3[2U] = 0x00008000U;
        if (((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
              >> 0x0cU) == ((0x5fU >= (0x0000007fU 
                                       & ((IData)(0x0cU) 
                                          + (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                             << 5U))))
                             ? (0x000fffffU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0cU) 
                                                     + 
                                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                      << 5U))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_3
                                                 [(
                                                   ((IData)(0x00000013U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x0cU) 
                                                        + 
                                                        (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                         << 5U)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U)))))) 
                                               | (__Vtemp_3
                                                  [
                                                  (3U 
                                                   & (((IData)(0x0cU) 
                                                       + 
                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                        << 5U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U))))))
                             : 0U))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                   | (0x0fU & ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i))));
            ++(vlSelf->__Vcoverage[6909]);
        } else {
            ++(vlSelf->__Vcoverage[6910]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i);
        ++(vlSelf->__Vcoverage[6911]);
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel)) 
           | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel)))) 
                    << 3U)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                    >> 3U)));
    ++(vlSelf->__Vcoverage[6912]);
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_addr_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 6106, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_addr_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_addr_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6833, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6818, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_dec 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:60: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.u_ar_decode_q.ap_sel_onehot", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 60, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit) 
                              != (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                                           >> 3U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:61: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.u_ar_decode_q.ap_hit_def", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 61, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[6832]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6826, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_hit 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6914, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6899, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel;
    }
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:60: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.u_aw_decode_q.ap_sel_onehot", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 60, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit) 
                              != (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                                           >> 3U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:61: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[1].u_mport.u_aw_decode_q.ap_hit_def", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 61, "");
            }
        }
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_dec 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel;
    ++(vlSelf->__Vcoverage[6913]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6907, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_hit 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_dec) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6733, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_dec, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_dec;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6743, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__ar_sel_q_hit;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_dec) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6725, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_dec, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_dec;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6741, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__aw_sel_q_hit;
    }
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__awready_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wready_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__arready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:451: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 451, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__bvalid_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:453: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 453, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[8040]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[8038]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_anchored)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_dec)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:428: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_w_sel_decodes_addr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 428, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_dec)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:430: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_r_sel_decodes_addr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 430, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:437: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_ar_pend_implies_active", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 437, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[8037]);
    }
    ++(vlSelf->__Vcoverage[8039]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[8042]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:459: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_w_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 459, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:460: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_r_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 460, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o))) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:461: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_w_req_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 461, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__awready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:462: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_wait_blocks_aw", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 462, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:463: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_wait_blocks_w", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 463, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__arready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:464: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_active_blocks_ar", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 464, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__bvalid_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:465: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_bvalid_gated", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 465, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rvalid_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:466: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_rvalid_gated", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 466, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__b_hs)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:480: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_b_rsp_needs_full_dispatch", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 480, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_hs)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:482: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_r_rsp_needs_dispatch", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 482, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_gnt_i)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__awready_o)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wready_o))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:487: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_w_gnt_blocks_ready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 487, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_gnt_i)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__arready_o)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_master_port.sv:488: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.ap_r_gnt_blocks_ready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_master_port.sv", 488, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[8041]);
    }
    ++(vlSelf->__Vcoverage[8043]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[8004]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_accept) {
            ++(vlSelf->__Vcoverage[7998]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__araddr_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__arprot_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_c;
        } else {
            ++(vlSelf->__Vcoverage[7999]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_done) {
            ++(vlSelf->__Vcoverage[8000]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[8001]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[8002]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[8003]);
        }
        ++(vlSelf->__Vcoverage[8005]);
    }
    ++(vlSelf->__Vcoverage[8006]);
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rst) {
        ++(vlSelf->__Vcoverage[7995]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q = 0U;
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_accept) {
            ++(vlSelf->__Vcoverage[7988]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__awaddr_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__awprot_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_c;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_done) {
            ++(vlSelf->__Vcoverage[7986]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[7987]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_accept) {
            ++(vlSelf->__Vcoverage[7991]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q = 1U;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wdata_i;
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q 
                = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wstrb_i;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_done) {
            ++(vlSelf->__Vcoverage[7989]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[7990]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[7994]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q = 0U;
        } else if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_start) {
            ++(vlSelf->__Vcoverage[7992]);
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[7993]);
        }
        ++(vlSelf->__Vcoverage[7996]);
    }
    ++(vlSelf->__Vcoverage[7997]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7860, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__rd_active_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7934, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7862, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_rsp_en 
        = ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q)) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__rd_active_q));
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_pend_q) {
        ++(vlSelf->__Vcoverage[8009]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_1 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q;
    } else {
        ++(vlSelf->__Vcoverage[8010]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_1;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 7928, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_prot_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_prot_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_prot_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7864, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_addr_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_addr_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_addr_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7858, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_wait_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7776, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7784, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_wvalid_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7704, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_anchored 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q) 
           | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_rsp_en 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_wait_q) 
           & ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q)) 
              & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_awvalid_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_pend_q) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_pend_q))) {
        ++(vlSelf->__Vcoverage[8007]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_0 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q;
    } else {
        ++(vlSelf->__Vcoverage[8008]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_0 = 0U;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____VlemCond_0;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 7770, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_prot_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_prot_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_prot_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7786, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_q;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7850, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_q;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7706, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_addr_q 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_addr_o 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_addr_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_rsp_en) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7984, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_rsp_en, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_rsp_en 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_rsp_en;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_req_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7540, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_req_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_req_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_prot_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 7612, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_prot_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_prot_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_prot_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8044, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__addr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo 
        = (1U & VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i = 0U;
    while ((3U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i)) {
        __Vtemp_1[0U] = 0U;
        __Vtemp_1[1U] = 0x00004000U;
        __Vtemp_1[2U] = 0x00008000U;
        if (((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__addr 
              >> 0x0cU) == ((0x5fU >= (0x0000007fU 
                                       & ((IData)(0x0cU) 
                                          + (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                             << 5U))))
                             ? (0x000fffffU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0cU) 
                                                     + 
                                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                      << 5U))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_1
                                                 [(
                                                   ((IData)(0x00000013U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x0cU) 
                                                        + 
                                                        (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                         << 5U)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U)))))) 
                                               | (__Vtemp_1
                                                  [
                                                  (3U 
                                                   & (((IData)(0x0cU) 
                                                       + 
                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                        << 5U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U))))))
                             : 0U))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                   | (0x0fU & ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i))));
            ++(vlSelf->__Vcoverage[8118]);
        } else {
            ++(vlSelf->__Vcoverage[8119]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unnamedblk1__DOT__i);
        ++(vlSelf->__Vcoverage[8120]);
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel)) 
           | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel)))) 
                    << 3U)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                    >> 3U)));
    ++(vlSelf->__Vcoverage[8121]);
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_addr_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7548, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_addr_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__r_addr_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_addr_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_wvalid_o) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7396, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_wvalid_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_wvalid_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_wvalid_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_anchored) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7980, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_anchored, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__wr_anchored 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__wr_anchored;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_rsp_en) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7982, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_rsp_en, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_rsp_en 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_rsp_en;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_awvalid_o) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 7394, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_awvalid_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_awvalid_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_awvalid_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_req_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7386, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_req_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_req_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_prot_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 7462, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_prot_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_prot_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_prot_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7468, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_data_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_o;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_o) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 7532, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_strb_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_o;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8125, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__addr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo 
        = (1U & VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i = 0U;
    while ((3U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i)) {
        __Vtemp_3[0U] = 0U;
        __Vtemp_3[1U] = 0x00004000U;
        __Vtemp_3[2U] = 0x00008000U;
        if (((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__addr 
              >> 0x0cU) == ((0x5fU >= (0x0000007fU 
                                       & ((IData)(0x0cU) 
                                          + (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                             << 5U))))
                             ? (0x000fffffU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0cU) 
                                                     + 
                                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                      << 5U))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_3
                                                 [(
                                                   ((IData)(0x00000013U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x0cU) 
                                                        + 
                                                        (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                         << 5U)))) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U)))))) 
                                               | (__Vtemp_3
                                                  [
                                                  (3U 
                                                   & (((IData)(0x0cU) 
                                                       + 
                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                        << 5U)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0cU) 
                                                      + 
                                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
                                                       << 5U))))))
                             : 0U))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                   | (0x0fU & ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i))));
            ++(vlSelf->__Vcoverage[8199]);
        } else {
            ++(vlSelf->__Vcoverage[8200]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unnamedblk1__DOT__i);
        ++(vlSelf->__Vcoverage[8201]);
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel)) 
           | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel)))) 
                    << 3U)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit 
        = (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                    >> 3U)));
    ++(vlSelf->__Vcoverage[8202]);
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_addr_o 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 7398, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_addr_o, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__w_addr_o 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_addr_o;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8123, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__unused_lo 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__unused_lo;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8108, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__sel 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_dec 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:60: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.u_ar_decode_q.ap_sel_onehot", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 60, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit) 
                              != (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__sel) 
                                           >> 3U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:61: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.u_ar_decode_q.ap_hit_def", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 61, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[8122]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8116, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT____Vtogcov__hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_hit 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_ar_decode_q__DOT__hit;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8204, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__unused_lo 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__unused_lo;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8189, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__sel 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel;
    }
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:60: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.u_aw_decode_q.ap_sel_onehot", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 60, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit) 
                              != (1U & (~ ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel) 
                                           >> 3U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_address_decoder.sv:61: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_mst[0].u_mport.u_aw_decode_q.ap_hit_def", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_address_decoder.sv", 61, "");
            }
        }
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_dec 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__sel;
    ++(vlSelf->__Vcoverage[8203]);
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8197, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT____Vtogcov__hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_hit 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__u_aw_decode_q__DOT__hit;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_dec) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8025, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_dec, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_dec 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_dec;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8035, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__ar_sel_q_hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__ar_sel_q_hit;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_dec) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8017, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_dec, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_dec 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_dec;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_hit) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8033, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_hit, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT____Vtogcov__aw_sel_q_hit 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__aw_sel_q_hit;
    }
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q = 0;
    QData/*35:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q = 0;
    CData/*1:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q = 0;
    QData/*33:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q = 0;
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9311]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9310]);
    }
    ++(vlSelf->__Vcoverage[9312]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9314]);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:306: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_rst_master_awvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 306, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:307: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_rst_master_wvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 307, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:308: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_rst_master_arvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 308, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:309: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_rst_master_bready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 309, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:310: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_rst_master_rready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 310, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9315]);
        ++(vlSelf->__Vcoverage[9317]);
    } else {
        ++(vlSelf->__Vcoverage[9318]);
    }
    ++(vlSelf->__Vcoverage[9319]);
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9130]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready)))) {
        ++(vlSelf->__Vcoverage[9128]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bresp;
    } else {
        ++(vlSelf->__Vcoverage[9129]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bresp) 
                                  != (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9131]);
    } else {
        ++(vlSelf->__Vcoverage[9132]);
    }
    ++(vlSelf->__Vcoverage[9133]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9038]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awready)))) {
        ++(vlSelf->__Vcoverage[9036]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot)));
    } else {
        ++(vlSelf->__Vcoverage[9037]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9039]);
    } else {
        ++(vlSelf->__Vcoverage[9040]);
    }
    ++(vlSelf->__Vcoverage[9041]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9118]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wready)))) {
        ++(vlSelf->__Vcoverage[9116]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[9117]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9119]);
    } else {
        ++(vlSelf->__Vcoverage[9120]);
    }
    ++(vlSelf->__Vcoverage[9121]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9208]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arready)))) {
        ++(vlSelf->__Vcoverage[9206]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot)));
    } else {
        ++(vlSelf->__Vcoverage[9207]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9209]);
    } else {
        ++(vlSelf->__Vcoverage[9210]);
    }
    ++(vlSelf->__Vcoverage[9211]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9284]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready)))) {
        ++(vlSelf->__Vcoverage[9282]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rdata)) 
                << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rresp)));
    } else {
        ++(vlSelf->__Vcoverage[9283]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rresp))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9285]);
    } else {
        ++(vlSelf->__Vcoverage[9286]);
    }
    ++(vlSelf->__Vcoverage[9287]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9305]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[9300]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs;
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs;
        } else {
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs) {
                ++(vlSelf->__Vcoverage[9296]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[9297]);
            }
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs) {
                ++(vlSelf->__Vcoverage[9298]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[9299]);
            }
            ++(vlSelf->__Vcoverage[9301]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[9304]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs;
        } else if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[9302]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[9303]);
        }
        ++(vlSelf->__Vcoverage[9306]);
    }
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9308]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[2].u_chk.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9307]);
    }
    ++(vlSelf->__Vcoverage[9309]);
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9122, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 9124, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_resp_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8964, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 8966, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9042, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 9044, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9134, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 9136, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9212, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 9214, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9292, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rd_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9288, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9290, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_full 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_w_acc_q));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_full) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9294, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_full, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_full);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wr_full 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wr_full;
    }
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0;
    QData/*35:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0;
    CData/*1:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0;
    QData/*33:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 0;
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9985]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9984]);
    }
    ++(vlSelf->__Vcoverage[9986]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9988]);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:306: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_rst_master_awvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 306, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:307: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_rst_master_wvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 307, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:308: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_rst_master_arvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 308, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:309: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_rst_master_bready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 309, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:310: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_rst_master_rready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 310, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9989]);
        ++(vlSelf->__Vcoverage[9991]);
    } else {
        ++(vlSelf->__Vcoverage[9992]);
    }
    ++(vlSelf->__Vcoverage[9993]);
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9804]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready)))) {
        ++(vlSelf->__Vcoverage[9802]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp;
    } else {
        ++(vlSelf->__Vcoverage[9803]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp) 
                                  != (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9805]);
    } else {
        ++(vlSelf->__Vcoverage[9806]);
    }
    ++(vlSelf->__Vcoverage[9807]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9712]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awready)))) {
        ++(vlSelf->__Vcoverage[9710]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot)));
    } else {
        ++(vlSelf->__Vcoverage[9711]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9713]);
    } else {
        ++(vlSelf->__Vcoverage[9714]);
    }
    ++(vlSelf->__Vcoverage[9715]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9792]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wready)))) {
        ++(vlSelf->__Vcoverage[9790]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[9791]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9793]);
    } else {
        ++(vlSelf->__Vcoverage[9794]);
    }
    ++(vlSelf->__Vcoverage[9795]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9882]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arready)))) {
        ++(vlSelf->__Vcoverage[9880]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot)));
    } else {
        ++(vlSelf->__Vcoverage[9881]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9883]);
    } else {
        ++(vlSelf->__Vcoverage[9884]);
    }
    ++(vlSelf->__Vcoverage[9885]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9958]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready)))) {
        ++(vlSelf->__Vcoverage[9956]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rdata)) 
                << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp)));
    } else {
        ++(vlSelf->__Vcoverage[9957]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9959]);
    } else {
        ++(vlSelf->__Vcoverage[9960]);
    }
    ++(vlSelf->__Vcoverage[9961]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9979]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[9974]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs;
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs;
        } else {
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs) {
                ++(vlSelf->__Vcoverage[9970]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[9971]);
            }
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs) {
                ++(vlSelf->__Vcoverage[9972]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[9973]);
            }
            ++(vlSelf->__Vcoverage[9975]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[9978]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs;
        } else if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[9976]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[9977]);
        }
        ++(vlSelf->__Vcoverage[9980]);
    }
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[9982]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[1].u_chk.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[9981]);
    }
    ++(vlSelf->__Vcoverage[9983]);
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9796, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 9798, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9638, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 9640, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9716, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 9718, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9808, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 9810, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9886, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 9888, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9966, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9962, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9964, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9968, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full;
    }
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0;
    QData/*35:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0;
    CData/*1:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0;
    QData/*33:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 0;
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10659]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10658]);
    }
    ++(vlSelf->__Vcoverage[10660]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10662]);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:306: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_rst_master_awvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 306, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:307: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_rst_master_wvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 307, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:308: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_rst_master_arvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 308, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:309: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_rst_master_bready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 309, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:310: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_rst_master_rready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 310, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10663]);
        ++(vlSelf->__Vcoverage[10665]);
    } else {
        ++(vlSelf->__Vcoverage[10666]);
    }
    ++(vlSelf->__Vcoverage[10667]);
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10478]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready)))) {
        ++(vlSelf->__Vcoverage[10476]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp;
    } else {
        ++(vlSelf->__Vcoverage[10477]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp) 
                                  != (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10479]);
    } else {
        ++(vlSelf->__Vcoverage[10480]);
    }
    ++(vlSelf->__Vcoverage[10481]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10386]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awready)))) {
        ++(vlSelf->__Vcoverage[10384]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot)));
    } else {
        ++(vlSelf->__Vcoverage[10385]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10387]);
    } else {
        ++(vlSelf->__Vcoverage[10388]);
    }
    ++(vlSelf->__Vcoverage[10389]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10466]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wready)))) {
        ++(vlSelf->__Vcoverage[10464]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[10465]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10467]);
    } else {
        ++(vlSelf->__Vcoverage[10468]);
    }
    ++(vlSelf->__Vcoverage[10469]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10556]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arready)))) {
        ++(vlSelf->__Vcoverage[10554]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot)));
    } else {
        ++(vlSelf->__Vcoverage[10555]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10557]);
    } else {
        ++(vlSelf->__Vcoverage[10558]);
    }
    ++(vlSelf->__Vcoverage[10559]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10632]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready)))) {
        ++(vlSelf->__Vcoverage[10630]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rdata)) 
                << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp)));
    } else {
        ++(vlSelf->__Vcoverage[10631]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10633]);
    } else {
        ++(vlSelf->__Vcoverage[10634]);
    }
    ++(vlSelf->__Vcoverage[10635]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10653]);
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[10648]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs;
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs;
        } else {
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs) {
                ++(vlSelf->__Vcoverage[10644]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[10645]);
            }
            if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs) {
                ++(vlSelf->__Vcoverage[10646]);
                __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[10647]);
            }
            ++(vlSelf->__Vcoverage[10649]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[10652]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs;
        } else if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[10650]);
            __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[10651]);
        }
        ++(vlSelf->__Vcoverage[10654]);
    }
    if (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[10656]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_slave_checkers[0].u_chk.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[10655]);
    }
    ++(vlSelf->__Vcoverage[10657]);
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10470, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 10472, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10312, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 10314, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10390, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 10392, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10482, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 10484, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10560, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 10562, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10640, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10636, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10638, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10642, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full;
    }
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0;
    QData/*35:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0;
    CData/*1:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0;
    QData/*33:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 0;
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11333]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11332]);
    }
    ++(vlSelf->__Vcoverage[11334]);
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11335]);
        ++(vlSelf->__Vcoverage[11338]);
        ++(vlSelf->__Vcoverage[11339]);
    } else {
        ++(vlSelf->__Vcoverage[11340]);
    }
    ++(vlSelf->__Vcoverage[11341]);
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11152]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bready)))) {
        ++(vlSelf->__Vcoverage[11150]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp;
    } else {
        ++(vlSelf->__Vcoverage[11151]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bresp) 
                                  != (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11153]);
    } else {
        ++(vlSelf->__Vcoverage[11154]);
    }
    ++(vlSelf->__Vcoverage[11155]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11060]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awready)))) {
        ++(vlSelf->__Vcoverage[11058]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot)));
    } else {
        ++(vlSelf->__Vcoverage[11059]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11061]);
    } else {
        ++(vlSelf->__Vcoverage[11062]);
    }
    ++(vlSelf->__Vcoverage[11063]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11140]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wready)))) {
        ++(vlSelf->__Vcoverage[11138]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[11139]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11141]);
    } else {
        ++(vlSelf->__Vcoverage[11142]);
    }
    ++(vlSelf->__Vcoverage[11143]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11230]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arready)))) {
        ++(vlSelf->__Vcoverage[11228]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot)));
    } else {
        ++(vlSelf->__Vcoverage[11229]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11231]);
    } else {
        ++(vlSelf->__Vcoverage[11232]);
    }
    ++(vlSelf->__Vcoverage[11233]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11306]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rready)))) {
        ++(vlSelf->__Vcoverage[11304]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rdata)) 
                << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp)));
    } else {
        ++(vlSelf->__Vcoverage[11305]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rresp))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11307]);
    } else {
        ++(vlSelf->__Vcoverage[11308]);
    }
    ++(vlSelf->__Vcoverage[11309]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11327]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[11322]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs;
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs;
        } else {
            if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs) {
                ++(vlSelf->__Vcoverage[11318]);
                __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[11319]);
            }
            if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs) {
                ++(vlSelf->__Vcoverage[11320]);
                __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[11321]);
            }
            ++(vlSelf->__Vcoverage[11323]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[11326]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs;
        } else if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[11324]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[11325]);
        }
        ++(vlSelf->__Vcoverage[11328]);
    }
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11330]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[1].u_chk.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11329]);
    }
    ++(vlSelf->__Vcoverage[11331]);
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11144, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 11146, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__b_resp_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10986, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 10988, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11064, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 11066, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__w_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11156, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 11158, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11234, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 11236, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__r_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11314, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__rd_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11310, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11312, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_w_acc_q));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11316, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wr_full 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__1__KET____DOT__u_chk__DOT__wr_full;
    }
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0;
    QData/*35:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0;
    CData/*1:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0;
    QData/*33:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 0;
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[12007]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[12006]);
    }
    ++(vlSelf->__Vcoverage[12008]);
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[12009]);
        ++(vlSelf->__Vcoverage[12012]);
        ++(vlSelf->__Vcoverage[12013]);
    } else {
        ++(vlSelf->__Vcoverage[12014]);
    }
    ++(vlSelf->__Vcoverage[12015]);
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11826]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bready)))) {
        ++(vlSelf->__Vcoverage[11824]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp;
    } else {
        ++(vlSelf->__Vcoverage[11825]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bresp) 
                                  != (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11827]);
    } else {
        ++(vlSelf->__Vcoverage[11828]);
    }
    ++(vlSelf->__Vcoverage[11829]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11734]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awready)))) {
        ++(vlSelf->__Vcoverage[11732]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot)));
    } else {
        ++(vlSelf->__Vcoverage[11733]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11735]);
    } else {
        ++(vlSelf->__Vcoverage[11736]);
    }
    ++(vlSelf->__Vcoverage[11737]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11814]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wready)))) {
        ++(vlSelf->__Vcoverage[11812]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[11813]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11815]);
    } else {
        ++(vlSelf->__Vcoverage[11816]);
    }
    ++(vlSelf->__Vcoverage[11817]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11904]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arready)))) {
        ++(vlSelf->__Vcoverage[11902]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr)) 
                << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot)));
    } else {
        ++(vlSelf->__Vcoverage[11903]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11905]);
    } else {
        ++(vlSelf->__Vcoverage[11906]);
    }
    ++(vlSelf->__Vcoverage[11907]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[11980]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid) 
                & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rready)))) {
        ++(vlSelf->__Vcoverage[11978]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 1U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
            = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rdata)) 
                << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp)));
    } else {
        ++(vlSelf->__Vcoverage[11979]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst)) 
         & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rresp))) 
                                  != vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[11981]);
    } else {
        ++(vlSelf->__Vcoverage[11982]);
    }
    ++(vlSelf->__Vcoverage[11983]);
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[12001]);
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 0U;
        __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs) {
            ++(vlSelf->__Vcoverage[11996]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs;
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs;
        } else {
            if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs) {
                ++(vlSelf->__Vcoverage[11992]);
                __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[11993]);
            }
            if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs) {
                ++(vlSelf->__Vcoverage[11994]);
                __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[11995]);
            }
            ++(vlSelf->__Vcoverage[11997]);
        }
        if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs) {
            ++(vlSelf->__Vcoverage[12000]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
                = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs;
        } else if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs) {
            ++(vlSelf->__Vcoverage[11998]);
            __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[11999]);
        }
        ++(vlSelf->__Vcoverage[12002]);
    }
    if (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rst) {
        ++(vlSelf->__Vcoverage[12004]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid)) 
                                           | (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs) 
                                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.gen_master_checkers[0].u_chk.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[12003]);
    }
    ++(vlSelf->__Vcoverage[12005]);
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q 
        = __Vdly__crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11818, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 11820, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_resp_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__b_resp_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11660, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 11662, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11738, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 11740, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__w_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11830, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 11832, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11908, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pend_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pend_q;
    }
    if ((0ULL != (vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q 
                  ^ vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 11910, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_pay_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__r_pay_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11988, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rd_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__rd_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11984, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_aw_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11986, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_w_acc_q 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_aw_acc_q) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_w_acc_q));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11990, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full, vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full);
        vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wr_full 
            = vlSelfRef.crossbar_checker_top__DOT__gen_master_checkers__BRA__0__KET____DOT__u_chk__DOT__wr_full;
    }
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__rst) {
        ++(vlSelf->__Vcoverage[5784]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:585: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_mst_w_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 585, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:586: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_mst_r_req_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 586, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__w_gnt_exclusive_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:587: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_gnt_exclusive_w", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 587, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__r_gnt_exclusive_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:588: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_gnt_exclusive_r", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 588, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__provenance_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:589: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_payload_from_owner", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 589, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__w_region_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:590: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_w_addr_in_region", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 590, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__r_region_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:591: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_r_addr_in_region", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 591, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__w_err_unmapped_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:592: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_w_err_addr_unmapped", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 592, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__r_err_unmapped_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:593: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_r_err_addr_unmapped", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 593, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__w_gnt_addr_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:594: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_w_gnt_addr_match", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 594, "");
                }
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__r_gnt_addr_ok)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_crossbar.sv:595: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.ap_r_gnt_addr_match", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_crossbar.sv", 595, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[5783]);
    }
    ++(vlSelf->__Vcoverage[5785]);
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_req_o) 
            << 4U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_req_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_prot_o) 
            << 3U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_prot_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr 
        = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__r_addr_o)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__r_addr_o)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_wvalid_o) 
            << 1U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_wvalid_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_awvalid_o) 
            << 1U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_awvalid_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_req_o) 
            << 4U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_req_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_prot_o) 
            << 3U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_prot_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data 
        = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_data_o)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_data_o)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb 
        = (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_strb_o) 
            << 4U) | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_strb_o));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr 
        = (((QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__1__KET____DOT__u_mport__DOT__w_addr_o)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__g_mst__BRA__0__KET____DOT__u_mport__DOT__w_addr_o)));
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3356, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req 
            = ((0xf0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3364, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req 
            = ((0x0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req)));
    }
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3500, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot 
            = ((0x38U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3506, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot 
            = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_prot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_prot)));
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3372, (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr), (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr 
            = ((0xffffffff00000000ULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr) 
               | (IData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr)));
    }
    if ((0U != ((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3436, (IData)(
                                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr 
                                                                                >> 0x00000020U)));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr 
            = ((0x00000000ffffffffULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_addr) 
               | ((QData)((IData)((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_addr 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_wvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3068, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_wvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_awvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3064, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_awvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3048, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req 
            = ((0xf0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3056, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req 
            = ((0x0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req)));
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok = 1U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok = 1U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m = 0U;
    while ((2U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m)) {
        if (VL_ONEHOT0_I((0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req) 
                                         >> (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m 
                                                   << 2U)))))) {
            ++(vlSelf->__Vcoverage[5711]);
        } else {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok = 0U;
            ++(vlSelf->__Vcoverage[5710]);
        }
        if (VL_ONEHOT0_I((0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req) 
                                         >> (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m 
                                                   << 2U)))))) {
            ++(vlSelf->__Vcoverage[5713]);
        } else {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok = 0U;
            ++(vlSelf->__Vcoverage[5712]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk6__DOT__m);
        ++(vlSelf->__Vcoverage[5714]);
    }
    ++(vlSelf->__Vcoverage[5715]);
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s = 0U;
    while ((4U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s)) {
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m = 0U;
        while ((2U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m)) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req 
                = (((~ ((IData)(1U) << (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s 
                                               << 1U) 
                                              + (1U 
                                                 & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m))))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req)) 
                   | (0x00ffU & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req) 
                                        >> (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m 
                                                   << 2U) 
                                                  + 
                                                  (3U 
                                                   & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s))))) 
                                 << (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s 
                                            << 1U) 
                                           + (1U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m))))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req 
                = (((~ ((IData)(1U) << (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s 
                                               << 1U) 
                                              + (1U 
                                                 & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m))))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req)) 
                   | (0x00ffU & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req) 
                                        >> (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m 
                                                   << 2U) 
                                                  + 
                                                  (3U 
                                                   & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s))))) 
                                 << (7U & ((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s 
                                            << 1U) 
                                           + (1U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m))))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m 
                = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__m);
            ++(vlSelf->__Vcoverage[5698]);
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk1__DOT__s);
        ++(vlSelf->__Vcoverage[5699]);
    }
    ++(vlSelf->__Vcoverage[5700]);
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3200, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot 
            = ((0x38U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3206, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot 
            = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_prot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_prot)));
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3212, (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data), (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data 
            = ((0xffffffff00000000ULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data) 
               | (IData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data)));
    }
    if ((0U != ((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3276, (IData)(
                                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data 
                                                                                >> 0x00000020U)));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data 
            = ((0x00000000ffffffffULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_data) 
               | ((QData)((IData)((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_data 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3340, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb 
            = ((0xf0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 3348, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb 
            = ((0x0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_strb)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_strb)));
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3072, (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr), (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr 
            = ((0xffffffff00000000ULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr) 
               | (IData)((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr)));
    }
    if ((0U != ((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 3136, (IData)(
                                                                       (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr 
                                                                                >> 0x00000020U)));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr 
            = ((0x00000000ffffffffULL & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_addr) 
               | ((QData)((IData)((IData)((vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_addr 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req_onehot_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5706, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req_onehot_ok);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__w_req_onehot_ok 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__w_req_onehot_ok;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req_onehot_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5708, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req_onehot_ok);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__r_req_onehot_ok 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__r_req_onehot_ok;
    }
    if ((0U != (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req))))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5666, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req 
            = ((0xfcU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
               | (3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
                      >> 2U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5670, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                                >> 2U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req) 
                                         >> 2U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req 
            = ((0xf3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
               | (0x0000000cU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
                      >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5674, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req 
            = ((0xcfU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
               | (0x00000030U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5678, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req 
            = ((0x3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_w_req)) 
               | (0x000000c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_w_req)));
    }
    if ((0U != (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req))))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5682, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req 
            = ((0xfcU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
               | (3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
                      >> 2U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5686, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                                >> 2U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req) 
                                         >> 2U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req 
            = ((0xf3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
               | (0x0000000cU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
                      >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5690, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req 
            = ((0xcfU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
               | (0x00000030U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5694, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req 
            = ((0x3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_r_req)) 
               | (0x000000c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_r_req)));
    }
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[0U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.awaddr_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[1U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.awaddr_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.awaddr_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.awaddr_o))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.awaddr_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.awaddr_o))) 
                   >> 0x00000020U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot 
        = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.awprot_o) 
             << 9U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.awprot_o) 
                       << 6U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.awprot_o) 
                                   << 3U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.awprot_o)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[0U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.wdata_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[1U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.wdata_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.wdata_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.wdata_o))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.wdata_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.wdata_o))) 
                   >> 0x00000020U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb 
        = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.wstrb_o) 
             << 0x0000000cU) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.wstrb_o) 
                                << 8U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.wstrb_o) 
                                            << 4U) 
                                           | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.wstrb_o)));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[0U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.araddr_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[1U] 
        = vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.araddr_o;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.araddr_o)) 
                    << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.araddr_o))));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.araddr_o)) 
                     << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.araddr_o))) 
                   >> 0x00000020U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot 
        = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.arprot_o) 
             << 9U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.arprot_o) 
                       << 6U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.arprot_o) 
                                   << 3U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.arprot_o)));
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4372, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4436, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4500, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[2U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[3U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4564, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[3U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[3U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awaddr[3U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[3U];
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awaddr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr[3U];
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4628, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot 
            = ((0x0ff8U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4634, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot 
            = ((0x0fc7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4640, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot 
            = ((0x0e3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
                      >> 9U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4646, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                                >> 9U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot) 
                                         >> 9U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot 
            = ((0x01ffU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awprot)) 
               | (0x00000e00U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                 >> 9U));
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4668, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4732, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4796, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[2U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[3U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4860, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[3U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[3U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wdata[3U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[3U];
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wdata 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata[3U];
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4924, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb 
            = ((0xfff0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4932, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb 
            = ((0xff0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
                               >> 8U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4940, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                >> 8U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb) 
                                         >> 8U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb 
            = ((0xf0ffU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
               | (0x00000f00U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
                               >> 0x0000000cU)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4948, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                >> 0x0000000cU), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb) 
                                                  >> 0x0000000cU));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb 
            = ((0x0fffU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wstrb)) 
               | (0x0000f000U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb)));
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                          >> 0x0000000cU));
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5004, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5068, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5132, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[2U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[3U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5196, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[3U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[3U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_araddr[3U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[3U];
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__araddr 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr[3U];
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 5260, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot 
            = ((0x0ff8U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 5266, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot 
            = ((0x0fc7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 5272, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot 
            = ((0x0e3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
                      >> 9U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 5278, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                                >> 9U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot) 
                                         >> 9U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot 
            = ((0x01ffU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arprot)) 
               | (0x00000e00U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                 >> 9U));
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awaddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8372, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awaddr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awaddr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awaddr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 8436, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awprot 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awprot;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wdata 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8446, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wdata, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wdata);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wdata 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wdata;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wstrb) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8510, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wstrb, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wstrb);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wstrb 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wstrb;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__araddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8526, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__araddr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__araddr);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__araddr 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__araddr;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 8590, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arprot 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arprot;
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__unused_ok 
        = (1U & (VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awaddr) 
                 ^ (VL_REDXOR_4(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awprot) 
                    ^ (VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wdata) 
                       ^ (VL_REDXOR_4(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wstrb) 
                          ^ (VL_REDXOR_32(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__araddr) 
                             ^ VL_REDXOR_4(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arprot)))))));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__unused_ok) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__unused_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8644, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__unused_ok, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__unused_ok);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__unused_ok 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__unused_ok;
    }
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s = 0U;
    while ((3U > vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) {
        if (VL_LIKELY(((0x5fU >= (0x0000007fU & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                 << 5U)))))) {
            VL_ASSIGNSEL_WI(96, 32, (0x0000007fU & 
                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                      << 5U)), vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awaddr
                            [(3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)]);
            VL_ASSIGNSEL_WI(96, 32, (0x0000007fU & 
                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                      << 5U)), vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wdata
                            [(3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)]);
            VL_ASSIGNSEL_WI(96, 32, (0x0000007fU & 
                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                      << 5U)), vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_araddr
                            [(3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)]);
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                       << 5U)), vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rdata
                            [(3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)]);
        } else {
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                       << 5U)), vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata, 0U);
        }
        if (VL_LIKELY(((8U >= (0x0000000fU & ((IData)(3U) 
                                              * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot 
                = (((~ ((IData)(7U) << (0x0000000fU 
                                        & ((IData)(3U) 
                                           * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot)) 
                   | (0x01ffU & (((0x0bU >= (0x0000000fU 
                                             & ((IData)(3U) 
                                                * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))
                                   ? (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awprot) 
                                            >> (0x0000000fU 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))))
                                   : 0U) << (0x0000000fU 
                                             & ((IData)(3U) 
                                                * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot 
                = (((~ ((IData)(7U) << (0x0000000fU 
                                        & ((IData)(3U) 
                                           * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot)) 
                   | (0x01ffU & (((0x0bU >= (0x0000000fU 
                                             & ((IData)(3U) 
                                                * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))
                                   ? (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arprot) 
                                            >> (0x0000000fU 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))))
                                   : 0U) << (0x0000000fU 
                                             & ((IData)(3U) 
                                                * vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))));
        }
        if (VL_LIKELY(((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid 
                = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid)) 
                   | (7U & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid) 
                                   >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                            << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid 
                = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid)) 
                   | (7U & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid) 
                                   >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                            << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready 
                = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready)) 
                   | (7U & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready) 
                                   >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                            << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid 
                = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid)) 
                   | (7U & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid) 
                                   >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                            << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready 
                = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready)) 
                   | (7U & ((1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready) 
                                   >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                            << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        }
        if (VL_LIKELY(((0x0bU >= (0x0000000fU & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                 << 2U)))))) {
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb)) 
                   | (0x0fffU & ((0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wstrb) 
                                                 >> 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                     << 2U)))) 
                                 << (0x0000000fU & 
                                     (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                      << 2U)))));
        }
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready)) 
               | (0x0fU & (((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) 
                            && (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awready) 
                                      >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                           << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready)) 
               | (0x0fU & (((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) 
                            && (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wready) 
                                      >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                           << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp 
            = (((~ ((IData)(3U) << (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                          << 1U)))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp)) 
               | (0x00ffU & (((5U >= (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                            << 1U)))
                               ? (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bresp) 
                                        >> (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                  << 1U))))
                               : 0U) << (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                               << 1U)))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid)) 
               | (0x0fU & (((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) 
                            && (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bvalid) 
                                      >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                           << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready)) 
               | (0x0fU & (((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) 
                            && (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arready) 
                                      >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                           << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp 
            = (((~ ((IData)(3U) << (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                          << 1U)))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp)) 
               | (0x00ffU & (((5U >= (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                            << 1U)))
                               ? (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rresp) 
                                        >> (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                                  << 1U))))
                               : 0U) << (7U & (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
                                               << 1U)))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))) 
                & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid)) 
               | (0x0fU & (((2U >= (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)) 
                            && (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rvalid) 
                                      >> (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s)))) 
                           << (3U & vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s))));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s 
            = ((IData)(1U) + vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__unnamedblk5__DOT__s);
        ++(vlSelf->__Vcoverage[5704]);
    }
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready)) 
           | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_awready) 
              << 3U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready)) 
           | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_wready) 
              << 3U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp 
        = (0x000000c0U | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid)) 
           | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_bvalid) 
              << 3U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready)) 
           | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_arready) 
              << 3U));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[3U] = 0U;
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp 
        = (0x000000c0U | (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp));
    vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid 
        = ((7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid)) 
           | ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__err_rvalid) 
              << 3U));
    ++(vlSelf->__Vcoverage[5705]);
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2346, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awvalid;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2574, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wvalid;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_bready)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2604, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_bready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_bready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready;
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_bready 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_bready;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2820, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arvalid;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_rready)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3042, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_rready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_rready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready;
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_rready 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_rready;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2136, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2200, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2264, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awaddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[0U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[1U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awaddr[2U];
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2328, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot 
            = ((0x01f8U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2334, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot 
            = ((0x01c7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2340, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot 
            = ((0x003fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_awprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_awprot;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2358, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2422, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2486, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wdata[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[0U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[1U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wdata[2U];
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2550, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb 
            = ((0x0ff0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2558, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb 
            = ((0x0f0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb)) 
                               >> 8U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2566, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb) 
                                >> 8U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb) 
                                         >> 8U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb 
            = ((0x00ffU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x00000f00U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb)));
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_wstrb;
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2610, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2674, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2738, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_araddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[0U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[1U];
    vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U] 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_araddr[2U];
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2802, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot 
            = ((0x01f8U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2808, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot 
            = ((0x01c7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2814, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot 
            = ((0x003fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__s_axil_arprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot 
        = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__s_axil_arprot;
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awready)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4660, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awready;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wready)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4964, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wready;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arready)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5292, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arready);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arready 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arready;
    }
    if ((0U != (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp))))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 4972, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp 
            = ((0xfcU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
               | (3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
                      >> 2U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 4976, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                                >> 2U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp) 
                                         >> 2U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp 
            = ((0xf3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
               | (0x0000000cU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
                      >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 4980, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp 
            = ((0xcfU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
               | (0x00000030U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 4984, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp 
            = ((0x3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bresp)) 
               | (0x000000c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bresp)));
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5300, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[0U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[0U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5364, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[1U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[1U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5428, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[2U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[2U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[2U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[3U] 
                ^ vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 5492, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[3U], vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[3U]);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rdata[3U] 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[3U];
    }
    if ((0U != (3U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp))))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5556, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp 
            = ((0xfcU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
               | (3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
                      >> 2U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5560, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                                >> 2U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp) 
                                         >> 2U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp 
            = ((0xf3U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
               | (0x0000000cU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
                      >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5564, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp 
            = ((0xcfU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
               | (0x00000030U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp)));
    }
    if ((0U != (3U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 5568, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp 
            = ((0x3fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rresp)) 
               | (0x000000c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rresp)));
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4988, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5572, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rvalid);
        vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rvalid 
            = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 822, vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awvalid);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid;
    }
    vlSelfRef.s_axil_awvalid = vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid) 
                 >> 2U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid) 
                 >> 1U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid 
        = (1U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awvalid));
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1050, vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wvalid);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid;
    }
    vlSelfRef.s_axil_wvalid = vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid) 
                 >> 2U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid) 
                 >> 1U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid 
        = (1U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wvalid));
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_bready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_bready)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1080, vlSelfRef.crossbar_checker_top__DOT__s_axil_bready, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_bready);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_bready 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_bready;
    }
    vlSelfRef.s_axil_bready = vlSelfRef.crossbar_checker_top__DOT__s_axil_bready;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_bready) 
                 >> 2U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_bready) 
                 >> 1U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready 
        = (1U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_bready));
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arvalid)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1296, vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arvalid);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arvalid 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid;
    }
    vlSelfRef.s_axil_arvalid = vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid) 
                 >> 2U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid) 
                 >> 1U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid 
        = (1U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arvalid));
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_rready) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_rready)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1518, vlSelfRef.crossbar_checker_top__DOT__s_axil_rready, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_rready);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_rready 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_rready;
    }
    vlSelfRef.s_axil_rready = vlSelfRef.crossbar_checker_top__DOT__s_axil_rready;
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_rready) 
                 >> 2U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready 
        = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_rready) 
                 >> 1U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready 
        = (1U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_rready));
    vlSelfRef.s_axil_awaddr[0U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U];
    vlSelfRef.s_axil_awaddr[1U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U];
    vlSelfRef.s_axil_awaddr[2U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U];
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 612, vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 676, vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 740, vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awaddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[2U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[1U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_awaddr[0U];
    vlSelfRef.s_axil_awprot = vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot;
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 804, vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot 
            = ((0x01f8U & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 810, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot 
            = ((0x01c7U & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 816, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot 
            = ((0x003fU & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_awprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                 >> 6U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot) 
                 >> 3U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot 
        = (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_awprot));
    vlSelfRef.s_axil_wdata[0U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U];
    vlSelfRef.s_axil_wdata[1U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U];
    vlSelfRef.s_axil_wdata[2U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U];
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 834, vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[0U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 898, vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[1U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 962, vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[2U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wdata[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[2U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[1U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_wdata[0U];
    vlSelfRef.s_axil_wstrb = vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb;
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                               ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1026, vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb 
            = ((0x0ff0U & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1034, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                                >> 4U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb) 
                                         >> 4U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb 
            = ((0x0f0fU & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x000000f0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb)) 
                               >> 8U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1042, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                                >> 8U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb) 
                                         >> 8U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb 
            = ((0x00ffU & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_wstrb)) 
               | (0x00000f00U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb)));
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                          >> 8U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb) 
                          >> 4U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb 
        = (0x0000000fU & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_wstrb));
    vlSelfRef.s_axil_araddr[0U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U];
    vlSelfRef.s_axil_araddr[1U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U];
    vlSelfRef.s_axil_araddr[2U] = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U];
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1086, vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[0U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[0U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1150, vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[1U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[1U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U];
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U] 
                ^ vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1214, vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U], vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[2U]);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_araddr[2U] 
            = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U];
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[2U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[1U];
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr 
        = vlSelfRef.crossbar_checker_top__DOT__s_axil_araddr[0U];
    vlSelfRef.s_axil_arprot = vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot;
    if ((0U != (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                      ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot))))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1278, vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot, vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot);
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot 
            = ((0x01f8U & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot)) 
               | (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot)) 
                      >> 3U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1284, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                                >> 3U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot) 
                                         >> 3U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot 
            = ((0x01c7U & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot)) 
               | (0x00000038U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot)));
    }
    if ((0U != (7U & (((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                       ^ (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot)) 
                      >> 6U)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1290, 
                               ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                                >> 6U), ((IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot) 
                                         >> 6U));
        vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot 
            = ((0x003fU & (IData)(vlSelfRef.crossbar_checker_top__DOT____Vtogcov__s_axil_arprot)) 
               | (0x000001c0U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot)));
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                 >> 6U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot 
        = (7U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot) 
                 >> 3U));
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot 
        = (7U & (IData)(vlSelfRef.crossbar_checker_top__DOT__s_axil_arprot));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8720, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9394, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10068, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8796, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9470, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10144, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8806, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__bready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__bready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__bready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9480, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__bready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__bready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__bready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10154, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__bready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__bready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__bready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8878, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9552, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10226, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arvalid);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arvalid 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8952, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__rready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__rready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9626, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__rready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__rready));
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10300, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rready);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__rready 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready;
    }
    vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs 
        = ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rvalid) 
           & (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__rready));
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8650, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awaddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awaddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awaddr;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 9324, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awaddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awaddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awaddr;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 9998, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awaddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awaddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 8714, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__awprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__awprot;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 9388, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__awprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__awprot;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 10062, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__awprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__awprot;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8724, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wdata);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wdata 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wdata;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 9398, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wdata);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wdata 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wdata;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 10072, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wdata);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wdata 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wdata;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 8788, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wstrb);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__wstrb 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__wstrb;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 9462, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wstrb);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__wstrb 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__wstrb;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 10136, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wstrb);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__wstrb 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__wstrb;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 8808, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__araddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__araddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__araddr;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 9482, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__araddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__araddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__araddr;
    }
    if ((0U != (vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr 
                ^ vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 10156, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__araddr);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__araddr 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__araddr;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 8872, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__arprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__arprot;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 9546, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__arprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__arprot;
    }
    if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot) 
                ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 10220, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arprot);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__arprot 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__arprot;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8954, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__aw_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__aw_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9628, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__aw_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__aw_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10302, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__aw_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__aw_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8956, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__w_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__w_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9630, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__w_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__w_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10304, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__w_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__w_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8960, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__b_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__b_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9634, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__b_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__b_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10308, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__b_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__b_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8958, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__ar_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__ar_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9632, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__ar_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__ar_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10306, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__ar_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__ar_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8962, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT____Vtogcov__r_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__2__KET____DOT__u_chk__DOT__r_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9636, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT____Vtogcov__r_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__1__KET____DOT__u_chk__DOT__r_hs;
    }
    if (((IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs) 
         ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10310, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs, vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_hs);
        vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT____Vtogcov__r_hs 
            = vlSelfRef.crossbar_checker_top__DOT__gen_slave_checkers__BRA__0__KET____DOT__u_chk__DOT__r_hs;
    }
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000092400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready 
                = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.rready_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.rready_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.rready_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.rready_o)));
            if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready) 
                        ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rready)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5580, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rready);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_rready 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready;
            }
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rready 
                = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_rready) 
                         >> 3U));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rready) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rready))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8602, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rready);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__rready 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rready;
            }
        }
    }
    if ((0x0000000000124800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready 
                = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.bready_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.bready_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.bready_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.bready_o)));
            if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready) 
                        ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bready)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4996, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bready);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_bready 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready;
            }
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bready 
                = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_bready) 
                         >> 3U));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bready) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bready))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8524, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bready, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bready);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__bready 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bready;
            }
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000092408ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_hs 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rvalid) 
                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__rready));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_hs) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8620, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_hs, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_hs);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__r_hs 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__r_hs;
            }
        }
    }
    if ((0x0000000000124808ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_hs 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bvalid) 
                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__bready));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_hs) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8616, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_hs, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_hs);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__b_hs 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__b_hs;
            }
        }
    }
    if ((0x0000000000000806ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000000c06ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000000406ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000004006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000006006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000002006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000020006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000030006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000010006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000100006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000180006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000080006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000124806ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid 
                = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.wvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.wvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.wvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.wvalid_o)));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid 
                = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.awvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.awvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.awvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.awvalid_o)));
            if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid) 
                        ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4956, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_wvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid;
            }
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wvalid 
                = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_wvalid) 
                         >> 3U));
            if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid) 
                        ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 4652, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_awvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid;
            }
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awvalid 
                = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_awvalid) 
                         >> 3U));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wvalid) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8518, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__wvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wvalid;
            }
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awvalid) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8442, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__awvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awvalid;
            }
        }
    }
    if ((0x00000000001b6c06ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000092406ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid 
                = ((((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport.arvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport.arvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport.arvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport.arvalid_o)));
            if ((0U != ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid) 
                        ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5284, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT____Vtogcov__t_arvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid;
            }
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arvalid 
                = (1U & ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__t_arvalid) 
                         >> 3U));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arvalid) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8596, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arvalid, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arvalid);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__arvalid 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arvalid;
            }
        }
    }
    if ((0x000000000012480eULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_hs 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wvalid) 
                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__wready));
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_hs 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awvalid) 
                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__awready));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_hs) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8614, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_hs, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_hs);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__w_hs 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__w_hs;
            }
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_hs) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8612, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_hs, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_hs);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__aw_hs 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__aw_hs;
            }
        }
    }
    if ((0x00000000001b6c0eULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
        Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1((&vlSymsp->TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport));
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
    }
    if ((0x000000000009240eULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__11
            vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__ar_hs 
                = ((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arvalid) 
                   & (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__arready));
            if (((IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__ar_hs) 
                 ^ (IData)(vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__ar_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8618, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__ar_hs, vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__ar_hs);
                vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT____Vtogcov__ar_hs 
                    = vlSelfRef.crossbar_checker_top__DOT__u_dut__DOT__u_error_slave__DOT__ar_hs;
            }
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
    if (VL_UNLIKELY(((vlSelfRef.s_axil_awready & 0xf8U)))) {
        Verilated::overWidthError("s_axil_awready");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axil_wready & 0xf8U)))) {
        Verilated::overWidthError("s_axil_wready");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axil_bvalid & 0xf8U)))) {
        Verilated::overWidthError("s_axil_bvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axil_arready & 0xf8U)))) {
        Verilated::overWidthError("s_axil_arready");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axil_rvalid & 0xf8U)))) {
        Verilated::overWidthError("s_axil_rvalid");
    }
}
#endif  // VL_DEBUG

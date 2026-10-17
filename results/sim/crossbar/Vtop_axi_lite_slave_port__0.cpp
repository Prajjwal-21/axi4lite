// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.clk = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__clk;
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_bready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_bready;
    vlSelfRef.r_rready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_rready;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.rst = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__rst;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_req_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req));
    vlSelfRef.r_req_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req));
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.u_rd_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_wr_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_rd_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.arvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.r_req_i) 
                                     & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.wvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_wvalid_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.w_awvalid_i) 
                                     & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awaddr_o = 0U;
    vlSelfRef.awprot_o = 0U;
    vlSelfRef.wdata_o = 0U;
    vlSelfRef.wstrb_o = 0U;
    vlSelfRef.araddr_o = 0U;
    vlSelfRef.arprot_o = 0U;
    vlSelfRef.unnamedblk1__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk1__DOT__m)) {
        if ((1U & ((IData)(vlSelfRef.w_gnt_w) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.awaddr_o = (IData)((vlSelfRef.w_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.awprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.w_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
            vlSelfRef.wdata_o = (IData)((vlSelfRef.w_data_i 
                                         >> (0x0000003fU 
                                             & (vlSelfRef.unnamedblk1__DOT__m 
                                                << 5U))));
            vlSelfRef.wstrb_o = (0x0000000fU & ((IData)(vlSelfRef.w_strb_i) 
                                                >> 
                                                (7U 
                                                 & (vlSelfRef.unnamedblk1__DOT__m 
                                                    << 2U))));
        }
        if ((1U & ((IData)(vlSelfRef.r_gnt_r) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.araddr_o = (IData)((vlSelfRef.r_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.arprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.r_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
        }
        vlSelfRef.unnamedblk1__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk1__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_wr_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_wr_arb__DOT__req)));
    vlSelfRef.u_wr_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_wr_arb__DOT__ptr)));
    vlSelfRef.u_wr_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_wr_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_wr_arb__DOT__masked = ((IData)(vlSelfRef.u_wr_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_wr_arb__DOT__below_ptr)));
    vlSelfRef.u_wr_arb__DOT__pick = ((IData)(vlSelfRef.u_wr_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_wr_arb__DOT__masked))));
    vlSelfRef.u_wr_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_wr_arb__DOT__nxt_idx = vlSelfRef.u_wr_arb__DOT__ptr;
    vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_wr_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.u_rd_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_rd_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_rd_arb__DOT__req)));
    vlSelfRef.u_rd_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_rd_arb__DOT__ptr)));
    vlSelfRef.u_rd_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_rd_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_rd_arb__DOT__masked = ((IData)(vlSelfRef.u_rd_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_rd_arb__DOT__below_ptr)));
    vlSelfRef.u_rd_arb__DOT__pick = ((IData)(vlSelfRef.u_rd_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_rd_arb__DOT__masked))));
    vlSelfRef.u_rd_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_rd_arb__DOT__nxt_idx = vlSelfRef.u_rd_arb__DOT__ptr;
    vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_rd_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awready_i = (1U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_awready));
    vlSelfRef.wready_i = (1U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_wready));
    vlSelfRef.bresp_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bresp));
    vlSelfRef.arready_i = (1U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_arready));
    vlSelfRef.rdata_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[0U];
    vlSelfRef.rresp_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rresp));
    vlSelfRef.bvalid_i = (1U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid));
    vlSelfRef.rvalid_i = (1U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid));
    vlSelfRef.w_done = ((IData)(vlSelfRef.bready_o) 
                        & (IData)(vlSelfRef.bvalid_i));
    vlSelfRef.r_done = ((IData)(vlSelfRef.rready_o) 
                        & (IData)(vlSelfRef.rvalid_i));
    vlSelfRef.unnamedblk2__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk2__DOT__m)) {
        vlSelfRef.w_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.w_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_awready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.w_awready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.awready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_wready_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_wready_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.wready_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_bvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.bvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.w_bresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.bresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.r_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.r_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_arready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.r_arready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.arready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.r_rvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.rvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rdata_o = (((~ (0x00000000ffffffffULL 
                                    << (0x0000003fU 
                                        & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 5U)))) 
                                & vlSelfRef.r_rdata_o) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & ((IData)(vlSelfRef.r_gnt_r) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.unnamedblk2__DOT__m)))
                                                    ? vlSelfRef.rdata_i
                                                    : 0U))) 
                                  << (0x0000003fU & 
                                      (vlSelfRef.unnamedblk2__DOT__m 
                                       << 5U))));
        vlSelfRef.r_rresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.r_rresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.rresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.unnamedblk2__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk2__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__done = vlSelfRef.w_done;
    vlSelfRef.u_rd_arb__DOT__done = vlSelfRef.r_done;
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_rd_arb__DOT__gnt_q;
    __Vdly__u_rd_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_rd_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_rd_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.u_rd_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__gnt_q;
    if (vlSelfRef.u_rd_arb__DOT__rst) {
        __Vdly__u_rd_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_rd_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_rd_arb__DOT__gnt_q)))))) {
        __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt))) {
            vlSelfRef.u_rd_arb__DOT__ptr = vlSelfRef.u_rd_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_rd_arb__DOT__gnt_q = __Vdly__u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_wr_arb__DOT__gnt_q;
    __Vdly__u_wr_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_wr_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_wr_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.u_wr_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__gnt_q;
    if (vlSelfRef.u_wr_arb__DOT__rst) {
        __Vdly__u_wr_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_wr_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_wr_arb__DOT__gnt_q)))))) {
        __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt))) {
            vlSelfRef.u_wr_arb__DOT__ptr = vlSelfRef.u_wr_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_wr_arb__DOT__gnt_q = __Vdly__u_wr_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__bready_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__rready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:215: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 215, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__awvalid_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__wvalid_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__arvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:216: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 216, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__w_gnt_w))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:221: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_w_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 221, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__r_gnt_r))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_r_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__awvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:223: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_awvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 223, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__wvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_wvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 224, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__arvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__r_gnt_r)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:225: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[0].u_sport.ap_arvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 225, "");
                }
            }
        }
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.w_req_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req));
    vlSelfRef.r_req_i = (3U & (IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req));
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_wvalid_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.w_awvalid_i) 
                                     & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.u_wr_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_wr_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_wr_arb__DOT__req)));
    vlSelfRef.u_wr_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_wr_arb__DOT__ptr)));
    vlSelfRef.u_wr_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_wr_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_wr_arb__DOT__masked = ((IData)(vlSelfRef.u_wr_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_wr_arb__DOT__below_ptr)));
    vlSelfRef.u_wr_arb__DOT__pick = ((IData)(vlSelfRef.u_wr_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_wr_arb__DOT__masked))));
    vlSelfRef.u_wr_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_wr_arb__DOT__nxt_idx = vlSelfRef.u_wr_arb__DOT__ptr;
    vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_wr_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awaddr_o = 0U;
    vlSelfRef.awprot_o = 0U;
    vlSelfRef.wdata_o = 0U;
    vlSelfRef.wstrb_o = 0U;
    vlSelfRef.araddr_o = 0U;
    vlSelfRef.arprot_o = 0U;
    vlSelfRef.unnamedblk1__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk1__DOT__m)) {
        if ((1U & ((IData)(vlSelfRef.w_gnt_w) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.awaddr_o = (IData)((vlSelfRef.w_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.awprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.w_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
            vlSelfRef.wdata_o = (IData)((vlSelfRef.w_data_i 
                                         >> (0x0000003fU 
                                             & (vlSelfRef.unnamedblk1__DOT__m 
                                                << 5U))));
            vlSelfRef.wstrb_o = (0x0000000fU & ((IData)(vlSelfRef.w_strb_i) 
                                                >> 
                                                (7U 
                                                 & (vlSelfRef.unnamedblk1__DOT__m 
                                                    << 2U))));
        }
        if ((1U & ((IData)(vlSelfRef.r_gnt_r) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.araddr_o = (IData)((vlSelfRef.r_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.arprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.r_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
        }
        vlSelfRef.unnamedblk1__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk1__DOT__m);
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.arvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.r_req_i) 
                                     & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.u_rd_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_rd_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_rd_arb__DOT__req)));
    vlSelfRef.u_rd_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_rd_arb__DOT__ptr)));
    vlSelfRef.u_rd_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_rd_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_rd_arb__DOT__masked = ((IData)(vlSelfRef.u_rd_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_rd_arb__DOT__below_ptr)));
    vlSelfRef.u_rd_arb__DOT__pick = ((IData)(vlSelfRef.u_rd_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_rd_arb__DOT__masked))));
    vlSelfRef.u_rd_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_rd_arb__DOT__nxt_idx = vlSelfRef.u_rd_arb__DOT__ptr;
    vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_rd_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.clk = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__clk;
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_bready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_bready;
    vlSelfRef.r_rready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_rready;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.rst = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__rst;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 2U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 2U));
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.u_rd_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_wr_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_rd_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.arvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.r_req_i) 
                                     & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.wvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_wvalid_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.w_awvalid_i) 
                                     & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awaddr_o = 0U;
    vlSelfRef.awprot_o = 0U;
    vlSelfRef.wdata_o = 0U;
    vlSelfRef.wstrb_o = 0U;
    vlSelfRef.araddr_o = 0U;
    vlSelfRef.arprot_o = 0U;
    vlSelfRef.unnamedblk1__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk1__DOT__m)) {
        if ((1U & ((IData)(vlSelfRef.w_gnt_w) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.awaddr_o = (IData)((vlSelfRef.w_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.awprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.w_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
            vlSelfRef.wdata_o = (IData)((vlSelfRef.w_data_i 
                                         >> (0x0000003fU 
                                             & (vlSelfRef.unnamedblk1__DOT__m 
                                                << 5U))));
            vlSelfRef.wstrb_o = (0x0000000fU & ((IData)(vlSelfRef.w_strb_i) 
                                                >> 
                                                (7U 
                                                 & (vlSelfRef.unnamedblk1__DOT__m 
                                                    << 2U))));
        }
        if ((1U & ((IData)(vlSelfRef.r_gnt_r) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.araddr_o = (IData)((vlSelfRef.r_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.arprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.r_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
        }
        vlSelfRef.unnamedblk1__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk1__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_wr_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_wr_arb__DOT__req)));
    vlSelfRef.u_wr_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_wr_arb__DOT__ptr)));
    vlSelfRef.u_wr_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_wr_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_wr_arb__DOT__masked = ((IData)(vlSelfRef.u_wr_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_wr_arb__DOT__below_ptr)));
    vlSelfRef.u_wr_arb__DOT__pick = ((IData)(vlSelfRef.u_wr_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_wr_arb__DOT__masked))));
    vlSelfRef.u_wr_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_wr_arb__DOT__nxt_idx = vlSelfRef.u_wr_arb__DOT__ptr;
    vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_wr_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.u_rd_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_rd_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_rd_arb__DOT__req)));
    vlSelfRef.u_rd_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_rd_arb__DOT__ptr)));
    vlSelfRef.u_rd_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_rd_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_rd_arb__DOT__masked = ((IData)(vlSelfRef.u_rd_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_rd_arb__DOT__below_ptr)));
    vlSelfRef.u_rd_arb__DOT__pick = ((IData)(vlSelfRef.u_rd_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_rd_arb__DOT__masked))));
    vlSelfRef.u_rd_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_rd_arb__DOT__nxt_idx = vlSelfRef.u_rd_arb__DOT__ptr;
    vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_rd_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_awready) 
                                 >> 1U));
    vlSelfRef.wready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_wready) 
                                >> 1U));
    vlSelfRef.bresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                               >> 2U));
    vlSelfRef.arready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_arready) 
                                 >> 1U));
    vlSelfRef.rdata_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[1U];
    vlSelfRef.rresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                               >> 2U));
    vlSelfRef.bvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid) 
                                >> 1U));
    vlSelfRef.rvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid) 
                                >> 1U));
    vlSelfRef.w_done = ((IData)(vlSelfRef.bready_o) 
                        & (IData)(vlSelfRef.bvalid_i));
    vlSelfRef.r_done = ((IData)(vlSelfRef.rready_o) 
                        & (IData)(vlSelfRef.rvalid_i));
    vlSelfRef.unnamedblk2__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk2__DOT__m)) {
        vlSelfRef.w_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.w_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_awready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.w_awready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.awready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_wready_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_wready_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.wready_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_bvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.bvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.w_bresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.bresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.r_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.r_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_arready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.r_arready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.arready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.r_rvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.rvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rdata_o = (((~ (0x00000000ffffffffULL 
                                    << (0x0000003fU 
                                        & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 5U)))) 
                                & vlSelfRef.r_rdata_o) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & ((IData)(vlSelfRef.r_gnt_r) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.unnamedblk2__DOT__m)))
                                                    ? vlSelfRef.rdata_i
                                                    : 0U))) 
                                  << (0x0000003fU & 
                                      (vlSelfRef.unnamedblk2__DOT__m 
                                       << 5U))));
        vlSelfRef.r_rresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.r_rresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.rresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.unnamedblk2__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk2__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__done = vlSelfRef.w_done;
    vlSelfRef.u_rd_arb__DOT__done = vlSelfRef.r_done;
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_rd_arb__DOT__gnt_q;
    __Vdly__u_rd_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_rd_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_rd_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.u_rd_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__gnt_q;
    if (vlSelfRef.u_rd_arb__DOT__rst) {
        __Vdly__u_rd_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_rd_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_rd_arb__DOT__gnt_q)))))) {
        __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt))) {
            vlSelfRef.u_rd_arb__DOT__ptr = vlSelfRef.u_rd_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_rd_arb__DOT__gnt_q = __Vdly__u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_wr_arb__DOT__gnt_q;
    __Vdly__u_wr_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_wr_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_wr_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.u_wr_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__gnt_q;
    if (vlSelfRef.u_wr_arb__DOT__rst) {
        __Vdly__u_wr_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_wr_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_wr_arb__DOT__gnt_q)))))) {
        __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt))) {
            vlSelfRef.u_wr_arb__DOT__ptr = vlSelfRef.u_wr_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_wr_arb__DOT__gnt_q = __Vdly__u_wr_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__bready_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__rready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:215: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 215, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__awvalid_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__wvalid_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__arvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:216: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 216, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__w_gnt_w))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:221: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_w_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 221, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__r_gnt_r))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_r_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__awvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:223: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_awvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 223, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__wvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_wvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 224, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__arvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__r_gnt_r)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:225: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[1].u_sport.ap_arvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 225, "");
                }
            }
        }
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 2U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 2U));
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.clk = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__clk;
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_bready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_bready;
    vlSelfRef.r_rready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_rready;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.rst = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__rst;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 4U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 4U));
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.u_rd_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_wr_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_rd_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.arvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.r_req_i) 
                                     & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.wvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_wvalid_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.w_awvalid_i) 
                                     & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awaddr_o = 0U;
    vlSelfRef.awprot_o = 0U;
    vlSelfRef.wdata_o = 0U;
    vlSelfRef.wstrb_o = 0U;
    vlSelfRef.araddr_o = 0U;
    vlSelfRef.arprot_o = 0U;
    vlSelfRef.unnamedblk1__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk1__DOT__m)) {
        if ((1U & ((IData)(vlSelfRef.w_gnt_w) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.awaddr_o = (IData)((vlSelfRef.w_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.awprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.w_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
            vlSelfRef.wdata_o = (IData)((vlSelfRef.w_data_i 
                                         >> (0x0000003fU 
                                             & (vlSelfRef.unnamedblk1__DOT__m 
                                                << 5U))));
            vlSelfRef.wstrb_o = (0x0000000fU & ((IData)(vlSelfRef.w_strb_i) 
                                                >> 
                                                (7U 
                                                 & (vlSelfRef.unnamedblk1__DOT__m 
                                                    << 2U))));
        }
        if ((1U & ((IData)(vlSelfRef.r_gnt_r) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.araddr_o = (IData)((vlSelfRef.r_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.arprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.r_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
        }
        vlSelfRef.unnamedblk1__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk1__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_wr_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_wr_arb__DOT__req)));
    vlSelfRef.u_wr_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_wr_arb__DOT__ptr)));
    vlSelfRef.u_wr_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_wr_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_wr_arb__DOT__masked = ((IData)(vlSelfRef.u_wr_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_wr_arb__DOT__below_ptr)));
    vlSelfRef.u_wr_arb__DOT__pick = ((IData)(vlSelfRef.u_wr_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_wr_arb__DOT__masked))));
    vlSelfRef.u_wr_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_wr_arb__DOT__nxt_idx = vlSelfRef.u_wr_arb__DOT__ptr;
    vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_wr_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.u_rd_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_rd_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_rd_arb__DOT__req)));
    vlSelfRef.u_rd_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_rd_arb__DOT__ptr)));
    vlSelfRef.u_rd_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_rd_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_rd_arb__DOT__masked = ((IData)(vlSelfRef.u_rd_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_rd_arb__DOT__below_ptr)));
    vlSelfRef.u_rd_arb__DOT__pick = ((IData)(vlSelfRef.u_rd_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_rd_arb__DOT__masked))));
    vlSelfRef.u_rd_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_rd_arb__DOT__nxt_idx = vlSelfRef.u_rd_arb__DOT__ptr;
    vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_rd_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_awready) 
                                 >> 2U));
    vlSelfRef.wready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_wready) 
                                >> 2U));
    vlSelfRef.bresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                               >> 4U));
    vlSelfRef.arready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_arready) 
                                 >> 2U));
    vlSelfRef.rdata_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[2U];
    vlSelfRef.rresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                               >> 4U));
    vlSelfRef.bvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid) 
                                >> 2U));
    vlSelfRef.rvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid) 
                                >> 2U));
    vlSelfRef.w_done = ((IData)(vlSelfRef.bready_o) 
                        & (IData)(vlSelfRef.bvalid_i));
    vlSelfRef.r_done = ((IData)(vlSelfRef.rready_o) 
                        & (IData)(vlSelfRef.rvalid_i));
    vlSelfRef.unnamedblk2__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk2__DOT__m)) {
        vlSelfRef.w_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.w_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_awready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.w_awready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.awready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_wready_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_wready_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.wready_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_bvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.bvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.w_bresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.bresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.r_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.r_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_arready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.r_arready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.arready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.r_rvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.rvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rdata_o = (((~ (0x00000000ffffffffULL 
                                    << (0x0000003fU 
                                        & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 5U)))) 
                                & vlSelfRef.r_rdata_o) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & ((IData)(vlSelfRef.r_gnt_r) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.unnamedblk2__DOT__m)))
                                                    ? vlSelfRef.rdata_i
                                                    : 0U))) 
                                  << (0x0000003fU & 
                                      (vlSelfRef.unnamedblk2__DOT__m 
                                       << 5U))));
        vlSelfRef.r_rresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.r_rresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.rresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.unnamedblk2__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk2__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__done = vlSelfRef.w_done;
    vlSelfRef.u_rd_arb__DOT__done = vlSelfRef.r_done;
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_rd_arb__DOT__gnt_q;
    __Vdly__u_rd_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_rd_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_rd_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.u_rd_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__gnt_q;
    if (vlSelfRef.u_rd_arb__DOT__rst) {
        __Vdly__u_rd_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_rd_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_rd_arb__DOT__gnt_q)))))) {
        __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt))) {
            vlSelfRef.u_rd_arb__DOT__ptr = vlSelfRef.u_rd_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_rd_arb__DOT__gnt_q = __Vdly__u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_wr_arb__DOT__gnt_q;
    __Vdly__u_wr_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_wr_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_wr_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.u_wr_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__gnt_q;
    if (vlSelfRef.u_wr_arb__DOT__rst) {
        __Vdly__u_wr_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_wr_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_wr_arb__DOT__gnt_q)))))) {
        __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt))) {
            vlSelfRef.u_wr_arb__DOT__ptr = vlSelfRef.u_wr_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_wr_arb__DOT__gnt_q = __Vdly__u_wr_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__bready_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__rready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:215: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 215, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__awvalid_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__wvalid_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__arvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:216: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 216, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__w_gnt_w))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:221: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_w_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 221, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__r_gnt_r))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_r_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__awvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:223: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_awvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 223, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__wvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_wvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 224, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__arvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__r_gnt_r)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:225: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[2].u_sport.ap_arvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 225, "");
                }
            }
        }
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 4U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 4U));
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.clk = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__clk;
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_bready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_bready;
    vlSelfRef.r_rready_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__m_axil_rready;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.rst = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__rst;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 6U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 6U));
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.u_rd_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_wr_arb__DOT__clk = vlSelfRef.clk;
    vlSelfRef.u_rd_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__rst = vlSelfRef.rst;
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.arvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.r_req_i) 
                                     & (IData)(vlSelfRef.r_gnt_r))));
    vlSelfRef.wvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_wvalid_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awvalid_o = ((~ (IData)(vlSelfRef.rst)) 
                           & (0U != ((IData)(vlSelfRef.w_awvalid_i) 
                                     & (IData)(vlSelfRef.w_gnt_w))));
    vlSelfRef.awaddr_o = 0U;
    vlSelfRef.awprot_o = 0U;
    vlSelfRef.wdata_o = 0U;
    vlSelfRef.wstrb_o = 0U;
    vlSelfRef.araddr_o = 0U;
    vlSelfRef.arprot_o = 0U;
    vlSelfRef.unnamedblk1__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk1__DOT__m)) {
        if ((1U & ((IData)(vlSelfRef.w_gnt_w) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.awaddr_o = (IData)((vlSelfRef.w_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.awprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.w_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
            vlSelfRef.wdata_o = (IData)((vlSelfRef.w_data_i 
                                         >> (0x0000003fU 
                                             & (vlSelfRef.unnamedblk1__DOT__m 
                                                << 5U))));
            vlSelfRef.wstrb_o = (0x0000000fU & ((IData)(vlSelfRef.w_strb_i) 
                                                >> 
                                                (7U 
                                                 & (vlSelfRef.unnamedblk1__DOT__m 
                                                    << 2U))));
        }
        if ((1U & ((IData)(vlSelfRef.r_gnt_r) >> (1U 
                                                  & vlSelfRef.unnamedblk1__DOT__m)))) {
            vlSelfRef.araddr_o = (IData)((vlSelfRef.r_addr_i 
                                          >> (0x0000003fU 
                                              & (vlSelfRef.unnamedblk1__DOT__m 
                                                 << 5U))));
            vlSelfRef.arprot_o = ((5U >= (7U & ((IData)(3U) 
                                                * vlSelfRef.unnamedblk1__DOT__m)))
                                   ? (7U & ((IData)(vlSelfRef.r_prot_i) 
                                            >> (7U 
                                                & ((IData)(3U) 
                                                   * vlSelfRef.unnamedblk1__DOT__m))))
                                   : 0U);
        }
        vlSelfRef.unnamedblk1__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk1__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_wr_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_wr_arb__DOT__req)));
    vlSelfRef.u_wr_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_wr_arb__DOT__ptr)));
    vlSelfRef.u_wr_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_wr_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_wr_arb__DOT__masked = ((IData)(vlSelfRef.u_wr_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_wr_arb__DOT__below_ptr)));
    vlSelfRef.u_wr_arb__DOT__pick = ((IData)(vlSelfRef.u_wr_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_wr_arb__DOT__masked))));
    vlSelfRef.u_wr_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_wr_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_wr_arb__DOT__nxt_idx = vlSelfRef.u_wr_arb__DOT__ptr;
    vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_wr_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_wr_arb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.u_rd_arb__DOT__dbl_req = (0x0000000fU 
                                        & (((IData)(vlSelfRef.u_rd_arb__DOT__req) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.u_rd_arb__DOT__req)));
    vlSelfRef.u_rd_arb__DOT__onehot_ptr = (0x0000000fU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSelfRef.u_rd_arb__DOT__ptr)));
    vlSelfRef.u_rd_arb__DOT__below_ptr = (0x0000000fU 
                                          & ((IData)(vlSelfRef.u_rd_arb__DOT__onehot_ptr) 
                                             - (IData)(1U)));
    vlSelfRef.u_rd_arb__DOT__masked = ((IData)(vlSelfRef.u_rd_arb__DOT__dbl_req) 
                                       & (~ (IData)(vlSelfRef.u_rd_arb__DOT__below_ptr)));
    vlSelfRef.u_rd_arb__DOT__pick = ((IData)(vlSelfRef.u_rd_arb__DOT__masked) 
                                     & ((IData)(1U) 
                                        + (~ (IData)(vlSelfRef.u_rd_arb__DOT__masked))));
    vlSelfRef.u_rd_arb__DOT__rr_gnt = (3U & ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                             | ((IData)(vlSelfRef.u_rd_arb__DOT__pick) 
                                                >> 2U)));
    vlSelfRef.u_rd_arb__DOT__nxt_idx = vlSelfRef.u_rd_arb__DOT__ptr;
    vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i = 0U;
    while ((2U > vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt) 
                   >> (1U & vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i)))) {
            vlSelfRef.u_rd_arb__DOT__nxt_idx = ((1U 
                                                 != vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i) 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i));
        }
        vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.u_rd_arb__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___ico_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.awready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_awready) 
                                 >> 3U));
    vlSelfRef.wready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_wready) 
                                >> 3U));
    vlSelfRef.bresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bresp) 
                               >> 6U));
    vlSelfRef.arready_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_arready) 
                                 >> 3U));
    vlSelfRef.rdata_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rdata[3U];
    vlSelfRef.rresp_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rresp) 
                               >> 6U));
    vlSelfRef.bvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_bvalid) 
                                >> 3U));
    vlSelfRef.rvalid_i = (1U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_rvalid) 
                                >> 3U));
    vlSelfRef.w_done = ((IData)(vlSelfRef.bready_o) 
                        & (IData)(vlSelfRef.bvalid_i));
    vlSelfRef.r_done = ((IData)(vlSelfRef.rready_o) 
                        & (IData)(vlSelfRef.rvalid_i));
    vlSelfRef.unnamedblk2__DOT__m = 0U;
    while ((2U > vlSelfRef.unnamedblk2__DOT__m)) {
        vlSelfRef.w_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.w_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_awready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.w_awready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.awready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_wready_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_wready_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.wready_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.w_bvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.w_gnt_w) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.bvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.w_bresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.w_bresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.w_gnt_w) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.bresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.r_gnt_o = (((~ ((IData)(1U) << (1U 
                                                  & vlSelfRef.unnamedblk2__DOT__m))) 
                              & (IData)(vlSelfRef.r_gnt_o)) 
                             | (3U & ((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                             >> (1U 
                                                 & vlSelfRef.unnamedblk2__DOT__m))) 
                                      << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_arready_o = (((~ ((IData)(1U) << 
                                      (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                  & (IData)(vlSelfRef.r_arready_o)) 
                                 | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                            >> (1U 
                                                & vlSelfRef.unnamedblk2__DOT__m)) 
                                           & (IData)(vlSelfRef.arready_i)) 
                                          << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rvalid_o = (((~ ((IData)(1U) << 
                                     (1U & vlSelfRef.unnamedblk2__DOT__m))) 
                                 & (IData)(vlSelfRef.r_rvalid_o)) 
                                | (3U & ((((IData)(vlSelfRef.r_gnt_r) 
                                           >> (1U & vlSelfRef.unnamedblk2__DOT__m)) 
                                          & (IData)(vlSelfRef.rvalid_i)) 
                                         << (1U & vlSelfRef.unnamedblk2__DOT__m))));
        vlSelfRef.r_rdata_o = (((~ (0x00000000ffffffffULL 
                                    << (0x0000003fU 
                                        & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 5U)))) 
                                & vlSelfRef.r_rdata_o) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & ((IData)(vlSelfRef.r_gnt_r) 
                                                       >> 
                                                       (1U 
                                                        & vlSelfRef.unnamedblk2__DOT__m)))
                                                    ? vlSelfRef.rdata_i
                                                    : 0U))) 
                                  << (0x0000003fU & 
                                      (vlSelfRef.unnamedblk2__DOT__m 
                                       << 5U))));
        vlSelfRef.r_rresp_o = (((~ ((IData)(3U) << 
                                    (3U & (vlSelfRef.unnamedblk2__DOT__m 
                                           << 1U)))) 
                                & (IData)(vlSelfRef.r_rresp_o)) 
                               | (0x0fU & (((1U & ((IData)(vlSelfRef.r_gnt_r) 
                                                   >> 
                                                   (1U 
                                                    & vlSelfRef.unnamedblk2__DOT__m)))
                                             ? (IData)(vlSelfRef.rresp_i)
                                             : 0U) 
                                           << (3U & 
                                               (vlSelfRef.unnamedblk2__DOT__m 
                                                << 1U)))));
        vlSelfRef.unnamedblk2__DOT__m = ((IData)(1U) 
                                         + vlSelfRef.unnamedblk2__DOT__m);
    }
    vlSelfRef.u_wr_arb__DOT__done = vlSelfRef.w_done;
    vlSelfRef.u_rd_arb__DOT__done = vlSelfRef.r_done;
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_rd_arb__DOT__gnt_q;
    __Vdly__u_rd_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_rd_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_rd_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.u_rd_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__gnt_q;
    if (vlSelfRef.u_rd_arb__DOT__rst) {
        __Vdly__u_rd_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_rd_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_rd_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_rd_arb__DOT__gnt_q)))))) {
        __Vdly__u_rd_arb__DOT__gnt_q = vlSelfRef.u_rd_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_rd_arb__DOT__rr_gnt))) {
            vlSelfRef.u_rd_arb__DOT__ptr = vlSelfRef.u_rd_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_rd_arb__DOT__gnt_q = __Vdly__u_rd_arb__DOT__gnt_q;
    vlSelfRef.u_rd_arb__DOT__gnt = vlSelfRef.u_rd_arb__DOT__gnt_q;
    vlSelfRef.r_gnt_r = vlSelfRef.u_rd_arb__DOT__gnt;
    vlSelfRef.rready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.r_rready_i) 
                                    & (IData)(vlSelfRef.r_gnt_r))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_wr_arb__DOT__gnt_q;
    __Vdly__u_wr_arb__DOT__gnt_q = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.u_wr_arb__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_wr_arb__DOT__gnt))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_arbiter.sv:97: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.u_wr_arb.ap_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_arbiter.sv", 97, "");
                }
            }
        }
    }
    __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__gnt_q;
    if (vlSelfRef.u_wr_arb__DOT__rst) {
        __Vdly__u_wr_arb__DOT__gnt_q = 0U;
        vlSelfRef.u_wr_arb__DOT__ptr = 0U;
    } else if ((1U & ((IData)(vlSelfRef.u_wr_arb__DOT__done) 
                      | (~ (0U != (IData)(vlSelfRef.u_wr_arb__DOT__gnt_q)))))) {
        __Vdly__u_wr_arb__DOT__gnt_q = vlSelfRef.u_wr_arb__DOT__rr_gnt;
        if ((0U != (IData)(vlSelfRef.u_wr_arb__DOT__rr_gnt))) {
            vlSelfRef.u_wr_arb__DOT__ptr = vlSelfRef.u_wr_arb__DOT__nxt_idx;
        }
    }
    vlSelfRef.u_wr_arb__DOT__gnt_q = __Vdly__u_wr_arb__DOT__gnt_q;
    vlSelfRef.u_wr_arb__DOT__gnt = vlSelfRef.u_wr_arb__DOT__gnt_q;
    vlSelfRef.w_gnt_w = vlSelfRef.u_wr_arb__DOT__gnt;
    vlSelfRef.bready_o = ((~ (IData)(vlSelfRef.rst)) 
                          & (0U != ((IData)(vlSelfRef.w_bready_i) 
                                    & (IData)(vlSelfRef.w_gnt_w))));
}

void Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_sequent__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__rst)) 
                                       | ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__bready_o)) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__rready_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:215: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 215, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__awvalid_o)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__wvalid_o))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__arvalid_o))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:216: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_rst_blocks_valid", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 216, "");
            }
            if ((1U & (~ (IData)(vlSelfRef.rst)))) {
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__w_gnt_w))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:221: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_w_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 221, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I((IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__r_gnt_r))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_r_gnt_onehot", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__awvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:223: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_awvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 223, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__wvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__w_gnt_w)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_wvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 224, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__arvalid_o)) 
                                           | (0U != (IData)(vlSelfRef.__Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__r_gnt_r)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axi_lite_slave_port.sv:225: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"crossbar_checker_top.u_dut.g_slv[3].u_sport.ap_arvalid_gnt", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axi_lite_slave_port.sv", 225, "");
                }
            }
        }
    }
}

void Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axi_lite_slave_port___nba_comb__TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_wvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_wvalid;
    vlSelfRef.w_awvalid_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_awvalid;
    vlSelfRef.w_data_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_data;
    vlSelfRef.w_strb_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_strb;
    vlSelfRef.w_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_prot;
    vlSelfRef.r_prot_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_prot;
    vlSelfRef.w_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__w_addr;
    vlSelfRef.r_addr_i = vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__r_addr;
    vlSelfRef.w_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_w_req) 
                               >> 6U));
    vlSelfRef.r_req_i = (3U & ((IData)(vlSymsp->TOP.crossbar_checker_top__DOT__u_dut__DOT__t_r_req) 
                               >> 6U));
    vlSelfRef.u_wr_arb__DOT__req = vlSelfRef.w_req_i;
    vlSelfRef.u_rd_arb__DOT__req = vlSelfRef.r_req_i;
}

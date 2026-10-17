// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_wdata;
    vlSelfRef.s_wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_wstrb;
    vlSelfRef.s_awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_awaddr;
    vlSelfRef.s_awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_awprot;
    vlSelfRef.s_awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_awvalid;
    vlSelfRef.s_wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_wvalid;
    vlSelfRef.s_bready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_bready;
    vlSelfRef.s_rready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_rready;
    vlSelfRef.s_arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_arprot;
    vlSelfRef.s_arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_arvalid;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__clk;
    vlSelfRef.s_araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__s_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__rst;
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    if ((0U != (vlSelfRef.s_wdata ^ vlSelfRef.__Vtogcov__s_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.s_wdata, vlSelfRef.__Vtogcov__s_wdata);
        vlSelfRef.__Vtogcov__s_wdata = vlSelfRef.s_wdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.__Vtogcov__s_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.s_wstrb, vlSelfRef.__Vtogcov__s_wstrb);
        vlSelfRef.__Vtogcov__s_wstrb = vlSelfRef.s_wstrb;
    }
    if ((0U != (vlSelfRef.s_awaddr ^ vlSelfRef.__Vtogcov__s_awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.s_awaddr, vlSelfRef.__Vtogcov__s_awaddr);
        vlSelfRef.__Vtogcov__s_awaddr = vlSelfRef.s_awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.s_awprot) ^ (IData)(vlSelfRef.__Vtogcov__s_awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.s_awprot, vlSelfRef.__Vtogcov__s_awprot);
        vlSelfRef.__Vtogcov__s_awprot = vlSelfRef.s_awprot;
    }
    if (((IData)(vlSelfRef.s_awvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.s_awvalid, vlSelfRef.__Vtogcov__s_awvalid);
        vlSelfRef.__Vtogcov__s_awvalid = vlSelfRef.s_awvalid;
    }
    if (((IData)(vlSelfRef.s_wvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.s_wvalid, vlSelfRef.__Vtogcov__s_wvalid);
        vlSelfRef.__Vtogcov__s_wvalid = vlSelfRef.s_wvalid;
    }
    if (((IData)(vlSelfRef.s_bready) ^ (IData)(vlSelfRef.__Vtogcov__s_bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.s_bready, vlSelfRef.__Vtogcov__s_bready);
        vlSelfRef.__Vtogcov__s_bready = vlSelfRef.s_bready;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_rready) ^ (IData)(vlSelfRef.__Vtogcov__s_rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.s_rready, vlSelfRef.__Vtogcov__s_rready);
        vlSelfRef.__Vtogcov__s_rready = vlSelfRef.s_rready;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if ((0U != ((IData)(vlSelfRef.s_arprot) ^ (IData)(vlSelfRef.__Vtogcov__s_arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.s_arprot, vlSelfRef.__Vtogcov__s_arprot);
        vlSelfRef.__Vtogcov__s_arprot = vlSelfRef.s_arprot;
    }
    if (((IData)(vlSelfRef.s_arvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.s_arvalid, vlSelfRef.__Vtogcov__s_arvalid);
        vlSelfRef.__Vtogcov__s_arvalid = vlSelfRef.s_arvalid;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if ((0U != (vlSelfRef.s_araddr ^ vlSelfRef.__Vtogcov__s_araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.s_araddr, vlSelfRef.__Vtogcov__s_araddr);
        vlSelfRef.__Vtogcov__s_araddr = vlSelfRef.s_araddr;
    }
    vlSelfRef.unused_ok = (1U & (VL_REDXOR_4(vlSelfRef.s_awprot) 
                                 ^ (VL_REDXOR_4(vlSelfRef.s_arprot) 
                                    ^ VL_REDXOR_32(
                                                   ((vlSelfRef.s_araddr 
                                                     ^ vlSelfRef.s_awaddr) 
                                                    >> 6U)))));
    vlSelfRef.reg_rd_addr = (0x0000003fU & vlSelfRef.s_araddr);
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.unused_ok) ^ (IData)(vlSelfRef.__Vtogcov__unused_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 678, vlSelfRef.unused_ok, vlSelfRef.__Vtogcov__unused_ok);
        vlSelfRef.__Vtogcov__unused_ok = vlSelfRef.unused_ok;
    }
    if ((0U != ((IData)(vlSelfRef.reg_rd_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 396, vlSelfRef.reg_rd_addr, vlSelfRef.__Vtogcov__reg_rd_addr);
        vlSelfRef.__Vtogcov__reg_rd_addr = vlSelfRef.reg_rd_addr;
    }
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit;
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[674]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[676]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_timer.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[675]);
    }
    ++(vlSelf->__Vcoverage[677]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[671]);
        vlSelfRef.rvalid_q = 0U;
        vlSelfRef.rdata_q = 0U;
        vlSelfRef.rresp_q = 0U;
    } else {
        if (vlSelfRef.ar_hs) {
            if (vlSelfRef.reg_rd_hit) {
                ++(vlSelf->__Vcoverage[666]);
                vlSelfRef.__VlemCond_1 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[667]);
                vlSelfRef.__VlemCond_1 = 2U;
            }
            vlSelfRef.rvalid_q = 1U;
            vlSelfRef.rdata_q = vlSelfRef.reg_rd_data;
            vlSelfRef.rresp_q = vlSelfRef.__VlemCond_1;
            ++(vlSelf->__Vcoverage[670]);
        } else if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[668]);
            vlSelfRef.rvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[669]);
        }
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[663]);
        vlSelfRef.aw_pend_q = 0U;
        vlSelfRef.aw_addr_q = 0U;
        vlSelfRef.w_pend_q = 0U;
        vlSelfRef.w_data_q = 0U;
        vlSelfRef.w_strb_q = 0U;
        vlSelfRef.bvalid_q = 0U;
        vlSelfRef.bresp_q = 0U;
    } else {
        if (vlSelfRef.aw_hs) {
            ++(vlSelf->__Vcoverage[654]);
            vlSelfRef.aw_pend_q = 1U;
            vlSelfRef.aw_addr_q = (0x0000003fU & vlSelfRef.s_awaddr);
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[652]);
            vlSelfRef.aw_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[653]);
        }
        if (vlSelfRef.w_hs) {
            ++(vlSelf->__Vcoverage[657]);
            vlSelfRef.w_pend_q = 1U;
            vlSelfRef.w_data_q = vlSelfRef.s_wdata;
            vlSelfRef.w_strb_q = vlSelfRef.s_wstrb;
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[655]);
            vlSelfRef.w_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[656]);
        }
        if (vlSelfRef.wr_apply) {
            if (vlSelfRef.reg_wr_hit) {
                ++(vlSelf->__Vcoverage[658]);
                vlSelfRef.__VlemCond_0 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[659]);
                vlSelfRef.__VlemCond_0 = 2U;
            }
            vlSelfRef.bvalid_q = 1U;
            vlSelfRef.bresp_q = vlSelfRef.__VlemCond_0;
            ++(vlSelf->__Vcoverage[662]);
        } else if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[660]);
            vlSelfRef.bvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[661]);
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[665]);
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__2(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
}

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_wdata;
    vlSelfRef.s_wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_wstrb;
    vlSelfRef.s_awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_awaddr;
    vlSelfRef.s_awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_awvalid;
    vlSelfRef.s_wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_wvalid;
    vlSelfRef.s_bready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_bready;
    vlSelfRef.s_rready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_rready;
    vlSelfRef.s_awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot;
    vlSelfRef.s_arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot;
    vlSelfRef.s_arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_arvalid;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__clk;
    vlSelfRef.s_araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__s_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__rst;
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    if ((0U != (vlSelfRef.s_wdata ^ vlSelfRef.__Vtogcov__s_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.s_wdata, vlSelfRef.__Vtogcov__s_wdata);
        vlSelfRef.__Vtogcov__s_wdata = vlSelfRef.s_wdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.__Vtogcov__s_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.s_wstrb, vlSelfRef.__Vtogcov__s_wstrb);
        vlSelfRef.__Vtogcov__s_wstrb = vlSelfRef.s_wstrb;
    }
    if ((0U != (vlSelfRef.s_awaddr ^ vlSelfRef.__Vtogcov__s_awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.s_awaddr, vlSelfRef.__Vtogcov__s_awaddr);
        vlSelfRef.__Vtogcov__s_awaddr = vlSelfRef.s_awaddr;
    }
    if (((IData)(vlSelfRef.s_awvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.s_awvalid, vlSelfRef.__Vtogcov__s_awvalid);
        vlSelfRef.__Vtogcov__s_awvalid = vlSelfRef.s_awvalid;
    }
    if (((IData)(vlSelfRef.s_wvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.s_wvalid, vlSelfRef.__Vtogcov__s_wvalid);
        vlSelfRef.__Vtogcov__s_wvalid = vlSelfRef.s_wvalid;
    }
    if (((IData)(vlSelfRef.s_bready) ^ (IData)(vlSelfRef.__Vtogcov__s_bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.s_bready, vlSelfRef.__Vtogcov__s_bready);
        vlSelfRef.__Vtogcov__s_bready = vlSelfRef.s_bready;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_rready) ^ (IData)(vlSelfRef.__Vtogcov__s_rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.s_rready, vlSelfRef.__Vtogcov__s_rready);
        vlSelfRef.__Vtogcov__s_rready = vlSelfRef.s_rready;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if ((0U != ((IData)(vlSelfRef.s_awprot) ^ (IData)(vlSelfRef.__Vtogcov__s_awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.s_awprot, vlSelfRef.__Vtogcov__s_awprot);
        vlSelfRef.__Vtogcov__s_awprot = vlSelfRef.s_awprot;
    }
    if ((0U != ((IData)(vlSelfRef.s_arprot) ^ (IData)(vlSelfRef.__Vtogcov__s_arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.s_arprot, vlSelfRef.__Vtogcov__s_arprot);
        vlSelfRef.__Vtogcov__s_arprot = vlSelfRef.s_arprot;
    }
    if (((IData)(vlSelfRef.s_arvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.s_arvalid, vlSelfRef.__Vtogcov__s_arvalid);
        vlSelfRef.__Vtogcov__s_arvalid = vlSelfRef.s_arvalid;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if ((0U != (vlSelfRef.s_araddr ^ vlSelfRef.__Vtogcov__s_araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.s_araddr, vlSelfRef.__Vtogcov__s_araddr);
        vlSelfRef.__Vtogcov__s_araddr = vlSelfRef.s_araddr;
    }
    vlSelfRef.unused_ok = (1U & (VL_REDXOR_4(vlSelfRef.s_awprot) 
                                 ^ (VL_REDXOR_4(vlSelfRef.s_arprot) 
                                    ^ VL_REDXOR_32(
                                                   ((vlSelfRef.s_araddr 
                                                     ^ vlSelfRef.s_awaddr) 
                                                    >> 6U)))));
    vlSelfRef.reg_rd_addr = (0x0000003fU & vlSelfRef.s_araddr);
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.unused_ok) ^ (IData)(vlSelfRef.__Vtogcov__unused_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 678, vlSelfRef.unused_ok, vlSelfRef.__Vtogcov__unused_ok);
        vlSelfRef.__Vtogcov__unused_ok = vlSelfRef.unused_ok;
    }
    if ((0U != ((IData)(vlSelfRef.reg_rd_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 396, vlSelfRef.reg_rd_addr, vlSelfRef.__Vtogcov__reg_rd_addr);
        vlSelfRef.__Vtogcov__reg_rd_addr = vlSelfRef.reg_rd_addr;
    }
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit;
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[674]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[676]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_gpio.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[675]);
    }
    ++(vlSelf->__Vcoverage[677]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[671]);
        vlSelfRef.rvalid_q = 0U;
        vlSelfRef.rdata_q = 0U;
        vlSelfRef.rresp_q = 0U;
    } else {
        if (vlSelfRef.ar_hs) {
            if (vlSelfRef.reg_rd_hit) {
                ++(vlSelf->__Vcoverage[666]);
                vlSelfRef.__VlemCond_1 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[667]);
                vlSelfRef.__VlemCond_1 = 2U;
            }
            vlSelfRef.rvalid_q = 1U;
            vlSelfRef.rdata_q = vlSelfRef.reg_rd_data;
            vlSelfRef.rresp_q = vlSelfRef.__VlemCond_1;
            ++(vlSelf->__Vcoverage[670]);
        } else if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[668]);
            vlSelfRef.rvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[669]);
        }
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[663]);
        vlSelfRef.aw_pend_q = 0U;
        vlSelfRef.aw_addr_q = 0U;
        vlSelfRef.w_pend_q = 0U;
        vlSelfRef.w_data_q = 0U;
        vlSelfRef.w_strb_q = 0U;
        vlSelfRef.bvalid_q = 0U;
        vlSelfRef.bresp_q = 0U;
    } else {
        if (vlSelfRef.aw_hs) {
            ++(vlSelf->__Vcoverage[654]);
            vlSelfRef.aw_pend_q = 1U;
            vlSelfRef.aw_addr_q = (0x0000003fU & vlSelfRef.s_awaddr);
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[652]);
            vlSelfRef.aw_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[653]);
        }
        if (vlSelfRef.w_hs) {
            ++(vlSelf->__Vcoverage[657]);
            vlSelfRef.w_pend_q = 1U;
            vlSelfRef.w_data_q = vlSelfRef.s_wdata;
            vlSelfRef.w_strb_q = vlSelfRef.s_wstrb;
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[655]);
            vlSelfRef.w_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[656]);
        }
        if (vlSelfRef.wr_apply) {
            if (vlSelfRef.reg_wr_hit) {
                ++(vlSelf->__Vcoverage[658]);
                vlSelfRef.__VlemCond_0 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[659]);
                vlSelfRef.__VlemCond_0 = 2U;
            }
            vlSelfRef.bvalid_q = 1U;
            vlSelfRef.bresp_q = vlSelfRef.__VlemCond_0;
            ++(vlSelf->__Vcoverage[662]);
        } else if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[660]);
            vlSelfRef.bvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[661]);
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[665]);
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__2(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
}

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_wdata;
    vlSelfRef.s_wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_wstrb;
    vlSelfRef.s_awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_awaddr;
    vlSelfRef.s_awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_awprot;
    vlSelfRef.s_awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_awvalid;
    vlSelfRef.s_wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_wvalid;
    vlSelfRef.s_bready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_bready;
    vlSelfRef.s_rready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_rready;
    vlSelfRef.s_arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_arprot;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__clk;
    vlSelfRef.s_arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_arvalid;
    vlSelfRef.s_araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__s_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__rst;
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    if ((0U != (vlSelfRef.s_wdata ^ vlSelfRef.__Vtogcov__s_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.s_wdata, vlSelfRef.__Vtogcov__s_wdata);
        vlSelfRef.__Vtogcov__s_wdata = vlSelfRef.s_wdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.__Vtogcov__s_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.s_wstrb, vlSelfRef.__Vtogcov__s_wstrb);
        vlSelfRef.__Vtogcov__s_wstrb = vlSelfRef.s_wstrb;
    }
    if ((0U != (vlSelfRef.s_awaddr ^ vlSelfRef.__Vtogcov__s_awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.s_awaddr, vlSelfRef.__Vtogcov__s_awaddr);
        vlSelfRef.__Vtogcov__s_awaddr = vlSelfRef.s_awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.s_awprot) ^ (IData)(vlSelfRef.__Vtogcov__s_awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.s_awprot, vlSelfRef.__Vtogcov__s_awprot);
        vlSelfRef.__Vtogcov__s_awprot = vlSelfRef.s_awprot;
    }
    if (((IData)(vlSelfRef.s_awvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.s_awvalid, vlSelfRef.__Vtogcov__s_awvalid);
        vlSelfRef.__Vtogcov__s_awvalid = vlSelfRef.s_awvalid;
    }
    if (((IData)(vlSelfRef.s_wvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.s_wvalid, vlSelfRef.__Vtogcov__s_wvalid);
        vlSelfRef.__Vtogcov__s_wvalid = vlSelfRef.s_wvalid;
    }
    if (((IData)(vlSelfRef.s_bready) ^ (IData)(vlSelfRef.__Vtogcov__s_bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.s_bready, vlSelfRef.__Vtogcov__s_bready);
        vlSelfRef.__Vtogcov__s_bready = vlSelfRef.s_bready;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_rready) ^ (IData)(vlSelfRef.__Vtogcov__s_rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.s_rready, vlSelfRef.__Vtogcov__s_rready);
        vlSelfRef.__Vtogcov__s_rready = vlSelfRef.s_rready;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if ((0U != ((IData)(vlSelfRef.s_arprot) ^ (IData)(vlSelfRef.__Vtogcov__s_arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.s_arprot, vlSelfRef.__Vtogcov__s_arprot);
        vlSelfRef.__Vtogcov__s_arprot = vlSelfRef.s_arprot;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.s_arvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.s_arvalid, vlSelfRef.__Vtogcov__s_arvalid);
        vlSelfRef.__Vtogcov__s_arvalid = vlSelfRef.s_arvalid;
    }
    if ((0U != (vlSelfRef.s_araddr ^ vlSelfRef.__Vtogcov__s_araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.s_araddr, vlSelfRef.__Vtogcov__s_araddr);
        vlSelfRef.__Vtogcov__s_araddr = vlSelfRef.s_araddr;
    }
    vlSelfRef.unused_ok = (1U & (VL_REDXOR_4(vlSelfRef.s_awprot) 
                                 ^ (VL_REDXOR_4(vlSelfRef.s_arprot) 
                                    ^ VL_REDXOR_32(
                                                   ((vlSelfRef.s_araddr 
                                                     ^ vlSelfRef.s_awaddr) 
                                                    >> 6U)))));
    vlSelfRef.reg_rd_addr = (0x0000003fU & vlSelfRef.s_araddr);
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.unused_ok) ^ (IData)(vlSelfRef.__Vtogcov__unused_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 678, vlSelfRef.unused_ok, vlSelfRef.__Vtogcov__unused_ok);
        vlSelfRef.__Vtogcov__unused_ok = vlSelfRef.unused_ok;
    }
    if ((0U != ((IData)(vlSelfRef.reg_rd_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 396, vlSelfRef.reg_rd_addr, vlSelfRef.__Vtogcov__reg_rd_addr);
        vlSelfRef.__Vtogcov__reg_rd_addr = vlSelfRef.reg_rd_addr;
    }
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___ico_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit;
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__0(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__rst)) 
                                       | (((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_awready)) 
                                           & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_wready))) 
                                          & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_arready))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_rst_blocks_ready", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 211, "");
            }
        }
    }
    ++(vlSelf->__Vcoverage[674]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[676]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__aw_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_awready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:217: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_aw_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 217, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__w_pend_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_wready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:218: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_w_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 218, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__bvalid_q)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_awready)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_wready))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:219: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_b_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 219, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__rvalid_q)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_arready)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:220: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_r_blocked", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 220, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__wr_apply)) 
                                           | (((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__aw_pend_q) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__w_pend_q)) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__bvalid_q))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:222: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_wr_apply_needs_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 222, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__reg_wr_en)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__aw_pend_q) 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__w_pend_q)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_regfile_slave.sv:224: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_uart.u_regfile.ap_reg_wr_en_implies_both", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/rtl/axil_regfile_slave.sv", 224, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[675]);
    }
    ++(vlSelf->__Vcoverage[677]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[671]);
        vlSelfRef.rvalid_q = 0U;
        vlSelfRef.rdata_q = 0U;
        vlSelfRef.rresp_q = 0U;
    } else {
        if (vlSelfRef.ar_hs) {
            if (vlSelfRef.reg_rd_hit) {
                ++(vlSelf->__Vcoverage[666]);
                vlSelfRef.__VlemCond_1 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[667]);
                vlSelfRef.__VlemCond_1 = 2U;
            }
            vlSelfRef.rvalid_q = 1U;
            vlSelfRef.rdata_q = vlSelfRef.reg_rd_data;
            vlSelfRef.rresp_q = vlSelfRef.__VlemCond_1;
            ++(vlSelf->__Vcoverage[670]);
        } else if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[668]);
            vlSelfRef.rvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[669]);
        }
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[663]);
        vlSelfRef.aw_pend_q = 0U;
        vlSelfRef.aw_addr_q = 0U;
        vlSelfRef.w_pend_q = 0U;
        vlSelfRef.w_data_q = 0U;
        vlSelfRef.w_strb_q = 0U;
        vlSelfRef.bvalid_q = 0U;
        vlSelfRef.bresp_q = 0U;
    } else {
        if (vlSelfRef.aw_hs) {
            ++(vlSelf->__Vcoverage[654]);
            vlSelfRef.aw_pend_q = 1U;
            vlSelfRef.aw_addr_q = (0x0000003fU & vlSelfRef.s_awaddr);
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[652]);
            vlSelfRef.aw_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[653]);
        }
        if (vlSelfRef.w_hs) {
            ++(vlSelf->__Vcoverage[657]);
            vlSelfRef.w_pend_q = 1U;
            vlSelfRef.w_data_q = vlSelfRef.s_wdata;
            vlSelfRef.w_strb_q = vlSelfRef.s_wstrb;
        } else if (vlSelfRef.wr_apply) {
            ++(vlSelf->__Vcoverage[655]);
            vlSelfRef.w_pend_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[656]);
        }
        if (vlSelfRef.wr_apply) {
            if (vlSelfRef.reg_wr_hit) {
                ++(vlSelf->__Vcoverage[658]);
                vlSelfRef.__VlemCond_0 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[659]);
                vlSelfRef.__VlemCond_0 = 2U;
            }
            vlSelfRef.bvalid_q = 1U;
            vlSelfRef.bresp_q = vlSelfRef.__VlemCond_0;
            ++(vlSelf->__Vcoverage[662]);
        } else if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[660]);
            vlSelfRef.bvalid_q = 0U;
        } else {
            ++(vlSelf->__Vcoverage[661]);
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[665]);
    if ((0U != (vlSelfRef.rdata_q ^ vlSelfRef.__Vtogcov__rdata_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 572, vlSelfRef.rdata_q, vlSelfRef.__Vtogcov__rdata_q);
        vlSelfRef.__Vtogcov__rdata_q = vlSelfRef.rdata_q;
    }
    vlSelfRef.s_rdata = vlSelfRef.rdata_q;
    if ((0U != ((IData)(vlSelfRef.rresp_q) ^ (IData)(vlSelfRef.__Vtogcov__rresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 636, vlSelfRef.rresp_q, vlSelfRef.__Vtogcov__rresp_q);
        vlSelfRef.__Vtogcov__rresp_q = vlSelfRef.rresp_q;
    }
    vlSelfRef.s_rresp = vlSelfRef.rresp_q;
    if (((IData)(vlSelfRef.rvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__rvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 570, vlSelfRef.rvalid_q, vlSelfRef.__Vtogcov__rvalid_q);
        vlSelfRef.__Vtogcov__rvalid_q = vlSelfRef.rvalid_q;
    }
    vlSelfRef.s_rvalid = vlSelfRef.rvalid_q;
    vlSelfRef.s_arready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | (IData)(vlSelfRef.rvalid_q))));
    if ((0U != (vlSelfRef.w_data_q ^ vlSelfRef.__Vtogcov__w_data_q))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 490, vlSelfRef.w_data_q, vlSelfRef.__Vtogcov__w_data_q);
        vlSelfRef.__Vtogcov__w_data_q = vlSelfRef.w_data_q;
    }
    vlSelfRef.reg_wr_data = vlSelfRef.w_data_q;
    if ((0U != ((IData)(vlSelfRef.w_strb_q) ^ (IData)(vlSelfRef.__Vtogcov__w_strb_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 554, vlSelfRef.w_strb_q, vlSelfRef.__Vtogcov__w_strb_q);
        vlSelfRef.__Vtogcov__w_strb_q = vlSelfRef.w_strb_q;
    }
    vlSelfRef.reg_wr_strb = vlSelfRef.w_strb_q;
    if ((0U != ((IData)(vlSelfRef.bresp_q) ^ (IData)(vlSelfRef.__Vtogcov__bresp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.bresp_q, vlSelfRef.__Vtogcov__bresp_q);
        vlSelfRef.__Vtogcov__bresp_q = vlSelfRef.bresp_q;
    }
    vlSelfRef.s_bresp = vlSelfRef.bresp_q;
    if ((0U != ((IData)(vlSelfRef.aw_addr_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_addr_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 478, vlSelfRef.aw_addr_q, vlSelfRef.__Vtogcov__aw_addr_q);
        vlSelfRef.__Vtogcov__aw_addr_q = vlSelfRef.aw_addr_q;
    }
    vlSelfRef.reg_wr_addr = vlSelfRef.aw_addr_q;
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if (((IData)(vlSelfRef.bvalid_q) ^ (IData)(vlSelfRef.__Vtogcov__bvalid_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.bvalid_q, vlSelfRef.__Vtogcov__bvalid_q);
        vlSelfRef.__Vtogcov__bvalid_q = vlSelfRef.bvalid_q;
    }
    vlSelfRef.wr_apply = ((IData)(vlSelfRef.aw_pend_q) 
                          & ((~ (IData)(vlSelfRef.bvalid_q)) 
                             & (IData)(vlSelfRef.w_pend_q)));
    vlSelfRef.s_bvalid = vlSelfRef.bvalid_q;
    vlSelfRef.s_wready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                   | ((IData)(vlSelfRef.bvalid_q) 
                                      | (IData)(vlSelfRef.w_pend_q)))));
    vlSelfRef.s_awready = (1U & (~ ((IData)(vlSelfRef.rst) 
                                    | ((IData)(vlSelfRef.aw_pend_q) 
                                       | (IData)(vlSelfRef.bvalid_q)))));
    if ((0U != (vlSelfRef.s_rdata ^ vlSelfRef.__Vtogcov__s_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.s_rdata, vlSelfRef.__Vtogcov__s_rdata);
        vlSelfRef.__Vtogcov__s_rdata = vlSelfRef.s_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.s_rresp) ^ (IData)(vlSelfRef.__Vtogcov__s_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.s_rresp, vlSelfRef.__Vtogcov__s_rresp);
        vlSelfRef.__Vtogcov__s_rresp = vlSelfRef.s_rresp;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.s_rvalid, vlSelfRef.__Vtogcov__s_rvalid);
        vlSelfRef.__Vtogcov__s_rvalid = vlSelfRef.s_rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.s_rready) & (IData)(vlSelfRef.s_rvalid));
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.__Vtogcov__s_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.s_arready, vlSelfRef.__Vtogcov__s_arready);
        vlSelfRef.__Vtogcov__s_arready = vlSelfRef.s_arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.s_arready) 
                       & (IData)(vlSelfRef.s_arvalid));
    if ((0U != (vlSelfRef.reg_wr_data ^ vlSelfRef.__Vtogcov__reg_wr_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 320, vlSelfRef.reg_wr_data, vlSelfRef.__Vtogcov__reg_wr_data);
        vlSelfRef.__Vtogcov__reg_wr_data = vlSelfRef.reg_wr_data;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_strb) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_strb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 384, vlSelfRef.reg_wr_strb, vlSelfRef.__Vtogcov__reg_wr_strb);
        vlSelfRef.__Vtogcov__reg_wr_strb = vlSelfRef.reg_wr_strb;
    }
    if ((0U != ((IData)(vlSelfRef.s_bresp) ^ (IData)(vlSelfRef.__Vtogcov__s_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.s_bresp, vlSelfRef.__Vtogcov__s_bresp);
        vlSelfRef.__Vtogcov__s_bresp = vlSelfRef.s_bresp;
    }
    if ((0U != ((IData)(vlSelfRef.reg_wr_addr) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 308, vlSelfRef.reg_wr_addr, vlSelfRef.__Vtogcov__reg_wr_addr);
        vlSelfRef.__Vtogcov__reg_wr_addr = vlSelfRef.reg_wr_addr;
    }
    if (((IData)(vlSelfRef.wr_apply) ^ (IData)(vlSelfRef.__Vtogcov__wr_apply))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 650, vlSelfRef.wr_apply, vlSelfRef.__Vtogcov__wr_apply);
        vlSelfRef.__Vtogcov__wr_apply = vlSelfRef.wr_apply;
    }
    vlSelfRef.reg_wr_en = vlSelfRef.wr_apply;
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.__Vtogcov__s_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.s_bvalid, vlSelfRef.__Vtogcov__s_bvalid);
        vlSelfRef.__Vtogcov__s_bvalid = vlSelfRef.s_bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.s_bready) & (IData)(vlSelfRef.s_bvalid));
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.__Vtogcov__s_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.s_wready, vlSelfRef.__Vtogcov__s_wready);
        vlSelfRef.__Vtogcov__s_wready = vlSelfRef.s_wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.s_wready) & (IData)(vlSelfRef.s_wvalid));
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.__Vtogcov__s_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.s_awready, vlSelfRef.__Vtogcov__s_awready);
        vlSelfRef.__Vtogcov__s_awready = vlSelfRef.s_awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.s_awready) 
                       & (IData)(vlSelfRef.s_awvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    vlSelfRef.reg_rd_en = vlSelfRef.ar_hs;
    if (((IData)(vlSelfRef.reg_wr_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.reg_wr_en, vlSelfRef.__Vtogcov__reg_wr_en);
        vlSelfRef.__Vtogcov__reg_wr_en = vlSelfRef.reg_wr_en;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 640, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.reg_rd_en) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.reg_rd_en, vlSelfRef.__Vtogcov__reg_rd_en);
        vlSelfRef.__Vtogcov__reg_rd_en = vlSelfRef.reg_rd_en;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__1(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit;
    vlSelfRef.reg_rd_data = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.reg_rd_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.reg_rd_hit, vlSelfRef.__Vtogcov__reg_rd_hit);
        vlSelfRef.__Vtogcov__reg_rd_hit = vlSelfRef.reg_rd_hit;
    }
    if ((0U != (vlSelfRef.reg_rd_data ^ vlSelfRef.__Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 410, vlSelfRef.reg_rd_data, vlSelfRef.__Vtogcov__reg_rd_data);
        vlSelfRef.__Vtogcov__reg_rd_data = vlSelfRef.reg_rd_data;
    }
}

void Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__2(Vtop_axil_regfile_slave* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_axil_regfile_slave___nba_sequent__TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_hit = vlSymsp->TOP.peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit;
    if (((IData)(vlSelfRef.reg_wr_hit) ^ (IData)(vlSelfRef.__Vtogcov__reg_wr_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.reg_wr_hit, vlSelfRef.__Vtogcov__reg_wr_hit);
        vlSelfRef.__Vtogcov__reg_wr_hit = vlSelfRef.reg_wr_hit;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    vlSelfRef.wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_wdata;
    vlSelfRef.wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__u_wstrb;
    vlSelfRef.awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_awaddr;
    vlSelfRef.awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_awprot;
    vlSelfRef.awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_awvalid;
    vlSelfRef.wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_wvalid;
    vlSelfRef.bready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_bready;
    vlSelfRef.rready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rready;
    vlSelfRef.arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__u_arprot;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__clk;
    vlSelfRef.arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_arvalid;
    vlSelfRef.araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__u_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__rst;
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
    if ((0U != (vlSelfRef.wdata ^ vlSelfRef.__Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.wdata, vlSelfRef.__Vtogcov__wdata);
        vlSelfRef.__Vtogcov__wdata = vlSelfRef.wdata;
    }
    if ((0U != ((IData)(vlSelfRef.wstrb) ^ (IData)(vlSelfRef.__Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.wstrb, vlSelfRef.__Vtogcov__wstrb);
        vlSelfRef.__Vtogcov__wstrb = vlSelfRef.wstrb;
    }
    if ((0U != (vlSelfRef.awaddr ^ vlSelfRef.__Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.awaddr, vlSelfRef.__Vtogcov__awaddr);
        vlSelfRef.__Vtogcov__awaddr = vlSelfRef.awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.awprot) ^ (IData)(vlSelfRef.__Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.awprot, vlSelfRef.__Vtogcov__awprot);
        vlSelfRef.__Vtogcov__awprot = vlSelfRef.awprot;
    }
    if (((IData)(vlSelfRef.awvalid) ^ (IData)(vlSelfRef.__Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.awvalid, vlSelfRef.__Vtogcov__awvalid);
        vlSelfRef.__Vtogcov__awvalid = vlSelfRef.awvalid;
    }
    if (((IData)(vlSelfRef.wvalid) ^ (IData)(vlSelfRef.__Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.wvalid, vlSelfRef.__Vtogcov__wvalid);
        vlSelfRef.__Vtogcov__wvalid = vlSelfRef.wvalid;
    }
    if (((IData)(vlSelfRef.bready) ^ (IData)(vlSelfRef.__Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.bready, vlSelfRef.__Vtogcov__bready);
        vlSelfRef.__Vtogcov__bready = vlSelfRef.bready;
    }
    if (((IData)(vlSelfRef.rready) ^ (IData)(vlSelfRef.__Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.rready, vlSelfRef.__Vtogcov__rready);
        vlSelfRef.__Vtogcov__rready = vlSelfRef.rready;
    }
    if ((0U != ((IData)(vlSelfRef.arprot) ^ (IData)(vlSelfRef.__Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.arprot, vlSelfRef.__Vtogcov__arprot);
        vlSelfRef.__Vtogcov__arprot = vlSelfRef.arprot;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.arvalid) ^ (IData)(vlSelfRef.__Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.arvalid, vlSelfRef.__Vtogcov__arvalid);
        vlSelfRef.__Vtogcov__arvalid = vlSelfRef.arvalid;
    }
    if ((0U != (vlSelfRef.araddr ^ vlSelfRef.__Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.araddr, vlSelfRef.__Vtogcov__araddr);
        vlSelfRef.__Vtogcov__araddr = vlSelfRef.araddr;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
}

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__u_bresp;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rresp;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rvalid;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_bvalid;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_wready;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_awready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_arready;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__aw_pend_q;
    __Vdly__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__aw_pay_q;
    __Vdly__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__w_pend_q;
    __Vdly__w_pend_q = 0;
    QData/*35:0*/ __Vdly__w_pay_q;
    __Vdly__w_pay_q = 0;
    CData/*0:0*/ __Vdly__b_pend_q;
    __Vdly__b_pend_q = 0;
    CData/*1:0*/ __Vdly__b_resp_q;
    __Vdly__b_resp_q = 0;
    CData/*0:0*/ __Vdly__ar_pend_q;
    __Vdly__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__ar_pay_q;
    __Vdly__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__r_pend_q;
    __Vdly__r_pend_q = 0;
    QData/*33:0*/ __Vdly__r_pay_q;
    __Vdly__r_pay_q = 0;
    CData/*0:0*/ __Vdly__wr_aw_acc_q;
    __Vdly__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__wr_w_acc_q;
    __Vdly__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__rd_acc_q;
    __Vdly__rd_acc_q = 0;
    // Body
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[665]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[666]);
    __Vdly__b_pend_q = vlSelfRef.b_pend_q;
    __Vdly__b_resp_q = vlSelfRef.b_resp_q;
    if (vlSelfRef.rst) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[667]);
        ++(vlSelf->__Vcoverage[670]);
        ++(vlSelf->__Vcoverage[671]);
    } else {
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    __Vdly__aw_pend_q = vlSelfRef.aw_pend_q;
    __Vdly__aw_pay_q = vlSelfRef.aw_pay_q;
    __Vdly__w_pend_q = vlSelfRef.w_pend_q;
    __Vdly__w_pay_q = vlSelfRef.w_pay_q;
    __Vdly__ar_pend_q = vlSelfRef.ar_pend_q;
    __Vdly__ar_pay_q = vlSelfRef.ar_pay_q;
    __Vdly__r_pend_q = vlSelfRef.r_pend_q;
    __Vdly__r_pay_q = vlSelfRef.r_pay_q;
    __Vdly__rd_acc_q = vlSelfRef.rd_acc_q;
    __Vdly__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    __Vdly__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[484]);
        __Vdly__b_pend_q = 0U;
        __Vdly__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.bvalid) & (~ (IData)(vlSelfRef.bready)))) {
        ++(vlSelf->__Vcoverage[482]);
        __Vdly__b_pend_q = 1U;
        __Vdly__b_resp_q = vlSelfRef.bresp;
    } else {
        ++(vlSelf->__Vcoverage[483]);
        __Vdly__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.bresp) 
                                  != (IData)(vlSelfRef.b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[485]);
    } else {
        ++(vlSelf->__Vcoverage[486]);
    }
    ++(vlSelf->__Vcoverage[487]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[392]);
        __Vdly__aw_pend_q = 0U;
        __Vdly__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.awvalid) & (~ (IData)(vlSelfRef.awready)))) {
        ++(vlSelf->__Vcoverage[390]);
        __Vdly__aw_pend_q = 1U;
        __Vdly__aw_pay_q = (((QData)((IData)(vlSelfRef.awaddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.awprot)));
    } else {
        ++(vlSelf->__Vcoverage[391]);
        __Vdly__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.awprot))) 
                                  != vlSelfRef.aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[393]);
    } else {
        ++(vlSelf->__Vcoverage[394]);
    }
    ++(vlSelf->__Vcoverage[395]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[472]);
        __Vdly__w_pend_q = 0U;
        __Vdly__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.wvalid) & (~ (IData)(vlSelfRef.wready)))) {
        ++(vlSelf->__Vcoverage[470]);
        __Vdly__w_pend_q = 1U;
        __Vdly__w_pay_q = (((QData)((IData)(vlSelfRef.wdata)) 
                            << 4U) | (QData)((IData)(vlSelfRef.wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[471]);
        __Vdly__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.wstrb))) 
                                  != vlSelfRef.w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[473]);
    } else {
        ++(vlSelf->__Vcoverage[474]);
    }
    ++(vlSelf->__Vcoverage[475]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[562]);
        __Vdly__ar_pend_q = 0U;
        __Vdly__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.arvalid) & (~ (IData)(vlSelfRef.arready)))) {
        ++(vlSelf->__Vcoverage[560]);
        __Vdly__ar_pend_q = 1U;
        __Vdly__ar_pay_q = (((QData)((IData)(vlSelfRef.araddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.arprot)));
    } else {
        ++(vlSelf->__Vcoverage[561]);
        __Vdly__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.arprot))) 
                                  != vlSelfRef.ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[563]);
    } else {
        ++(vlSelf->__Vcoverage[564]);
    }
    ++(vlSelf->__Vcoverage[565]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[638]);
        __Vdly__r_pend_q = 0U;
        __Vdly__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.rvalid) & (~ (IData)(vlSelfRef.rready)))) {
        ++(vlSelf->__Vcoverage[636]);
        __Vdly__r_pend_q = 1U;
        __Vdly__r_pay_q = (((QData)((IData)(vlSelfRef.rdata)) 
                            << 2U) | (QData)((IData)(vlSelfRef.rresp)));
    } else {
        ++(vlSelf->__Vcoverage[637]);
        __Vdly__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.rresp))) 
                                  != vlSelfRef.r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[639]);
    } else {
        ++(vlSelf->__Vcoverage[640]);
    }
    ++(vlSelf->__Vcoverage[641]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[659]);
        __Vdly__wr_aw_acc_q = 0U;
        __Vdly__wr_w_acc_q = 0U;
        __Vdly__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[654]);
            __Vdly__wr_aw_acc_q = vlSelfRef.aw_hs;
            __Vdly__wr_w_acc_q = vlSelfRef.w_hs;
        } else {
            if (vlSelfRef.aw_hs) {
                ++(vlSelf->__Vcoverage[650]);
                __Vdly__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[651]);
            }
            if (vlSelfRef.w_hs) {
                ++(vlSelf->__Vcoverage[652]);
                __Vdly__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[653]);
            }
            ++(vlSelf->__Vcoverage[655]);
        }
        if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[658]);
            __Vdly__rd_acc_q = vlSelfRef.ar_hs;
        } else if (vlSelfRef.ar_hs) {
            ++(vlSelf->__Vcoverage[656]);
            __Vdly__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[657]);
        }
        ++(vlSelf->__Vcoverage[660]);
    }
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[662]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.bvalid)) 
                                           | (IData)(vlSelfRef.wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.rvalid)) 
                                           | (IData)(vlSelfRef.rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.aw_hs) 
                                   & (IData)(vlSelfRef.wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.w_hs) 
                                   & (IData)(vlSelfRef.wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.ar_hs) 
                                   & (IData)(vlSelfRef.rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_uart.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[661]);
    }
    ++(vlSelf->__Vcoverage[663]);
    vlSelfRef.b_pend_q = __Vdly__b_pend_q;
    vlSelfRef.b_resp_q = __Vdly__b_resp_q;
    vlSelfRef.aw_pend_q = __Vdly__aw_pend_q;
    vlSelfRef.aw_pay_q = __Vdly__aw_pay_q;
    vlSelfRef.w_pend_q = __Vdly__w_pend_q;
    vlSelfRef.w_pay_q = __Vdly__w_pay_q;
    vlSelfRef.ar_pend_q = __Vdly__ar_pend_q;
    vlSelfRef.ar_pay_q = __Vdly__ar_pay_q;
    vlSelfRef.r_pend_q = __Vdly__r_pend_q;
    vlSelfRef.r_pay_q = __Vdly__r_pay_q;
    vlSelfRef.rd_acc_q = __Vdly__rd_acc_q;
    vlSelfRef.wr_aw_acc_q = __Vdly__wr_aw_acc_q;
    vlSelfRef.wr_w_acc_q = __Vdly__wr_w_acc_q;
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_uart__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__u_bresp;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_awready;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_wready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__u_arready;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rresp;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_bvalid;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__u_rvalid;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
}

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    vlSelfRef.wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__g_wdata;
    vlSelfRef.wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__g_wstrb;
    vlSelfRef.awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__g_awaddr;
    vlSelfRef.awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_awvalid;
    vlSelfRef.wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_wvalid;
    vlSelfRef.bready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_bready;
    vlSelfRef.rready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rready;
    vlSelfRef.awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__g_awprot;
    vlSelfRef.arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__g_arprot;
    vlSelfRef.arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_arvalid;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__clk;
    vlSelfRef.araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__g_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__rst;
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
    if ((0U != (vlSelfRef.wdata ^ vlSelfRef.__Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.wdata, vlSelfRef.__Vtogcov__wdata);
        vlSelfRef.__Vtogcov__wdata = vlSelfRef.wdata;
    }
    if ((0U != ((IData)(vlSelfRef.wstrb) ^ (IData)(vlSelfRef.__Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.wstrb, vlSelfRef.__Vtogcov__wstrb);
        vlSelfRef.__Vtogcov__wstrb = vlSelfRef.wstrb;
    }
    if ((0U != (vlSelfRef.awaddr ^ vlSelfRef.__Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.awaddr, vlSelfRef.__Vtogcov__awaddr);
        vlSelfRef.__Vtogcov__awaddr = vlSelfRef.awaddr;
    }
    if (((IData)(vlSelfRef.awvalid) ^ (IData)(vlSelfRef.__Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.awvalid, vlSelfRef.__Vtogcov__awvalid);
        vlSelfRef.__Vtogcov__awvalid = vlSelfRef.awvalid;
    }
    if (((IData)(vlSelfRef.wvalid) ^ (IData)(vlSelfRef.__Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.wvalid, vlSelfRef.__Vtogcov__wvalid);
        vlSelfRef.__Vtogcov__wvalid = vlSelfRef.wvalid;
    }
    if (((IData)(vlSelfRef.bready) ^ (IData)(vlSelfRef.__Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.bready, vlSelfRef.__Vtogcov__bready);
        vlSelfRef.__Vtogcov__bready = vlSelfRef.bready;
    }
    if (((IData)(vlSelfRef.rready) ^ (IData)(vlSelfRef.__Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.rready, vlSelfRef.__Vtogcov__rready);
        vlSelfRef.__Vtogcov__rready = vlSelfRef.rready;
    }
    if ((0U != ((IData)(vlSelfRef.awprot) ^ (IData)(vlSelfRef.__Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.awprot, vlSelfRef.__Vtogcov__awprot);
        vlSelfRef.__Vtogcov__awprot = vlSelfRef.awprot;
    }
    if ((0U != ((IData)(vlSelfRef.arprot) ^ (IData)(vlSelfRef.__Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.arprot, vlSelfRef.__Vtogcov__arprot);
        vlSelfRef.__Vtogcov__arprot = vlSelfRef.arprot;
    }
    if (((IData)(vlSelfRef.arvalid) ^ (IData)(vlSelfRef.__Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.arvalid, vlSelfRef.__Vtogcov__arvalid);
        vlSelfRef.__Vtogcov__arvalid = vlSelfRef.arvalid;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if ((0U != (vlSelfRef.araddr ^ vlSelfRef.__Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.araddr, vlSelfRef.__Vtogcov__araddr);
        vlSelfRef.__Vtogcov__araddr = vlSelfRef.araddr;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
}

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__g_bresp;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rresp;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rvalid;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_bvalid;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_wready;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_awready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_arready;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__aw_pend_q;
    __Vdly__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__aw_pay_q;
    __Vdly__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__w_pend_q;
    __Vdly__w_pend_q = 0;
    QData/*35:0*/ __Vdly__w_pay_q;
    __Vdly__w_pay_q = 0;
    CData/*0:0*/ __Vdly__b_pend_q;
    __Vdly__b_pend_q = 0;
    CData/*1:0*/ __Vdly__b_resp_q;
    __Vdly__b_resp_q = 0;
    CData/*0:0*/ __Vdly__ar_pend_q;
    __Vdly__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__ar_pay_q;
    __Vdly__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__r_pend_q;
    __Vdly__r_pend_q = 0;
    QData/*33:0*/ __Vdly__r_pay_q;
    __Vdly__r_pay_q = 0;
    CData/*0:0*/ __Vdly__wr_aw_acc_q;
    __Vdly__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__wr_w_acc_q;
    __Vdly__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__rd_acc_q;
    __Vdly__rd_acc_q = 0;
    // Body
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[665]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[666]);
    __Vdly__b_pend_q = vlSelfRef.b_pend_q;
    __Vdly__b_resp_q = vlSelfRef.b_resp_q;
    if (vlSelfRef.rst) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[667]);
        ++(vlSelf->__Vcoverage[670]);
        ++(vlSelf->__Vcoverage[671]);
    } else {
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    __Vdly__aw_pend_q = vlSelfRef.aw_pend_q;
    __Vdly__aw_pay_q = vlSelfRef.aw_pay_q;
    __Vdly__w_pend_q = vlSelfRef.w_pend_q;
    __Vdly__w_pay_q = vlSelfRef.w_pay_q;
    __Vdly__ar_pend_q = vlSelfRef.ar_pend_q;
    __Vdly__ar_pay_q = vlSelfRef.ar_pay_q;
    __Vdly__r_pend_q = vlSelfRef.r_pend_q;
    __Vdly__r_pay_q = vlSelfRef.r_pay_q;
    __Vdly__rd_acc_q = vlSelfRef.rd_acc_q;
    __Vdly__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    __Vdly__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[484]);
        __Vdly__b_pend_q = 0U;
        __Vdly__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.bvalid) & (~ (IData)(vlSelfRef.bready)))) {
        ++(vlSelf->__Vcoverage[482]);
        __Vdly__b_pend_q = 1U;
        __Vdly__b_resp_q = vlSelfRef.bresp;
    } else {
        ++(vlSelf->__Vcoverage[483]);
        __Vdly__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.bresp) 
                                  != (IData)(vlSelfRef.b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[485]);
    } else {
        ++(vlSelf->__Vcoverage[486]);
    }
    ++(vlSelf->__Vcoverage[487]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[392]);
        __Vdly__aw_pend_q = 0U;
        __Vdly__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.awvalid) & (~ (IData)(vlSelfRef.awready)))) {
        ++(vlSelf->__Vcoverage[390]);
        __Vdly__aw_pend_q = 1U;
        __Vdly__aw_pay_q = (((QData)((IData)(vlSelfRef.awaddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.awprot)));
    } else {
        ++(vlSelf->__Vcoverage[391]);
        __Vdly__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.awprot))) 
                                  != vlSelfRef.aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[393]);
    } else {
        ++(vlSelf->__Vcoverage[394]);
    }
    ++(vlSelf->__Vcoverage[395]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[472]);
        __Vdly__w_pend_q = 0U;
        __Vdly__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.wvalid) & (~ (IData)(vlSelfRef.wready)))) {
        ++(vlSelf->__Vcoverage[470]);
        __Vdly__w_pend_q = 1U;
        __Vdly__w_pay_q = (((QData)((IData)(vlSelfRef.wdata)) 
                            << 4U) | (QData)((IData)(vlSelfRef.wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[471]);
        __Vdly__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.wstrb))) 
                                  != vlSelfRef.w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[473]);
    } else {
        ++(vlSelf->__Vcoverage[474]);
    }
    ++(vlSelf->__Vcoverage[475]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[562]);
        __Vdly__ar_pend_q = 0U;
        __Vdly__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.arvalid) & (~ (IData)(vlSelfRef.arready)))) {
        ++(vlSelf->__Vcoverage[560]);
        __Vdly__ar_pend_q = 1U;
        __Vdly__ar_pay_q = (((QData)((IData)(vlSelfRef.araddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.arprot)));
    } else {
        ++(vlSelf->__Vcoverage[561]);
        __Vdly__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.arprot))) 
                                  != vlSelfRef.ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[563]);
    } else {
        ++(vlSelf->__Vcoverage[564]);
    }
    ++(vlSelf->__Vcoverage[565]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[638]);
        __Vdly__r_pend_q = 0U;
        __Vdly__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.rvalid) & (~ (IData)(vlSelfRef.rready)))) {
        ++(vlSelf->__Vcoverage[636]);
        __Vdly__r_pend_q = 1U;
        __Vdly__r_pay_q = (((QData)((IData)(vlSelfRef.rdata)) 
                            << 2U) | (QData)((IData)(vlSelfRef.rresp)));
    } else {
        ++(vlSelf->__Vcoverage[637]);
        __Vdly__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.rresp))) 
                                  != vlSelfRef.r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[639]);
    } else {
        ++(vlSelf->__Vcoverage[640]);
    }
    ++(vlSelf->__Vcoverage[641]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[659]);
        __Vdly__wr_aw_acc_q = 0U;
        __Vdly__wr_w_acc_q = 0U;
        __Vdly__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[654]);
            __Vdly__wr_aw_acc_q = vlSelfRef.aw_hs;
            __Vdly__wr_w_acc_q = vlSelfRef.w_hs;
        } else {
            if (vlSelfRef.aw_hs) {
                ++(vlSelf->__Vcoverage[650]);
                __Vdly__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[651]);
            }
            if (vlSelfRef.w_hs) {
                ++(vlSelf->__Vcoverage[652]);
                __Vdly__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[653]);
            }
            ++(vlSelf->__Vcoverage[655]);
        }
        if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[658]);
            __Vdly__rd_acc_q = vlSelfRef.ar_hs;
        } else if (vlSelfRef.ar_hs) {
            ++(vlSelf->__Vcoverage[656]);
            __Vdly__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[657]);
        }
        ++(vlSelf->__Vcoverage[660]);
    }
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[662]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.bvalid)) 
                                           | (IData)(vlSelfRef.wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.rvalid)) 
                                           | (IData)(vlSelfRef.rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.aw_hs) 
                                   & (IData)(vlSelfRef.wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.w_hs) 
                                   & (IData)(vlSelfRef.wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.ar_hs) 
                                   & (IData)(vlSelfRef.rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_gpio.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[661]);
    }
    ++(vlSelf->__Vcoverage[663]);
    vlSelfRef.b_pend_q = __Vdly__b_pend_q;
    vlSelfRef.b_resp_q = __Vdly__b_resp_q;
    vlSelfRef.aw_pend_q = __Vdly__aw_pend_q;
    vlSelfRef.aw_pay_q = __Vdly__aw_pay_q;
    vlSelfRef.w_pend_q = __Vdly__w_pend_q;
    vlSelfRef.w_pay_q = __Vdly__w_pay_q;
    vlSelfRef.ar_pend_q = __Vdly__ar_pend_q;
    vlSelfRef.ar_pay_q = __Vdly__ar_pay_q;
    vlSelfRef.r_pend_q = __Vdly__r_pend_q;
    vlSelfRef.r_pay_q = __Vdly__r_pay_q;
    vlSelfRef.rd_acc_q = __Vdly__rd_acc_q;
    vlSelfRef.wr_aw_acc_q = __Vdly__wr_aw_acc_q;
    vlSelfRef.wr_w_acc_q = __Vdly__wr_w_acc_q;
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_gpio__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__g_bresp;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_awready;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_wready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__g_arready;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rresp;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_bvalid;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__g_rvalid;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
}

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    vlSelfRef.wdata = vlSymsp->TOP.peripheral_unit_harness__DOT__t_wdata;
    vlSelfRef.wstrb = vlSymsp->TOP.peripheral_unit_harness__DOT__t_wstrb;
    vlSelfRef.awaddr = vlSymsp->TOP.peripheral_unit_harness__DOT__t_awaddr;
    vlSelfRef.awprot = vlSymsp->TOP.peripheral_unit_harness__DOT__t_awprot;
    vlSelfRef.awvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_awvalid;
    vlSelfRef.wvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_wvalid;
    vlSelfRef.bready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_bready;
    vlSelfRef.rready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rready;
    vlSelfRef.arprot = vlSymsp->TOP.peripheral_unit_harness__DOT__t_arprot;
    vlSelfRef.arvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_arvalid;
    vlSelfRef.clk = vlSymsp->TOP.peripheral_unit_harness__DOT__clk;
    vlSelfRef.araddr = vlSymsp->TOP.peripheral_unit_harness__DOT__t_araddr;
    vlSelfRef.rst = vlSymsp->TOP.peripheral_unit_harness__DOT__rst;
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
    if ((0U != (vlSelfRef.wdata ^ vlSelfRef.__Vtogcov__wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 78, vlSelfRef.wdata, vlSelfRef.__Vtogcov__wdata);
        vlSelfRef.__Vtogcov__wdata = vlSelfRef.wdata;
    }
    if ((0U != ((IData)(vlSelfRef.wstrb) ^ (IData)(vlSelfRef.__Vtogcov__wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 142, vlSelfRef.wstrb, vlSelfRef.__Vtogcov__wstrb);
        vlSelfRef.__Vtogcov__wstrb = vlSelfRef.wstrb;
    }
    if ((0U != (vlSelfRef.awaddr ^ vlSelfRef.__Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 4, vlSelfRef.awaddr, vlSelfRef.__Vtogcov__awaddr);
        vlSelfRef.__Vtogcov__awaddr = vlSelfRef.awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.awprot) ^ (IData)(vlSelfRef.__Vtogcov__awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 68, vlSelfRef.awprot, vlSelfRef.__Vtogcov__awprot);
        vlSelfRef.__Vtogcov__awprot = vlSelfRef.awprot;
    }
    if (((IData)(vlSelfRef.awvalid) ^ (IData)(vlSelfRef.__Vtogcov__awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 74, vlSelfRef.awvalid, vlSelfRef.__Vtogcov__awvalid);
        vlSelfRef.__Vtogcov__awvalid = vlSelfRef.awvalid;
    }
    if (((IData)(vlSelfRef.wvalid) ^ (IData)(vlSelfRef.__Vtogcov__wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 150, vlSelfRef.wvalid, vlSelfRef.__Vtogcov__wvalid);
        vlSelfRef.__Vtogcov__wvalid = vlSelfRef.wvalid;
    }
    if (((IData)(vlSelfRef.bready) ^ (IData)(vlSelfRef.__Vtogcov__bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 160, vlSelfRef.bready, vlSelfRef.__Vtogcov__bready);
        vlSelfRef.__Vtogcov__bready = vlSelfRef.bready;
    }
    if (((IData)(vlSelfRef.rready) ^ (IData)(vlSelfRef.__Vtogcov__rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 306, vlSelfRef.rready, vlSelfRef.__Vtogcov__rready);
        vlSelfRef.__Vtogcov__rready = vlSelfRef.rready;
    }
    if ((0U != ((IData)(vlSelfRef.arprot) ^ (IData)(vlSelfRef.__Vtogcov__arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 226, vlSelfRef.arprot, vlSelfRef.__Vtogcov__arprot);
        vlSelfRef.__Vtogcov__arprot = vlSelfRef.arprot;
    }
    if (((IData)(vlSelfRef.arvalid) ^ (IData)(vlSelfRef.__Vtogcov__arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 232, vlSelfRef.arvalid, vlSelfRef.__Vtogcov__arvalid);
        vlSelfRef.__Vtogcov__arvalid = vlSelfRef.arvalid;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if ((0U != (vlSelfRef.araddr ^ vlSelfRef.__Vtogcov__araddr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 162, vlSelfRef.araddr, vlSelfRef.__Vtogcov__araddr);
        vlSelfRef.__Vtogcov__araddr = vlSelfRef.araddr;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.rst, vlSelfRef.__Vtogcov__rst);
        vlSelfRef.__Vtogcov__rst = vlSelfRef.rst;
    }
}

void Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___ico_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__t_bresp;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rresp;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rvalid;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_bvalid;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_wready;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_awready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_arready;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__0(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__aw_pend_q;
    __Vdly__aw_pend_q = 0;
    QData/*34:0*/ __Vdly__aw_pay_q;
    __Vdly__aw_pay_q = 0;
    CData/*0:0*/ __Vdly__w_pend_q;
    __Vdly__w_pend_q = 0;
    QData/*35:0*/ __Vdly__w_pay_q;
    __Vdly__w_pay_q = 0;
    CData/*0:0*/ __Vdly__b_pend_q;
    __Vdly__b_pend_q = 0;
    CData/*1:0*/ __Vdly__b_resp_q;
    __Vdly__b_resp_q = 0;
    CData/*0:0*/ __Vdly__ar_pend_q;
    __Vdly__ar_pend_q = 0;
    QData/*34:0*/ __Vdly__ar_pay_q;
    __Vdly__ar_pay_q = 0;
    CData/*0:0*/ __Vdly__r_pend_q;
    __Vdly__r_pend_q = 0;
    QData/*33:0*/ __Vdly__r_pay_q;
    __Vdly__r_pay_q = 0;
    CData/*0:0*/ __Vdly__wr_aw_acc_q;
    __Vdly__wr_aw_acc_q = 0;
    CData/*0:0*/ __Vdly__wr_w_acc_q;
    __Vdly__wr_w_acc_q = 0;
    CData/*0:0*/ __Vdly__rd_acc_q;
    __Vdly__rd_acc_q = 0;
    // Body
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[665]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.bresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:288: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 288, "");
                }
                if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.rresp))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:289: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_resp_code", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 289, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[664]);
    }
    ++(vlSelf->__Vcoverage[666]);
    __Vdly__b_pend_q = vlSelfRef.b_pend_q;
    __Vdly__b_resp_q = vlSelfRef.b_resp_q;
    if (vlSelfRef.rst) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY((vlSelfRef.awready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:299: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_awready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 299, "");
                }
                if (VL_UNLIKELY((vlSelfRef.wready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:300: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_wready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 300, "");
                }
                if (VL_UNLIKELY((vlSelfRef.arready))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:301: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_arready", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 301, "");
                }
                if (VL_UNLIKELY((vlSelfRef.bvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:302: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_bvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 302, "");
                }
                if (VL_UNLIKELY((vlSelfRef.rvalid))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:303: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_rst_slave_rvalid", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 303, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[667]);
        ++(vlSelf->__Vcoverage[670]);
        ++(vlSelf->__Vcoverage[671]);
    } else {
        ++(vlSelf->__Vcoverage[672]);
    }
    ++(vlSelf->__Vcoverage[673]);
    __Vdly__aw_pend_q = vlSelfRef.aw_pend_q;
    __Vdly__aw_pay_q = vlSelfRef.aw_pay_q;
    __Vdly__w_pend_q = vlSelfRef.w_pend_q;
    __Vdly__w_pay_q = vlSelfRef.w_pay_q;
    __Vdly__ar_pend_q = vlSelfRef.ar_pend_q;
    __Vdly__ar_pay_q = vlSelfRef.ar_pay_q;
    __Vdly__r_pend_q = vlSelfRef.r_pend_q;
    __Vdly__r_pay_q = vlSelfRef.r_pay_q;
    __Vdly__rd_acc_q = vlSelfRef.rd_acc_q;
    __Vdly__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    __Vdly__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[484]);
        __Vdly__b_pend_q = 0U;
        __Vdly__b_resp_q = 0U;
    } else if (((IData)(vlSelfRef.bvalid) & (~ (IData)(vlSelfRef.bready)))) {
        ++(vlSelf->__Vcoverage[482]);
        __Vdly__b_pend_q = 1U;
        __Vdly__b_resp_q = vlSelfRef.bresp;
    } else {
        ++(vlSelf->__Vcoverage[483]);
        __Vdly__b_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.b_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.bvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:188: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 188, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.bresp) 
                                  != (IData)(vlSelfRef.b_resp_q))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:189: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 189, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[485]);
    } else {
        ++(vlSelf->__Vcoverage[486]);
    }
    ++(vlSelf->__Vcoverage[487]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[392]);
        __Vdly__aw_pend_q = 0U;
        __Vdly__aw_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.awvalid) & (~ (IData)(vlSelfRef.awready)))) {
        ++(vlSelf->__Vcoverage[390]);
        __Vdly__aw_pend_q = 1U;
        __Vdly__aw_pay_q = (((QData)((IData)(vlSelfRef.awaddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.awprot)));
    } else {
        ++(vlSelf->__Vcoverage[391]);
        __Vdly__aw_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.aw_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.awvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:142: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 142, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.awaddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.awprot))) 
                                  != vlSelfRef.aw_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:143: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 143, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[393]);
    } else {
        ++(vlSelf->__Vcoverage[394]);
    }
    ++(vlSelf->__Vcoverage[395]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[472]);
        __Vdly__w_pend_q = 0U;
        __Vdly__w_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.wvalid) & (~ (IData)(vlSelfRef.wready)))) {
        ++(vlSelf->__Vcoverage[470]);
        __Vdly__w_pend_q = 1U;
        __Vdly__w_pay_q = (((QData)((IData)(vlSelfRef.wdata)) 
                            << 4U) | (QData)((IData)(vlSelfRef.wstrb)));
    } else {
        ++(vlSelf->__Vcoverage[471]);
        __Vdly__w_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.w_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.wvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:165: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 165, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.wdata)) 
                                    << 4U) | (QData)((IData)(vlSelfRef.wstrb))) 
                                  != vlSelfRef.w_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:166: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 166, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[473]);
    } else {
        ++(vlSelf->__Vcoverage[474]);
    }
    ++(vlSelf->__Vcoverage[475]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[562]);
        __Vdly__ar_pend_q = 0U;
        __Vdly__ar_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.arvalid) & (~ (IData)(vlSelfRef.arready)))) {
        ++(vlSelf->__Vcoverage[560]);
        __Vdly__ar_pend_q = 1U;
        __Vdly__ar_pay_q = (((QData)((IData)(vlSelfRef.araddr)) 
                             << 3U) | (QData)((IData)(vlSelfRef.arprot)));
    } else {
        ++(vlSelf->__Vcoverage[561]);
        __Vdly__ar_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ar_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.arvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:211: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 211, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.araddr)) 
                                    << 3U) | (QData)((IData)(vlSelfRef.arprot))) 
                                  != vlSelfRef.ar_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:212: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 212, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[563]);
    } else {
        ++(vlSelf->__Vcoverage[564]);
    }
    ++(vlSelf->__Vcoverage[565]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[638]);
        __Vdly__r_pend_q = 0U;
        __Vdly__r_pay_q = 0ULL;
    } else if (((IData)(vlSelfRef.rvalid) & (~ (IData)(vlSelfRef.rready)))) {
        ++(vlSelf->__Vcoverage[636]);
        __Vdly__r_pend_q = 1U;
        __Vdly__r_pay_q = (((QData)((IData)(vlSelfRef.rdata)) 
                            << 2U) | (QData)((IData)(vlSelfRef.rresp)));
    } else {
        ++(vlSelf->__Vcoverage[637]);
        __Vdly__r_pend_q = 0U;
    }
    if (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.r_pend_q))) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.rvalid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:234: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 234, "");
                }
                if (VL_UNLIKELY((((((QData)((IData)(vlSelfRef.rdata)) 
                                    << 2U) | (QData)((IData)(vlSelfRef.rresp))) 
                                  != vlSelfRef.r_pay_q)))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:235: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_stable", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 235, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[639]);
    } else {
        ++(vlSelf->__Vcoverage[640]);
    }
    ++(vlSelf->__Vcoverage[641]);
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[659]);
        __Vdly__wr_aw_acc_q = 0U;
        __Vdly__wr_w_acc_q = 0U;
        __Vdly__rd_acc_q = 0U;
    } else {
        if (vlSelfRef.b_hs) {
            ++(vlSelf->__Vcoverage[654]);
            __Vdly__wr_aw_acc_q = vlSelfRef.aw_hs;
            __Vdly__wr_w_acc_q = vlSelfRef.w_hs;
        } else {
            if (vlSelfRef.aw_hs) {
                ++(vlSelf->__Vcoverage[650]);
                __Vdly__wr_aw_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[651]);
            }
            if (vlSelfRef.w_hs) {
                ++(vlSelf->__Vcoverage[652]);
                __Vdly__wr_w_acc_q = 1U;
            } else {
                ++(vlSelf->__Vcoverage[653]);
            }
            ++(vlSelf->__Vcoverage[655]);
        }
        if (vlSelfRef.r_hs) {
            ++(vlSelf->__Vcoverage[658]);
            __Vdly__rd_acc_q = vlSelfRef.ar_hs;
        } else if (vlSelfRef.ar_hs) {
            ++(vlSelf->__Vcoverage[656]);
            __Vdly__rd_acc_q = 1U;
        } else {
            ++(vlSelf->__Vcoverage[657]);
        }
        ++(vlSelf->__Vcoverage[660]);
    }
    if (vlSelfRef.rst) {
        ++(vlSelf->__Vcoverage[662]);
    } else {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.bvalid)) 
                                           | (IData)(vlSelfRef.wr_full))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_b_needs_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 274, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.rvalid)) 
                                           | (IData)(vlSelfRef.rd_acc_q))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:275: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_r_needs_read", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 275, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.aw_hs) 
                                   & (IData)(vlSelfRef.wr_aw_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:277: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_aw_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 277, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.w_hs) 
                                   & (IData)(vlSelfRef.wr_w_acc_q)) 
                                  & (~ (IData)(vlSelfRef.b_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:278: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_w_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 278, "");
                }
                if (VL_UNLIKELY(((((IData)(vlSelfRef.ar_hs) 
                                   & (IData)(vlSelfRef.rd_acc_q)) 
                                  & (~ (IData)(vlSelfRef.r_hs)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: axil_protocol_checker.sv:279: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"peripheral_unit_harness.u_chk_timer.ap_ar_one_outstanding", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/Users/prajjwalsingh/Desktop/axilite4/tb/assertions/axil_protocol_checker.sv", 279, "");
                }
            }
        }
        ++(vlSelf->__Vcoverage[661]);
    }
    ++(vlSelf->__Vcoverage[663]);
    vlSelfRef.b_pend_q = __Vdly__b_pend_q;
    vlSelfRef.b_resp_q = __Vdly__b_resp_q;
    vlSelfRef.aw_pend_q = __Vdly__aw_pend_q;
    vlSelfRef.aw_pay_q = __Vdly__aw_pay_q;
    vlSelfRef.w_pend_q = __Vdly__w_pend_q;
    vlSelfRef.w_pay_q = __Vdly__w_pay_q;
    vlSelfRef.ar_pend_q = __Vdly__ar_pend_q;
    vlSelfRef.ar_pay_q = __Vdly__ar_pay_q;
    vlSelfRef.r_pend_q = __Vdly__r_pend_q;
    vlSelfRef.r_pay_q = __Vdly__r_pay_q;
    vlSelfRef.rd_acc_q = __Vdly__rd_acc_q;
    vlSelfRef.wr_aw_acc_q = __Vdly__wr_aw_acc_q;
    vlSelfRef.wr_w_acc_q = __Vdly__wr_w_acc_q;
    if (((IData)(vlSelfRef.b_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__b_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.b_pend_q, vlSelfRef.__Vtogcov__b_pend_q);
        vlSelfRef.__Vtogcov__b_pend_q = vlSelfRef.b_pend_q;
    }
    if ((0U != ((IData)(vlSelfRef.b_resp_q) ^ (IData)(vlSelfRef.__Vtogcov__b_resp_q)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 478, vlSelfRef.b_resp_q, vlSelfRef.__Vtogcov__b_resp_q);
        vlSelfRef.__Vtogcov__b_resp_q = vlSelfRef.b_resp_q;
    }
    if (((IData)(vlSelfRef.aw_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__aw_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 318, vlSelfRef.aw_pend_q, vlSelfRef.__Vtogcov__aw_pend_q);
        vlSelfRef.__Vtogcov__aw_pend_q = vlSelfRef.aw_pend_q;
    }
    if ((0ULL != (vlSelfRef.aw_pay_q ^ vlSelfRef.__Vtogcov__aw_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 320, vlSelfRef.aw_pay_q, vlSelfRef.__Vtogcov__aw_pay_q);
        vlSelfRef.__Vtogcov__aw_pay_q = vlSelfRef.aw_pay_q;
    }
    if (((IData)(vlSelfRef.w_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__w_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.w_pend_q, vlSelfRef.__Vtogcov__w_pend_q);
        vlSelfRef.__Vtogcov__w_pend_q = vlSelfRef.w_pend_q;
    }
    if ((0ULL != (vlSelfRef.w_pay_q ^ vlSelfRef.__Vtogcov__w_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(36, vlSelf->__Vcoverage + 398, vlSelfRef.w_pay_q, vlSelfRef.__Vtogcov__w_pay_q);
        vlSelfRef.__Vtogcov__w_pay_q = vlSelfRef.w_pay_q;
    }
    if (((IData)(vlSelfRef.ar_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__ar_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 488, vlSelfRef.ar_pend_q, vlSelfRef.__Vtogcov__ar_pend_q);
        vlSelfRef.__Vtogcov__ar_pend_q = vlSelfRef.ar_pend_q;
    }
    if ((0ULL != (vlSelfRef.ar_pay_q ^ vlSelfRef.__Vtogcov__ar_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(35, vlSelf->__Vcoverage + 490, vlSelfRef.ar_pay_q, vlSelfRef.__Vtogcov__ar_pay_q);
        vlSelfRef.__Vtogcov__ar_pay_q = vlSelfRef.ar_pay_q;
    }
    if (((IData)(vlSelfRef.r_pend_q) ^ (IData)(vlSelfRef.__Vtogcov__r_pend_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.r_pend_q, vlSelfRef.__Vtogcov__r_pend_q);
        vlSelfRef.__Vtogcov__r_pend_q = vlSelfRef.r_pend_q;
    }
    if ((0ULL != (vlSelfRef.r_pay_q ^ vlSelfRef.__Vtogcov__r_pay_q))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 568, vlSelfRef.r_pay_q, vlSelfRef.__Vtogcov__r_pay_q);
        vlSelfRef.__Vtogcov__r_pay_q = vlSelfRef.r_pay_q;
    }
    if (((IData)(vlSelfRef.rd_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__rd_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 646, vlSelfRef.rd_acc_q, vlSelfRef.__Vtogcov__rd_acc_q);
        vlSelfRef.__Vtogcov__rd_acc_q = vlSelfRef.rd_acc_q;
    }
    if (((IData)(vlSelfRef.wr_aw_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_aw_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 642, vlSelfRef.wr_aw_acc_q, vlSelfRef.__Vtogcov__wr_aw_acc_q);
        vlSelfRef.__Vtogcov__wr_aw_acc_q = vlSelfRef.wr_aw_acc_q;
    }
    if (((IData)(vlSelfRef.wr_w_acc_q) ^ (IData)(vlSelfRef.__Vtogcov__wr_w_acc_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 644, vlSelfRef.wr_w_acc_q, vlSelfRef.__Vtogcov__wr_w_acc_q);
        vlSelfRef.__Vtogcov__wr_w_acc_q = vlSelfRef.wr_w_acc_q;
    }
    vlSelfRef.wr_full = ((IData)(vlSelfRef.wr_aw_acc_q) 
                         & (IData)(vlSelfRef.wr_w_acc_q));
    if (((IData)(vlSelfRef.wr_full) ^ (IData)(vlSelfRef.__Vtogcov__wr_full))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 648, vlSelfRef.wr_full, vlSelfRef.__Vtogcov__wr_full);
        vlSelfRef.__Vtogcov__wr_full = vlSelfRef.wr_full;
    }
}

void Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__1(Vtop_axil_protocol_checker__DBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_axil_protocol_checker__DBz1___nba_sequent__TOP__peripheral_unit_harness__DOT__u_chk_timer__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bresp = vlSymsp->TOP.peripheral_unit_harness__DOT__t_bresp;
    vlSelfRef.awready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_awready;
    vlSelfRef.wready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_wready;
    vlSelfRef.arready = vlSymsp->TOP.peripheral_unit_harness__DOT__t_arready;
    vlSelfRef.rdata = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rdata;
    vlSelfRef.rresp = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rresp;
    vlSelfRef.bvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_bvalid;
    vlSelfRef.rvalid = vlSymsp->TOP.peripheral_unit_harness__DOT__t_rvalid;
    if ((0U != ((IData)(vlSelfRef.bresp) ^ (IData)(vlSelfRef.__Vtogcov__bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 154, vlSelfRef.bresp, vlSelfRef.__Vtogcov__bresp);
        vlSelfRef.__Vtogcov__bresp = vlSelfRef.bresp;
    }
    if (((IData)(vlSelfRef.awready) ^ (IData)(vlSelfRef.__Vtogcov__awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.awready, vlSelfRef.__Vtogcov__awready);
        vlSelfRef.__Vtogcov__awready = vlSelfRef.awready;
    }
    vlSelfRef.aw_hs = ((IData)(vlSelfRef.awready) & (IData)(vlSelfRef.awvalid));
    if (((IData)(vlSelfRef.wready) ^ (IData)(vlSelfRef.__Vtogcov__wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 152, vlSelfRef.wready, vlSelfRef.__Vtogcov__wready);
        vlSelfRef.__Vtogcov__wready = vlSelfRef.wready;
    }
    vlSelfRef.w_hs = ((IData)(vlSelfRef.wready) & (IData)(vlSelfRef.wvalid));
    if (((IData)(vlSelfRef.arready) ^ (IData)(vlSelfRef.__Vtogcov__arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 234, vlSelfRef.arready, vlSelfRef.__Vtogcov__arready);
        vlSelfRef.__Vtogcov__arready = vlSelfRef.arready;
    }
    vlSelfRef.ar_hs = ((IData)(vlSelfRef.arready) & (IData)(vlSelfRef.arvalid));
    if ((0U != (vlSelfRef.rdata ^ vlSelfRef.__Vtogcov__rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 236, vlSelfRef.rdata, vlSelfRef.__Vtogcov__rdata);
        vlSelfRef.__Vtogcov__rdata = vlSelfRef.rdata;
    }
    if ((0U != ((IData)(vlSelfRef.rresp) ^ (IData)(vlSelfRef.__Vtogcov__rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 300, vlSelfRef.rresp, vlSelfRef.__Vtogcov__rresp);
        vlSelfRef.__Vtogcov__rresp = vlSelfRef.rresp;
    }
    if (((IData)(vlSelfRef.bvalid) ^ (IData)(vlSelfRef.__Vtogcov__bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 158, vlSelfRef.bvalid, vlSelfRef.__Vtogcov__bvalid);
        vlSelfRef.__Vtogcov__bvalid = vlSelfRef.bvalid;
    }
    vlSelfRef.b_hs = ((IData)(vlSelfRef.bready) & (IData)(vlSelfRef.bvalid));
    if (((IData)(vlSelfRef.rvalid) ^ (IData)(vlSelfRef.__Vtogcov__rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 304, vlSelfRef.rvalid, vlSelfRef.__Vtogcov__rvalid);
        vlSelfRef.__Vtogcov__rvalid = vlSelfRef.rvalid;
    }
    vlSelfRef.r_hs = ((IData)(vlSelfRef.rready) & (IData)(vlSelfRef.rvalid));
    if (((IData)(vlSelfRef.aw_hs) ^ (IData)(vlSelfRef.__Vtogcov__aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 308, vlSelfRef.aw_hs, vlSelfRef.__Vtogcov__aw_hs);
        vlSelfRef.__Vtogcov__aw_hs = vlSelfRef.aw_hs;
    }
    if (((IData)(vlSelfRef.w_hs) ^ (IData)(vlSelfRef.__Vtogcov__w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 310, vlSelfRef.w_hs, vlSelfRef.__Vtogcov__w_hs);
        vlSelfRef.__Vtogcov__w_hs = vlSelfRef.w_hs;
    }
    if (((IData)(vlSelfRef.ar_hs) ^ (IData)(vlSelfRef.__Vtogcov__ar_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 312, vlSelfRef.ar_hs, vlSelfRef.__Vtogcov__ar_hs);
        vlSelfRef.__Vtogcov__ar_hs = vlSelfRef.ar_hs;
    }
    if (((IData)(vlSelfRef.b_hs) ^ (IData)(vlSelfRef.__Vtogcov__b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 314, vlSelfRef.b_hs, vlSelfRef.__Vtogcov__b_hs);
        vlSelfRef.__Vtogcov__b_hs = vlSelfRef.b_hs;
    }
    if (((IData)(vlSelfRef.r_hs) ^ (IData)(vlSelfRef.__Vtogcov__r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 316, vlSelfRef.r_hs, vlSelfRef.__Vtogcov__r_hs);
        vlSelfRef.__Vtogcov__r_hs = vlSelfRef.r_hs;
    }
}

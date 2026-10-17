// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_AXIL_PROTOCOL_CHECKER__DBZ1_H_
#define VERILATED_VTOP_AXIL_PROTOCOL_CHECKER__DBZ1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_axil_protocol_checker__DBz1 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clk;
        CData/*0:0*/ rst;
        CData/*2:0*/ awprot;
        CData/*0:0*/ awvalid;
        CData/*0:0*/ awready;
        CData/*3:0*/ wstrb;
        CData/*0:0*/ wvalid;
        CData/*0:0*/ wready;
        CData/*1:0*/ bresp;
        CData/*0:0*/ bvalid;
        CData/*0:0*/ bready;
        CData/*2:0*/ arprot;
        CData/*0:0*/ arvalid;
        CData/*0:0*/ arready;
        CData/*1:0*/ rresp;
        CData/*0:0*/ rvalid;
        CData/*0:0*/ rready;
        CData/*0:0*/ aw_hs;
        CData/*0:0*/ w_hs;
        CData/*0:0*/ ar_hs;
        CData/*0:0*/ b_hs;
        CData/*0:0*/ r_hs;
        CData/*0:0*/ aw_pend_q;
        CData/*0:0*/ w_pend_q;
        CData/*0:0*/ b_pend_q;
        CData/*1:0*/ b_resp_q;
        CData/*0:0*/ ar_pend_q;
        CData/*0:0*/ r_pend_q;
        CData/*0:0*/ wr_aw_acc_q;
        CData/*0:0*/ wr_w_acc_q;
        CData/*0:0*/ rd_acc_q;
        CData/*0:0*/ wr_full;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__rst;
        CData/*2:0*/ __Vtogcov__awprot;
        CData/*0:0*/ __Vtogcov__awvalid;
        CData/*0:0*/ __Vtogcov__awready;
        CData/*3:0*/ __Vtogcov__wstrb;
        CData/*0:0*/ __Vtogcov__wvalid;
        CData/*0:0*/ __Vtogcov__wready;
        CData/*1:0*/ __Vtogcov__bresp;
        CData/*0:0*/ __Vtogcov__bvalid;
        CData/*0:0*/ __Vtogcov__bready;
        CData/*2:0*/ __Vtogcov__arprot;
        CData/*0:0*/ __Vtogcov__arvalid;
        CData/*0:0*/ __Vtogcov__arready;
        CData/*1:0*/ __Vtogcov__rresp;
        CData/*0:0*/ __Vtogcov__rvalid;
        CData/*0:0*/ __Vtogcov__rready;
        CData/*0:0*/ __Vtogcov__aw_hs;
        CData/*0:0*/ __Vtogcov__w_hs;
        CData/*0:0*/ __Vtogcov__ar_hs;
        CData/*0:0*/ __Vtogcov__b_hs;
        CData/*0:0*/ __Vtogcov__r_hs;
        CData/*0:0*/ __Vtogcov__aw_pend_q;
        CData/*0:0*/ __Vtogcov__w_pend_q;
        CData/*0:0*/ __Vtogcov__b_pend_q;
        CData/*1:0*/ __Vtogcov__b_resp_q;
        CData/*0:0*/ __Vtogcov__ar_pend_q;
        CData/*0:0*/ __Vtogcov__r_pend_q;
        CData/*0:0*/ __Vtogcov__wr_aw_acc_q;
        CData/*0:0*/ __Vtogcov__wr_w_acc_q;
        CData/*0:0*/ __Vtogcov__rd_acc_q;
        CData/*0:0*/ __Vtogcov__wr_full;
    };
    struct {
        IData/*31:0*/ awaddr;
        IData/*31:0*/ wdata;
        IData/*31:0*/ araddr;
        IData/*31:0*/ rdata;
        IData/*31:0*/ __Vtogcov__awaddr;
        IData/*31:0*/ __Vtogcov__wdata;
        IData/*31:0*/ __Vtogcov__araddr;
        IData/*31:0*/ __Vtogcov__rdata;
        QData/*34:0*/ aw_pay_q;
        QData/*35:0*/ w_pay_q;
        QData/*34:0*/ ar_pay_q;
        QData/*33:0*/ r_pay_q;
        QData/*34:0*/ __Vtogcov__aw_pay_q;
        QData/*35:0*/ __Vtogcov__w_pay_q;
        QData/*34:0*/ __Vtogcov__ar_pay_q;
        QData/*33:0*/ __Vtogcov__r_pay_q;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[674]{};

    // PARAMETERS
    static constexpr CData/*0:0*/ DUT_IS_SLAVE = 1U;
    static constexpr CData/*0:0*/ DUT_IS_MASTER = 0U;
    static constexpr CData/*1:0*/ RESP_EXOKAY = 1U;
    static constexpr IData/*31:0*/ ADDR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ PAY_AW = 0x00000023U;
    static constexpr IData/*31:0*/ PAY_W = 0x00000024U;
    static constexpr IData/*31:0*/ PAY_AR = 0x00000023U;
    static constexpr IData/*31:0*/ PAY_R = 0x00000022U;

    // CONSTRUCTORS
    Vtop_axil_protocol_checker__DBz1();
    ~Vtop_axil_protocol_checker__DBz1();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_axil_protocol_checker__DBz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard

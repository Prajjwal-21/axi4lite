// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_AXIL_REGFILE_SLAVE_H_
#define VERILATED_VTOP_AXIL_REGFILE_SLAVE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_axil_regfile_slave final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ __VlemCond_1;
        CData/*1:0*/ __VlemCond_0;
        CData/*0:0*/ clk;
        CData/*0:0*/ rst;
        CData/*2:0*/ s_awprot;
        CData/*0:0*/ s_awvalid;
        CData/*0:0*/ s_awready;
        CData/*3:0*/ s_wstrb;
        CData/*0:0*/ s_wvalid;
        CData/*0:0*/ s_wready;
        CData/*1:0*/ s_bresp;
        CData/*0:0*/ s_bvalid;
        CData/*0:0*/ s_bready;
        CData/*2:0*/ s_arprot;
        CData/*0:0*/ s_arvalid;
        CData/*0:0*/ s_arready;
        CData/*1:0*/ s_rresp;
        CData/*0:0*/ s_rvalid;
        CData/*0:0*/ s_rready;
        CData/*5:0*/ reg_wr_addr;
        CData/*3:0*/ reg_wr_strb;
        CData/*0:0*/ reg_wr_en;
        CData/*0:0*/ reg_wr_hit;
        CData/*5:0*/ reg_rd_addr;
        CData/*0:0*/ reg_rd_en;
        CData/*0:0*/ reg_rd_hit;
        CData/*0:0*/ aw_pend_q;
        CData/*5:0*/ aw_addr_q;
        CData/*3:0*/ w_strb_q;
        CData/*0:0*/ w_pend_q;
        CData/*0:0*/ bvalid_q;
        CData/*1:0*/ bresp_q;
        CData/*0:0*/ rvalid_q;
        CData/*1:0*/ rresp_q;
        CData/*0:0*/ aw_hs;
        CData/*0:0*/ w_hs;
        CData/*0:0*/ ar_hs;
        CData/*0:0*/ b_hs;
        CData/*0:0*/ r_hs;
        CData/*0:0*/ wr_apply;
        CData/*0:0*/ unused_ok;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__rst;
        CData/*2:0*/ __Vtogcov__s_awprot;
        CData/*0:0*/ __Vtogcov__s_awvalid;
        CData/*0:0*/ __Vtogcov__s_awready;
        CData/*3:0*/ __Vtogcov__s_wstrb;
        CData/*0:0*/ __Vtogcov__s_wvalid;
        CData/*0:0*/ __Vtogcov__s_wready;
        CData/*1:0*/ __Vtogcov__s_bresp;
        CData/*0:0*/ __Vtogcov__s_bvalid;
        CData/*0:0*/ __Vtogcov__s_bready;
        CData/*2:0*/ __Vtogcov__s_arprot;
        CData/*0:0*/ __Vtogcov__s_arvalid;
        CData/*0:0*/ __Vtogcov__s_arready;
        CData/*1:0*/ __Vtogcov__s_rresp;
        CData/*0:0*/ __Vtogcov__s_rvalid;
        CData/*0:0*/ __Vtogcov__s_rready;
        CData/*5:0*/ __Vtogcov__reg_wr_addr;
        CData/*3:0*/ __Vtogcov__reg_wr_strb;
        CData/*0:0*/ __Vtogcov__reg_wr_en;
        CData/*0:0*/ __Vtogcov__reg_wr_hit;
        CData/*5:0*/ __Vtogcov__reg_rd_addr;
        CData/*0:0*/ __Vtogcov__reg_rd_en;
    };
    struct {
        CData/*0:0*/ __Vtogcov__reg_rd_hit;
        CData/*0:0*/ __Vtogcov__aw_pend_q;
        CData/*5:0*/ __Vtogcov__aw_addr_q;
        CData/*3:0*/ __Vtogcov__w_strb_q;
        CData/*0:0*/ __Vtogcov__w_pend_q;
        CData/*0:0*/ __Vtogcov__bvalid_q;
        CData/*1:0*/ __Vtogcov__bresp_q;
        CData/*0:0*/ __Vtogcov__rvalid_q;
        CData/*1:0*/ __Vtogcov__rresp_q;
        CData/*0:0*/ __Vtogcov__aw_hs;
        CData/*0:0*/ __Vtogcov__w_hs;
        CData/*0:0*/ __Vtogcov__ar_hs;
        CData/*0:0*/ __Vtogcov__b_hs;
        CData/*0:0*/ __Vtogcov__r_hs;
        CData/*0:0*/ __Vtogcov__wr_apply;
        CData/*0:0*/ __Vtogcov__unused_ok;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__rst;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_awready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_wready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__s_arready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__aw_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__w_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__bvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__rvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__wr_apply;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__reg_wr_en;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__rst;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_awready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_wready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__s_arready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__aw_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__w_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__bvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__rvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__wr_apply;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__reg_wr_en;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__rst;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_awready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_wready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__s_arready;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__aw_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__w_pend_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__bvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__rvalid_q;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__wr_apply;
        CData/*0:0*/ __Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__reg_wr_en;
        IData/*31:0*/ s_awaddr;
        IData/*31:0*/ s_wdata;
        IData/*31:0*/ s_araddr;
        IData/*31:0*/ s_rdata;
        IData/*31:0*/ reg_wr_data;
        IData/*31:0*/ reg_rd_data;
        IData/*31:0*/ w_data_q;
        IData/*31:0*/ rdata_q;
        IData/*31:0*/ __Vtogcov__s_awaddr;
        IData/*31:0*/ __Vtogcov__s_wdata;
        IData/*31:0*/ __Vtogcov__s_araddr;
        IData/*31:0*/ __Vtogcov__s_rdata;
        IData/*31:0*/ __Vtogcov__reg_wr_data;
        IData/*31:0*/ __Vtogcov__reg_rd_data;
        IData/*31:0*/ __Vtogcov__w_data_q;
        IData/*31:0*/ __Vtogcov__rdata_q;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[680]{};

    // PARAMETERS
    static constexpr IData/*31:0*/ ADDR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ LOCAL_ADDR_W = 6U;
    static constexpr IData/*31:0*/ LA_WIDTH = 6U;

    // CONSTRUCTORS
    Vtop_axil_regfile_slave();
    ~Vtop_axil_regfile_slave();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_axil_regfile_slave);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard

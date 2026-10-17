// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_AXI_LITE_SLAVE_PORT_H_
#define VERILATED_VTOP_AXI_LITE_SLAVE_PORT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_axi_lite_slave_port final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clk;
        CData/*0:0*/ rst;
        CData/*1:0*/ w_req_i;
        CData/*1:0*/ w_awvalid_i;
        CData/*1:0*/ w_wvalid_i;
        CData/*5:0*/ w_prot_i;
        CData/*7:0*/ w_strb_i;
        CData/*1:0*/ w_bready_i;
        CData/*1:0*/ r_req_i;
        CData/*5:0*/ r_prot_i;
        CData/*1:0*/ r_rready_i;
        CData/*2:0*/ awprot_o;
        CData/*0:0*/ awvalid_o;
        CData/*0:0*/ awready_i;
        CData/*3:0*/ wstrb_o;
        CData/*0:0*/ wvalid_o;
        CData/*0:0*/ wready_i;
        CData/*1:0*/ bresp_i;
        CData/*0:0*/ bvalid_i;
        CData/*0:0*/ bready_o;
        CData/*2:0*/ arprot_o;
        CData/*0:0*/ arvalid_o;
        CData/*0:0*/ arready_i;
        CData/*1:0*/ rresp_i;
        CData/*0:0*/ rvalid_i;
        CData/*0:0*/ rready_o;
        CData/*1:0*/ w_gnt_o;
        CData/*1:0*/ w_awready_o;
        CData/*1:0*/ w_wready_o;
        CData/*1:0*/ w_bvalid_o;
        CData/*3:0*/ w_bresp_o;
        CData/*1:0*/ r_gnt_o;
        CData/*1:0*/ r_arready_o;
        CData/*1:0*/ r_rvalid_o;
        CData/*3:0*/ r_rresp_o;
        CData/*1:0*/ w_gnt_w;
        CData/*1:0*/ r_gnt_r;
        CData/*0:0*/ w_done;
        CData/*0:0*/ r_done;
        CData/*0:0*/ u_rd_arb__DOT__clk;
        CData/*0:0*/ u_rd_arb__DOT__rst;
        CData/*1:0*/ u_rd_arb__DOT__req;
        CData/*0:0*/ u_rd_arb__DOT__done;
        CData/*1:0*/ u_rd_arb__DOT__gnt;
        CData/*0:0*/ u_rd_arb__DOT__ptr;
        CData/*1:0*/ u_rd_arb__DOT__gnt_q;
        CData/*3:0*/ u_rd_arb__DOT__dbl_req;
        CData/*3:0*/ u_rd_arb__DOT__onehot_ptr;
        CData/*3:0*/ u_rd_arb__DOT__below_ptr;
        CData/*3:0*/ u_rd_arb__DOT__masked;
        CData/*3:0*/ u_rd_arb__DOT__pick;
        CData/*1:0*/ u_rd_arb__DOT__rr_gnt;
        CData/*0:0*/ u_rd_arb__DOT__nxt_idx;
        CData/*0:0*/ u_wr_arb__DOT__clk;
        CData/*0:0*/ u_wr_arb__DOT__rst;
        CData/*1:0*/ u_wr_arb__DOT__req;
        CData/*0:0*/ u_wr_arb__DOT__done;
        CData/*1:0*/ u_wr_arb__DOT__gnt;
        CData/*0:0*/ u_wr_arb__DOT__ptr;
        CData/*1:0*/ u_wr_arb__DOT__gnt_q;
        CData/*3:0*/ u_wr_arb__DOT__dbl_req;
        CData/*3:0*/ u_wr_arb__DOT__onehot_ptr;
        CData/*3:0*/ u_wr_arb__DOT__below_ptr;
        CData/*3:0*/ u_wr_arb__DOT__masked;
    };
    struct {
        CData/*3:0*/ u_wr_arb__DOT__pick;
        CData/*1:0*/ u_wr_arb__DOT__rr_gnt;
        CData/*0:0*/ u_wr_arb__DOT__nxt_idx;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__rst;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__bready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__rready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__arvalid_o;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__w_gnt_w;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__r_gnt_r;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_rd_arb__DOT__gnt;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport__u_wr_arb__DOT__gnt;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__rst;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__bready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__rready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__arvalid_o;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__w_gnt_w;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__r_gnt_r;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_rd_arb__DOT__gnt;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport__u_wr_arb__DOT__gnt;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__rst;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__bready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__rready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__arvalid_o;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__w_gnt_w;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__r_gnt_r;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_rd_arb__DOT__gnt;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport__u_wr_arb__DOT__gnt;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__rst;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__bready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__rready_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__arvalid_o;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__w_gnt_w;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__r_gnt_r;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_rd_arb__DOT__gnt;
        CData/*1:0*/ __Vsampled_TOP__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport__u_wr_arb__DOT__gnt;
        QData/*63:0*/ w_addr_i;
        QData/*63:0*/ w_data_i;
        QData/*63:0*/ r_addr_i;
        IData/*31:0*/ awaddr_o;
        IData/*31:0*/ wdata_o;
        IData/*31:0*/ araddr_o;
        IData/*31:0*/ rdata_i;
        QData/*63:0*/ r_rdata_o;
        IData/*31:0*/ unnamedblk1__DOT__m;
        IData/*31:0*/ unnamedblk2__DOT__m;
        IData/*31:0*/ u_rd_arb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ u_wr_arb__DOT__unnamedblk1__DOT__i;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ ADDR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ NMST = 2U;
    static constexpr IData/*31:0*/ STRB_WIDTH = 4U;
    static constexpr IData/*31:0*/ u_rd_arb__DOT__N = 2U;
    static constexpr IData/*31:0*/ u_rd_arb__DOT__PTRW = 1U;
    static constexpr IData/*31:0*/ u_rd_arb__DOT__DW = 4U;
    static constexpr IData/*31:0*/ u_wr_arb__DOT__N = 2U;
    static constexpr IData/*31:0*/ u_wr_arb__DOT__PTRW = 1U;
    static constexpr IData/*31:0*/ u_wr_arb__DOT__DW = 4U;

    // CONSTRUCTORS
    Vtop_axi_lite_slave_port();
    ~Vtop_axi_lite_slave_port();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_axi_lite_slave_port);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__DUT_IS_SLAVE;
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__DUT_IS_MASTER;
constexpr CData/*1:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__RESP_EXOKAY;
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__DUT_IS_SLAVE;
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__DUT_IS_MASTER;
constexpr CData/*1:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__RESP_EXOKAY;
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__DUT_IS_SLAVE;
constexpr CData/*0:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__DUT_IS_MASTER;
constexpr CData/*1:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__RESP_EXOKAY;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__GPIO_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__STRB_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__PSC_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__LA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__GPIO_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__STRB_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__RW_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__LA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__STRB_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__BAUD_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__BAUD_MIN;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__LOCAL_ADDR_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__LA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_AW;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_AR;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_timer__DOT__PAY_R;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_AW;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_AR;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_gpio__DOT__PAY_R;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_AW;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_W;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_AR;
constexpr IData/*31:0*/ Vtop___024root::peripheral_unit_harness__DOT__u_chk_uart__DOT__PAY_R;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

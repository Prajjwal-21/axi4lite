// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_axi_lite_slave_port
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::NMST;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::STRB_WIDTH;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_rd_arb__DOT__N;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_rd_arb__DOT__PTRW;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_rd_arb__DOT__DW;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_wr_arb__DOT__N;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_wr_arb__DOT__PTRW;
constexpr IData/*31:0*/ Vtop_axi_lite_slave_port::u_wr_arb__DOT__DW;


void Vtop_axi_lite_slave_port___ctor_var_reset(Vtop_axi_lite_slave_port* vlSelf);

Vtop_axi_lite_slave_port::Vtop_axi_lite_slave_port() = default;
Vtop_axi_lite_slave_port::~Vtop_axi_lite_slave_port() = default;

void Vtop_axi_lite_slave_port::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_axi_lite_slave_port___ctor_var_reset(this);
}

void Vtop_axi_lite_slave_port::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_axi_lite_slave_port::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

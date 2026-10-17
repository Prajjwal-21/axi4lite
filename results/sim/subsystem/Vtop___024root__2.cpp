// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 1U;
    if ((0x00000020U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((0x00000010U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                    if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                        ++(vlSelf->__Vcoverage[10110]);
                    } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                        ++(vlSelf->__Vcoverage[10110]);
                    } else {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0x54494d45U;
                        ++(vlSelf->__Vcoverage[10109]);
                    }
                } else {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                    ++(vlSelf->__Vcoverage[10110]);
                }
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[10110]);
            }
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__prescale_q;
            ++(vlSelf->__Vcoverage[10108]);
        }
    } else if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[10110]);
            } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[10110]);
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__expired_q;
                ++(vlSelf->__Vcoverage[10107]);
            }
        } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__value_q;
            ++(vlSelf->__Vcoverage[10106]);
        }
    } else if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[10110]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__load_q;
            ++(vlSelf->__Vcoverage[10105]);
        }
    } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
        ++(vlSelf->__Vcoverage[10110]);
    } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_addr))) {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data = 0U;
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit = 0U;
        ++(vlSelf->__Vcoverage[10110]);
    } else {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
            = ((((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__psc_en_q) 
                 << 3U) | ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__one_shot_q) 
                           << 2U)) | (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__irq_en_q) 
                                       << 1U) | (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__en_q)));
        ++(vlSelf->__Vcoverage[10104]);
    }
    ++(vlSelf->__Vcoverage[10111]);
    if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit) 
         ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9850, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_hit);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_hit 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit;
    }
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit 
        = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_hit;
    if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data 
                ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 9786, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_data);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT____Vtogcov__reg_rd_data 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data;
    }
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__reg_rd_data;
    if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit) 
         ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10591, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit;
    }
    if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data 
                ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 10527, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_data);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT____Vtogcov__reg_rd_data 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data;
    }
}

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 1U;
    if ((0x00000020U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((0x00000010U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                    if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                        ++(vlSelf->__Vcoverage[13353]);
                    } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                        ++(vlSelf->__Vcoverage[13353]);
                    } else {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0x55415254U;
                        ++(vlSelf->__Vcoverage[13352]);
                    }
                } else {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                    ++(vlSelf->__Vcoverage[13353]);
                }
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            }
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                    = (0x0000000fU & vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__ien_q);
                ++(vlSelf->__Vcoverage[13351]);
            }
        } else if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                    = (0x0000000fU & vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_q);
                ++(vlSelf->__Vcoverage[13350]);
            }
        } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_data_q;
            ++(vlSelf->__Vcoverage[13349]);
        }
    } else if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
                ++(vlSelf->__Vcoverage[13353]);
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
                ++(vlSelf->__Vcoverage[13348]);
            }
        } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                = ((((6U & (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_q 
                            >> 1U)) | (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_busy_q)) 
                    << 2U) | (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_q) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_busy_q)))));
            ++(vlSelf->__Vcoverage[13347]);
        }
    } else if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
            ++(vlSelf->__Vcoverage[13353]);
        } else {
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__baud_q;
            ++(vlSelf->__Vcoverage[13346]);
        }
    } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
        ++(vlSelf->__Vcoverage[13353]);
    } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_addr))) {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data = 0U;
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit = 0U;
        ++(vlSelf->__Vcoverage[13353]);
    } else {
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__ctrl_q;
        ++(vlSelf->__Vcoverage[13345]);
    }
    ++(vlSelf->__Vcoverage[13354]);
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_set 
        = ((vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_q 
            | vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_evt) 
           & (0xfffffffdU | (- (IData)((1U & (~ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rxdata_rd_clr)))))));
    if (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rxdata_rd_clr) {
        ++(vlSelf->__Vcoverage[13330]);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____VlemCond_3 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[13331]);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____VlemCond_3 
            = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_q) 
               | (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_store_evt));
    }
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_set 
        = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____VlemCond_3;
    if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit) 
         ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 12720, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_hit);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_hit 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit;
    }
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit 
        = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_hit;
    if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data 
                ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 12656, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_data);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__reg_rd_data 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data;
    }
    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data 
        = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_rd_data;
    if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_set 
                ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__istat_set))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 13256, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_set, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__istat_set);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__istat_set 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__istat_set;
    }
    if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_set) 
         ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__rx_valid_set))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 13320, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_set, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__rx_valid_set);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__rx_valid_set 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__rx_valid_set;
    }
    if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit) 
         ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 13834, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_hit 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit;
    }
    if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data 
                ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 13770, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_data);
        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT____Vtogcov__reg_rd_data 
            = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data;
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__0(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__3(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__1(Vtop_axi_lite_slave_port* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000492000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_rready 
                = ((((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport.rready_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport.rready_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport.rready_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport.rready_o)));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_rready) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_rready)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6308, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_rready, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_rready);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_rready 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_rready;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rready 
                = (1U & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_rready) 
                         >> 3U));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rready) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__rready))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9330, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rready, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__rready);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__rready 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rready;
            }
        }
    }
    if ((0x0000000000924000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_bready 
                = ((((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport.bready_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport.bready_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport.bready_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport.bready_o)));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_bready) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_bready)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5724, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_bready, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_bready);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_bready 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_bready;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bready 
                = (1U & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_bready) 
                         >> 3U));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bready) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__bready))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9252, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bready, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__bready);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__bready 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bready;
            }
        }
    }
    if ((0x00000000000002a0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__0((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_strb 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_en 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_data 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data;
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr;
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_strb) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_strb)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 11231, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_strb, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_strb);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_strb 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_strb;
            }
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_en) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_en))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11239, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_en, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_en);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_en 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_en;
            }
            if ((0U != (vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_data 
                        ^ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_data))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 11167, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_data, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_data);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_data 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_data;
            }
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_addr)))) {
                VL_COV_TOGGLE_CHG_ST_I(6, vlSelf->__Vcoverage + 11155, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_addr);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_addr 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 1U;
            if ((0x00000020U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                ++(vlSelf->__Vcoverage[11532]);
            } else if ((0x00000010U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                    ++(vlSelf->__Vcoverage[11532]);
                } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                    ++(vlSelf->__Vcoverage[11532]);
                } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                    ++(vlSelf->__Vcoverage[11532]);
                } else {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 1U;
                    ++(vlSelf->__Vcoverage[11531]);
                }
            } else if ((8U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                if ((4U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                    if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                        ++(vlSelf->__Vcoverage[11532]);
                    } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                        ++(vlSelf->__Vcoverage[11532]);
                    } else {
                        vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 1U;
                        ++(vlSelf->__Vcoverage[11531]);
                    }
                } else {
                    vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                    ++(vlSelf->__Vcoverage[11532]);
                }
            } else if ((2U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                ++(vlSelf->__Vcoverage[11532]);
            } else if ((1U & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))) {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 0U;
                ++(vlSelf->__Vcoverage[11532]);
            } else {
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit = 1U;
                ++(vlSelf->__Vcoverage[11531]);
            }
            ++(vlSelf->__Vcoverage[11533]);
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_wr 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_en) 
                   & ((0U != (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_strb)) 
                      & (0x10U == (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_addr))));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_hit))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11241, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_hit);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__reg_wr_hit 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_hit;
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_wr) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_wr))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11522, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_wr, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_wr);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_wr 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_wr;
            }
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT____Vtogcov__reg_wr_hit))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 11954, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT____Vtogcov__reg_wr_hit);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT____Vtogcov__reg_wr_hit 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit;
            }
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000000150ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__irq 
                = (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_timer__DOT__irq) 
                    << 2U) | (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__irq) 
                               << 1U) | (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__irq)));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__irq) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT____Vtogcov__irq)))) {
                VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1334, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__irq, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT____Vtogcov__irq);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT____Vtogcov__irq 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__irq;
            }
            vlSelfRef.subsystem_checker_top__DOT__irq 
                = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__irq;
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__irq) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT____Vtogcov__irq)))) {
                VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 664, vlSelfRef.subsystem_checker_top__DOT__irq, vlSelfRef.subsystem_checker_top__DOT____Vtogcov__irq);
                vlSelfRef.subsystem_checker_top__DOT____Vtogcov__irq 
                    = vlSelfRef.subsystem_checker_top__DOT__irq;
            }
            vlSelfRef.irq = vlSelfRef.subsystem_checker_top__DOT__irq;
        }
    }
    if ((0x0000000000492008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__r_hs 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rvalid) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__rready));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__r_hs) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__r_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9348, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__r_hs, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__r_hs);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__r_hs 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__r_hs;
            }
        }
    }
    if ((0x0000000000924008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__b_hs 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bvalid) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__bready));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__b_hs) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__b_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9344, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__b_hs, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__b_hs);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__b_hs 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__b_hs;
            }
        }
    }
    if ((0x0000000000004006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000006006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000002006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
    }
    if ((0x0000000000020006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000030006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000010006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
    }
    if ((0x0000000000100006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000180006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000080006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
    }
    if ((0x0000000000800006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000c00006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__2((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x0000000000400006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_axi_lite_slave_port___nba_comb__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__3((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_clr 
                = ((~ vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__reg_wr_data) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_set));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_clr) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_clr)))) {
                VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 11506, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_clr, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_clr);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT____Vtogcov__istat_clr 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_gpio__DOT__istat_clr;
            }
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_start 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_wr_en) 
                   & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__wr_strobed) 
                      & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_en) 
                         & (0x0cU == (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__reg_wr_addr)))));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_start) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__tx_start))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 13145, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_start, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__tx_start);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT____Vtogcov__tx_start 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_uart__DOT__tx_start;
            }
        }
    }
    if ((0x0000000000924006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_wvalid 
                = ((((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport.wvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport.wvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport.wvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport.wvalid_o)));
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_awvalid 
                = ((((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport.awvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport.awvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport.awvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport.awvalid_o)));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_wvalid) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_wvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5684, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_wvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_wvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_wvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_wvalid;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wvalid 
                = (1U & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_wvalid) 
                         >> 3U));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_awvalid) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_awvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 5380, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_awvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_awvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_awvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_awvalid;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awvalid 
                = (1U & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_awvalid) 
                         >> 3U));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wvalid) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__wvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9246, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__wvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__wvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wvalid;
            }
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awvalid) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__awvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9170, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__awvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__awvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awvalid;
            }
        }
    }
    if ((0x0000000000db6006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x0000000000492006ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__11
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_arvalid 
                = ((((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport.arvalid_o) 
                     << 3U) | ((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport.arvalid_o) 
                               << 2U)) | (((IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport.arvalid_o) 
                                           << 1U) | (IData)(vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport.arvalid_o)));
            if ((0U != ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_arvalid) 
                        ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_arvalid)))) {
                VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 6012, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_arvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_arvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT____Vtogcov__t_arvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_arvalid;
            }
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arvalid 
                = (1U & ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__t_arvalid) 
                         >> 3U));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arvalid) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__arvalid))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9324, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arvalid, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__arvalid);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__arvalid 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arvalid;
            }
        }
    }
    if ((0x000000000092400eULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__12
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__w_hs 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wvalid) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__wready));
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__aw_hs 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awvalid) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__awready));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__w_hs) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__w_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9342, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__w_hs, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__w_hs);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__w_hs 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__w_hs;
            }
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__aw_hs) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__aw_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9340, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__aw_hs, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__aw_hs);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__aw_hs 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__aw_hs;
            }
        }
    }
    if ((0x0000000000db62aeULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
        Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__0__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__1__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__2__KET____DOT__u_sport));
        Vtop_axi_lite_slave_port___ico_sequent__TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport__1((&vlSymsp->TOP__subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__g_slv__BRA__3__KET____DOT__u_sport));
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
    }
    if ((0x000000000049200eULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__15
            vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__ar_hs 
                = ((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arvalid) 
                   & (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__arready));
            if (((IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__ar_hs) 
                 ^ (IData)(vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__ar_hs))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9346, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__ar_hs, vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__ar_hs);
                vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT____Vtogcov__ar_hs 
                    = vlSelfRef.subsystem_checker_top__DOT__u_dut__DOT__u_crossbar__DOT__u_error_slave__DOT__ar_hs;
            }
        }
    }
    if ((0x0000000000db62eeULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x0000000000db62beULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x0000000000db63aeULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__18(vlSelf);
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
    if (VL_UNLIKELY(((vlSelfRef.uart_rx & 0xfeU)))) {
        Verilated::overWidthError("uart_rx");
    }
}
#endif  // VL_DEBUG

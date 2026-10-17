// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__unnamedblk6__DOT__ctrl_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18103139760296986116ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_timer__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_chk_timer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_uart__DOT__clk__0 
        = vlSelfRef.peripheral_unit_harness__DOT__u_chk_uart__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge peripheral_unit_harness.u_timer.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge peripheral_unit_harness.u_timer.u_regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge peripheral_unit_harness.u_gpio.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge peripheral_unit_harness.u_gpio.u_regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge peripheral_unit_harness.u_uart.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge peripheral_unit_harness.u_uart.u_regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge peripheral_unit_harness.u_chk_timer.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge peripheral_unit_harness.u_chk_gpio.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge peripheral_unit_harness.u_chk_uart.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->u_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8194499102847806957ull);
    vlSelf->u_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4116472876937663483ull);
    vlSelf->u_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15418762528332127900ull);
    vlSelf->u_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2063634011859560184ull);
    vlSelf->u_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2091224005666070809ull);
    vlSelf->u_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10996632397319115802ull);
    vlSelf->u_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17548711877955765127ull);
    vlSelf->u_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4697488287833740872ull);
    vlSelf->u_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17652418768541913729ull);
    vlSelf->u_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16460735484814374021ull);
    vlSelf->u_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18390116444309930611ull);
    vlSelf->u_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8745016001294638972ull);
    vlSelf->u_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16104898263952474303ull);
    vlSelf->u_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9176845690443807318ull);
    vlSelf->u_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5090326242664634093ull);
    vlSelf->u_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17118632662039878923ull);
    vlSelf->u_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15346523901819851088ull);
    vlSelf->u_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3622251499743532551ull);
    vlSelf->u_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134784397291359595ull);
    vlSelf->uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->u_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15693733370976545350ull);
    vlSelf->g_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7891725764429941929ull);
    vlSelf->g_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13476178857900148361ull);
    vlSelf->g_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7396270874805094933ull);
    vlSelf->g_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251543327970991763ull);
    vlSelf->g_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2717373578657250787ull);
    vlSelf->g_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8758406554173047529ull);
    vlSelf->g_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15800309367982780297ull);
    vlSelf->g_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11469754816907191118ull);
    vlSelf->g_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15319377079907685469ull);
    vlSelf->g_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851980754233346165ull);
    vlSelf->g_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12266292939951009011ull);
    vlSelf->g_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8159593126144436910ull);
    vlSelf->g_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15440459865912103406ull);
    vlSelf->g_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8565916748942613965ull);
    vlSelf->g_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11034745771246808442ull);
    vlSelf->g_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12294895699572952524ull);
    vlSelf->g_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3388794268281775925ull);
    vlSelf->g_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7749556987465841592ull);
    vlSelf->g_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12417151915324794743ull);
    vlSelf->gpio_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 629115553822814742ull);
    vlSelf->gpio_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3528322381442655819ull);
    vlSelf->gpio_dir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1427320434139236154ull);
    vlSelf->g_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10568825130235953652ull);
    vlSelf->t_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6710206396295775767ull);
    vlSelf->t_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17807715506518583593ull);
    vlSelf->t_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3320742266385386287ull);
    vlSelf->t_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18016680129354691542ull);
    vlSelf->t_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9232847588307568626ull);
    vlSelf->t_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3875607184389778798ull);
    vlSelf->t_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17815807572127164530ull);
    vlSelf->t_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17656569612705921485ull);
    vlSelf->t_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12015760320051670352ull);
    vlSelf->t_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918665950757531170ull);
    vlSelf->t_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13716466695398364644ull);
    vlSelf->t_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 418849443529125072ull);
    vlSelf->t_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1822660940120426399ull);
    vlSelf->t_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13767334514954730035ull);
    vlSelf->t_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2976393795675215866ull);
    vlSelf->t_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13629027689467620628ull);
    vlSelf->t_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1968280093511551252ull);
    vlSelf->t_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17756911307729075727ull);
    vlSelf->t_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2727805441335399718ull);
    vlSelf->t_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5660164885631832589ull);
    vlSelf->peripheral_unit_harness__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613293570281321346ull);
    vlSelf->peripheral_unit_harness__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14872853084643583388ull);
    vlSelf->peripheral_unit_harness__DOT__u_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12372872263217971201ull);
    vlSelf->peripheral_unit_harness__DOT__u_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13240491296761620724ull);
    vlSelf->peripheral_unit_harness__DOT__u_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5180862018226679817ull);
    vlSelf->peripheral_unit_harness__DOT__u_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15178375698805858881ull);
    vlSelf->peripheral_unit_harness__DOT__u_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 994300703373551970ull);
    vlSelf->peripheral_unit_harness__DOT__u_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16854213899599252731ull);
    vlSelf->peripheral_unit_harness__DOT__u_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5841529899390012517ull);
    vlSelf->peripheral_unit_harness__DOT__u_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 419149516398595299ull);
    vlSelf->peripheral_unit_harness__DOT__u_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8702284043584831321ull);
    vlSelf->peripheral_unit_harness__DOT__u_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15485290792646312842ull);
    vlSelf->peripheral_unit_harness__DOT__u_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14610227584953995479ull);
    vlSelf->peripheral_unit_harness__DOT__u_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16554672780945713359ull);
    vlSelf->peripheral_unit_harness__DOT__u_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1134320589634644087ull);
    vlSelf->peripheral_unit_harness__DOT__u_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516053537482141602ull);
    vlSelf->peripheral_unit_harness__DOT__u_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3541594637021298695ull);
    vlSelf->peripheral_unit_harness__DOT__u_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8073670563217312435ull);
    vlSelf->peripheral_unit_harness__DOT__u_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16475382283137021796ull);
    vlSelf->peripheral_unit_harness__DOT__u_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237226553797463799ull);
    vlSelf->peripheral_unit_harness__DOT__u_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2122822119862792472ull);
    vlSelf->peripheral_unit_harness__DOT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9582290671839499423ull);
    vlSelf->peripheral_unit_harness__DOT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 882790030355539999ull);
    vlSelf->peripheral_unit_harness__DOT__u_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8004410708521900234ull);
    vlSelf->peripheral_unit_harness__DOT__g_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6711312868863863088ull);
    vlSelf->peripheral_unit_harness__DOT__g_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15198546990566061484ull);
    vlSelf->peripheral_unit_harness__DOT__g_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665770918755476796ull);
    vlSelf->peripheral_unit_harness__DOT__g_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4201325320187433951ull);
    vlSelf->peripheral_unit_harness__DOT__g_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8377193387198750401ull);
    vlSelf->peripheral_unit_harness__DOT__g_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8362161938745226551ull);
    vlSelf->peripheral_unit_harness__DOT__g_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8545968914347550751ull);
    vlSelf->peripheral_unit_harness__DOT__g_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7776174820469333424ull);
    vlSelf->peripheral_unit_harness__DOT__g_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1060360291703695618ull);
    vlSelf->peripheral_unit_harness__DOT__g_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524829185544429507ull);
    vlSelf->peripheral_unit_harness__DOT__g_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13850475825365647658ull);
    vlSelf->peripheral_unit_harness__DOT__g_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15679791255600101899ull);
    vlSelf->peripheral_unit_harness__DOT__g_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1334401506406399436ull);
    vlSelf->peripheral_unit_harness__DOT__g_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7699191486527759315ull);
    vlSelf->peripheral_unit_harness__DOT__g_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7152376121123695929ull);
    vlSelf->peripheral_unit_harness__DOT__g_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 37322193334162341ull);
    vlSelf->peripheral_unit_harness__DOT__g_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2792800484292554348ull);
    vlSelf->peripheral_unit_harness__DOT__g_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 654089068065316634ull);
    vlSelf->peripheral_unit_harness__DOT__g_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17046823500442565700ull);
    vlSelf->peripheral_unit_harness__DOT__gpio_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4235429971570406852ull);
    vlSelf->peripheral_unit_harness__DOT__gpio_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10121375799644642337ull);
    vlSelf->peripheral_unit_harness__DOT__gpio_dir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10129551708284841565ull);
    vlSelf->peripheral_unit_harness__DOT__g_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4031605408293100073ull);
    vlSelf->peripheral_unit_harness__DOT__t_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14301095886560851746ull);
    vlSelf->peripheral_unit_harness__DOT__t_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13060127446881682504ull);
    vlSelf->peripheral_unit_harness__DOT__t_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9450981717289490680ull);
    vlSelf->peripheral_unit_harness__DOT__t_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16134935724728131302ull);
    vlSelf->peripheral_unit_harness__DOT__t_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9327825440183387352ull);
    vlSelf->peripheral_unit_harness__DOT__t_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17923095866401056695ull);
    vlSelf->peripheral_unit_harness__DOT__t_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600112088023991590ull);
    vlSelf->peripheral_unit_harness__DOT__t_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18385361581843459159ull);
    vlSelf->peripheral_unit_harness__DOT__t_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13681450547560427944ull);
    vlSelf->peripheral_unit_harness__DOT__t_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17174177526945733375ull);
    vlSelf->peripheral_unit_harness__DOT__t_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10256609259667124264ull);
    vlSelf->peripheral_unit_harness__DOT__t_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11338504749994856430ull);
    vlSelf->peripheral_unit_harness__DOT__t_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4444737344742294866ull);
    vlSelf->peripheral_unit_harness__DOT__t_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7964994569248542558ull);
    vlSelf->peripheral_unit_harness__DOT__t_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15115881025376170075ull);
    vlSelf->peripheral_unit_harness__DOT__t_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9587300605621650570ull);
    vlSelf->peripheral_unit_harness__DOT__t_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10574105806789149834ull);
    vlSelf->peripheral_unit_harness__DOT__t_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15527219478879281854ull);
    vlSelf->peripheral_unit_harness__DOT__t_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1490114932056469427ull);
    vlSelf->peripheral_unit_harness__DOT__t_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16923723722294417822ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10544472583346187712ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2409181721615619175ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10298373868170560602ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10457850607058469385ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12141461841148012829ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2859636651423472575ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13464984761684932485ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17388604376880706746ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9021029793709174912ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16877352024138610334ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2340055237522173286ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16926357121454142836ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927072744019229772ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10226609457248774146ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8956622299799819349ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6422177806323963035ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6293947339239162640ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8685677975795900371ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7982779967284886877ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14615454331073928143ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5480490978714217697ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7129721647978920753ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16800178546879949962ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8287537240426530587ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9842704496607708748ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6416278440015194586ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9416810360305337110ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13837059285158553899ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9041291532511394474ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13792276056263036372ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6544821130376352669ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11445328797749712588ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1783377619647111536ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__one_shot_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11278771579748269819ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__psc_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 881233091837851730ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__load_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10941443392435989572ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1624225903917987072ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__prescale_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9380160704679112186ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__psc_cnt_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6471173741773188382ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__expired_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3320619169581523103ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6750043408708562805ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__expire_evt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9203803696581990615ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__istat_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977495176106563714ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865130692417251089ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8967257709467509988ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11627169925576620186ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13989620600496182973ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 517624473169345039ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18289891753058973990ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16180217473374570775ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16915756042060254600ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9774540788763243962ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5804432256482271124ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4224914324670405798ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16024481787646002272ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13896533380033645919ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 875093034026929958ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10919550804710068537ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6155882075601231620ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7104085459943208856ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1441695292509829050ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9730881108563528746ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8430610475295819252ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16191034866796885694ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7285704528204690637ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10935778764067210882ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11387619535650243686ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4092445121646970161ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2127828089317419268ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6880934424952290161ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5062560702235016065ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2051257617422243900ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1720701829472120575ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10419478408953241651ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17052583786821925339ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_addr_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12024693965785724352ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16866455832088687184ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_strb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11224402763635662965ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16563532941771592022ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7691794413055400769ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2782461778512574346ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638514829456808245ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8084666655834805700ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12676778175888252849ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15765287399122649454ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1213382876511816483ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15903480512518433270ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3463496224314187023ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 718911839628434590ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6556782205234172346ull);
    vlSelf->peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6987156982722248506ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6491568317586115266ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13803579546722129367ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8446564132986984709ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3463816593016933919ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11286406179314042665ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16008304971197276950ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7144325633211749888ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3936985707300863172ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4022359550109319909ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13087588266193698802ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8636133535992425256ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14813049339170023977ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 964439575711930582ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12627231850080321752ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3004190917859038074ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199174235658703172ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11872196758752462814ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3415951025155872144ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8130454257508936299ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4524184434432633880ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17312963382749212592ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__gpio_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4527212481338523691ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__gpio_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1788807639804937609ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__gpio_dir = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14200119069893284945ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 585866437849220924ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1444211182697130612ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5723226680912302743ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12317735925858442124ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15715053745224834ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3216629857154143390ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10996829950293047153ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11994515051000278361ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8967145317611620450ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6370998547833723972ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__dir_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7358551333383990092ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__out_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14833370122381349993ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__ien_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14151560299506970875ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__itype_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14583431876163842481ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__istat_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 408552012411593397ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__in_s1_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9192237473690184283ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__in_s2_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 513712276987416995ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__in_d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355866573657749053ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__in_chg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18083672954837415635ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__in_evt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 451261180055848072ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__istat_set = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14325767818651668227ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__istat_clr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4086290870132487093ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__istat_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15103023077977484863ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16506220367395763483ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13018457099253543680ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16717007649755466451ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 720775025692248106ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16222259963311123908ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12725111956357327303ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16318633618099426745ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6643732211790435601ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15909405146302905627ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17610933907912368775ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16888048891191637311ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5330149700072893089ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5842506861064138719ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6141514717367444897ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14182406460739086847ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13925579074189369053ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18345638458136035891ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7222230938601108751ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10928374534601939780ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8193631263137597575ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86132156450823079ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16207827453777688070ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1111081636191092833ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4616171431973078861ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4995548297894239425ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14094392267711327391ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6408704729609415585ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17327109075001138047ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12879390237181660556ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5832760683694444836ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3782114832951492995ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2721839055429111822ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_addr_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1128594236631276251ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 174533427191061788ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_strb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13429950255109846999ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 389073865510874632ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11463541132314180258ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5893457744453109129ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15317889891002347202ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5443067695395477020ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2348008605530611051ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12072221625080816155ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17284726424843580139ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4579131648802307423ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16389140405183370386ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8072221650194155495ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14018801847384826825ull);
    vlSelf->peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7680516138283568489ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17195910818354482812ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6567083614935971066ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 532810585884730115ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12527090532461796523ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298461157175348157ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6955687820370157183ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4365613269262703068ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3657229690931504494ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7492856510200394256ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12230814218011535592ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7250096973922592914ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3930739628504458853ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17109546014268069164ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11106317168549311330ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7907988560882331065ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729850412301056457ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12437342173921035827ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4671176241059750517ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11237144844935750803ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 225135857462861001ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5728371260854908321ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5296331924416428691ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829075610645556755ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 660880260774052915ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13601368679877386405ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14200478168440647374ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1854587995777898633ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9458582494278522371ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6465267348567573360ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6575107177155233898ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10220614636857651625ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8487646804291403802ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2046877187338825948ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__ctrl_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11172277639118352862ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__baud_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 367701267621219181ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__ien_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7436499553572656891ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__istat_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9082384335327601952ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_data_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17257853089794463362ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14531116745997685506ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_sr_q = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14479264629843977455ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_bit_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16543397832141356070ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_baud_cnt_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5555747471193492349ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8033927546811320970ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_st_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18156076045722513630ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_sr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16679062694762626809ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_bit_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16244632434711424345ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_baud_cnt_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7617541628187951784ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13955525803642527461ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5244002072351790945ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__loopback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17754783574659685319ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__baud_div = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 954896270554547337ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 865007059107506136ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_line = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15518294471477146074ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189281305970780025ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4166032509494081812ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_done_evt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14780087092897025827ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_stop_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12223071019924513216ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__wr_strobed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10741257279961014883ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__istat_evt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6333856691251204586ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_store_evt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10189519621497459368ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rxdata_rd_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8265426291637115179ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__istat_set = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10998857922772295427ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__rx_valid_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7666507176460731547ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3987358604991842372ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9045674186531749069ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15363119936898484129ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14011378187969951780ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16005458433605033295ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16782048806724973480ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3940434527198422739ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13064425832923531527ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12123453048165677758ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3019517380049745242ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16781981335778232048ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 401942713342279048ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14477359013736742559ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3852067357899773157ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5233583974285177994ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11807815771759440117ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7480318826585627479ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3269928664195842981ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13666701818814841686ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3406854773227660529ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16588737881026971417ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7292133789819154425ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3250087595364644905ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3248504896124437253ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14401816789463796812ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808773789310573622ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11832946181489984655ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6731278174848252281ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8369307491785825956ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8890761596923502176ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_rd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4516377892265600827ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4095585863068473816ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_addr_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1656222438330036890ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5969088133258696388ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_strb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13991246562676757909ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4268838231017890401ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3667450640769117011ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13047313997930787217ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7402456690106695305ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14535839322041744865ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rresp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12249774299797232954ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2390212327908651839ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5743325284902188703ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5909040445638955670ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8297891305965689769ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10144423394831394627ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15530475248501575200ull);
    vlSelf->peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__unused_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5781983184533849410ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5330820051705915929ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15584996733128878883ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15065569351206568547ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10240037649635081648ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563458432432570530ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15374618811727163862ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13058325323385535987ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7875317357696443776ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3660977936576738476ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6556072429542971877ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16053140145841416693ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2696161038462154379ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 909355768213687376ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18049345436052691653ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14910544117877053258ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3591337304622751504ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17492193314803693530ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9553296542525017416ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15195375562005381300ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8434635604267529480ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7249945934011952531ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6565304828843922072ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8280090274024562029ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9660822176276245327ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8090110705297098434ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4999222132683163502ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6333268339641813903ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__aw_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 3036893908376288758ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3539291990399745161ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__w_pay_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17455045332471864943ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__b_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17343248452524535006ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__b_resp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13493612086528295786ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5351186056855002836ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__ar_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 10012308397691689093ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8938514089405175857ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__r_pay_q = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 786873308399018857ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_aw_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 359279575911412538ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_w_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16339295671139312702ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__rd_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3608841501580483191ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_timer__DOT__wr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4642110394140260991ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9580027016009348690ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13723429095459233535ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 203275217721731460ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5915785215531553753ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17505667180835251315ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1909688575538468123ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13808694219717276156ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10524029004311781065ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980502373141979033ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1921022871830874335ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4946015753084929719ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13156921289352241902ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16139877620420354427ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13950518008043775170ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2845636186027724795ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15607112699957224904ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252602396517718119ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1284403295931423233ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16438172184358397702ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11798676961136286417ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344450261609211438ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2997018495834611939ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10624366880651906096ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 608705308553002720ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5029362973547072657ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17546938586378992799ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3456676553257261293ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__aw_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 15221349924833437684ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13084535526879515487ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__w_pay_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13830821160748384110ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14787737919724062932ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__b_resp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7682558898862090029ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8510547880809932698ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__ar_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6639113352652717314ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225322611762367351ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__r_pay_q = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 797149297994204536ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_aw_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283587355474345094ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_w_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5043029773809524908ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__rd_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7447745218957180584ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_gpio__DOT__wr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012816490535229717ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7888156534842477533ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7884515083694416712ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14493677177476295551ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7199084482564295988ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8862788180781178809ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13104634608141406055ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10707667188766130562ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12591193438105912094ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5871467329467193653ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10548318058786202646ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9619527541912635720ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7436702981709682106ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14572021776791648592ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2056099192946683690ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5426194975536946146ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8841780935373453153ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9813974596407679986ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11843786420015954808ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 465831341164877685ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12706818441064163665ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5272911207313217593ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13316759672806861235ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9927310956374663205ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 479702727582085864ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9643383555753861769ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8979417444751533081ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14390605936360406873ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__aw_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 888308159238893699ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2879769031656919993ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__w_pay_q = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4220089276443926545ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__b_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1950689815916604284ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__b_resp_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1085111569675253361ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2170148896422934526ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__ar_pay_q = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 5323983571293670660ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pend_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14158436450013737034ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__r_pay_q = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14568096202619939822ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_aw_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13823736221776775394ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_w_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2026411273518381628ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__rd_acc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714539044410500937ull);
    vlSelf->peripheral_unit_harness__DOT__u_chk_uart__DOT__wr_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13101031100564520992ull);
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expired_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__irq_en_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__expire_evt = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__en_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rst = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_awready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_wready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__s_arready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__aw_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__w_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__bvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__rvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__wr_apply = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__reg_wr_en = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__irq = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__istat_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__ien_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rst = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_awready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_wready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__s_arready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__aw_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__w_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__bvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__rvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__wr_apply = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__reg_wr_en = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__irq = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__istat_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__ien_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_done_evt = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__tx_busy_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rst = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_awready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_wready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__s_arready = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__aw_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__w_pend_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__bvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__rvalid_q = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__wr_apply = 0;
    vlSelf->__Vsampled_TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__reg_wr_en = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_timer__DOT__u_regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_gpio__DOT__u_regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_uart__DOT__u_regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_timer__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_gpio__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__peripheral_unit_harness__DOT__u_chk_uart__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

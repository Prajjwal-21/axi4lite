// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , m_axil_awprot{vlSymsp->TOP.m_axil_awprot}
    , m_axil_awvalid{vlSymsp->TOP.m_axil_awvalid}
    , m_axil_awready{vlSymsp->TOP.m_axil_awready}
    , m_axil_wstrb{vlSymsp->TOP.m_axil_wstrb}
    , m_axil_wvalid{vlSymsp->TOP.m_axil_wvalid}
    , m_axil_wready{vlSymsp->TOP.m_axil_wready}
    , m_axil_bresp{vlSymsp->TOP.m_axil_bresp}
    , m_axil_bvalid{vlSymsp->TOP.m_axil_bvalid}
    , m_axil_bready{vlSymsp->TOP.m_axil_bready}
    , m_axil_arprot{vlSymsp->TOP.m_axil_arprot}
    , m_axil_arvalid{vlSymsp->TOP.m_axil_arvalid}
    , m_axil_arready{vlSymsp->TOP.m_axil_arready}
    , m_axil_rresp{vlSymsp->TOP.m_axil_rresp}
    , m_axil_rvalid{vlSymsp->TOP.m_axil_rvalid}
    , m_axil_rready{vlSymsp->TOP.m_axil_rready}
    , s_axil_awprot{vlSymsp->TOP.s_axil_awprot}
    , s_axil_awvalid{vlSymsp->TOP.s_axil_awvalid}
    , s_axil_awready{vlSymsp->TOP.s_axil_awready}
    , s_axil_wstrb{vlSymsp->TOP.s_axil_wstrb}
    , s_axil_wvalid{vlSymsp->TOP.s_axil_wvalid}
    , s_axil_wready{vlSymsp->TOP.s_axil_wready}
    , s_axil_bresp{vlSymsp->TOP.s_axil_bresp}
    , s_axil_bvalid{vlSymsp->TOP.s_axil_bvalid}
    , s_axil_bready{vlSymsp->TOP.s_axil_bready}
    , s_axil_arprot{vlSymsp->TOP.s_axil_arprot}
    , s_axil_arvalid{vlSymsp->TOP.s_axil_arvalid}
    , s_axil_arready{vlSymsp->TOP.s_axil_arready}
    , s_axil_rresp{vlSymsp->TOP.s_axil_rresp}
    , s_axil_rvalid{vlSymsp->TOP.s_axil_rvalid}
    , s_axil_rready{vlSymsp->TOP.s_axil_rready}
    , m_axil_awaddr{vlSymsp->TOP.m_axil_awaddr}
    , m_axil_wdata{vlSymsp->TOP.m_axil_wdata}
    , m_axil_araddr{vlSymsp->TOP.m_axil_araddr}
    , m_axil_rdata{vlSymsp->TOP.m_axil_rdata}
    , s_axil_awaddr{vlSymsp->TOP.s_axil_awaddr}
    , s_axil_wdata{vlSymsp->TOP.s_axil_wdata}
    , s_axil_araddr{vlSymsp->TOP.s_axil_araddr}
    , s_axil_rdata{vlSymsp->TOP.s_axil_rdata}
    , __PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport{vlSymsp->TOP.__PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__0__KET____DOT__u_sport}
    , __PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport{vlSymsp->TOP.__PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__1__KET____DOT__u_sport}
    , __PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport{vlSymsp->TOP.__PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__2__KET____DOT__u_sport}
    , __PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport{vlSymsp->TOP.__PVT__crossbar_checker_top__DOT__u_dut__DOT__g_slv__BRA__3__KET____DOT__u_sport}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtop___024root___eval_sample(Vtop___024root* vlSelf);
bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtop___024root___eval_act(Vtop___024root* vlSelf);
bool Vtop___024root___eval_inact(Vtop___024root* vlSelf);
bool Vtop___024root___eval_nba(Vtop___024root* vlSelf);
bool Vtop___024root___eval_obs(Vtop___024root* vlSelf);
bool Vtop___024root___eval_react(Vtop___024root* vlSelf);
void Vtop___024root___eval_postponed(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtop::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtop::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtop::evalStatic() {
    Vtop___024root___eval_static(&(vlSymsp->TOP));
}

void Vtop::evalInitial() {
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtop::evalStl(bool firstIteration) {
    return Vtop___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtop::evalSample() {
    Vtop___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtop::evalIco(bool firstIteration) {
    return Vtop___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtop::evalAct() {
    return Vtop___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtop::evalInact() {
    return Vtop___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtop::evalNba() {
    return Vtop___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtop::evalObs() {
    return Vtop___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtop::evalReact() {
    return Vtop___024root___eval_react(&(vlSymsp->TOP));
}

void Vtop::evalPostponed() {
    Vtop___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtop::evalFinal() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersStl() {
    Vtop___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersIco() {
    Vtop___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersAct() {
    Vtop___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersNba() {
    Vtop___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersObs() {
    Vtop___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersReact() {
    Vtop___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}

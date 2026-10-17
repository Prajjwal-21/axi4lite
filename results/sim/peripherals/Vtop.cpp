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
    , u_awprot{vlSymsp->TOP.u_awprot}
    , u_awvalid{vlSymsp->TOP.u_awvalid}
    , u_awready{vlSymsp->TOP.u_awready}
    , u_wstrb{vlSymsp->TOP.u_wstrb}
    , u_wvalid{vlSymsp->TOP.u_wvalid}
    , u_wready{vlSymsp->TOP.u_wready}
    , u_bresp{vlSymsp->TOP.u_bresp}
    , u_bvalid{vlSymsp->TOP.u_bvalid}
    , u_bready{vlSymsp->TOP.u_bready}
    , u_arprot{vlSymsp->TOP.u_arprot}
    , u_arvalid{vlSymsp->TOP.u_arvalid}
    , u_arready{vlSymsp->TOP.u_arready}
    , u_rresp{vlSymsp->TOP.u_rresp}
    , u_rvalid{vlSymsp->TOP.u_rvalid}
    , u_rready{vlSymsp->TOP.u_rready}
    , uart_rx{vlSymsp->TOP.uart_rx}
    , uart_tx{vlSymsp->TOP.uart_tx}
    , u_irq{vlSymsp->TOP.u_irq}
    , g_awprot{vlSymsp->TOP.g_awprot}
    , g_awvalid{vlSymsp->TOP.g_awvalid}
    , g_awready{vlSymsp->TOP.g_awready}
    , g_wstrb{vlSymsp->TOP.g_wstrb}
    , g_wvalid{vlSymsp->TOP.g_wvalid}
    , g_wready{vlSymsp->TOP.g_wready}
    , g_bresp{vlSymsp->TOP.g_bresp}
    , g_bvalid{vlSymsp->TOP.g_bvalid}
    , g_bready{vlSymsp->TOP.g_bready}
    , g_arprot{vlSymsp->TOP.g_arprot}
    , g_arvalid{vlSymsp->TOP.g_arvalid}
    , g_arready{vlSymsp->TOP.g_arready}
    , g_rresp{vlSymsp->TOP.g_rresp}
    , g_rvalid{vlSymsp->TOP.g_rvalid}
    , g_rready{vlSymsp->TOP.g_rready}
    , gpio_in{vlSymsp->TOP.gpio_in}
    , gpio_out{vlSymsp->TOP.gpio_out}
    , gpio_dir{vlSymsp->TOP.gpio_dir}
    , g_irq{vlSymsp->TOP.g_irq}
    , t_awprot{vlSymsp->TOP.t_awprot}
    , t_awvalid{vlSymsp->TOP.t_awvalid}
    , t_awready{vlSymsp->TOP.t_awready}
    , t_wstrb{vlSymsp->TOP.t_wstrb}
    , t_wvalid{vlSymsp->TOP.t_wvalid}
    , t_wready{vlSymsp->TOP.t_wready}
    , t_bresp{vlSymsp->TOP.t_bresp}
    , t_bvalid{vlSymsp->TOP.t_bvalid}
    , t_bready{vlSymsp->TOP.t_bready}
    , t_arprot{vlSymsp->TOP.t_arprot}
    , t_arvalid{vlSymsp->TOP.t_arvalid}
    , t_arready{vlSymsp->TOP.t_arready}
    , t_rresp{vlSymsp->TOP.t_rresp}
    , t_rvalid{vlSymsp->TOP.t_rvalid}
    , t_rready{vlSymsp->TOP.t_rready}
    , t_irq{vlSymsp->TOP.t_irq}
    , u_awaddr{vlSymsp->TOP.u_awaddr}
    , u_wdata{vlSymsp->TOP.u_wdata}
    , u_araddr{vlSymsp->TOP.u_araddr}
    , u_rdata{vlSymsp->TOP.u_rdata}
    , g_awaddr{vlSymsp->TOP.g_awaddr}
    , g_wdata{vlSymsp->TOP.g_wdata}
    , g_araddr{vlSymsp->TOP.g_araddr}
    , g_rdata{vlSymsp->TOP.g_rdata}
    , t_awaddr{vlSymsp->TOP.t_awaddr}
    , t_wdata{vlSymsp->TOP.t_wdata}
    , t_araddr{vlSymsp->TOP.t_araddr}
    , t_rdata{vlSymsp->TOP.t_rdata}
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_peripheral_unit_harness;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_ar_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_aw_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_needs_write;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_b_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_needs_read;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_r_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_arready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_awready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_bvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_rvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_rst_slave_wready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_gpio__ap_w_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_ar_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_aw_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_needs_write;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_b_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_needs_read;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_r_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_arready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_awready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_bvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_rvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_rst_slave_wready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_timer__ap_w_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_ar_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_aw_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_needs_write;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_b_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_needs_read;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_resp_code;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_r_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_arready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_awready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_bvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_rvalid;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_rst_slave_wready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_hold;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_one_outstanding;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_chk_uart__ap_w_stable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__ap_irq_needs_enable;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_aw_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_b_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_r_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_reg_wr_en_implies_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_rst_blocks_ready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_w_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__u_regfile__ap_wr_apply_needs_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_gpio__unnamedblk3;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__ap_expire_needs_en;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__ap_irq_needs_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_aw_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_b_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_r_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_reg_wr_en_implies_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_rst_blocks_ready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_w_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__u_regfile__ap_wr_apply_needs_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_timer__unnamedblk6;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__ap_irq_needs_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__ap_txbusy_holds;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_aw_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_b_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_r_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_reg_wr_en_implies_both;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_rst_blocks_ready;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_w_blocked;
    VerilatedScope* __Vscopep_peripheral_unit_harness__u_uart__u_regfile__ap_wr_apply_needs_both;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

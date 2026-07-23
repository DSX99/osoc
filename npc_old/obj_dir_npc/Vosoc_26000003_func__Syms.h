// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOSOC_26000003_FUNC__SYMS_H_
#define VERILATED_VOSOC_26000003_FUNC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vosoc_26000003_func.h"

// INCLUDE MODULE CLASSES
#include "Vosoc_26000003_func___024root.h"
#include "Vosoc_26000003_func_osoc_26000003_func.h"
#include "Vosoc_26000003_func_osoc_26000003_core.h"
#include "Vosoc_26000003_func_regs.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vosoc_26000003_func__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vosoc_26000003_func* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vosoc_26000003_func___024root  TOP;
    Vosoc_26000003_func_osoc_26000003_func TOP__osoc_26000003_func;
    Vosoc_26000003_func_osoc_26000003_core TOP__osoc_26000003_func__core;
    Vosoc_26000003_func_regs       TOP__osoc_26000003_func__core__reg_mod;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_osoc_26000003_func__core;
    VerilatedScope* __Vscopep_osoc_26000003_func__core__reg_mod;

    // CONSTRUCTORS
    Vosoc_26000003_func__Syms(VerilatedContext* contextp, const char* namep, Vosoc_26000003_func* modelp);
    ~Vosoc_26000003_func__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

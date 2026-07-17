// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCFull.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_osoc_26000003.h"
#include "VysyxSoCFull_osoc_26000003_core.h"
#include "VysyxSoCFull_regs.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCFull* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCFull___024root         TOP;
    VysyxSoCFull___024unit         TOP____024unit;
    VysyxSoCFull_ysyxSoCFull       TOP__ysyxSoCFull;
    VysyxSoCFull_ysyxSoCASIC       TOP__ysyxSoCFull__asic;
    VysyxSoCFull_CPU               TOP__ysyxSoCFull__asic__cpu;
    VysyxSoCFull_osoc_26000003     TOP__ysyxSoCFull__asic__cpu__cpu;
    VysyxSoCFull_osoc_26000003_core TOP__ysyxSoCFull__asic__cpu__cpu__core;
    VysyxSoCFull_regs              TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi42apb;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi4frag;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi4xbar;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi4yank;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__cpu__cpu__core;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__cpu__cpu__core__reg_mod;
    VerilatedScope* __Vscopep_ysyxSoCFull__asic__lmrom;
    VerilatedScope* __Vscopep_ysyxSoCFull__flash;
    VerilatedScope* __Vscopep_ysyxSoCFull__flash__flash_cmd_i;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

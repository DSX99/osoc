// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu__pch.h"

Valu__Syms::Valu__Syms(VerilatedContext* contextp, const char* namep, Valu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(456);
    // Setup sub module instances
    TOP__top.ctor(this, "top");
    TOP__top__reg_mod.ctor(this, "top.reg_mod");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.top = &TOP__top;
    TOP__top.reg_mod = &TOP__top__reg_mod;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top.__Vconfigure(true);
    TOP__top__reg_mod.__Vconfigure(true);
    // Setup scopes
    __Vscopep_top__reg_mod = new VerilatedScope{this, "top.reg_mod", "reg_mod", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_top__reg_mod->varInsert("regs", &(TOP__top__reg_mod.regs), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,31,0 ,31,0);
}

Valu__Syms::~Valu__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_top__reg_mod, __Vscopep_top__reg_mod = nullptr);
    // Tear down sub module instances
    TOP__top__reg_mod.dtor();
    TOP__top.dtor();
}

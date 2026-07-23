// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

void Vosoc_26000003_func_regs___ctor_var_reset(Vosoc_26000003_func_regs* vlSelf);

Vosoc_26000003_func_regs::Vosoc_26000003_func_regs() = default;
Vosoc_26000003_func_regs::~Vosoc_26000003_func_regs() = default;

void Vosoc_26000003_func_regs::ctor(Vosoc_26000003_func__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vosoc_26000003_func_regs___ctor_var_reset(this);
}

void Vosoc_26000003_func_regs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vosoc_26000003_func_regs::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

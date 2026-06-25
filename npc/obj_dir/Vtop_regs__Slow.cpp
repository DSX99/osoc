// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_regs___ctor_var_reset(Vtop_regs* vlSelf);

Vtop_regs::Vtop_regs() = default;
Vtop_regs::~Vtop_regs() = default;

void Vtop_regs::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_regs___ctor_var_reset(this);
}

void Vtop_regs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_regs::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu_regs___ctor_var_reset(Valu_regs* vlSelf);

Valu_regs::Valu_regs() = default;
Valu_regs::~Valu_regs() = default;

void Valu_regs::ctor(Valu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Valu_regs___ctor_var_reset(this);
}

void Valu_regs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Valu_regs::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

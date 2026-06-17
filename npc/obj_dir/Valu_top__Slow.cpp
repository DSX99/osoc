// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

void Valu_top___ctor_var_reset(Valu_top* vlSelf);

Valu_top::Valu_top() = default;
Valu_top::~Valu_top() = default;

void Valu_top::ctor(Valu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Valu_top___ctor_var_reset(this);
}

void Valu_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Valu_top::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

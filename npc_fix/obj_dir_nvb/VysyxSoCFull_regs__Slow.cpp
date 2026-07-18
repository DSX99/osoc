// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_regs___ctor_var_reset(VysyxSoCFull_regs* vlSelf);

VysyxSoCFull_regs::VysyxSoCFull_regs() = default;
VysyxSoCFull_regs::~VysyxSoCFull_regs() = default;

void VysyxSoCFull_regs::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull_regs___ctor_var_reset(this);
}

void VysyxSoCFull_regs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull_regs::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

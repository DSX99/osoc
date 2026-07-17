// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_CPU___ctor_var_reset(VysyxSoCFull_CPU* vlSelf);

VysyxSoCFull_CPU::VysyxSoCFull_CPU() = default;
VysyxSoCFull_CPU::~VysyxSoCFull_CPU() = default;

void VysyxSoCFull_CPU::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull_CPU___ctor_var_reset(this);
}

void VysyxSoCFull_CPU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull_CPU::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

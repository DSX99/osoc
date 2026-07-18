// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf);

VysyxSoCFull_ysyxSoCFull::VysyxSoCFull_ysyxSoCFull() = default;
VysyxSoCFull_ysyxSoCFull::~VysyxSoCFull_ysyxSoCFull() = default;

void VysyxSoCFull_ysyxSoCFull::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull_ysyxSoCFull___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCFull::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull_ysyxSoCFull::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

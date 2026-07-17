// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_osoc_26000003___ctor_var_reset(VysyxSoCFull_osoc_26000003* vlSelf);

VysyxSoCFull_osoc_26000003::VysyxSoCFull_osoc_26000003() = default;
VysyxSoCFull_osoc_26000003::~VysyxSoCFull_osoc_26000003() = default;

void VysyxSoCFull_osoc_26000003::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull_osoc_26000003___ctor_var_reset(this);
}

void VysyxSoCFull_osoc_26000003::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull_osoc_26000003::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

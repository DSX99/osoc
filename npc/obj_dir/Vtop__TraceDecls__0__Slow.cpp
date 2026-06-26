// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtop___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_AR", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "axi_slave_lsu.IFU_state_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_S", "WAIT", "WAIT_RESP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(2, "axi_slave_lsu.IFU_state_s_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_AR", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "axi_slave.IFU_state_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_AR", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(4, "ifu.IFU_state_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_R", "WAIT_AR", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(5, "lsu.LSU_state_R_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_W", "WAIT_W", "WAIT_WRESP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(6, "lsu.LSU_state_w_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop___024root__traceDeclTypesSub0(tracep);
}

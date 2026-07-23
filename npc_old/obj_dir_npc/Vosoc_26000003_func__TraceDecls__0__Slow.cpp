// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vosoc_26000003_func___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE_R", "WAIT_RR", "WAIT_RRESP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "CLINT.CLINT_R", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "axi_slave_lsu.IFU_state_t", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE_S", "WAIT", "WAIT_RESP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "axi_slave_lsu.IFU_state_s_t", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WAIT_AR", "WAIT_R"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "icache.cache_state_t", 2, 32, __VenumItemNames, __VenumItemValues);
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
        = {"IDLE_W", "WAIT_W", "WAIT_WRESP", "WAIT_COMMIT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(6, "lsu.LSU_state_w_t", 4, 32, __VenumItemNames, __VenumItemValues);
    }
}

void Vosoc_26000003_func___024root__trace_decl_types(VerilatedFst* tracep) {
    Vosoc_26000003_func___024root__traceDeclTypesSub0(tracep);
}

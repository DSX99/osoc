// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vosoc_26000003_func.h for the primary calling header

#ifndef VERILATED_VOSOC_26000003_FUNC_OSOC_26000003_CORE_H_
#define VERILATED_VOSOC_26000003_FUNC_OSOC_26000003_CORE_H_  // guard

#include "verilated.h"
class Vosoc_26000003_func_regs;


class Vosoc_26000003_func__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vosoc_26000003_func_osoc_26000003_core final {
  public:
    // CELLS
    Vosoc_26000003_func_regs* reg_mod;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clock;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__io_interrupt;
        CData/*0:0*/ __PVT__io_master_awready;
        CData/*0:0*/ __PVT__io_master_awvalid;
        CData/*3:0*/ __PVT__io_master_awid;
        CData/*7:0*/ __PVT__io_master_awlen;
        CData/*2:0*/ __PVT__io_master_awsize;
        CData/*1:0*/ __PVT__io_master_awburst;
        CData/*0:0*/ __PVT__io_master_wready;
        CData/*0:0*/ __PVT__io_master_wvalid;
        CData/*3:0*/ __PVT__io_master_wstrb;
        CData/*0:0*/ __PVT__io_master_wlast;
        CData/*0:0*/ __PVT__io_master_bready;
        CData/*0:0*/ __PVT__io_master_bvalid;
        CData/*1:0*/ __PVT__io_master_bresp;
        CData/*3:0*/ __PVT__io_master_bid;
        CData/*0:0*/ __PVT__io_master_arready;
        CData/*0:0*/ __PVT__io_master_arvalid;
        CData/*3:0*/ __PVT__io_master_arid;
        CData/*7:0*/ __PVT__io_master_arlen;
        CData/*2:0*/ __PVT__io_master_arsize;
        CData/*1:0*/ __PVT__io_master_arburst;
        CData/*0:0*/ __PVT__io_master_rready;
        CData/*0:0*/ __PVT__io_master_rvalid;
        CData/*1:0*/ __PVT__io_master_rresp;
        CData/*0:0*/ __PVT__io_master_rlast;
        CData/*3:0*/ __PVT__io_master_rid;
        CData/*0:0*/ __PVT__io_slave_awready;
        CData/*0:0*/ __PVT__io_slave_awvalid;
        CData/*3:0*/ __PVT__io_slave_awid;
        CData/*7:0*/ __PVT__io_slave_awlen;
        CData/*2:0*/ __PVT__io_slave_awsize;
        CData/*1:0*/ __PVT__io_slave_awburst;
        CData/*0:0*/ __PVT__io_slave_wready;
        CData/*0:0*/ __PVT__io_slave_wvalid;
        CData/*3:0*/ __PVT__io_slave_wstrb;
        CData/*0:0*/ __PVT__io_slave_wlast;
        CData/*0:0*/ __PVT__io_slave_bready;
        CData/*0:0*/ __PVT__io_slave_bvalid;
        CData/*1:0*/ __PVT__io_slave_bresp;
        CData/*3:0*/ __PVT__io_slave_bid;
        CData/*0:0*/ __PVT__io_slave_arready;
        CData/*0:0*/ __PVT__io_slave_arvalid;
        CData/*3:0*/ __PVT__io_slave_arid;
        CData/*7:0*/ __PVT__io_slave_arlen;
        CData/*2:0*/ __PVT__io_slave_arsize;
        CData/*1:0*/ __PVT__io_slave_arburst;
        CData/*0:0*/ __PVT__io_slave_rready;
        CData/*0:0*/ __PVT__io_slave_rvalid;
        CData/*1:0*/ __PVT__io_slave_rresp;
        CData/*0:0*/ __PVT__io_slave_rlast;
        CData/*3:0*/ __PVT__io_slave_rid;
        CData/*0:0*/ reg_valid;
        CData/*0:0*/ reg_valid_e;
        CData/*0:0*/ if_de_valid_if;
        CData/*0:0*/ if_de_ready_if;
        CData/*0:0*/ ex_ls_valid_ls;
        CData/*0:0*/ ex_ls_ready_ls;
        CData/*0:0*/ branch;
        CData/*0:0*/ branch_taken;
        CData/*0:0*/ ex_ls_bus_lsu_we_ls;
        CData/*0:0*/ ex_ls_bus_lsu_re_ls;
        CData/*0:0*/ cache_hit;
    };
    struct {
        CData/*0:0*/ cache_miss;
        CData/*0:0*/ rst;
        CData/*0:0*/ ex_ls_valid_ex;
        CData/*0:0*/ __PVT__if_de_ready_de;
        CData/*0:0*/ __PVT__if_de_bus_speculate_if;
        CData/*0:0*/ __PVT__cache_ready;
        CData/*7:0*/ __PVT__de_ex_bus_alu_op_de;
        CData/*0:0*/ __PVT__de_ex_bus_lsu_we_de;
        CData/*0:0*/ __PVT__de_ex_bus_lsu_re_de;
        CData/*2:0*/ __PVT__de_ex_bus_lsu_oper_de;
        CData/*4:0*/ __PVT__de_ex_bus_rd_de;
        CData/*1:0*/ __PVT__de_ex_bus_mux_select_de;
        CData/*0:0*/ __PVT__de_ex_bus_mux_select_pc_de;
        CData/*0:0*/ __PVT__de_ex_valid_de;
        CData/*3:0*/ __PVT__de_ex_bus_mcause_de;
        CData/*0:0*/ __PVT__de_ex_bus_exception_de;
        CData/*4:0*/ __PVT__de_ex_bus_rs1_de;
        CData/*4:0*/ __PVT__de_ex_bus_rs2_de;
        CData/*0:0*/ __PVT__ex_ls_bus_branch_ex;
        CData/*0:0*/ __PVT__ls_wb_valid_ls;
        CData/*3:0*/ ls_wb_bus_mcause_wb;
        CData/*0:0*/ ls_wb_bus_exception_wb;
        CData/*0:0*/ ls_wb_bus_speculate_wb;
        CData/*0:0*/ __PVT__fencei;
        CData/*0:0*/ __PVT__fencei_commit;
        CData/*0:0*/ flush;
        CData/*0:0*/ flush_ex;
        CData/*0:0*/ __PVT__finish_de;
        CData/*1:0*/ __PVT__rresp_lsu;
        CData/*0:0*/ __PVT__arvalid_lsu;
        CData/*0:0*/ __PVT__arready_lsu;
        CData/*0:0*/ __PVT__rvalid_lsu;
        CData/*0:0*/ __PVT__rready_lsu;
        CData/*0:0*/ __PVT__awvalid_lsu;
        CData/*0:0*/ __PVT__wvalid_lsu;
        CData/*0:0*/ __PVT__bready_lsu;
        CData/*1:0*/ __PVT__rresp_ifu;
        CData/*0:0*/ __PVT__arvalid_ifu;
        CData/*0:0*/ __PVT__arready_ifu;
        CData/*0:0*/ __PVT__rvalid_ifu;
        CData/*0:0*/ __PVT__rready_ifu;
        CData/*7:0*/ __PVT__arlen_ifu;
        CData/*2:0*/ __PVT__arsize_ifu;
        CData/*1:0*/ __PVT__arburst_ifu;
        CData/*0:0*/ __PVT__pc_mod__DOT__ex_valid;
        CData/*0:0*/ __PVT__ifu_mod__DOT__latest_row;
        CData/*0:0*/ __PVT__ifu_mod__DOT__hit_0;
        CData/*0:0*/ __PVT__ifu_mod__DOT__hit_1;
        CData/*0:0*/ __PVT__icache_mod__DOT__latest_row;
        CData/*0:0*/ __PVT__icache_mod__DOT__trans;
        CData/*0:0*/ __PVT__icache_mod__DOT__do_burst;
        CData/*0:0*/ __PVT__icache_mod__DOT__burst_reg;
        CData/*0:0*/ __PVT__icache_mod__DOT__burst_addr;
        CData/*1:0*/ __PVT__icache_mod__DOT__fill_count;
        CData/*0:0*/ __PVT__icache_mod__DOT__hit_1;
        CData/*0:0*/ __PVT__if_de_pipeline_mod__DOT__flush;
        CData/*0:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_valid;
        CData/*3:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
        CData/*0:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_exception;
        CData/*0:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate;
        CData/*0:0*/ __PVT__decode_mod__DOT__ex_match_rs1;
        CData/*0:0*/ __PVT__decode_mod__DOT__ex_match_rs2;
        CData/*0:0*/ __PVT__decode_mod__DOT__ls_match_rs1;
        CData/*0:0*/ __PVT__decode_mod__DOT__ls_match_rs2;
    };
    struct {
        CData/*0:0*/ __PVT__decode_mod__DOT__wb_match_rs1;
        CData/*0:0*/ __PVT__decode_mod__DOT__wb_match_rs2;
        CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h4e467bd8__0;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__flush;
        CData/*7:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re;
        CData/*2:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper;
        CData/*4:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd;
        CData/*4:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1;
        CData/*1:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_valid;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__finish;
        CData/*3:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception;
        CData/*0:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re;
        CData/*2:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper;
        CData/*4:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd;
        CData/*1:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__finish;
        CData/*3:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception;
        CData/*0:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate;
        CData/*0:0*/ __PVT__lsu_mod__DOT__done_r;
        CData/*0:0*/ __PVT__lsu_mod__DOT__done_w;
        CData/*0:0*/ __PVT__lsu_mod__DOT__trans_r;
        CData/*0:0*/ __PVT__lsu_mod__DOT__trans_w;
        CData/*0:0*/ __PVT__lsu_mod__DOT__done_aw;
        CData/*0:0*/ __PVT__lsu_mod__DOT__done_wdata;
        CData/*4:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd;
        CData/*1:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__finish;
        CData/*3:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception;
        CData/*0:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate;
        CData/*4:0*/ __PVT__csr_mod__DOT__working_reg_r;
        CData/*4:0*/ __PVT__csr_mod__DOT__working_reg_w;
        CData/*0:0*/ __PVT__arbiter_mod__DOT__read_select;
        CData/*0:0*/ __PVT__arbiter_mod__DOT__read_busy;
        CData/*0:0*/ __PVT__arbiter_mod__DOT__write_busy;
        SData/*11:0*/ __PVT__de_ex_bus_csr_de;
        SData/*11:0*/ __PVT__addr_spec;
        SData/*11:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr;
        SData/*11:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr;
        SData/*11:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr;
        IData/*31:0*/ __PVT__io_master_awaddr;
        IData/*31:0*/ __PVT__io_master_wdata;
        IData/*31:0*/ __PVT__io_master_araddr;
        IData/*31:0*/ __PVT__io_master_rdata;
        IData/*31:0*/ __PVT__io_slave_awaddr;
        IData/*31:0*/ __PVT__io_slave_wdata;
        IData/*31:0*/ __PVT__io_slave_araddr;
        IData/*31:0*/ __PVT__io_slave_rdata;
        IData/*31:0*/ pc;
        IData/*31:0*/ prev_pc;
    };
    struct {
        IData/*31:0*/ opcode;
        IData/*31:0*/ pc_e;
        IData/*31:0*/ __PVT__if_de_bus_next_pc_if;
        IData/*31:0*/ __PVT__cache_opcode;
        IData/*31:0*/ __PVT__de_ex_bus_imm_de;
        IData/*31:0*/ __PVT__de_ex_bus_data_csr_de;
        IData/*31:0*/ __PVT__de_ex_bus_data_rs1_de;
        IData/*31:0*/ __PVT__de_ex_bus_data_rs2_de;
        IData/*31:0*/ __PVT__ex_ls_bus_alu_out_ex;
        IData/*31:0*/ __PVT__ex_ls_bus_diff_pc_ex;
        IData/*31:0*/ __PVT__ex_branch_addr;
        IData/*31:0*/ __PVT__ls_wb_bus_alu_out_ls;
        IData/*31:0*/ ls_wb_bus_pc_wb;
        IData/*31:0*/ __PVT__ls_wb_bus_csr_pc_wb;
        IData/*31:0*/ __PVT__pc_ifu;
        IData/*31:0*/ __PVT__reg_in;
        IData/*31:0*/ __PVT__araddr_lsu;
        IData/*31:0*/ __PVT__rdata_lsu;
        IData/*31:0*/ __PVT__awaddr_lsu;
        IData/*31:0*/ __PVT__wdata_lsu;
        IData/*31:0*/ __PVT__araddr_ifu;
        IData/*31:0*/ __PVT__rdata_ifu;
        IData/*31:0*/ __PVT__icache_mod__DOT__miss_addr;
        IData/*31:0*/ __PVT__icache_mod__DOT__state;
        IData/*31:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_pc;
        IData/*31:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc;
        IData/*31:0*/ __PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode;
        IData/*31:0*/ __PVT__decode_mod__DOT__imm_i;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr;
        IData/*31:0*/ __PVT__de_ex_pipeline_mod__DOT__opcode;
        IData/*31:0*/ __PVT__alu_mod__DOT__val1;
        IData/*31:0*/ __PVT__alu_mod__DOT__val2;
        IData/*31:0*/ __PVT__alu_mod__DOT__csr_imm;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc;
        IData/*31:0*/ __PVT__ex_ls_pipeline_mod__DOT__opcode;
        IData/*31:0*/ __PVT__lsu_mod__DOT__lsu_r;
        IData/*31:0*/ __PVT__lsu_mod__DOT__lsu_w;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc;
        IData/*31:0*/ __PVT__ls_wb_pipeline_mod__DOT__opcode;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        VlUnpacked<VlUnpacked<IData/*28:0*/, 2>, 2> __PVT__ifu_mod__DOT__block_tag;
        VlUnpacked<VlUnpacked<SData/*11:0*/, 2>, 2> __PVT__ifu_mod__DOT__block_offset;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2> __PVT__ifu_mod__DOT__block_valid;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 4>, 4> __PVT__icache_mod__DOT__block_cache;
        VlUnpacked<VlUnpacked<IData/*25:0*/, 2>, 4> __PVT__icache_mod__DOT__block_tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> __PVT__icache_mod__DOT__block_valid;
        VlUnpacked<IData/*31:0*/, 32> __PVT__csr_mod__DOT__regs;
    };

    // INTERNAL VARIABLES
    Vosoc_26000003_func__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vosoc_26000003_func_osoc_26000003_core();
    ~Vosoc_26000003_func_osoc_26000003_core();
    void ctor(Vosoc_26000003_func__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vosoc_26000003_func_osoc_26000003_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

module osoc_26000003_core (
    input  logic         clock,
    input  logic         reset,
    input  logic         io_interrupt,

    // AXI4 Master Interface
    input  logic         io_master_awready,
    output logic         io_master_awvalid,
    output logic [31:0]  io_master_awaddr,
    output logic [3:0]   io_master_awid,
    output logic [7:0]   io_master_awlen,
    output logic [2:0]   io_master_awsize,
    output logic [1:0]   io_master_awburst,
    input  logic         io_master_wready,
    output logic         io_master_wvalid,
    output logic [31:0]  io_master_wdata,
    output logic [3:0]   io_master_wstrb,
    output logic         io_master_wlast,
    output logic         io_master_bready,
    input  logic         io_master_bvalid,
    input  logic [1:0]   io_master_bresp,
    input  logic [3:0]   io_master_bid,
    input  logic         io_master_arready,
    output logic         io_master_arvalid,
    output logic [31:0]  io_master_araddr,
    output logic [3:0]   io_master_arid,
    output logic [7:0]   io_master_arlen,
    output logic [2:0]   io_master_arsize,
    output logic [1:0]   io_master_arburst,
    output logic         io_master_rready,
    input  logic         io_master_rvalid,
    input  logic [1:0]   io_master_rresp,
    input  logic [31:0]  io_master_rdata,
    input  logic         io_master_rlast,
    input  logic [3:0]   io_master_rid,

    // AXI4 Slave Interface
    output logic         io_slave_awready,
    input  logic         io_slave_awvalid,
    input  logic [31:0]  io_slave_awaddr,
    input  logic [3:0]   io_slave_awid,
    input  logic [7:0]   io_slave_awlen,
    input  logic [2:0]   io_slave_awsize,
    input  logic [1:0]   io_slave_awburst,
    output logic         io_slave_wready,
    input  logic         io_slave_wvalid,
    input  logic [31:0]  io_slave_wdata,
    input  logic [3:0]   io_slave_wstrb,
    input  logic         io_slave_wlast,
    input  logic         io_slave_bready,
    output logic         io_slave_bvalid,
    output logic [1:0]   io_slave_bresp,
    output logic [3:0]   io_slave_bid,
    output logic         io_slave_arready,
    input  logic         io_slave_arvalid,
    input  logic [31:0]  io_slave_araddr,
    input  logic [3:0]   io_slave_arid,
    input  logic [7:0]   io_slave_arlen,
    input  logic [2:0]   io_slave_arsize,
    input  logic [1:0]   io_slave_arburst,
    input  logic         io_slave_rready,
    output logic         io_slave_rvalid,
    output logic [1:0]   io_slave_rresp,
    output logic [31:0]  io_slave_rdata,
    output logic         io_slave_rlast,
    output logic [3:0]   io_slave_rid
);

    logic [31:0] pc /* verilator public */, prev_pc /* verilator public */, opcode /* verilator public */, pc_e /* verilator public */;
    logic reg_valid /* verilator public */, reg_valid_e /* verilator public */;

    logic if_de_valid_if /* verilator public */, if_de_ready_if /*verilator public*/, ex_ls_valid_ls /* verilator public */, ex_ls_ready_ls /* verilator public */;
    logic branch /* verilator public */, branch_taken /* verilator public */, ex_ls_bus_lsu_we_ls /* verilator public*/, ex_ls_bus_lsu_re_ls /* verilator public*/;
    logic cache_hit/* verilator public */, cache_miss/* verilator public */, rst/* verilator public */;
    logic ex_ls_valid_ex /* verilator public */;

    assign rst = reset;

    logic [31:0] opcode_over_ex, opcode_over_ls, opcode_over_wb;

    assign reg_valid_e = ls_wb_valid_wb;
    
    always_comb begin
        branch_taken = ls_wb_bus_branch_wb;
    end

    always_ff @(posedge clock) begin
        if (reset) begin
            reg_valid <= 1'b0;
            pc   <= 32'b0;
            prev_pc<=0;
            opcode <= 0 ;
        end else begin
            `ifndef SYNTHESIS
            reg_valid <= reg_valid_e;
            pc   <=  ls_wb_bus_exception_wb ?  ls_wb_bus_csr_pc_wb : pc_e;
            prev_pc <= pc;
            opcode <= opcode_over_wb;
            `endif
            `ifdef SYNTHESIS
            prev_pc <= 0;
            reg_valid <= 0;
            pc <= 0;
            opcode <=0;
            `endif
        end
    end

    assign pc_e = ls_wb_bus_diff_pc_wb;

    // IF to DE
    logic [31:0] if_de_bus_pc_if, if_de_bus_pc_de;
    logic [31:0] if_de_bus_next_pc_if, if_de_bus_next_pc_de;
    logic [31:0] if_de_bus_opcode_if, if_de_bus_opcode_de;

    logic if_de_valid_de; //if_de_valid_if defined as public
    logic if_de_ready_de; //if_de_ready_if same

    // Exception / speculation tracking (IF -> DE)
    logic [3:0]  if_de_bus_mcause_if, if_de_bus_mcause_de;
    logic        if_de_bus_exception_if, if_de_bus_exception_de;
    logic        if_de_bus_speculate_if, if_de_bus_speculate_de;

    //cache
    logic [31:0] cache_addr, cache_opcode;
    logic cache_ready, cache_valid;

    // DE to EX
    logic [31:0] de_ex_bus_pc_de;
    logic [31:0] de_ex_bus_next_pc_de;
    logic [31:0] de_ex_bus_imm_de;
    logic [31:0] de_ex_bus_data_csr_de;
    logic [7:0]  de_ex_bus_alu_op_de;
    logic        de_ex_bus_lsu_we_de;
    logic        de_ex_bus_lsu_re_de;
    logic [2:0]  de_ex_bus_lsu_oper_de;
    logic [4:0]  de_ex_bus_rd_de;
    logic [1:0]  de_ex_bus_mux_select_de;
    logic        de_ex_bus_mux_select_pc_de;
    logic        de_ex_valid_de, de_ex_ready_de;

    // Exception / speculation tracking (DE -> EX)
    logic [3:0]  de_ex_bus_mcause_de, de_ex_bus_mcause_ex;
    logic        de_ex_bus_exception_de, de_ex_bus_exception_ex;
    logic        de_ex_bus_speculate_de, de_ex_bus_speculate_ex;

    logic [31:0] de_ex_bus_pc_ex;
    logic [31:0] de_ex_bus_next_pc_ex;
    logic [31:0] de_ex_bus_imm_ex;
    logic [7:0]  de_ex_bus_alu_op_ex;
    logic        de_ex_bus_lsu_we_ex;
    logic        de_ex_bus_lsu_re_ex;
    logic [2:0]  de_ex_bus_lsu_oper_ex;
    logic [4:0]  de_ex_bus_rd_ex;
    logic [11:0] de_ex_bus_csr_ex;
    logic [31:0] de_ex_bus_data_csr_ex;
    logic [1:0]  de_ex_bus_mux_select_ex;
    logic        de_ex_bus_mux_select_pc_ex;
    logic        de_ex_valid_ex, de_ex_ready_ex;

    logic [4:0]  de_ex_bus_rs1_de;
    logic [4:0]  de_ex_bus_rs2_de;
    logic [11:0]  de_ex_bus_csr_de;
    logic [4:0]  de_ex_bus_rs1_ex;

    logic [31:0] de_ex_bus_data_rs1_reg;
    logic [31:0] de_ex_bus_data_rs2_reg;
    logic [31:0] de_ex_bus_data_rs1_de;
    logic [31:0] de_ex_bus_data_rs2_de;
    logic [31:0] de_ex_bus_data_rs1_ex;
    logic [31:0] de_ex_bus_data_rs2_ex;

    // EX to LS Muxed Bus signals (Combined ALU + CSR)
    logic [31:0] ex_ls_bus_pc_ex;
    logic [31:0] ex_ls_bus_next_pc_ex;
    logic [31:0] ex_ls_bus_alu_out_ex;
    logic [31:0] ex_ls_bus_data_rs2_ex;
    logic [31:0] ex_ls_bus_csr_out_ex;
    logic        ex_ls_bus_lsu_we_ex;
    logic        ex_ls_bus_lsu_re_ex;
    logic [2:0]  ex_ls_bus_lsu_oper_ex;
    logic [4:0]  ex_ls_bus_rd_ex;
    logic [1:0]  ex_ls_bus_mux_select_ex;
    logic        ex_ls_bus_mux_select_pc_ex;
    logic        ex_ls_bus_branch_ex;
    // logic        ex_ls_valid_ex; //declared as public
    logic        ex_ls_ready_ex;

    // Exception / speculation tracking (EX -> LS)
    logic [3:0]  ex_ls_bus_mcause_ex, ex_ls_bus_mcause_ls;
    logic        ex_ls_bus_exception_ex, ex_ls_bus_exception_ls;
    logic        ex_ls_bus_speculate_ex, ex_ls_bus_speculate_ls;

    logic [31:0] ex_ls_bus_pc_ls;
    logic [31:0] ex_ls_bus_next_pc_ls;
    logic [31:0] ex_ls_bus_alu_out_ls;
    logic [31:0] ex_ls_bus_data_rs2_ls;
    logic [31:0] ex_ls_bus_csr_out_ls;
    logic [11:0] ex_ls_bus_csr_ls;
    // logic        ex_ls_bus_lsu_we_ls; //declared as public
    // logic        ex_ls_bus_lsu_re_ls;
    logic [2:0]  ex_ls_bus_lsu_oper_ls;
    logic [4:0]  ex_ls_bus_rd_ls;
    logic [1:0]  ex_ls_bus_mux_select_ls;
    logic        ex_ls_bus_mux_select_pc_ls;
    logic        ex_ls_bus_branch_ls;
    // logic        ex_ls_valid_ls, ex_ls_ready_ls; //declared as public

    // LS to WB Bus signals
    logic [31:0] ls_wb_bus_pc_ls;
    logic [31:0] ls_wb_bus_alu_out_ls;
    logic [31:0] ls_wb_bus_next_pc_ls;
    logic [31:0] ls_wb_bus_csr_out_ls;
    logic [4:0]  ls_wb_bus_rd_ls;
    logic [1:0]  ls_wb_bus_mux_select_ls;
    logic        ls_wb_bus_mux_select_pc_ls;
    logic        ls_wb_bus_branch_ls;
    logic        ls_wb_valid_ls, ls_wb_ready_ls;

    // Exception / speculation tracking (LS -> WB)
    logic [3:0]  ls_wb_bus_mcause_ls;
    logic        ls_wb_bus_exception_ls;
    logic        ls_wb_bus_speculate_ls;

    // Signals arriving at WB, ready to be committed (exception/CSR commit logic TBD)
    logic [3:0]  ls_wb_bus_mcause_wb /* verilator public */;
    logic        ls_wb_bus_exception_wb /* verilator public */;
    logic        ls_wb_bus_speculate_wb /* verilator public */;

    logic [31:0] ls_wb_bus_pc_wb /* verilator public */;
    logic [31:0] ls_wb_bus_alu_out_wb;
    logic [31:0] ls_wb_bus_next_pc_wb;
    logic [31:0] ls_wb_bus_csr_out_wb;
    logic [31:0] ls_wb_bus_csr_pc_wb;
    logic [4:0]  ls_wb_bus_rd_wb;
    logic [11:0] ls_wb_bus_csr_wb;
    logic [1:0]  ls_wb_bus_mux_select_wb;
    logic        ls_wb_bus_mux_select_pc_wb;
    logic        ls_wb_bus_branch_wb;
    logic        ls_wb_valid_wb, ls_wb_ready_wb;

    pc pc_mod (
        .clk(clock), 
        .rst(reset), 
        .do_spec(do_spec),
        .addr_spec(addr_spec),
        .branch(ex_ls_bus_branch_ex), 
        .csr_branch(ls_wb_bus_exception_wb),
        .speculation(ex_ls_bus_speculate_ex),
        .branch_addr(ex_ls_bus_alu_out_ex),
        .csr_branch_addr(ls_wb_bus_csr_pc_wb), 
        .mispred_addr(ex_ls_bus_pc_ex),
        .pc(pc_ifu), 
        .next_pc(next_pc), 
        .valid(if_de_valid_if && if_de_ready_if),
        .ex_valid(ex_ls_valid_ex && ex_ls_ready_ex && !ex_ls_bus_exception_ls && !ls_wb_bus_exception_wb),
        .wb_valid(ls_wb_valid_wb)
    );

    logic flush /*verilator public*/, flush_ex /*verilator public*/;

    assign flush = ls_wb_bus_exception_wb;
    assign flush_ex = (ex_ls_bus_branch_ex != ex_ls_bus_speculate_ex) && ex_ls_valid_ex && ex_ls_ready_ex && !ex_ls_bus_exception_ls && !ls_wb_bus_exception_wb;  
    
    logic [31:0] pc_ifu, next_pc;

    logic do_spec;
    logic [11:0] addr_spec;

    // IFU
    ifu ifu_mod (
        .clk(clock), .rst(reset),
        .pc(pc_ifu), .next_pc(next_pc),
        .bus_out_pc(if_de_bus_pc_if),
        .bus_out_next_pc(if_de_bus_next_pc_if),
        .bus_out_opcode(if_de_bus_opcode_if),
        .bus_out_mcause(if_de_bus_mcause_if),
        .bus_out_exception(if_de_bus_exception_if),
        .bus_out_speculate(if_de_bus_speculate_if),
        .valid(if_de_valid_if), .ready(if_de_ready_if),
        .cache_addr(cache_addr), .cache_valid(cache_valid), .cache_opcode(cache_opcode), .cache_ready(cache_ready),
        .do_spec(do_spec), .addr_spec(addr_spec),
        .pc_to_write(de_ex_bus_pc_ex), .offset_to_write(de_ex_bus_imm_ex[12:1]), .write(ex_ls_bus_branch_ex && !ex_ls_bus_speculate_ex && de_ex_bus_alu_op_ex[6] & !(|de_ex_bus_imm_ex[31:13]))
    );

    icache icache_mod(
        .clk(clock), .rst(reset),
        .ifu_addr(cache_addr), .valid(cache_valid & !(flush | flush_ex)), .opcode(cache_opcode), .ready(cache_ready),
        .araddr(araddr_ifu), .arvalid(arvalid_ifu), .arready(arready_ifu), 
        .arlen(arlen_ifu), .arsize(arsize_ifu), .arburst(arburst_ifu),

        .rdata(rdata_ifu), .rresp(rresp_ifu), .rvalid(rvalid_ifu), .rready(rready_ifu),
        
        .hit(cache_hit), .miss(cache_miss)
    );

    if_de_pipeline if_de_pipeline_mod (
        .clk(clock),
        .rst(reset),
        .flush(flush | flush_ex),

        .if_de_bus_pc_if(if_de_bus_pc_if),
        .if_de_bus_next_pc_if(if_de_bus_next_pc_if),
        .if_de_bus_opcode_if(if_de_bus_opcode_if),
        .if_de_valid_if(if_de_valid_if),
        .if_de_ready_if(if_de_ready_if),

        .if_de_bus_mcause_if(if_de_bus_mcause_if),
        .if_de_bus_exception_if(if_de_bus_exception_if),
        .if_de_bus_speculate_if(if_de_bus_speculate_if),

        .if_de_bus_pc_de(if_de_bus_pc_de),
        .if_de_bus_next_pc_de(if_de_bus_next_pc_de),
        .if_de_bus_opcode_de(if_de_bus_opcode_de),
        .if_de_valid_de(if_de_valid_de),
        .if_de_ready_de(if_de_ready_de),

        .if_de_bus_mcause_de(if_de_bus_mcause_de),
        .if_de_bus_exception_de(if_de_bus_exception_de),
        .if_de_bus_speculate_de(if_de_bus_speculate_de)
    );

    // Decoder
    decode decode_mod (
        .bus_in_pc(if_de_bus_pc_de),
        .bus_in_next_pc(if_de_bus_next_pc_de),
        .bus_in_opcode(if_de_bus_opcode_de),
        .bus_in_mcause(if_de_bus_mcause_de),
        .bus_in_exception(if_de_bus_exception_de),
        .bus_in_speculate(if_de_bus_speculate_de),
        .bus_in_data_rs1(de_ex_bus_data_rs1_reg),
        .bus_in_data_rs2(de_ex_bus_data_rs2_reg),
        .bus_out_pc(de_ex_bus_pc_de),
        .bus_out_next_pc(de_ex_bus_next_pc_de),
        .bus_out_mcause(de_ex_bus_mcause_de),
        .bus_out_exception(de_ex_bus_exception_de),
        .bus_out_speculate(de_ex_bus_speculate_de),
        .bus_out_imm(de_ex_bus_imm_de),
        .bus_out_rs1(de_ex_bus_rs1_de),
        .bus_out_rs2(de_ex_bus_rs2_de),
        .bus_out_data_rs1(de_ex_bus_data_rs1_de),
        .bus_out_data_rs2(de_ex_bus_data_rs2_de),
        .bus_out_csr(de_ex_bus_csr_de),
        .bus_out_alu_op(de_ex_bus_alu_op_de),
        .bus_out_lsu_we(de_ex_bus_lsu_we_de),
        .bus_out_lsu_re(de_ex_bus_lsu_re_de),
        .bus_out_lsu_oper(de_ex_bus_lsu_oper_de),
        .bus_out_rd(de_ex_bus_rd_de),
        .bus_out_mux_select(de_ex_bus_mux_select_de),
        .bus_out_mux_select_pc(de_ex_bus_mux_select_pc_de),
        .valid_left(if_de_valid_de), .ready_left(if_de_ready_de), 
        .valid_right(de_ex_valid_de), .ready_right(de_ex_ready_de),

        .ex_rd(de_ex_bus_rd_ex),
        .ls_rd(ex_ls_bus_rd_ls),
        .wb_rd(ls_wb_bus_rd_wb),

        .ex_rd_data(ex_ls_bus_alu_out_ex),
        .ls_rd_data(ls_wb_bus_alu_out_ls),
        .wb_rd_data(reg_in),

        .ex_valid(ex_ls_valid_ex),
        .ex_lsu_re(de_ex_bus_lsu_re_ex),
        .ls_valid(ls_wb_valid_ls),
        .wb_valid(ls_wb_valid_wb),

        .ex_csr(de_ex_bus_csr_ex),
        .ls_csr(ex_ls_bus_csr_ls),
        .wb_csr(ls_wb_bus_csr_wb),

        .finish(finish_de)
    );

    //finish routing
    logic finish_de,finish_ex,finish_ls,finish_wb;

    de_ex_pipeline de_ex_pipeline_mod (
        .clk                        (clock),
        .rst                        (reset),
        .flush                      (flush | flush_ex),

        .opcode_in(if_de_bus_opcode_de),
        .opcode_out(opcode_over_ex),  

        .de_ex_bus_pc_de            (de_ex_bus_pc_de),
        .de_ex_bus_next_pc_de       (de_ex_bus_next_pc_de),
        .de_ex_bus_imm_de           (de_ex_bus_imm_de),        
        .de_ex_bus_data_rs1_de      (de_ex_bus_data_rs1_de), 
        .de_ex_bus_data_rs2_de      (de_ex_bus_data_rs2_de), 
        .de_ex_bus_data_csr_de      (de_ex_bus_data_csr_de), 
        .de_ex_bus_alu_op_de        (de_ex_bus_alu_op_de),
        .de_ex_bus_lsu_we_de        (de_ex_bus_lsu_we_de),
        .de_ex_bus_lsu_re_de        (de_ex_bus_lsu_re_de),
        .de_ex_bus_lsu_oper_de      (de_ex_bus_lsu_oper_de),
        .de_ex_bus_rd_de            (de_ex_bus_rd_de),
        .de_ex_bus_rs1_de           (de_ex_bus_rs1_de),
        .de_ex_bus_csr_de           (de_ex_bus_csr_de),
        .de_ex_bus_mux_select_de    (de_ex_bus_mux_select_de),
        .de_ex_bus_mux_select_pc_de (de_ex_bus_mux_select_pc_de),
        .de_ex_valid_de             (de_ex_valid_de),
        .de_ex_ready_de             (de_ex_ready_de),

        .de_ex_bus_mcause_de        (de_ex_bus_mcause_de),
        .de_ex_bus_exception_de     (de_ex_bus_exception_de),
        .de_ex_bus_speculate_de     (de_ex_bus_speculate_de),

        .finish_de(finish_de),

        .de_ex_bus_pc_ex            (de_ex_bus_pc_ex),
        .de_ex_bus_next_pc_ex       (de_ex_bus_next_pc_ex),
        .de_ex_bus_imm_ex           (de_ex_bus_imm_ex),
        .de_ex_bus_data_rs1_ex      (de_ex_bus_data_rs1_ex),
        .de_ex_bus_data_rs2_ex      (de_ex_bus_data_rs2_ex),
        .de_ex_bus_data_csr_ex      (de_ex_bus_data_csr_ex), 
        .de_ex_bus_alu_op_ex        (de_ex_bus_alu_op_ex),
        .de_ex_bus_lsu_we_ex        (de_ex_bus_lsu_we_ex),
        .de_ex_bus_lsu_re_ex        (de_ex_bus_lsu_re_ex),
        .de_ex_bus_lsu_oper_ex      (de_ex_bus_lsu_oper_ex),
        .de_ex_bus_rd_ex            (de_ex_bus_rd_ex),
        .de_ex_bus_rs1_ex           (de_ex_bus_rs1_ex),
        .de_ex_bus_csr_ex           (de_ex_bus_csr_ex),
        .de_ex_bus_mux_select_ex    (de_ex_bus_mux_select_ex),
        .de_ex_bus_mux_select_pc_ex (de_ex_bus_mux_select_pc_ex),
        .de_ex_valid_ex             (de_ex_valid_ex),
        .de_ex_ready_ex             (de_ex_ready_ex),

        .de_ex_bus_mcause_ex        (de_ex_bus_mcause_ex),
        .de_ex_bus_exception_ex     (de_ex_bus_exception_ex),
        .de_ex_bus_speculate_ex     (de_ex_bus_speculate_ex),

        .finish_ex(finish_ex)
    );

    // ALU module block
    alu alu_mod (
        .bus_in_pc(de_ex_bus_pc_ex),
        .bus_in_next_pc(de_ex_bus_next_pc_ex),
        .bus_in_imm(de_ex_bus_imm_ex),
        .bus_in_data_rs1(de_ex_bus_data_rs1_ex),
        .bus_in_data_rs2(de_ex_bus_data_rs2_ex),
        .bus_in_data_csr(de_ex_bus_data_csr_ex),
        .bus_in_rs1(de_ex_bus_rs1_ex),
        .bus_in_alu_op(de_ex_bus_alu_op_ex),
        .bus_in_lsu_we(de_ex_bus_lsu_we_ex),
        .bus_in_lsu_re(de_ex_bus_lsu_re_ex),
        .bus_in_lsu_oper(de_ex_bus_lsu_oper_ex),
        .bus_in_rd(de_ex_bus_rd_ex),
        .bus_in_mux_select(de_ex_bus_mux_select_ex),
        .bus_in_mux_select_pc(de_ex_bus_mux_select_pc_ex),
        .bus_in_mcause(de_ex_bus_mcause_ex),
        .bus_in_exception(de_ex_bus_exception_ex),
        .bus_in_speculate(de_ex_bus_speculate_ex),
        .bus_out_pc(ex_ls_bus_pc_ex),
        .bus_out_next_pc(ex_ls_bus_next_pc_ex),
        .bus_out_alu_out(ex_ls_bus_alu_out_ex),
        .bus_out_data_csr(ex_ls_bus_csr_out_ex),
        .bus_out_data_rs2(ex_ls_bus_data_rs2_ex),
        .bus_out_lsu_we(ex_ls_bus_lsu_we_ex),
        .bus_out_lsu_re(ex_ls_bus_lsu_re_ex),
        .bus_out_lsu_oper(ex_ls_bus_lsu_oper_ex),
        .bus_out_rd(ex_ls_bus_rd_ex),
        .bus_out_mux_select(ex_ls_bus_mux_select_ex),
        .bus_out_mux_select_pc(ex_ls_bus_mux_select_pc_ex),
        .bus_out_branch(ex_ls_bus_branch_ex),
        .bus_out_mcause(ex_ls_bus_mcause_ex),
        .bus_out_exception(ex_ls_bus_exception_ex),
        .bus_out_speculate(ex_ls_bus_speculate_ex),
        .bus_out_diff_pc(ex_ls_bus_diff_pc_ex),
        .valid_left(de_ex_valid_ex), .ready_left(de_ex_ready_ex),
        .valid_right(ex_ls_valid_ex), .ready_right(ex_ls_ready_ex),
        .branch(branch)
    );

    ex_ls_pipeline ex_ls_pipeline_mod (
        .clk                        (clock),
        .rst                        (reset),
        .flush                      (flush),

        .opcode_in(opcode_over_ex),
        .opcode_out(opcode_over_ls),

        .ex_ls_bus_pc_ex            (ex_ls_bus_pc_ex),
        .ex_ls_bus_next_pc_ex       (ex_ls_bus_next_pc_ex),
        .ex_ls_bus_alu_out_ex       (ex_ls_bus_alu_out_ex),
        .ex_ls_bus_data_rs2_ex      (ex_ls_bus_data_rs2_ex),
        .ex_ls_bus_csr_out_ex       (ex_ls_bus_csr_out_ex),
        .ex_ls_bus_csr_ex           (de_ex_bus_csr_ex),
        .ex_ls_bus_lsu_we_ex        (ex_ls_bus_lsu_we_ex),
        .ex_ls_bus_lsu_re_ex        (ex_ls_bus_lsu_re_ex),
        .ex_ls_bus_lsu_oper_ex      (ex_ls_bus_lsu_oper_ex),
        .ex_ls_bus_rd_ex            (ex_ls_bus_rd_ex),
        .ex_ls_bus_mux_select_ex    (ex_ls_bus_mux_select_ex),
        .ex_ls_bus_mux_select_pc_ex (ex_ls_bus_mux_select_pc_ex),
        .ex_ls_bus_branch_ex        (ex_ls_bus_branch_ex),
        .ex_ls_bus_diff_pc_ex       (ex_ls_bus_diff_pc_ex),
        .ex_ls_valid_ex             (ex_ls_valid_ex),
        .ex_ls_ready_ex             (ex_ls_ready_ex),

        .ex_ls_bus_mcause_ex        (ex_ls_bus_mcause_ex),
        .ex_ls_bus_exception_ex     (ex_ls_bus_exception_ex),
        .ex_ls_bus_speculate_ex     (ex_ls_bus_speculate_ex),

        .finish_ex(finish_ex),

        .ex_ls_bus_pc_ls            (ex_ls_bus_pc_ls),
        .ex_ls_bus_next_pc_ls       (ex_ls_bus_next_pc_ls),
        .ex_ls_bus_alu_out_ls       (ex_ls_bus_alu_out_ls),
        .ex_ls_bus_data_rs2_ls      (ex_ls_bus_data_rs2_ls),
        .ex_ls_bus_csr_out_ls       (ex_ls_bus_csr_out_ls),
        .ex_ls_bus_csr_ls           (ex_ls_bus_csr_ls),
        .ex_ls_bus_lsu_we_ls        (ex_ls_bus_lsu_we_ls),
        .ex_ls_bus_lsu_re_ls        (ex_ls_bus_lsu_re_ls),
        .ex_ls_bus_lsu_oper_ls      (ex_ls_bus_lsu_oper_ls),
        .ex_ls_bus_rd_ls            (ex_ls_bus_rd_ls),
        .ex_ls_bus_mux_select_ls    (ex_ls_bus_mux_select_ls),
        .ex_ls_bus_mux_select_pc_ls (ex_ls_bus_mux_select_pc_ls),
        .ex_ls_bus_branch_ls        (ex_ls_bus_branch_ls),
        .ex_ls_bus_diff_pc_ls       (ex_ls_bus_diff_pc_ls),
        .ex_ls_valid_ls             (ex_ls_valid_ls),
        .ex_ls_ready_ls             (ex_ls_ready_ls),

        .ex_ls_bus_mcause_ls        (ex_ls_bus_mcause_ls),
        .ex_ls_bus_exception_ls     (ex_ls_bus_exception_ls),
        .ex_ls_bus_speculate_ls     (ex_ls_bus_speculate_ls),

        .finish_ls(finish_ls)
    );

    // LSU Instance
    lsu lsu_mod (
        .clk(clock), .rst(reset), .flush(flush),
        .bus_in_pc(ex_ls_bus_pc_ls),
        .bus_in_next_pc(ex_ls_bus_next_pc_ls),
        .bus_in_alu_out(ex_ls_bus_alu_out_ls),
        .bus_in_data_rs2(ex_ls_bus_data_rs2_ls),
        .bus_in_csr_out(ex_ls_bus_csr_out_ls),
        .bus_in_lsu_we(ex_ls_bus_lsu_we_ls),
        .bus_in_lsu_re(ex_ls_bus_lsu_re_ls),
        .bus_in_lsu_oper(ex_ls_bus_lsu_oper_ls),
        .bus_in_rd(ex_ls_bus_rd_ls),
        .bus_in_mux_select(ex_ls_bus_mux_select_ls),
        .bus_in_mux_select_pc(ex_ls_bus_mux_select_pc_ls),
        .bus_in_branch(ex_ls_bus_branch_ls),
        .bus_in_mcause(ex_ls_bus_mcause_ls),
        .bus_in_exception(ex_ls_bus_exception_ls),
        .bus_in_speculate(ex_ls_bus_speculate_ls),
        .bus_out_pc(ls_wb_bus_pc_ls),
        .bus_out_alu_out(ls_wb_bus_alu_out_ls),
        .bus_out_next_pc(ls_wb_bus_next_pc_ls),
        .bus_out_csr_out(ls_wb_bus_csr_out_ls),
        .bus_out_rd(ls_wb_bus_rd_ls),
        .bus_out_mux_select(ls_wb_bus_mux_select_ls),
        .bus_out_mux_select_pc(ls_wb_bus_mux_select_pc_ls),
        .bus_out_branch(ls_wb_bus_branch_ls),
        .bus_out_mcause(ls_wb_bus_mcause_ls),
        .bus_out_exception(ls_wb_bus_exception_ls),
        .bus_out_speculate(ls_wb_bus_speculate_ls),
        .valid_left(ex_ls_valid_ls), .ready_left(ex_ls_ready_ls),
        .valid_right(ls_wb_valid_ls), .ready_right(ls_wb_ready_ls),
        .araddr(araddr_lsu), .arvalid(arvalid_lsu), .arready(arready_lsu), 
        .rdata(rdata_lsu), .rresp(rresp_lsu), .rvalid(rvalid_lsu), .rready(rready_lsu),
        .awaddr(awaddr_lsu), .awvalid(awvalid_lsu), .awready(awready_lsu), 
        .wdata(wdata_lsu), .wstrb(wstrb_lsu), .wvalid(wvalid_lsu), .wready(wready_lsu), .wlast(wlast_lsu),
        .bresp(bresp_lsu), .bvalid(bvalid_lsu), .bready(bready_lsu)
    );

    ls_wb_pipeline ls_wb_pipeline_mod (
        .clk                        (clock),
        .rst                        (reset),
        .flush                      (flush),

        .opcode_in(opcode_over_ls),
        .opcode_out(opcode_over_wb),

        .ls_wb_bus_pc_ls            (ls_wb_bus_pc_ls),
        .ls_wb_bus_alu_out_ls       (ls_wb_bus_alu_out_ls),
        .ls_wb_bus_next_pc_ls       (ls_wb_bus_next_pc_ls),
        .ls_wb_bus_csr_out_ls       (ls_wb_bus_csr_out_ls),
        .ls_wb_bus_csr_ls           (ex_ls_bus_csr_ls),
        .ls_wb_bus_rd_ls            (ls_wb_bus_rd_ls),
        .ls_wb_bus_mux_select_ls    (ls_wb_bus_mux_select_ls),
        .ls_wb_bus_mux_select_pc_ls (ls_wb_bus_mux_select_pc_ls),
        .ls_wb_bus_branch_ls        (ls_wb_bus_branch_ls),
        .ls_wb_bus_diff_pc_ls       (ls_wb_bus_diff_pc_ls),
        .ls_wb_valid_ls             (ls_wb_valid_ls),
        .ls_wb_ready_ls             (ls_wb_ready_ls),

        .ls_wb_bus_mcause_ls        (ls_wb_bus_mcause_ls),
        .ls_wb_bus_exception_ls     (ls_wb_bus_exception_ls),
        .ls_wb_bus_speculate_ls     (ls_wb_bus_speculate_ls),

        .finish_ls(finish_ls),

        .ls_wb_bus_pc_wb            (ls_wb_bus_pc_wb),
        .ls_wb_bus_alu_out_wb       (ls_wb_bus_alu_out_wb),
        .ls_wb_bus_next_pc_wb       (ls_wb_bus_next_pc_wb),
        .ls_wb_bus_csr_out_wb       (ls_wb_bus_csr_out_wb),
        .ls_wb_bus_csr_wb           (ls_wb_bus_csr_wb),
        .ls_wb_bus_rd_wb            (ls_wb_bus_rd_wb),
        .ls_wb_bus_mux_select_wb    (ls_wb_bus_mux_select_wb),
        .ls_wb_bus_mux_select_pc_wb (ls_wb_bus_mux_select_pc_wb),
        .ls_wb_bus_branch_wb        (ls_wb_bus_branch_wb),
        .ls_wb_bus_diff_pc_wb       (ls_wb_bus_diff_pc_wb),
        .ls_wb_valid_wb             (ls_wb_valid_wb),
        .ls_wb_ready_wb             (ls_wb_ready_wb),

        .ls_wb_bus_mcause_wb        (ls_wb_bus_mcause_wb),
        .ls_wb_bus_exception_wb     (ls_wb_bus_exception_wb),
        .ls_wb_bus_speculate_wb     (ls_wb_bus_speculate_wb),

        .finish_wb(finish_wb)
    );

    // WB / Regfile Instance
    logic [31:0] reg_in;
    regs reg_mod (
        .clk(clock), .rst(reset), .data_in(reg_in), 
        .rs1(de_ex_bus_rs1_de), .rs2(de_ex_bus_rs2_de), .rd(ls_wb_bus_rd_wb), 
        .data_rs1(de_ex_bus_data_rs1_reg), .data_rs2(de_ex_bus_data_rs2_reg), 
        .valid(ls_wb_valid_wb), .ready(ls_wb_ready_wb),
        .finish(finish_wb)
    );

    csr csr_mod (
        .clk(clock), .rst(reset), .raddr(de_ex_bus_csr_de), .waddr(ls_wb_bus_csr_wb),
        .data_in(ls_wb_bus_alu_out_wb), .data_out(de_ex_bus_data_csr_de), .pc(ls_wb_bus_pc_wb), .data_pc_out(ls_wb_bus_csr_pc_wb),
        .cause(ls_wb_bus_mcause_wb), .exception(ls_wb_bus_exception_wb),
        .valid(ls_wb_valid_wb)
    );

    always_comb begin
        case(ls_wb_bus_mux_select_wb)
            2'b00: reg_in = ls_wb_bus_alu_out_wb;
            2'b01: reg_in = 0;
            2'b10: reg_in = ls_wb_bus_next_pc_wb;
            2'b11: reg_in = ls_wb_bus_csr_out_wb;
        endcase
    end


    // Internal Interconnect Wires
    logic [31:0] araddr_lsu, rdata_lsu;
    logic [1:0]  rresp_lsu;
    logic        arvalid_lsu, arready_lsu, rvalid_lsu, rready_lsu;

    logic [31:0] awaddr_lsu, wdata_lsu;
    logic [3:0]  wstrb_lsu;
    logic [1:0]  bresp_lsu;
    logic        awvalid_lsu, awready_lsu, wvalid_lsu, wlast_lsu, wready_lsu, bvalid_lsu, bready_lsu;

    logic [31:0] araddr_ifu, rdata_ifu;
    logic [1:0]  rresp_ifu;
    logic        arvalid_ifu, arready_ifu, rvalid_ifu, rready_ifu;
    logic [7:0]  arlen_ifu;
    logic [2:0]  arsize_ifu;
    logic [1:0]  arburst_ifu;


    // Arbiter Module
    arbiter arbiter_mod (
        .clk(clock), .rst(reset),
        .araddr_lsu(araddr_lsu), .arvalid_lsu(arvalid_lsu), .arready_lsu(arready_lsu), .rdata_lsu(rdata_lsu), .rresp_lsu(rresp_lsu), .rvalid_lsu(rvalid_lsu), .rready_lsu(rready_lsu),
        .awaddr_lsu(awaddr_lsu), .awvalid_lsu(awvalid_lsu), .awready_lsu(awready_lsu), .wdata_lsu(wdata_lsu), .wstrb_lsu(wstrb_lsu), .wvalid_lsu(wvalid_lsu), .wready_lsu(wready_lsu),
        .wlast_lsu(wlast_lsu), .bresp_lsu(bresp_lsu), .bvalid_lsu(bvalid_lsu), .bready_lsu(bready_lsu),
        .araddr_ifu(araddr_ifu), .arvalid_ifu(arvalid_ifu), .arready_ifu(arready_ifu), .arburst_ifu(arburst_ifu), .arsize_ifu(arsize_ifu), .arlen_ifu(arlen_ifu), .rvalid_ifu(rvalid_ifu), .rdata_ifu(rdata_ifu), .rready_ifu(rready_ifu), .rresp_ifu(rresp_ifu),
        
        // External Master Port Interconnections
        .araddr(io_master_araddr),
        .arvalid(io_master_arvalid),
        .arready(io_master_arready),
        .arlen(io_master_arlen),
        .arburst(io_master_arburst),
        .arsize(io_master_arsize),
        .rdata(io_master_rdata),
        .rresp(io_master_rresp),
        .rvalid(io_master_rvalid),
        .rready(io_master_rready),
        .rlast(io_master_rlast),
        .awaddr(io_master_awaddr),
        .awvalid(io_master_awvalid),
        .awready(io_master_awready),
        .wdata(io_master_wdata),
        .wstrb(io_master_wstrb),
        .wvalid(io_master_wvalid),
        .wready(io_master_wready),
        .wlast(io_master_wlast),
        .bresp(io_master_bresp),
        .bvalid(io_master_bvalid),
        .bready(io_master_bready)
    );

    // Unused Master Extensions
    assign io_master_awid    = 4'b0;
    assign io_master_awlen   = 8'b0;
    assign io_master_awsize  = 3'b0;
    assign io_master_awburst = 2'b0;
    assign io_master_arid    = 4'b0;

    // Entirely Unused Slave Output Interface
    assign io_slave_awready  = 1'b0;
    assign io_slave_wready   = 1'b0;
    assign io_slave_bvalid   = 1'b0;
    assign io_slave_bresp    = 2'b0;
    assign io_slave_bid      = 4'b0;
    assign io_slave_arready  = 1'b0;
    assign io_slave_rvalid   = 1'b0;
    assign io_slave_rresp    = 2'b0;
    assign io_slave_rdata    = 32'b0;
    assign io_slave_rlast    = 1'b0;
    assign io_slave_rid      = 4'b0;

    /* verilator lint_off UNUSED */
    logic [149:0] unused_signals;
    /* verilator lint_on UNUSED */

    assign unused_signals = {
        io_interrupt,
        io_master_bid,
        io_master_rid,
        io_slave_awvalid,
        io_slave_awaddr,
        io_slave_awid,
        io_slave_awlen,
        io_slave_awsize,
        io_slave_awburst,
        io_slave_wvalid,
        io_slave_wdata,
        io_slave_wstrb,
        io_slave_wlast,
        io_slave_bready,
        io_slave_arvalid,
        io_slave_araddr,
        io_slave_arid,
        io_slave_arlen,
        io_slave_arsize,
        io_slave_arburst,
        io_slave_rready, 1'b0
    };

endmodule

module if_de_pipeline(
    input logic clk,
    input logic rst,
    input logic flush,

    input logic [31:0] if_de_bus_pc_if,
    input logic [31:0] if_de_bus_next_pc_if,
    input logic [31:0] if_de_bus_opcode_if,
    input logic        if_de_valid_if,
    output logic       if_de_ready_if,

    input logic [3:0]  if_de_bus_mcause_if,
    input logic         if_de_bus_exception_if,
    input logic         if_de_bus_speculate_if,

    output logic [31:0] if_de_bus_pc_de,
    output logic [31:0] if_de_bus_next_pc_de,
    output logic [31:0] if_de_bus_opcode_de,
    output logic        if_de_valid_de,
    input logic         if_de_ready_de,

    output logic [3:0]  if_de_bus_mcause_de,
    output logic         if_de_bus_exception_de,
    output logic         if_de_bus_speculate_de
);

logic [31:0] if_de_bus_pc;
logic [31:0] if_de_bus_next_pc;
logic [31:0] if_de_bus_opcode;
logic        if_de_valid;

logic [3:0]  if_de_bus_mcause;
logic        if_de_bus_exception;
logic        if_de_bus_speculate;

assign if_de_ready_if = if_de_ready_de;

always_comb begin
    if_de_bus_pc_de=if_de_bus_pc;
    if_de_bus_next_pc_de=if_de_bus_next_pc;
    if_de_bus_opcode_de=if_de_bus_opcode;
    if_de_valid_de=if_de_valid;

    if_de_bus_mcause_de=if_de_bus_mcause;
    if_de_bus_exception_de=if_de_bus_exception;
    if_de_bus_speculate_de=if_de_bus_speculate;
end

always_ff @(posedge clk) begin
    if(rst || flush) begin
        if_de_bus_pc<=0;
        if_de_bus_next_pc<=0;
        if_de_bus_opcode<=0;
        if_de_valid<=0;

        if_de_bus_mcause<=0;
        if_de_bus_exception<=0;
        if_de_bus_speculate<=0;
    end else begin
        if(if_de_ready_if && if_de_valid_if) begin
            if_de_bus_pc<=if_de_bus_pc_if;
            if_de_bus_next_pc<=if_de_bus_next_pc_if;
            if_de_bus_opcode<=if_de_bus_opcode_if;

            if_de_bus_mcause<=if_de_bus_mcause_if;
            if_de_bus_exception<=if_de_bus_exception_if;
            if_de_bus_speculate<=if_de_bus_speculate_if;
        end
        if(if_de_ready_de) if_de_valid<=if_de_valid_if;
    end
end

endmodule

module de_ex_pipeline(
    input  logic clk,
    input  logic rst,
    input  logic flush,

    input  logic [31:0]opcode_in,
    output logic [31:0] opcode_out,

    // Decode stage inputs
    input  logic [31:0] de_ex_bus_pc_de,
    input  logic [31:0] de_ex_bus_next_pc_de,
    input  logic [31:0] de_ex_bus_imm_de,
    input  logic [31:0] de_ex_bus_data_rs1_de,
    input  logic [31:0] de_ex_bus_data_rs2_de,
    input  logic [31:0] de_ex_bus_data_csr_de,
    input  logic [7:0]  de_ex_bus_alu_op_de,
    input  logic        de_ex_bus_lsu_we_de,
    input  logic        de_ex_bus_lsu_re_de,
    input  logic [2:0]  de_ex_bus_lsu_oper_de,
    input  logic [4:0]  de_ex_bus_rd_de,
    input  logic [4:0]  de_ex_bus_rs1_de,
    input  logic [11:0]  de_ex_bus_csr_de,
    input  logic [1:0]  de_ex_bus_mux_select_de,
    input  logic        de_ex_bus_mux_select_pc_de,
    input  logic        de_ex_valid_de,
    output logic        de_ex_ready_de,

    input logic [3:0]  de_ex_bus_mcause_de,
    input logic         de_ex_bus_exception_de,
    input logic         de_ex_bus_speculate_de,

    input logic finish_de,

    // Execute stage outputs
    output logic [31:0] de_ex_bus_pc_ex,
    output logic [31:0] de_ex_bus_next_pc_ex,
    output logic [31:0] de_ex_bus_imm_ex,
    output logic [31:0] de_ex_bus_data_rs1_ex,
    output logic [31:0] de_ex_bus_data_rs2_ex,
    output logic [31:0] de_ex_bus_data_csr_ex,
    output logic [7:0]  de_ex_bus_alu_op_ex,
    output logic        de_ex_bus_lsu_we_ex,
    output logic        de_ex_bus_lsu_re_ex,
    output logic [2:0]  de_ex_bus_lsu_oper_ex,
    output logic [4:0]  de_ex_bus_rd_ex,
    output logic [4:0]  de_ex_bus_rs1_ex,
    output  logic [11:0]  de_ex_bus_csr_ex,
    output logic [1:0]  de_ex_bus_mux_select_ex,
    output logic        de_ex_bus_mux_select_pc_ex,
    output logic        de_ex_valid_ex,
    input  logic        de_ex_ready_ex,

    output logic [3:0]  de_ex_bus_mcause_ex,
    output logic         de_ex_bus_exception_ex,
    output logic         de_ex_bus_speculate_ex,

    output logic finish_ex
);

logic [31:0] de_ex_bus_pc;
logic [31:0] de_ex_bus_next_pc;
logic [31:0] de_ex_bus_imm;
logic [31:0] de_ex_bus_data_rs1;
logic [31:0] de_ex_bus_data_rs2;
logic [31:0] de_ex_bus_data_csr;
logic [7:0]  de_ex_bus_alu_op;
logic        de_ex_bus_lsu_we;
logic        de_ex_bus_lsu_re;
logic [2:0]  de_ex_bus_lsu_oper;
logic [4:0]  de_ex_bus_rd;
logic [4:0]  de_ex_bus_rs1;
logic [11:0] de_ex_bus_csr;
logic [1:0]  de_ex_bus_mux_select;
logic        de_ex_bus_mux_select_pc;
logic        de_ex_valid;
logic        finish;

logic [31:0] opcode;

logic [3:0]  de_ex_bus_mcause;
logic        de_ex_bus_exception;
logic        de_ex_bus_speculate;

assign de_ex_ready_de = de_ex_ready_ex;
always_comb begin
    opcode_out = opcode;

    de_ex_bus_pc_ex            = de_ex_bus_pc;
    de_ex_bus_next_pc_ex       = de_ex_bus_next_pc;
    de_ex_bus_imm_ex           = de_ex_bus_imm;
    de_ex_bus_data_rs1_ex      = de_ex_bus_data_rs1;
    de_ex_bus_data_rs2_ex      = de_ex_bus_data_rs2;
    de_ex_bus_data_csr_ex      = de_ex_bus_data_csr;
    de_ex_bus_alu_op_ex        = de_ex_bus_alu_op;
    de_ex_bus_lsu_we_ex        = de_ex_bus_lsu_we;
    de_ex_bus_lsu_re_ex        = de_ex_bus_lsu_re;
    de_ex_bus_lsu_oper_ex      = de_ex_bus_lsu_oper;
    de_ex_bus_rd_ex            = de_ex_bus_rd;
    de_ex_bus_rs1_ex           = de_ex_bus_rs1;
    de_ex_bus_csr_ex           = de_ex_bus_csr;
    de_ex_bus_mux_select_ex    = de_ex_bus_mux_select;
    de_ex_bus_mux_select_pc_ex = de_ex_bus_mux_select_pc;
    de_ex_valid_ex             = de_ex_valid;

    de_ex_bus_mcause_ex        = de_ex_bus_mcause;
    de_ex_bus_exception_ex     = de_ex_bus_exception;
    de_ex_bus_speculate_ex     = de_ex_bus_speculate;

    finish_ex = finish;
end

always_ff @(posedge clk) begin
    if (rst || flush) begin
        opcode <=0;

        de_ex_bus_pc            <= 0;
        de_ex_bus_next_pc       <= 0;
        de_ex_bus_imm           <= 0;
        de_ex_bus_data_rs1      <= 0;
        de_ex_bus_data_rs2      <= 0;
        de_ex_bus_data_csr      <= 0;
        de_ex_bus_alu_op        <= 0;
        de_ex_bus_lsu_we        <= 0;
        de_ex_bus_lsu_re        <= 0;
        de_ex_bus_lsu_oper      <= 0;
        de_ex_bus_rd            <= 0;
        de_ex_bus_rs1           <= 0;
        de_ex_bus_csr           <= 0;
        de_ex_bus_mux_select    <= 0;
        de_ex_bus_mux_select_pc <= 0;
        de_ex_valid             <= 0;

        de_ex_bus_mcause        <= 0;
        de_ex_bus_exception     <= 0;
        de_ex_bus_speculate     <= 0;

        finish<=0;
    end else begin
        if (de_ex_ready_de && de_ex_valid_de) begin
            opcode<=opcode_in;

            de_ex_bus_pc            <= de_ex_bus_pc_de;
            de_ex_bus_next_pc       <= de_ex_bus_next_pc_de;
            de_ex_bus_imm           <= de_ex_bus_imm_de;
            de_ex_bus_data_rs1      <= de_ex_bus_data_rs1_de;
            de_ex_bus_data_rs2      <= de_ex_bus_data_rs2_de;
            de_ex_bus_data_csr      <= de_ex_bus_data_csr_de;
            de_ex_bus_alu_op        <= de_ex_bus_alu_op_de;
            de_ex_bus_lsu_we        <= de_ex_bus_lsu_we_de;
            de_ex_bus_lsu_re        <= de_ex_bus_lsu_re_de;
            de_ex_bus_lsu_oper      <= de_ex_bus_lsu_oper_de;
            de_ex_bus_rd            <= de_ex_bus_rd_de;
            de_ex_bus_rs1           <= de_ex_bus_rs1_de;
            de_ex_bus_csr           <= de_ex_bus_csr_de;
            de_ex_bus_mux_select    <= de_ex_bus_mux_select_de;
            de_ex_bus_mux_select_pc <= de_ex_bus_mux_select_pc_de;

            de_ex_bus_mcause        <= de_ex_bus_mcause_de;
            de_ex_bus_exception     <= de_ex_bus_exception_de;
            de_ex_bus_speculate     <= de_ex_bus_speculate_de;

            finish<=finish_de;
        end
        if(de_ex_ready_ex) begin
            de_ex_valid             <= de_ex_valid_de;
            if(!de_ex_valid_de) begin
                de_ex_bus_rd           <= 0;
                de_ex_bus_csr          <= 0;
            end
        end
    end
end

endmodule

module ex_ls_pipeline(
    input  logic clk,
    input  logic rst,
    input  logic flush,

    input  logic [31:0]opcode_in,
    output logic [31:0] opcode_out,

    // Execute stage inputs
    input  logic [31:0] ex_ls_bus_pc_ex,
    input  logic [31:0] ex_ls_bus_next_pc_ex,
    input  logic [31:0] ex_ls_bus_alu_out_ex,
    input  logic [31:0] ex_ls_bus_data_rs2_ex,
    input  logic [31:0] ex_ls_bus_csr_out_ex,
    input  logic        ex_ls_bus_lsu_we_ex,
    input  logic        ex_ls_bus_lsu_re_ex,
    input  logic [2:0]  ex_ls_bus_lsu_oper_ex,
    input  logic [4:0]  ex_ls_bus_rd_ex,
    input  logic [11:0]  ex_ls_bus_csr_ex,
    input  logic [1:0]  ex_ls_bus_mux_select_ex,
    input  logic        ex_ls_bus_mux_select_pc_ex,
    input  logic        ex_ls_bus_branch_ex,
    input  logic        ex_ls_bus_diff_pc_ex,
    input  logic        ex_ls_valid_ex,
    output logic        ex_ls_ready_ex,

    input logic [3:0]  ex_ls_bus_mcause_ex,
    input logic         ex_ls_bus_exception_ex,
    input logic         ex_ls_bus_speculate_ex,

    input logic finish_ex,

    // Load/Store stage outputs
    output logic [31:0] ex_ls_bus_pc_ls,
    output logic [31:0] ex_ls_bus_next_pc_ls,
    output logic [31:0] ex_ls_bus_alu_out_ls,
    output logic [31:0] ex_ls_bus_data_rs2_ls,
    output logic [31:0] ex_ls_bus_csr_out_ls,
    output logic        ex_ls_bus_lsu_we_ls,
    output logic        ex_ls_bus_lsu_re_ls,
    output logic [2:0]  ex_ls_bus_lsu_oper_ls,
    output logic [4:0]  ex_ls_bus_rd_ls,
    output logic [11:0] ex_ls_bus_csr_ls,
    output logic [1:0]  ex_ls_bus_mux_select_ls,
    output logic        ex_ls_bus_mux_select_pc_ls,
    output logic        ex_ls_bus_branch_ls,
    output logic        ex_ls_bus_diff_pc_ls,
    output logic        ex_ls_valid_ls,
    input  logic        ex_ls_ready_ls,

    output logic [3:0]  ex_ls_bus_mcause_ls,
    output logic         ex_ls_bus_exception_ls,
    output logic         ex_ls_bus_speculate_ls,

    output logic finish_ls
);

logic [31:0] ex_ls_bus_pc;
logic [31:0] ex_ls_bus_next_pc;
logic [31:0] ex_ls_bus_alu_out;
logic [31:0] ex_ls_bus_data_rs2;
logic [31:0] ex_ls_bus_csr_out;
logic        ex_ls_bus_lsu_we;
logic        ex_ls_bus_lsu_re;
logic [2:0]  ex_ls_bus_lsu_oper;
logic [4:0]  ex_ls_bus_rd;
logic [11:0] ex_ls_bus_csr;
logic [1:0]  ex_ls_bus_mux_select;
logic        ex_ls_bus_mux_select_pc;
logic        ex_ls_bus_branch;
logic [31:0] ex_ls_bus_diff_pc;
logic        ex_ls_valid;

logic finish;

logic [31:0] opcode;

logic [3:0]  ex_ls_bus_mcause;
logic        ex_ls_bus_exception;
logic        ex_ls_bus_speculate;

assign ex_ls_ready_ex = ex_ls_ready_ls;

assign ex_ls_bus_pc_ls            = ex_ls_bus_pc;
assign ex_ls_bus_next_pc_ls       = ex_ls_bus_next_pc;
assign ex_ls_bus_alu_out_ls       = ex_ls_bus_alu_out;
assign ex_ls_bus_data_rs2_ls      = ex_ls_bus_data_rs2;
assign ex_ls_bus_csr_out_ls       = ex_ls_bus_csr_out;
assign ex_ls_bus_lsu_we_ls        = ex_ls_bus_lsu_we;
assign ex_ls_bus_lsu_re_ls        = ex_ls_bus_lsu_re;
assign ex_ls_bus_lsu_oper_ls      = ex_ls_bus_lsu_oper;
assign ex_ls_bus_rd_ls            = ex_ls_bus_rd;
assign ex_ls_bus_csr_ls           = ex_ls_bus_csr;
assign ex_ls_bus_mux_select_ls    = ex_ls_bus_mux_select;
assign ex_ls_bus_mux_select_pc_ls = ex_ls_bus_mux_select_pc;
assign ex_ls_bus_branch_ls        = ex_ls_bus_branch;
assign ex_ls_bus_diff_pc_ls       = ex_ls_bus_diff_pc;
assign ex_ls_valid_ls             = ex_ls_valid;
assign opcode_out = opcode;

assign ex_ls_bus_mcause_ls    = ex_ls_bus_mcause;
assign ex_ls_bus_exception_ls = ex_ls_bus_exception;
assign ex_ls_bus_speculate_ls = ex_ls_bus_speculate;

assign finish_ls = finish;

always_ff @(posedge clk) begin
    if (rst || flush) begin
        opcode<=0;

        ex_ls_bus_pc             <= '0;
        ex_ls_bus_next_pc       <= '0;
        ex_ls_bus_alu_out       <= '0;
        ex_ls_bus_data_rs2      <= '0;
        ex_ls_bus_csr_out       <= '0;
        ex_ls_bus_lsu_we        <= '0;
        ex_ls_bus_lsu_re        <= '0;
        ex_ls_bus_lsu_oper      <= '0;
        ex_ls_bus_rd            <= '0;
        ex_ls_bus_csr           <= '0;
        ex_ls_bus_mux_select    <= '0;
        ex_ls_bus_mux_select_pc <= '0;
        ex_ls_bus_branch        <= '0;
        ex_ls_bus_diff_pc       <= '0;
        ex_ls_valid             <= '0;

        ex_ls_bus_mcause        <= '0;
        ex_ls_bus_exception     <= '0;
        ex_ls_bus_speculate     <= '0;

        finish<=0;
    end else begin
        if (ex_ls_ready_ex && ex_ls_valid_ex) begin
            opcode<=opcode_in;

            ex_ls_bus_pc             <= ex_ls_bus_pc_ex;
            ex_ls_bus_next_pc       <= ex_ls_bus_next_pc_ex;
            ex_ls_bus_alu_out       <= ex_ls_bus_alu_out_ex;
            ex_ls_bus_data_rs2      <= ex_ls_bus_data_rs2_ex;
            ex_ls_bus_csr_out       <= ex_ls_bus_csr_out_ex;
            ex_ls_bus_lsu_we        <= ex_ls_bus_lsu_we_ex;
            ex_ls_bus_lsu_re        <= ex_ls_bus_lsu_re_ex;
            ex_ls_bus_lsu_oper      <= ex_ls_bus_lsu_oper_ex;
            ex_ls_bus_rd            <= ex_ls_bus_rd_ex;
            ex_ls_bus_csr           <= ex_ls_bus_csr_ex;
            ex_ls_bus_mux_select    <= ex_ls_bus_mux_select_ex;
            ex_ls_bus_mux_select_pc <= ex_ls_bus_mux_select_pc_ex;
            ex_ls_bus_branch        <= ex_ls_bus_branch_ex;
            ex_ls_bus_diff_pc       <= ex_ls_bus_diff_pc_ex;

            ex_ls_bus_mcause        <= ex_ls_bus_mcause_ex;
            ex_ls_bus_exception     <= ex_ls_bus_exception_ex;
            ex_ls_bus_speculate     <= ex_ls_bus_speculate_ex;

            finish<=finish_ex;
        end
        if(ex_ls_ready_ls) begin
            ex_ls_valid             <= ex_ls_valid_ex;
            if(!ex_ls_valid_ex) begin
                ex_ls_bus_rd        <=0;
                ex_ls_bus_lsu_we    <= 0;
                ex_ls_bus_lsu_re    <= 0;
                ex_ls_bus_csr       <= 0;
            end
        end
    end
end

endmodule

module ls_wb_pipeline(
    input  logic clk,
    input  logic rst,

    input  logic flush,

    input  logic [31:0]opcode_in,
    output logic [31:0] opcode_out,

    // Load/Store stage inputs
    input  logic [31:0] ls_wb_bus_pc_ls,
    input  logic [31:0] ls_wb_bus_alu_out_ls,
    input  logic [31:0] ls_wb_bus_next_pc_ls,
    input  logic [31:0] ls_wb_bus_csr_out_ls,
    input  logic [4:0]  ls_wb_bus_rd_ls,
    input  logic [11:0] ls_wb_bus_csr_ls,
    input  logic [1:0]  ls_wb_bus_mux_select_ls,
    input  logic        ls_wb_bus_mux_select_pc_ls,
    input  logic        ls_wb_bus_branch_ls,
    input  logic [31:0] ls_wb_bus_diff_pc_ls,
    input  logic        ls_wb_valid_ls,
    output logic        ls_wb_ready_ls,

    input logic [3:0]  ls_wb_bus_mcause_ls,
    input logic         ls_wb_bus_exception_ls,
    input logic         ls_wb_bus_speculate_ls,

    input logic finish_ls,

    // Writeback stage outputs
    output logic [31:0] ls_wb_bus_pc_wb,
    output logic [31:0] ls_wb_bus_alu_out_wb,
    output logic [31:0] ls_wb_bus_next_pc_wb,
    output logic [31:0] ls_wb_bus_csr_out_wb,
    output logic [4:0]  ls_wb_bus_rd_wb,
    output  logic [11:0]  ls_wb_bus_csr_wb,
    output logic [1:0]  ls_wb_bus_mux_select_wb,
    output logic        ls_wb_bus_mux_select_pc_wb,
    output logic        ls_wb_bus_branch_wb,
    output logic [31:0] ls_wb_bus_diff_pc_wb,
    output logic        ls_wb_valid_wb,
    input  logic        ls_wb_ready_wb,

    // Signals ready to be committed at WB (exception/CSR commit logic TBD)
    output logic [3:0]  ls_wb_bus_mcause_wb,
    output logic         ls_wb_bus_exception_wb,
    output logic         ls_wb_bus_speculate_wb,

    output logic finish_wb
);

logic [31:0] ls_wb_bus_pc;
logic [31:0] ls_wb_bus_alu_out;
logic [31:0] ls_wb_bus_next_pc;
logic [31:0] ls_wb_bus_csr_out;
logic [4:0]  ls_wb_bus_rd;
logic [11:0] ls_wb_bus_csr;
logic [1:0]  ls_wb_bus_mux_select;
logic        ls_wb_bus_mux_select_pc;
logic        ls_wb_bus_branch;
logic [31:0] ls_wb_bus_diff_pc;
logic        ls_wb_valid;

logic finish;

logic [31:0] opcode;

logic [3:0]  ls_wb_bus_mcause;
logic        ls_wb_bus_exception;
logic        ls_wb_bus_speculate;

assign ls_wb_ready_ls = ls_wb_ready_wb;

assign ls_wb_bus_pc_wb            = ls_wb_bus_pc;
assign ls_wb_bus_alu_out_wb       = ls_wb_bus_alu_out;
assign ls_wb_bus_next_pc_wb       = ls_wb_bus_next_pc;
assign ls_wb_bus_csr_out_wb       = ls_wb_bus_csr_out;
assign ls_wb_bus_rd_wb            = ls_wb_bus_rd;
assign ls_wb_bus_csr_wb           = ls_wb_bus_csr;
assign ls_wb_bus_mux_select_wb    = ls_wb_bus_mux_select;
assign ls_wb_bus_mux_select_pc_wb = ls_wb_bus_mux_select_pc;
assign ls_wb_bus_branch_wb        = ls_wb_bus_branch;
assign ls_wb_bus_diff_pc_wb       = ls_wb_bus_diff_pc;
assign ls_wb_valid_wb             = ls_wb_valid;

assign ls_wb_bus_mcause_wb    = ls_wb_bus_mcause;
assign ls_wb_bus_exception_wb = ls_wb_bus_exception;
assign ls_wb_bus_speculate_wb = ls_wb_bus_speculate;

assign finish_wb = finish;

assign opcode_out = opcode;

always_ff @(posedge clk) begin
    if (rst) begin
        ls_wb_bus_pc            <= '0;
        ls_wb_bus_alu_out       <= '0;
        ls_wb_bus_next_pc       <= '0;
        ls_wb_bus_csr_out       <= '0;
        ls_wb_bus_rd            <= '0;
        ls_wb_bus_csr           <= '0;
        ls_wb_bus_mux_select    <= '0;
        ls_wb_bus_mux_select_pc <= '0;
        ls_wb_bus_branch        <= '0;
        ls_wb_bus_diff_pc       <= '0;
        ls_wb_valid             <= '0;
        opcode<=0;
        finish<=0;

        ls_wb_bus_mcause        <= '0;
        ls_wb_bus_exception     <= '0;
        ls_wb_bus_speculate     <= '0;
    end else begin
        if (ls_wb_ready_ls && ls_wb_valid_ls) begin
            opcode<=opcode_in;
            ls_wb_bus_pc            <= ls_wb_bus_pc_ls;
            ls_wb_bus_alu_out       <= ls_wb_bus_alu_out_ls;
            ls_wb_bus_next_pc       <= ls_wb_bus_next_pc_ls;
            ls_wb_bus_csr_out       <= ls_wb_bus_csr_out_ls;
            ls_wb_bus_rd            <= ls_wb_bus_rd_ls;
            ls_wb_bus_csr           <= ls_wb_bus_csr_ls;
            ls_wb_bus_mux_select    <= ls_wb_bus_mux_select_ls;
            ls_wb_bus_mux_select_pc <= ls_wb_bus_mux_select_pc_ls;
            ls_wb_bus_branch        <= ls_wb_bus_branch_ls;
            ls_wb_bus_diff_pc       <= ls_wb_bus_diff_pc_ls;

            ls_wb_bus_mcause        <= ls_wb_bus_mcause_ls;
            ls_wb_bus_exception     <= ls_wb_bus_exception_ls;
            ls_wb_bus_speculate     <= ls_wb_bus_speculate_ls;

            finish<=finish_ls;
        end
        if(ls_wb_ready_wb) begin
            ls_wb_valid             <= ls_wb_valid_ls;
            if(!ls_wb_valid_ls) begin
                ls_wb_bus_csr<=0;
                ls_wb_bus_rd<=0;
            end
        end

        if(flush) begin
            ls_wb_bus_pc            <= '0;
            ls_wb_bus_alu_out       <= '0;
            ls_wb_bus_next_pc       <= '0;
            ls_wb_bus_csr_out       <= '0;
            ls_wb_bus_rd            <= '0;
            ls_wb_bus_mux_select    <= '0;
            ls_wb_bus_mux_select_pc <= '0;
            ls_wb_bus_branch        <= '0;
            ls_wb_bus_diff_pc       <= '0;
            ls_wb_valid             <= '0;
            opcode<=0;
            finish<=0;

            ls_wb_bus_mcause        <= '0;
            ls_wb_bus_exception     <= '0;
            ls_wb_bus_speculate     <= '0;
        end
    end
end

endmodule
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

    logic [31:0] pc /* verilator public */, opcode /* verilator public */, prev_pc /* verilator public */;
    logic reg_valid /* verilator public */, reg_valid_e /* verilator public */;

    logic if_id_valid /* verilator public */, ex_ls_valid /* verilator public */, ex_ls_ready /* verilator public */;
    logic branch /* verilator public */, branch_taken /* verilator public */, ex_ls_bus_lsu_we /* verilator public*/, ex_ls_bus_lsu_re /* verilator public*/;
    logic cache_hit/* verilator public */, cache_miss/* verilator public */,rst/* verilator public */;

    assign rst =reset;

    assign opcode = if_id_bus_opcode;

    logic [31:0] next_pc;

    // =========================================================================
    // Flattened Pipeline Interconnect Wires
    // =========================================================================
    
    // IF to ID Bus signals
    logic [31:0] if_id_bus_pc;
    logic [31:0] if_id_bus_next_pc;
    logic [31:0] if_id_bus_opcode;
    logic        if_id_ready; //valid declared as public

    logic [31:0] cache_addr, cache_opcode;
    logic cache_ready, cache_valid;

    // ID to EX Muxed/Forwarded Bus signals (fed to ALUs)
    logic [31:0] id_ex_bus_pc;
    logic [31:0] id_ex_bus_next_pc;
    logic [31:0] id_ex_bus_imm;
    logic [31:0] id_ex_bus_data_rs1;
    logic [31:0] id_ex_bus_data_rs2;
    logic [7:0]  id_ex_bus_alu_op;
    logic [2:0]  id_ex_bus_csr_oper;
    logic [4:0]  id_ex_bus_cause;
    logic        id_ex_bus_lsu_we;
    logic        id_ex_bus_lsu_re;
    logic [2:0]  id_ex_bus_lsu_oper;
    logic [4:0]  id_ex_bus_rd;
    logic [1:0]  id_ex_bus_mux_select;
    logic        id_ex_bus_mux_select_pc;
    logic        id_ex_valid, id_ex_ready;

    // EX to LS Bus signals (ALU Output Path)
    logic [31:0] ex_ls_bus_alu_next_pc;
    logic [31:0] ex_ls_bus_alu_alu_out;
    logic [31:0] ex_ls_bus_alu_data_rs2;
    logic        ex_ls_bus_alu_lsu_we;
    logic        ex_ls_bus_alu_lsu_re;
    logic [2:0]  ex_ls_bus_alu_lsu_oper;
    logic [4:0]  ex_ls_bus_alu_rd;
    logic [1:0]  ex_ls_bus_alu_mux_select;
    logic        ex_ls_bus_alu_mux_select_pc;
    logic        ex_ls_bus_alu_branch;

    // EX to LS Muxed Bus signals (Combined ALU + CSR)
    logic [31:0] ex_ls_bus_next_pc;
    logic [31:0] ex_ls_bus_alu_out;
    logic [31:0] ex_ls_bus_data_rs2;
    logic [31:0] ex_ls_bus_csr_out;
    // logic        ex_ls_bus_lsu_we; //declared as public
    // logic        ex_ls_bus_lsu_re;
    logic [2:0]  ex_ls_bus_lsu_oper;
    logic [4:0]  ex_ls_bus_rd;
    logic [1:0]  ex_ls_bus_mux_select;
    logic        ex_ls_bus_mux_select_pc;
    logic        ex_ls_bus_branch;
    // logic        ex_ls_valid, ex_ls_ready; //declared as public

    // LS to WB Bus signals
    logic [31:0] ls_wb_bus_alu_out;
    logic [31:0] ls_wb_bus_lsu_out;
    logic [31:0] ls_wb_bus_next_pc;
    logic [31:0] ls_wb_bus_csr_out;
    logic [4:0]  ls_wb_bus_rd;
    logic [1:0]  ls_wb_bus_mux_select;
    logic        ls_wb_bus_mux_select_pc;
    logic        ls_wb_valid, ls_wb_ready;

    logic [31:0] csr_data;

    // =========================================================================
    // Core Modules and Interconnect Logic
    // =========================================================================
    logic [31:0] pc_in;
    pc pc_mod (
        .clk(clock), 
        .rst(reset), 
        .branch(ex_ls_bus_branch), 
        .data_in(pc_in), 
        .pc(pc), 
        .next_pc(next_pc), 
        .valid(ls_wb_valid)
    );
    assign pc_in = ls_wb_bus_mux_select_pc ? ls_wb_bus_csr_out : ls_wb_bus_alu_out;

    // IFU Instance
    ifu ifu_mod (
        .pc(pc), .next_pc(next_pc),
        .bus_out_pc(if_id_bus_pc),
        .bus_out_next_pc(if_id_bus_next_pc),
        .bus_out_opcode(if_id_bus_opcode),
        .valid(if_id_valid), .ready(if_id_ready),
        .cache_addr(cache_addr), .cache_valid(cache_valid), .cache_opcode(cache_opcode), .cache_ready(cache_ready)
    );

    icache icache_mod(
        .clk(clock), .rst(reset),
        .ifu_addr(cache_addr), .valid(cache_valid), .opcode(cache_opcode), .ready(cache_ready),
        .araddr(araddr_ifu), .arvalid(arvalid_ifu), .arready(arready_ifu), 
        .arlen(arlen_ifu), .arsize(arsize_ifu), .arburst(arburst_ifu),

        .rdata(rdata_ifu), .rresp(rresp_ifu), .rvalid(rvalid_ifu), .rready(rready_ifu),
        
        .hit(cache_hit), .miss(cache_miss)
    );

    // ID Decoder Instance
    decode decode_mod (
        .bus_in_pc(if_id_bus_pc),
        .bus_in_next_pc(if_id_bus_next_pc),
        .bus_in_opcode(if_id_bus_opcode),
        .bus_out_pc(id_ex_bus_pc),
        .bus_out_next_pc(id_ex_bus_next_pc),
        .bus_out_imm(id_ex_bus_imm),
        .bus_out_rs1(id_ex_bus_rs1),
        .bus_out_rs2(id_ex_bus_rs2),
        .bus_out_alu_op(id_ex_bus_alu_op),
        .bus_out_csr_oper(id_ex_bus_csr_oper),
        .bus_out_cause(id_ex_bus_cause),
        .bus_out_lsu_we(id_ex_bus_lsu_we),
        .bus_out_lsu_re(id_ex_bus_lsu_re),
        .bus_out_lsu_oper(id_ex_bus_lsu_oper),
        .bus_out_rd(id_ex_bus_rd),
        .bus_out_mux_select(id_ex_bus_mux_select),
        .bus_out_mux_select_pc(id_ex_bus_mux_select_pc),
        .valid_left(if_id_valid), .ready_left(if_id_ready), 
        .valid_right(id_ex_valid), .ready_right(id_ex_ready)
    );

    // EXU Components
    logic id_ex_ready_alu, id_ex_ready_csr, ex_ls_valid_alu, ex_ls_valid_csr;

    // Structural wrapper connection for the ALU module block
    alu alu_mod (
        .bus_in_pc(id_ex_bus_pc),
        .bus_in_next_pc(id_ex_bus_next_pc),
        .bus_in_imm(id_ex_bus_imm),
        .bus_in_data_rs1(id_ex_bus_data_rs1),
        .bus_in_data_rs2(id_ex_bus_data_rs2),
        .bus_in_alu_op(id_ex_bus_alu_op),
        .bus_in_lsu_we(id_ex_bus_lsu_we),
        .bus_in_lsu_re(id_ex_bus_lsu_re),
        .bus_in_lsu_oper(id_ex_bus_lsu_oper),
        .bus_in_rd(id_ex_bus_rd),
        .bus_in_mux_select(id_ex_bus_mux_select),
        .bus_in_mux_select_pc(id_ex_bus_mux_select_pc),
        .bus_out_next_pc(ex_ls_bus_alu_next_pc),
        .bus_out_alu_out(ex_ls_bus_alu_alu_out),
        .bus_out_data_rs2(ex_ls_bus_alu_data_rs2),
        .bus_out_lsu_we(ex_ls_bus_alu_lsu_we),
        .bus_out_lsu_re(ex_ls_bus_alu_lsu_re),
        .bus_out_lsu_oper(ex_ls_bus_alu_lsu_oper),
        .bus_out_rd(ex_ls_bus_alu_rd),
        .bus_out_mux_select(ex_ls_bus_alu_mux_select),
        .bus_out_mux_select_pc(ex_ls_bus_alu_mux_select_pc),
        .bus_out_branch(ex_ls_bus_alu_branch),
        .valid_left(id_ex_valid), .ready_left(id_ex_ready_alu), 
        .valid_right(ex_ls_valid_alu), .ready_right(ex_ls_ready),

        .branch(branch), .branch_taken(branch_taken)
    );

    logic [31:0] csr_in;
    csr csr_mod (
        .clk(clock), .rst(reset), .oper(id_ex_bus_csr_oper[1:0]), .addr(id_ex_bus_imm[11:0]),
        .data_in(csr_in), .data_out(csr_data), .pc(pc), .cause(id_ex_bus_cause), 
        .valid_left(id_ex_valid), .ready_left(id_ex_ready_csr), 
        .valid_right(ex_ls_valid_csr), .ready_right(ex_ls_ready)
    );

    always_comb begin
        // Splice structural ALU variables with synchronous execution states from CSRs
        ex_ls_bus_next_pc       = ex_ls_bus_alu_next_pc;
        ex_ls_bus_alu_out       = ex_ls_bus_alu_alu_out;
        ex_ls_bus_data_rs2      = ex_ls_bus_alu_data_rs2;
        ex_ls_bus_lsu_we        = ex_ls_bus_alu_lsu_we;
        ex_ls_bus_lsu_re        = ex_ls_bus_alu_lsu_re;
        ex_ls_bus_lsu_oper      = ex_ls_bus_alu_lsu_oper;
        ex_ls_bus_rd            = ex_ls_bus_alu_rd;
        ex_ls_bus_mux_select    = ex_ls_bus_alu_mux_select;
        ex_ls_bus_mux_select_pc = ex_ls_bus_alu_mux_select_pc;
        ex_ls_bus_branch        = ex_ls_bus_alu_branch;
        
        ex_ls_bus_csr_out       = csr_data;
    end

    assign id_ex_ready = id_ex_ready_alu & id_ex_ready_csr;
    assign ex_ls_valid = ex_ls_valid_alu & ex_ls_valid_csr;

    // LSU Instance
    lsu lsu_mod (
        .clk(clock), .rst(reset), 
        .bus_in_next_pc(ex_ls_bus_next_pc),
        .bus_in_alu_out(ex_ls_bus_alu_out),
        .bus_in_data_rs2(ex_ls_bus_data_rs2),
        .bus_in_csr_out(ex_ls_bus_csr_out),
        .bus_in_lsu_we(ex_ls_bus_lsu_we),
        .bus_in_lsu_re(ex_ls_bus_lsu_re),
        .bus_in_lsu_oper(ex_ls_bus_lsu_oper),
        .bus_in_rd(ex_ls_bus_rd),
        .bus_in_mux_select(ex_ls_bus_mux_select),
        .bus_in_mux_select_pc(ex_ls_bus_mux_select_pc),
        .bus_in_branch(ex_ls_bus_branch),
        .bus_out_alu_out(ls_wb_bus_alu_out),
        .bus_out_lsu_out(ls_wb_bus_lsu_out),
        .bus_out_next_pc(ls_wb_bus_next_pc),
        .bus_out_csr_out(ls_wb_bus_csr_out),
        .bus_out_rd(ls_wb_bus_rd),
        .bus_out_mux_select(ls_wb_bus_mux_select),
        .bus_out_mux_select_pc(ls_wb_bus_mux_select_pc),
        .valid_left(ex_ls_valid), .ready_left(ex_ls_ready), 
        .valid_right(ls_wb_valid), .ready_right(ls_wb_ready),
        .araddr(araddr_lsu), .arvalid(arvalid_lsu), .arready(arready_lsu), 
        .rdata(rdata_lsu), .rresp(rresp_lsu), .rvalid(rvalid_lsu), .rready(rready_lsu),
        .awaddr(awaddr_lsu), .awvalid(awvalid_lsu), .awready(awready_lsu), 
        .wdata(wdata_lsu), .wstrb(wstrb_lsu), .wvalid(wvalid_lsu), .wready(wready_lsu), .wlast(wlast_lsu),
        .bresp(bresp_lsu), .bvalid(bvalid_lsu), .bready(bready_lsu)
    );

    // WB / Regfile Instance
    logic [31:0] reg_data_rs1, reg_data_rs2, reg_in;
    regs reg_mod (
        .clk(clock), .rst(reset), .data_in(reg_in), 
        .rs1(id_ex_bus_rs1), .rs2(id_ex_bus_rs2), .rd(ls_wb_bus_rd), 
        .data_rs1(reg_data_rs1), .data_rs2(reg_data_rs2), 
        .valid(ls_wb_valid), .ready(ls_wb_ready)
    );

    assign reg_valid_e = ls_wb_valid;
    
    always_ff @(posedge clock) begin
        if (reset) begin
            reg_valid <= 1'b0;
            prev_pc   <= 32'b0;
        end else begin
            reg_valid <= reg_valid_e;
            prev_pc   <= pc;
        end
    end

    always_comb begin

        // Apply dynamically updated Register File states
        id_ex_bus_data_rs1      = reg_data_rs1;
        id_ex_bus_data_rs2      = reg_data_rs2;

        case(ls_wb_bus_mux_select)
            2'b00: reg_in = ls_wb_bus_alu_out;
            2'b01: reg_in = ls_wb_bus_lsu_out;
            2'b10: reg_in = ls_wb_bus_next_pc;
            2'b11: reg_in = ls_wb_bus_csr_out;
        endcase
    end

    assign csr_in = id_ex_bus_csr_oper[2] ? {27'b0, id_ex_bus_rs1} : id_ex_bus_data_rs1;

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

    // -------------------------------------------------------------------------
    // Unused Top-level Outputs (Assigned to Constant 0)
    // -------------------------------------------------------------------------
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

    // -------------------------------------------------------------------------
    // Unused Top-level Inputs (Combined into a dummy vector to prevent Lint errors)
    // -------------------------------------------------------------------------
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
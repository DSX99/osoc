module osoc_26000003_func (
    input  logic         clock,
    input  logic         reset
);

    logic [31:0] pc /* verilator public */, opcode /* verilator public */, prev_pc /* verilator public */;
    logic reg_valid /* verilator public */, reg_valid_e /* verilator public */, lsu_device_call /* verilator public */;

    assign opcode = if_id_bus_opcode;

    logic [31:0] next_pc;

    // =========================================================================
    // Flattened Pipeline Interconnect Wires
    // =========================================================================
    
    // IF to ID Bus signals
    logic [31:0] if_id_bus_pc;
    logic [31:0] if_id_bus_next_pc;
    logic [31:0] if_id_bus_opcode;
    logic        if_id_valid, if_id_ready;

    // ID to EX Decoded Bus signals
    logic [31:0] id_ex_bus_decoded_pc;
    logic [31:0] id_ex_bus_decoded_next_pc;
    logic [31:0] id_ex_bus_decoded_imm;
    logic [31:0] id_ex_bus_decoded_data_rs1;
    logic [31:0] id_ex_bus_decoded_data_rs2;
    logic [4:0]  id_ex_bus_decoded_rs1;
    logic [4:0]  id_ex_bus_decoded_rs2;
    logic [7:0]  id_ex_bus_decoded_alu_op;
    logic        id_ex_bus_decoded_branch_en;
    logic [2:0]  id_ex_bus_decoded_csr_oper;
    logic [4:0]  id_ex_bus_decoded_cause;
    logic        id_ex_bus_decoded_lsu_we;
    logic        id_ex_bus_decoded_lsu_re;
    logic [2:0]  id_ex_bus_decoded_lsu_oper;
    logic [4:0]  id_ex_bus_decoded_rd;
    logic [1:0]  id_ex_bus_decoded_mux_select;
    logic        id_ex_bus_decoded_mux_select_pc;

    // ID to EX Muxed/Forwarded Bus signals (fed to ALUs)
    logic [31:0] id_ex_bus_pc;
    logic [31:0] id_ex_bus_next_pc;
    logic [31:0] id_ex_bus_imm;
    logic [31:0] id_ex_bus_data_rs1;
    logic [31:0] id_ex_bus_data_rs2;
    logic [4:0]  id_ex_bus_rs1;
    logic [4:0]  id_ex_bus_rs2;
    logic [7:0]  id_ex_bus_alu_op;
    logic        id_ex_bus_branch_en;
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
    logic [31:0] ex_ls_bus_alu_csr_out;
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
    logic        ex_ls_bus_lsu_we;
    logic        ex_ls_bus_lsu_re;
    logic [2:0]  ex_ls_bus_lsu_oper;
    logic [4:0]  ex_ls_bus_rd;
    logic [1:0]  ex_ls_bus_mux_select;
    logic        ex_ls_bus_mux_select_pc;
    logic        ex_ls_bus_branch;
    logic        ex_ls_valid, ex_ls_ready;

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
        .clk(clock), .rst(reset), .pc(pc), .next_pc(next_pc),
        .bus_out_pc(if_id_bus_pc),
        .bus_out_next_pc(if_id_bus_next_pc),
        .bus_out_opcode(if_id_bus_opcode),
        .valid(if_id_valid), .ready(if_id_ready),
        .araddr(araddr_ifu), .arvalid(arvalid_ifu), .arready(arready_ifu), 
        .rdata(rdata_ifu), .rresp(rresp_ifu), .rvalid(rvalid_ifu), .rready(rready_ifu)
    );

    // ID Decoder Instance
    decode decode_mod (
        .bus_in_pc(if_id_bus_pc),
        .bus_in_next_pc(if_id_bus_next_pc),
        .bus_in_opcode(if_id_bus_opcode),
        .bus_out_pc(id_ex_bus_decoded_pc),
        .bus_out_next_pc(id_ex_bus_decoded_next_pc),
        .bus_out_imm(id_ex_bus_decoded_imm),
        .bus_out_data_rs1(id_ex_bus_decoded_data_rs1),
        .bus_out_data_rs2(id_ex_bus_decoded_data_rs2),
        .bus_out_rs1(id_ex_bus_decoded_rs1),
        .bus_out_rs2(id_ex_bus_decoded_rs2),
        .bus_out_alu_op(id_ex_bus_decoded_alu_op),
        .bus_out_branch_en(id_ex_bus_decoded_branch_en),
        .bus_out_csr_oper(id_ex_bus_decoded_csr_oper),
        .bus_out_cause(id_ex_bus_decoded_cause),
        .bus_out_lsu_we(id_ex_bus_decoded_lsu_we),
        .bus_out_lsu_re(id_ex_bus_decoded_lsu_re),
        .bus_out_lsu_oper(id_ex_bus_decoded_lsu_oper),
        .bus_out_rd(id_ex_bus_decoded_rd),
        .bus_out_mux_select(id_ex_bus_decoded_mux_select),
        .bus_out_mux_select_pc(id_ex_bus_decoded_mux_select_pc),
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
        .bus_in_rs1(id_ex_bus_rs1),
        .bus_in_rs2(id_ex_bus_rs2),
        .bus_in_alu_op(id_ex_bus_alu_op),
        .bus_in_branch_en(id_ex_bus_branch_en),
        .bus_in_csr_oper(id_ex_bus_csr_oper),
        .bus_in_cause(id_ex_bus_cause),
        .bus_in_lsu_we(id_ex_bus_lsu_we),
        .bus_in_lsu_re(id_ex_bus_lsu_re),
        .bus_in_lsu_oper(id_ex_bus_lsu_oper),
        .bus_in_rd(id_ex_bus_rd),
        .bus_in_mux_select(id_ex_bus_mux_select),
        .bus_in_mux_select_pc(id_ex_bus_mux_select_pc),
        .bus_out_next_pc(ex_ls_bus_alu_next_pc),
        .bus_out_alu_out(ex_ls_bus_alu_alu_out),
        .bus_out_data_rs2(ex_ls_bus_alu_data_rs2),
        .bus_out_csr_out(ex_ls_bus_alu_csr_out),
        .bus_out_lsu_we(ex_ls_bus_alu_lsu_we),
        .bus_out_lsu_re(ex_ls_bus_alu_lsu_re),
        .bus_out_lsu_oper(ex_ls_bus_alu_lsu_oper),
        .bus_out_rd(ex_ls_bus_alu_rd),
        .bus_out_mux_select(ex_ls_bus_alu_mux_select),
        .bus_out_mux_select_pc(ex_ls_bus_alu_mux_select_pc),
        .bus_out_branch(ex_ls_bus_alu_branch),
        .valid_left(id_ex_valid), .ready_left(id_ex_ready_alu), 
        .valid_right(ex_ls_valid_alu), .ready_right(ex_ls_ready)
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
        .wdata(wdata_lsu), .wstrb(wstrb_lsu), .wvalid(wvalid_lsu), .wready(wready_lsu), 
        .bresp(bresp_lsu), .bvalid(bvalid_lsu), .bready(bready_lsu), .lsu_device_call(lsu_device_call)
    );

    // WB / Regfile Instance
    logic [31:0] reg_data_rs1, reg_data_rs2, reg_in;
    regs reg_mod (
        .clk(clock), .rst(reset), .data_in(reg_in), 
        .rs1(id_ex_bus_decoded_rs1), .rs2(id_ex_bus_decoded_rs2), .rd(ls_wb_bus_rd), 
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
        // Route decoded variables cleanly down to individual module ports
        id_ex_bus_pc            = id_ex_bus_decoded_pc;
        id_ex_bus_next_pc       = id_ex_bus_decoded_next_pc;
        id_ex_bus_imm           = id_ex_bus_decoded_imm;
        id_ex_bus_rs1           = id_ex_bus_decoded_rs1;
        id_ex_bus_rs2           = id_ex_bus_decoded_rs2;
        id_ex_bus_alu_op        = id_ex_bus_decoded_alu_op;
        id_ex_bus_branch_en     = id_ex_bus_decoded_branch_en;
        id_ex_bus_csr_oper      = id_ex_bus_decoded_csr_oper;
        id_ex_bus_cause         = id_ex_bus_decoded_cause;
        id_ex_bus_lsu_we        = id_ex_bus_decoded_lsu_we;
        id_ex_bus_lsu_re        = id_ex_bus_decoded_lsu_re;
        id_ex_bus_lsu_oper      = id_ex_bus_decoded_lsu_oper;
        id_ex_bus_rd            = id_ex_bus_decoded_rd;
        id_ex_bus_mux_select    = id_ex_bus_decoded_mux_select;
        id_ex_bus_mux_select_pc = id_ex_bus_decoded_mux_select_pc;

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
    logic        awvalid_lsu, awready_lsu, wvalid_lsu, wready_lsu, bvalid_lsu, bready_lsu;

    logic [31:0] araddr_ifu, rdata_ifu;
    logic [1:0]  rresp_ifu;
    logic        arvalid_ifu, arready_ifu, rvalid_ifu, rready_ifu;

    logic         awready_arbiter;
    logic         awvalid_arbiter;
    logic [31:0]  awaddr_arbiter;
    logic         wready_arbiter;
    logic         wvalid_arbiter;
    logic [31:0]  wdata_arbiter;
    logic [3:0]   wstrb_arbiter;
    logic         bready_arbiter;
    logic         bvalid_arbiter;
    logic [1:0]   bresp_arbiter;
    logic         arready_arbiter;
    logic         arvalid_arbiter;
    logic [31:0]  araddr_arbiter;
    logic         rready_arbiter;
    logic         rvalid_arbiter;
    logic [1:0]   rresp_arbiter;
    logic [31:0]  rdata_arbiter;

    // Arbiter Module
    arbiter arbiter_mod (
        .clk(clock), .rst(reset),
        .araddr_lsu(araddr_lsu), .arvalid_lsu(arvalid_lsu), .arready_lsu(arready_lsu), .rdata_lsu(rdata_lsu), .rresp_lsu(rresp_lsu), .rvalid_lsu(rvalid_lsu), .rready_lsu(rready_lsu),
        .awaddr_lsu(awaddr_lsu), .awvalid_lsu(awvalid_lsu), .awready_lsu(awready_lsu), .wdata_lsu(wdata_lsu), .wstrb_lsu(wstrb_lsu), .wvalid_lsu(wvalid_lsu), .wready_lsu(wready_lsu), .bresp_lsu(bresp_lsu), .bvalid_lsu(bvalid_lsu), .bready_lsu(bready_lsu),
        .araddr_ifu(araddr_ifu), .arvalid_ifu(arvalid_ifu), .arready_ifu(arready_ifu), .rvalid_ifu(rvalid_ifu), .rdata_ifu(rdata_ifu), .rready_ifu(rready_ifu), .rresp_ifu(rresp_ifu),
        
        // External Master Port Interconnections
        .araddr(araddr_arbiter),
        .arvalid(arvalid_arbiter),
        .arready(arready_arbiter),
        .rdata(rdata_arbiter),
        .rresp(rresp_arbiter),
        .rvalid(rvalid_arbiter),
        .rready(rready_arbiter),
        .awaddr(awaddr_arbiter),
        .awvalid(awvalid_arbiter),
        .awready(awready_arbiter),
        .wdata(wdata_arbiter),
        .wstrb(wstrb_arbiter),
        .wvalid(wvalid_arbiter),
        .wready(wready_arbiter),
        .bresp(bresp_arbiter),
        .bvalid(bvalid_arbiter),
        .bready(bready_arbiter)
    );

    axi_slave_lsu axi_slave_lsu_mod (
        .clk(clock), .rst(reset), .araddr(araddr_arbiter), .arvalid(arvalid_arbiter), .arready(arready_arbiter), .rdata(rdata_arbiter), .rresp(rresp_arbiter), .rvalid(rvalid_arbiter), .rready(rready_arbiter),
        .awaddr(awaddr_arbiter), .awvalid(awvalid_arbiter), .awready(awready_arbiter), .wdata(wdata_arbiter), .wstrb(wstrb_arbiter), .wvalid(wvalid_arbiter), .wready(wready_arbiter), .bresp(bresp_arbiter), .bvalid(bvalid_arbiter), .bready(bready_arbiter)
    );
endmodule
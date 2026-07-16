module decode (
    input logic [31:0] bus_in_pc,            
    input logic [31:0] bus_in_next_pc,        
    input logic [31:0] bus_in_opcode,        

    input logic [3:0]  bus_in_mcause,
    input logic         bus_in_exception,
    input logic         bus_in_speculate,

    input logic [31:0]  bus_in_data_rs1,
    input logic [31:0]  bus_in_data_rs2,
 
    output logic [31:0] bus_out_pc,            
    output logic [31:0] bus_out_next_pc,       

    output logic [3:0]  bus_out_mcause,
    output logic        bus_out_exception,
    output logic        bus_out_speculate,

    output logic [31:0] bus_out_imm,            
    output logic [4:0]  bus_out_rs1,
    output logic [4:0]  bus_out_rs2,     
    output logic [4:0]  bus_out_data_rs1,
    output logic [4:0]  bus_out_data_rs2,
    output logic [11:0]  bus_out_csr,
    output logic [7:0]  bus_out_alu_op,
    output logic        bus_out_lsu_we,
    output logic        bus_out_lsu_re,
    output logic [2:0]  bus_out_lsu_oper,
    output logic [4:0]  bus_out_rd,
    output logic [1:0]  bus_out_mux_select,
    output logic        bus_out_mux_select_pc,

    input  logic valid_left, ready_right,
    output logic ready_left, valid_right,

    input  logic [4:0] ex_rd,
    input  logic [4:0] ls_rd,
    input  logic [4:0] wb_rd,

    input  logic [31:0] ex_rd_data,
    input  logic [31:0] ls_rd_data,
    input  logic [31:0] wb_rd_data,

    input  logic  ex_valid,
    input  logic  ls_valid,
    input  logic  wb_valid,

    input logic [11:0] ex_csr,
    input logic [11:0] ls_csr,
    input logic [11:0] wb_csr,

    output logic finish
);

    logic [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
    logic [6:0]  func7;
    logic [4:0]  rs1_val, rs2_val, rd_val;
    logic [2:0]  func3;
    
    logic [31:0] inst;

    assign inst    = bus_in_opcode;
    assign imm_i   = {{21{inst[31]}}, inst[30:20]};
    assign imm_s   = {{21{inst[31]}}, inst[30:25], inst[11:7]};
    assign imm_b   = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign imm_u   = {inst[31:12], 12'b0};
    assign imm_j   = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0};

    assign rs1_val = inst[19:15];
    assign rs2_val = inst[24:20];
    assign rd_val  = inst[11:7];
    assign func3   = inst[14:12];
    assign func7   = inst[31:25];

    // alu_op[7] = change rs2_val to imm
    // alu_op[6] = change rs1_val to pc
    // alu_op[5:3] branch or arithmetics (5:4): 11-csr, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    // alu_op[2:0] directly operation, alu_op[2:0] copied from instr

    logic ex_match;
    logic ls_match;
    logic wb_match;

    assign ex_match_rs1 = (ex_rd == bus_out_rs1) && (ex_rd!=0);
    assign ls_match_rs1 = (ls_rd == bus_out_rs1) && (ls_rd!=0);
    assign wb_match_rs1 = (wb_rd == bus_out_rs1) && (wb_rd!=0);

    assign ex_match_rs2 = (ex_rd == bus_out_rs2) && (ex_rd!=0);
    assign ls_match_rs2 = (ls_rd == bus_out_rs2) && (ls_rd!=0);
    assign wb_match_rs2 = (wb_rd == bus_out_rs2) && (wb_rd!=0);

    logic reg_match;
//
    assign reg_match = ((ex_match && !ex_valid) | (ls_match && !ls_valid) | (wb_match && !wb_valid)) | (|ex_csr | |ls_csr | |wb_csr);

    always_comb begin
        valid_right = valid_left & !reg_match;
        ready_left  = ready_right & !reg_match;
//
        bus_out_data_rs1 = bus_in_data_rs1;
        bus_out_data_rs2 = bus_in_data_rs2;

        if(wb_match_rs1 && wb_valid) bus_out_data_rs1 = wb_rd_data;
        if(ls_match_rs1 && ls_valid) bus_out_data_rs1 = ls_rd_data;
        if(ex_match_rs1 && ex_valid) bus_out_data_rs1 = ex_rd_data;

        if(wb_match_rs2 && wb_valid) bus_out_data_rs2 = wb_rd_data;
        if(ls_match_rs2 && ls_valid) bus_out_data_rs2 = ls_rd_data;
        if(ex_match_rs2 && ex_valid) bus_out_data_rs2 = ex_rd_data;


        bus_out_speculate = bus_in_speculate;
        bus_out_exception = bus_in_exception;
        bus_out_mcause = bus_in_mcause; 

        // Initialize all explicit output bus signals to default state ('0)
        bus_out_pc            = bus_in_pc;
        bus_out_next_pc       = bus_in_next_pc;

        bus_out_imm           = '0;
        bus_out_rs1           = '0;
        bus_out_rs2           = '0;
        bus_out_csr           = '0;
        bus_out_alu_op        = '0;
        bus_out_lsu_we        = '0;
        bus_out_lsu_re        = '0;
        bus_out_lsu_oper      = '0;
        bus_out_rd            = '0;
        bus_out_mux_select    = '0;
        bus_out_mux_select_pc = '0;

        finish = 0;

        case(inst[6:0])
            7'b0110111: begin // LUI
                bus_out_rd     = rd_val;
                bus_out_imm    = imm_u;
                bus_out_alu_op = 8'b10000000;
            end           
            7'b0010111: begin // AUIPC
                bus_out_rd     = rd_val;
                bus_out_imm    = imm_u;
                bus_out_alu_op = 8'b11000000;
            end
            7'b1101111: begin // JAL
                bus_out_rd         = rd_val;
                bus_out_imm        = imm_j;
                bus_out_alu_op     = 8'b11010000;
                bus_out_mux_select = 2'b10;
            end            
            7'b1100111: begin // JALR
                bus_out_rd         = rd_val;
                bus_out_rs1        = rs1_val;
                bus_out_rs2        = rs1_val;
                bus_out_imm        = imm_i;
                bus_out_alu_op     = 8'b10010000;
                bus_out_mux_select = 2'b10;
            end
            7'b1100011: begin // BRANCH (BEQ, BNE, BLT, BGE, BLTU, BGEU)
                bus_out_rs1       = rs1_val;
                bus_out_rs2       = rs2_val;
                bus_out_imm       = imm_b;
                bus_out_alu_op    = {5'b11010, func3};
            end
            7'b0000011: begin // LOAD (LB, LH, LW, LBU, LHU)
                bus_out_rd         = rd_val;
                bus_out_rs1        = rs1_val;
                bus_out_imm        = imm_i;
                bus_out_alu_op     = 8'b10000000;          
                bus_out_lsu_oper   = func3;
                bus_out_lsu_re     = 1'b1;
            end
            7'b0100011: begin // STORE (SB, SH, SW)
                bus_out_rs1        = rs1_val;
                bus_out_rs2        = rs2_val;
                bus_out_imm        = imm_s;
                bus_out_alu_op     = 8'b10000000; // Address = RS1 + Imm          
                bus_out_lsu_oper   = func3;
                bus_out_lsu_we     = 1'b1;
            end
            7'b0010011: begin // OP-IMM (ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI)
                bus_out_rd  = rd_val;
                bus_out_rs1 = rs1_val;
                bus_out_imm = imm_i;
                if(func3==3'b001 && |func7) begin
                    bus_out_exception = 1; //raise exception
                    bus_out_mcause = 2;
                end
                if(func3==3'b101) begin
                    bus_out_alu_op = {4'b1000, inst[30], func3};
                    if(inst[31]|(|inst[29:25])) begin
                        bus_out_exception = 1; //raise exception
                        bus_out_mcause = 2;
                    end
                end
                else bus_out_alu_op = {5'b10000, func3};
            end
            7'b0110011: begin // OP (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND)
                bus_out_rd     = rd_val;
                bus_out_rs1    = rs1_val;
                bus_out_rs2    = rs2_val;
                bus_out_alu_op = {2'b00, inst[25], 1'b0, inst[30], func3}; // inst[30] splits ADD/SUB and SRL/SRA
                if(inst[25] && inst[30]) begin
                    bus_out_exception = 1; //raise exception
                    bus_out_mcause = 2;
                end
                if(inst[31]|(|inst[29:26])) begin
                    bus_out_exception = 1; //raise exception
                    bus_out_mcause = 2;
                end
            end
            7'b1110011: begin // SYSTEM (ECALL, EBREAK) + CSR
                bus_out_rd         = rd_val;
                bus_out_rs1        = rs1_val;
                bus_out_csr        = imm_i[11:0];
                bus_out_mux_select = 2'b11;
                bus_out_alu_op    = {5'b00110, func3};
                case(func3)
                    3'b000: begin
                        if(!(|func7) && rs2_val==1) begin //ebreak
                            finish=1;
                            bus_out_exception = 1; //raise exception (ebreak)
                            bus_out_mcause = 3;
                        end else if(!(|func7 | |rs2_val)) begin // ecall
                            bus_out_exception = 1; //raise exception (ecall)
                            bus_out_mcause = 11;
                            bus_out_alu_op        = 8'b10010000;
                            bus_out_mux_select_pc = 1'b1;
                        end else if(func7 == 7'b0011000 && rs2_val == 5'b00010) begin //mret
                            bus_out_alu_op        = 8'b10010000;
                            bus_out_mux_select_pc = 1'b1;
                            bus_out_csr           = {12'h341};
                        end else begin
                            bus_out_exception = 1; //raise exception
                            bus_out_mcause = 2;
                        end
                    end
                    default: begin  // csr oper
                        bus_out_alu_op    = {5'b00110, func3};
                    end
                endcase 
            end
            default: ;
        endcase


        if(bus_in_exception) begin
            bus_out_rd = 0;
            bus_out_exception = bus_in_exception;
            bus_out_mcause = bus_in_mcause;             
        end
    end

endmodule
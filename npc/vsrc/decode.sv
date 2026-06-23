module decode(
    input logic [31:0] inst,
    output logic [31:0] imm,
    output logic [7:0] alu_op,
    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic [4:0] rd,
    output logic lsu_we,
    output logic lsu_le,
    output logic [1:0] mux_select,
    output logic [2:0] lsu_oper,
    output logic [2:0] csr_oper,
    output logic [4:0] cause,
    output logic [1:0] mux_select_pc
);

    logic [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
    logic [6:0] func7;
    logic [4:0] rs1_val, rs2_val, rd_val;
    logic [2:0] func3;
    
    assign imm_i = {{21{inst[31]}},inst[30:20]};
    assign imm_s = {{21{inst[31]}},inst[30:25],inst[11:7]};
    assign imm_b = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
    assign imm_u = {inst[31:12], 12'b0};
    assign imm_j = {{12{inst[31]}},inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0};

    assign rs1_val = inst[19:15];
    assign rs2_val = inst[24:20];
    assign rd_val = inst[11:7];
    assign func3 = inst[14:12];
    assign func7 = inst[31:25];

    //alu_op[7] = change rs2_val to imm
    //alu_op[6] = change rs1_val to pc
    //alu_op[5:3] branch or arithmetics (5:4): 11-atomic, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    //alu_op[2:0] directly operation, alu_op[2:0] copied from instr

    always_comb begin
        rs1         = 5'b0;
        rs2         = 5'b0;
        rd          = 5'b0;
        lsu_oper    = 3'b0;
        alu_op      = 8'b0;
        imm         = 32'b0;
        lsu_we      = 1'b0;
        lsu_le      = 1'b0;
        mux_select  = 2'b0;
        mux_select_pc= 2'b0;
        cause       = 5'b0;
        csr_oper    = 3'b0;

        case(inst[6:0])
            7'b0110111: begin // LUI
                rd     = rd_val;
                imm    = imm_u;
                alu_op = 8'b10000000;
            end           
            7'b0010111: begin // AUIPC
                rd     = rd_val;
                imm    = imm_u;
                alu_op = 8'b11000000;
            end
            7'b1101111: begin // JAL
                rd     = rd_val;
                imm    = imm_j;
                alu_op = 8'b11010000;
                mux_select = 2'b10;
            end            
            7'b1100111: begin // JALR
                rd     = rd_val;
                rs1    = rs1_val;
                rs2    = rs1_val;
                imm    = imm_i;
                alu_op = 8'b10010000;
                mux_select = 2'b10;
            end
            7'b1100011: begin // BRANCH (BEQ, BNE, BLT, BGE, BLTU, BGEU)
                rs1    = rs1_val;
                rs2    = rs2_val;
                imm    = imm_b;
                alu_op = {5'b11010, func3}; 
            end
            7'b0000011: begin // LOAD (LB, LH, LW, LBU, LHU)
                rd       = rd_val;
                rs1      = rs1_val;
                imm      = imm_i;
                alu_op   = 8'b10000000;          
                lsu_oper = func3;
                lsu_le       = 1'b1;
                mux_select = 2'b01;
            end
            7'b0100011: begin // STORE (SB, SH, SW)
                rs1      = rs1_val;
                rs2      = rs2_val;
                imm      = imm_s;
                alu_op   = 8'b10000000; // Address = RS1 + Imm          
                lsu_oper = func3;
                lsu_we       = 1;
            end
            7'b0010011: begin // OP-IMM (ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI)
                rd     = rd_val;
                rs1    = rs1_val;
                imm    = imm_i;
                if(func3==3'b001 && |func7) ; //raise exept 
                if(func3==3'b101) begin
                    alu_op = {4'b1000, inst[30], func3};
                    if(inst[31]|(|inst[29:25])) ; //raise exept
                end
                else alu_op = {5'b10000, func3};
            end
            7'b0110011: begin // OP (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND)
                rd     = rd_val;
                rs1    = rs1_val;
                rs2    = rs2_val;
                alu_op = {2'b00, inst[25], 1'b0, inst[30], func3}; // inst[30] splits ADD/SUB and SRL/SRA
                if(inst[25] && inst[30]) ; //raise exeprion
                if(inst[31]|(|inst[29:26])) ; //raise exeption
            end
            7'b1110011: begin // SYSTEM (ECALL, EBREAK) + CSR
                rd     = rd_val;
                rs1    = rs1_val;
                imm    = imm_i;
                case(func3)
                    3'b000: begin
                        if(!(|func7) && rs2_val==1) $finish;
                        else if(!(|func7 | |rs2_val)) begin
                            cause = 11;
                            mux_select_pc = 2'b01;
                            alu_op = 8'b10010000;
                        end else begin
                            mux_select_pc = 2'b01;
                            alu_op = 8'b10010000;
                            rs1_val = 0;
                            rd = 0;
                            csr_oper = 3'b010;
                        end
                    end
                    default: begin
                        csr_oper = func3;
                        mux_select = 2'b11;
                    end
                endcase 
            end
            default: ;
        endcase
    end

endmodule
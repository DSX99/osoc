module decode (
    // =========================================================================
    // Explicit Inputs (from pipeline_bus_pkg::if_to_id_bus_t)
    // =========================================================================
    input logic [31:0] bus_in_pc,            // PC of the fetched instruction
    input logic [31:0] bus_in_next_pc,       // Predicted or sequential PC (PC + 4)
    input logic [31:0] bus_in_opcode,        // The raw 32-bit instruction machine code

    // =========================================================================
    // Explicit Outputs (to pipeline_bus_pkg::id_to_ex_bus_t)
    // =========================================================================
    output logic [31:0] bus_out_pc,            // Used for AUIPC and Branch target calculations
    output logic [31:0] bus_out_next_pc,       // Carried through for JAL/JALR return addresses
    output logic [31:0] bus_out_imm,           // Fully decoded immediate value
    output logic [31:0] bus_out_data_rs1,      // Register file source 1 data (or forwarded)
    output logic [31:0] bus_out_data_rs2,      // Register file source 2 data (or forwarded)
    output logic [4:0]  bus_out_rs1,           // to WB to read rs1
    output logic [4:0]  bus_out_rs2,           // to WB to read rs2
    output logic [7:0]  bus_out_alu_op,        // ALU operation selection
    output logic        bus_out_branch_en,     // Asserted for branch instructions
    output logic [2:0]  bus_out_csr_oper,      // CSR operation type (csrrw, csrrs, etc.)
    output logic [4:0]  bus_out_cause,         // Exception/Interrupt cause if detected in ID
    output logic        bus_out_lsu_we,        // Memory Write Enable (Store)
    output logic        bus_out_lsu_re,        // Memory Read Enable (Load)
    output logic [2:0]  bus_out_lsu_oper,      // LSU width/sign extension code
    output logic [4:0]  bus_out_rd,            // Destination register address (x0 - x31)
    output logic [1:0]  bus_out_mux_select,    // Selector for Write-Back data multiplexer
    output logic        bus_out_mux_select_pc, // selector for pc write

    // Handshake control signals
    input  logic valid_left, ready_right,
    output logic ready_left, valid_right
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
    // alu_op[5:3] branch or arithmetics (5:4): 11-atomic, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    // alu_op[2:0] directly operation, alu_op[2:0] copied from instr

    always_comb begin
        valid_right = valid_left;
        ready_left  = ready_right;

        // Initialize all explicit output bus signals to default state ('0)
        bus_out_pc            = bus_in_pc;
        bus_out_next_pc       = bus_in_next_pc;
        bus_out_imm           = '0;
        bus_out_data_rs1      = '0; // Typically fetched from RF, left '0 at decoder output level
        bus_out_data_rs2      = '0; // Typically fetched from RF, left '0 at decoder output level
        bus_out_rs1           = '0;
        bus_out_rs2           = '0;
        bus_out_alu_op        = '0;
        bus_out_branch_en     = '0;
        bus_out_csr_oper      = '0;
        bus_out_cause         = '0;
        bus_out_lsu_we        = '0;
        bus_out_lsu_re        = '0;
        bus_out_lsu_oper      = '0;
        bus_out_rd            = '0;
        bus_out_mux_select    = '0;
        bus_out_mux_select_pc = '0;

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
                bus_out_branch_en = 1'b1; // Explicitly asserting structural intent
            end
            7'b0000011: begin // LOAD (LB, LH, LW, LBU, LHU)
                bus_out_rd         = rd_val;
                bus_out_rs1        = rs1_val;
                bus_out_imm        = imm_i;
                bus_out_alu_op     = 8'b10000000;          
                bus_out_lsu_oper   = func3;
                bus_out_lsu_re     = 1'b1;
                bus_out_mux_select = 2'b01;
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
                if(func3==3'b001 && |func7) ; //raise exception 
                if(func3==3'b101) begin
                    bus_out_alu_op = {4'b1000, inst[30], func3};
                    if(inst[31]|(|inst[29:25])) ; //raise exception
                end
                else bus_out_alu_op = {5'b10000, func3};
            end
            7'b0110011: begin // OP (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND)
                bus_out_rd     = rd_val;
                bus_out_rs1    = rs1_val;
                bus_out_rs2    = rs2_val;
                bus_out_alu_op = {2'b00, inst[25], 1'b0, inst[30], func3}; // inst[30] splits ADD/SUB and SRL/SRA
                if(inst[25] && inst[30]) ; //raise exception
                if(inst[31]|(|inst[29:26])) ; //raise exception
            end
            7'b1110011: begin // SYSTEM (ECALL, EBREAK) + CSR
                bus_out_rd         = rd_val;
                bus_out_rs1        = rs1_val;
                bus_out_imm        = imm_i;
                bus_out_mux_select = 2'b11;
                case(func3)
                    3'b000: begin
                        if(!(|func7) && rs2_val==1) begin
                            `ifndef SYNTHESIS
                            $finish;
                            `endif
                        end else if(!(|func7 | |rs2_val)) begin
                            bus_out_cause         = 5'd11;
                            bus_out_alu_op        = 8'b10010000;
                            bus_out_mux_select_pc = 1'b1;
                        end else begin
                            bus_out_alu_op        = 8'b10010000;
                            bus_out_mux_select_pc = 1'b1;
                            bus_out_rs1           = 0;
                            bus_out_rd            = 0;
                            bus_out_csr_oper      = 3'b001;
                            bus_out_imm           = {20'b0, 12'h341};
                        end
                    end
                    default: begin
                        bus_out_csr_oper = func3;
                    end
                endcase 
            end
            default: ;
        endcase
    end

endmodule
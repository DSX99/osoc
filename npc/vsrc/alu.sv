module alu (
    input logic [31:0] bus_in_pc,
    input logic [31:0] bus_in_next_pc,
    input logic [31:0] bus_in_imm,

    input logic [3:0]  bus_in_mcause,
    input logic        bus_in_exception,
    input logic        bus_in_speculate,

    input logic [31:0] bus_in_data_rs1,
    input logic [31:0] bus_in_data_rs2,
    input logic [31:0] bus_in_data_csr,      
    input logic [4:0]  bus_in_rs1,      
    input logic [7:0]  bus_in_alu_op,
    input logic        bus_in_lsu_we,
    input logic        bus_in_lsu_re,        
    input logic [2:0]  bus_in_lsu_oper,      
    input logic [4:0]  bus_in_rd,            
    input logic [1:0]  bus_in_mux_select,    
    input logic        bus_in_mux_select_pc, 

    output logic [31:0] bus_out_pc,            
    output logic [31:0] bus_out_next_pc,       
    output logic [31:0] bus_out_alu_out,       
    output logic [31:0] bus_out_data_csr,
    output logic [31:0] bus_out_data_rs2,       

    output logic [3:0]  bus_out_mcause,
    output logic        bus_out_exception,
    output logic        bus_out_speculate,
    output logic        bus_out_lsu_we,        
    output logic        bus_out_lsu_re,        
    output logic [2:0]  bus_out_lsu_oper,      
    output logic [4:0]  bus_out_rd,            
    output logic [1:0]  bus_out_mux_select,    
    output logic        bus_out_mux_select_pc, 
    output logic        bus_out_branch,        
    output logci [31:0] bus_out_diff_pc;

    input  logic valid_left, ready_right,
    output logic ready_left, valid_right,

    output logic branch
);

    // alu_op[7] = change rs2_val to imm
    // alu_op[6] = change rs1_val to pc
    // alu_op[5:3] branch or arithmetics (5:4): 11-idk, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    // alu_op[2:0] directly operation, alu_op[2:0] copied from instr

    logic [31:0] val1, val2, csr_imm;

    assign val1 = bus_in_alu_op[6] ? bus_in_pc : bus_in_data_rs1;
    assign val2 = bus_in_alu_op[7] ? bus_in_imm : bus_in_data_rs2;

    assign branch = bus_in_alu_op[5:4] == 2'b01;

    always_comb begin
        valid_right = valid_left;
        ready_left  = ready_right;

        bus_out_alu_out       = '0;
        bus_out_branch        = '0;
        csr_imm=0;

        if (bus_in_alu_op[5:4] == 2'b00) begin
            case (bus_in_alu_op[2:0])
                0: begin
                    if (bus_in_alu_op[3]) bus_out_alu_out = val1 - val2;
                    else                  bus_out_alu_out = val1 + val2;
                end 
                1: bus_out_alu_out = val1 << val2[4:0];
                2: bus_out_alu_out = {31'b0, $signed(val1) < $signed(val2)};
                3: bus_out_alu_out = {31'b0, val1 < val2};
                4: bus_out_alu_out = val1 ^ val2;
                5: begin
                    if (bus_in_alu_op[3]) bus_out_alu_out = $signed(val1) >>> val2[4:0];
                    else                  bus_out_alu_out = val1 >> val2[4:0];
                end 
                6: bus_out_alu_out = val1 | val2;
                7: bus_out_alu_out = val1 & val2;
            endcase
        end else if (bus_in_alu_op[5:4] == 2'b01) begin
            bus_out_alu_out = val1 + val2;
            case (bus_in_alu_op[2:0])
                0: bus_out_branch = bus_in_data_rs1 == bus_in_data_rs2;
                1: bus_out_branch = bus_in_data_rs1 != bus_in_data_rs2;
                4: bus_out_branch = $signed(bus_in_data_rs1) <  $signed(bus_in_data_rs2);
                5: bus_out_branch = $signed(bus_in_data_rs1) >= $signed(bus_in_data_rs2);
                6: bus_out_branch = bus_in_data_rs1 <  bus_in_data_rs2;
                7: bus_out_branch = bus_in_data_rs1 >= bus_in_data_rs2;
                default:;
            endcase
        end else if(bus_in_alu_op[5:4] == 2'b11) begin //csr
            csr_imm = bus_in_alu_op[2] ? {27'b0,bus_in_rs1} : bus_in_data_rs1;
            case(bus_in_alu_op[1:0])
                0: ; 
                1: bus_out_alu_out = csr_imm;
                2: bus_out_alu_out = bus_in_data_csr |  csr_imm;
                3: bus_out_alu_out = bus_in_data_csr & ~csr_imm;
            endcase
        end

        bus_out_data_csr =  bus_in_data_csr;

        bus_out_pc            = bus_in_pc;
        bus_out_next_pc       = bus_in_speculate & !bus_out_branch ? bus_out_pc+4 : bus_in_next_pc;
        bus_out_data_rs2      = bus_in_data_rs2;

        // TODO: exception detection during execute (e.g. misaligned branch target)
        bus_out_mcause        = bus_in_mcause;
        bus_out_exception     = bus_in_exception;
        bus_out_speculate     = bus_in_speculate;
        bus_out_lsu_we        = bus_in_lsu_we;
        bus_out_lsu_re        = bus_in_lsu_re;
        bus_out_lsu_oper      = bus_in_lsu_oper;
        bus_out_rd            = bus_in_rd;
        bus_out_mux_select    = bus_in_mux_select;
        bus_out_mux_select_pc = bus_in_mux_select_pc;
    

        if (branch) begin
            bus_out_diff_pc = bus_out_alu_out; 
        end else begin
            bus_out_diff_pc = current_ex_pc + 4;
        end

    end

endmodule
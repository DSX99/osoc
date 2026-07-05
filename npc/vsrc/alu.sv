module alu (
    // =========================================================================
    // Explicit Inputs (from pipeline_bus_pkg::id_to_ex_bus_t)
    // =========================================================================
    input logic [31:0] bus_in_pc,            // Used for AUIPC and Branch target calculations
    input logic [31:0] bus_in_next_pc,       // Carried through for JAL/JALR return addresses
    input logic [31:0] bus_in_imm,           // Fully decoded immediate value
    input logic [31:0] bus_in_data_rs1,      // Register file source 1 data (or forwarded)
    input logic [31:0] bus_in_data_rs2,      // Register file source 2 data (or forwarded)
    input logic [7:0]  bus_in_alu_op,        // ALU operation selection
    input logic        bus_in_lsu_we,        // Memory Write Enable (Store)
    input logic        bus_in_lsu_re,        // Memory Read Enable (Load)
    input logic [2:0]  bus_in_lsu_oper,      // LSU width/sign extension code
    input logic [4:0]  bus_in_rd,            // Destination register address (x0 - x31)
    input logic [1:0]  bus_in_mux_select,    // Selector for Write-Back data multiplexer
    input logic        bus_in_mux_select_pc, // selector for pc write

    // =========================================================================
    // Explicit Outputs (to pipeline_bus_pkg::ex_to_ls_bus_t)
    // =========================================================================
    output logic [31:0] bus_out_next_pc,       // Carried through for JAL/JALR return addresses
    output logic [31:0] bus_out_alu_out,       // Computed ALU result / Memory Address for LSU
    output logic [31:0] bus_out_data_rs2,      // Data to be written to memory for store instructions
    output logic        bus_out_lsu_we,        // Memory Write Enable
    output logic        bus_out_lsu_re,        // Memory Read Enable
    output logic [2:0]  bus_out_lsu_oper,      // LSU width/sign extension code
    output logic [4:0]  bus_out_rd,            // Destination register address
    output logic [1:0]  bus_out_mux_select,    // Selector for Write-Back data multiplexer
    output logic        bus_out_mux_select_pc, // selector for pc write
    output logic        bus_out_branch,        // Branch indicator produced by ALU

    // Handshake control signals
    input  logic valid_left, ready_right,
    output logic ready_left, valid_right,


    output logic branch,
    output logic branch_taken
);

    // alu_op[7] = change rs2_val to imm
    // alu_op[6] = change rs1_val to pc
    // alu_op[5:3] branch or arithmetics (5:4): 11-idk, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    // alu_op[2:0] directly operation, alu_op[2:0] copied from instr

    logic [31:0] val1, val2;

    assign val1 = bus_in_alu_op[6] ? bus_in_pc : bus_in_data_rs1;
    assign val2 = bus_in_alu_op[7] ? bus_in_imm : bus_in_data_rs2;

    assign branch = bus_in_alu_op == 2'b01;
    assign branch_tkaen = bus_out_branch;

    always_comb begin
        valid_right = valid_left;
        ready_left  = ready_right;

        // Default Assignments
        bus_out_alu_out       = '0;
        bus_out_branch        = '0;

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
            endcase
        end

        // Propagate control signals explicitly
        bus_out_next_pc       = bus_in_next_pc;
        bus_out_data_rs2      = bus_in_data_rs2;
        bus_out_lsu_we        = bus_in_lsu_we;
        bus_out_lsu_re        = bus_in_lsu_re;
        bus_out_lsu_oper      = bus_in_lsu_oper;
        bus_out_rd            = bus_in_rd;
        bus_out_mux_select    = bus_in_mux_select;
        bus_out_mux_select_pc = bus_in_mux_select_pc;
    end

endmodule
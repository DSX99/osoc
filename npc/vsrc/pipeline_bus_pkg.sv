package pipeline_bus_pkg;

    // =========================================================================
    // Instruction Fetch to Instruction Decode Bus
    // =========================================================================
    typedef struct packed {
        logic [31:0] pc;         // PC of the fetched instruction (needed for AUIPC/Branches/JAL)
        logic [31:0] next_pc;    // Predicted or sequential PC (PC + 4)
        logic [31:0] opcode;     // The raw 32-bit instruction machine code
    } if_to_id_bus_t;

    // =========================================================================
    // Instruction Decode to Execute Bus
    // =========================================================================
    typedef struct packed {
        logic [31:0] pc;         // Used for AUIPC and Branch target calculations
        logic [31:0] next_pc;    // Carried through for JAL/JALR return addresses
        logic [31:0] imm;        // Fully decoded immediate value
        logic [31:0] data_rs1;   // Register file source 1 data (or forwarded)
        logic [31:0] data_rs2;   // Register file source 2 data (or forwarded)

        logic [4:0] rs1; // to WB to read rs1
        logic [4:0] rs2; // to WB to read rs2
        
        // Control Signals for EXU (ALU)
        logic [7:0]  alu_op;     // ALU operation selection
        logic        branch_en;  // Asserted for branch instructions
        
        // Control Signals for CSR Unit
        logic [2:0]  csr_oper;   // CSR operation type (csrrw, csrrs, csrrc, etc.)
        logic [4:0]  cause;      // Exception/Interrupt cause if detected in ID
        
        // Control Signals passed through to LSU
        logic        lsu_we;     // Memory Write Enable (Store)
        logic        lsu_re;     // Memory Read Enable (Load)
        logic [2:0]  lsu_oper;   // LSU width/sign extension code (LB, LH, LW, etc.)
        
        // Control Signals passed through to WBU
        logic [4:0]  rd;         // Destination register address (x0 - x31)
        logic [1:0]  mux_select; // Selector for Write-Back data multiplexer
        logic mux_select_pc;     // selector for pc write
    } id_to_ex_bus_t;

    // =========================================================================
    // Execute to Load/Store Bus
    // =========================================================================
    typedef struct packed {
        logic [31:0] next_pc;    // Carried through for JAL/JALR return addresses
        logic [31:0] alu_out;    // Computed ALU result / Memory Address for LSU
        logic [31:0] data_rs2;   // Data to be written to memory for store instructions
        logic [31:0] csr_out;    // Data read from CSR register file
        
        // Control Signals for LSU
        logic        lsu_we;     // Memory Write Enable
        logic        lsu_re;     // Memory Read Enable
        logic [2:0]  lsu_oper;   // LSU width/sign extension code
        
        // Control Signals passed through to WBU
        logic [4:0]  rd;         // Destination register address
        logic [1:0]  mux_select; // Selector for Write-Back data multiplexer
        logic mux_select_pc;     // selector for pc write

        // Branch indicator produced by ALU
        logic        branch;
    } ex_to_ls_bus_t;

    // =========================================================================
    // Load/Store to Write-Back Bus
    // =========================================================================
    typedef struct packed {
        logic [31:0] alu_out;    // ALU result
        logic [31:0] lsu_out;    // Data loaded from memory
        logic [31:0] next_pc;    // Return address (PC + 4) for JAL/JALR
        logic [31:0] csr_out;    // Data read from system CSRs
        
        // Control Signals for WBU Register File Write
        logic [4:0]  rd;         // Destination register address
        logic [1:0]  mux_select; // 0: ALU, 1: LSU, 2: next_pc, 3: csr_out
        logic mux_select_pc;     // selector for pc write
    } ls_to_wb_bus_t;

endpackage : pipeline_bus_pkg

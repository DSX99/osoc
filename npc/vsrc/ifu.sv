module ifu (
    input logic [31:0] pc,
    input logic [31:0] next_pc,

    // =========================================================================
    // Explicit Outputs (to pipeline_bus_pkg::if_to_id_bus_t)
    // =========================================================================
    output logic [31:0] bus_out_pc,         // PC of the fetched instruction
    output logic [31:0] bus_out_next_pc,    // Predicted or sequential PC (PC + 4)
    output logic [31:0] bus_out_opcode,     // The raw 32-bit instruction machine code

    // Exception / speculation tracking (placeholder pass-through)
    output logic [3:0]  bus_out_mcause,
    output logic         bus_out_exception,
    output logic         bus_out_speculate,

    // Handshake control signals
    output logic valid,
    input  logic ready,

    output logic [31:0] cache_addr,
    output logic cache_valid,

    input logic [31:0] cache_opcode,
    input logic cache_ready
);

    typedef enum {
        WAIT_AR, WAIT_R, AWAIT
    } IFU_state_t;
    // IFU_state_t ifu;

    logic unused_bits;

    assign unused_bits = ready;

    always_comb begin
        bus_out_pc      = pc;
        bus_out_next_pc = next_pc;

        cache_valid=1;
        cache_addr = pc;

        valid = cache_ready;
        bus_out_opcode = cache_opcode;

        bus_out_mcause    = 4'b0;
        bus_out_exception = 1'b0; 
        
        if(pc[0])begin      //misaligned (idk btw will i do C or not)
            bus_out_exception=1;
            bus_out_mcause=0;
        end

        if(1'b0)begin       //page fault
            bus_out_exception=1;
            bus_out_mcause=12;
        end

        bus_out_speculate = 1'b0; //change dependent on branch predictor
    end

endmodule
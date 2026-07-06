module ifu (
    input logic clk,
    input logic rst,
    input logic [31:0] pc,
    input logic [31:0] next_pc,

    // =========================================================================
    // Explicit Outputs (to pipeline_bus_pkg::if_to_id_bus_t)
    // =========================================================================
    output logic [31:0] bus_out_pc,         // PC of the fetched instruction
    output logic [31:0] bus_out_next_pc,    // Predicted or sequential PC (PC + 4)
    output logic [31:0] bus_out_opcode,     // The raw 32-bit instruction machine code

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
    IFU_state_t ifu;

    logic unused_bits;

    always_comb begin
        unused_bits     = |rresp;
        bus_out_pc      = pc;
        bus_out_next_pc = next_pc;

        cache_valid=1;
        cache_addr = pc;

        valid = cache_ready;
        bus_out_opcode = cache_opcode;

        valid=0;
        arvalid=0;
        araddr=0;
        rready=0;
    end

endmodule
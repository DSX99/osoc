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

    // Read Addr Channel (AR)
    output logic [31:0] araddr,
    output logic        arvalid,
    input  logic        arready,

    // Read Data Channel (R)
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready
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

        valid=0;
        arvalid=0;
        araddr=0;
        rready=0;

        case(ifu)
            WAIT_AR: begin
                arvalid = 1;
                araddr  = pc;
            end
            WAIT_R: begin
                rready  = 1;
            end
            AWAIT: begin
                valid=1;
            end
            default: ;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            ifu             <= WAIT_AR;
            bus_out_opcode  <= 0;
        end else begin
            case (ifu)
                WAIT_AR: begin
                    if (arready && arvalid) begin
                        ifu     <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        bus_out_opcode <= rdata;
                    end
                end
                AWAIT: begin
                    if (ready) begin
                        ifu   <= WAIT_AR;
                    end
                end
                default: ;
            endcase
        end
    end

endmodule
import pipeline_bus_pkg::if_to_id_bus_t;

module ifu(
    input logic clk,
    input logic rst,
    input logic [31:0] pc,
    input logic [31:0] next_pc,
    output pipeline_bus_pkg::if_to_id_bus_t bus_out,
    output logic valid,
    input logic ready,

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

    typedef enum logic [1:0] {
        IDLE, WAIT_AR, WAIT_R, AWAIT
    } IFU_state_t;
    IFU_state_t ifu;

    logic unused_bits;

    always_comb begin
        unused_bits = |rresp;
        bus_out.pc = pc;
        bus_out.next_pc = next_pc;
    end

    always_ff @(posedge clk) begin
        if(rst) begin
            ifu             <= IDLE;
            bus_out.opcode  <= 0;
            arvalid         <= 0;
            araddr          <= 0;
            rready          <= 0;
            valid           <= 0;
        end else begin
            case(ifu)
                IDLE: begin
                    arvalid <= 1;
                    araddr  <= pc;
                    ifu     <= WAIT_AR;
                    valid   <= 0;
                end
                
                WAIT_AR: begin
                    if(arready) begin 
                        arvalid <= 0;
                        rready  <= 1;
                        ifu     <= WAIT_R;
                    end
                end
                
                WAIT_R: begin
                    if(rvalid) begin
                        bus_out.opcode <= rdata;
                        rready         <= 0;
                        valid          <= 1; // Signal downstream that instruction is ready
                        ifu            <= AWAIT;
                    end
                end
                
                AWAIT: begin
                    valid <= 1; // Maintain valid status
                    if(ready) begin
                        valid   <= 0;
                        ifu     <= IDLE; // Advance to next fetch
                    end
                end
                
                default: ifu <= IDLE;
            endcase
        end
    end

endmodule
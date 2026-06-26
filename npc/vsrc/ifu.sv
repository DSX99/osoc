import pipeline_bus_pkg::if_to_id_bus_t;

module ifu(
    input logic clk,
    input logic rst,
    input logic [31:0] pc,
    input logic [31:0] next_pc,
    input logic [31:0] comb_pc,
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
    IFU_IDLE,
    IFU_WAIT_AR,
    IFU_WAIT_R,
    IFU_VALID
} IFU_state_t;
IFU_state_t ifu_state;

logic unused_bits;
logic [31:0] opcode_reg;

always_comb begin
    bus_out.pc = pc;
    bus_out.next_pc = next_pc;
    bus_out.opcode = opcode_reg;
    unused_bits = | |rresp;
    araddr=comb_pc;
end

always_ff @(posedge clk) begin
    if(rst) begin
        ifu_state <= IFU_IDLE;
        opcode_reg <= 32'h0;
        arvalid <= 1'b0;
        rready <= 1'b0;
        valid <= 1'b0;
    end else begin
        case (ifu_state)
            IFU_IDLE: begin
                rready <= 1'b0;
                valid <= 1'b0;
                arvalid <= 1'b0;
                if (ready) begin
                    arvalid <= 1'b1;
                    ifu_state <= IFU_WAIT_AR;
                end
            end
            IFU_WAIT_AR: begin
                if (arready && arvalid) begin
                    arvalid <= 1'b0;
                    rready <= 1'b1;
                    ifu_state <= IFU_WAIT_R;
                end
            end
            IFU_WAIT_R: begin
                if (rvalid) begin
                    rready <= 1'b0;
                    opcode_reg <= rdata;
                    valid <= 1'b1;
                    ifu_state <= IFU_VALID;
                end
            end
            IFU_VALID: begin
                if (ready) begin
                    valid <= 1'b0;
                    ifu_state <= IFU_IDLE;
                end
            end
        endcase
    end
end

endmodule
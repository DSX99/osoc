module icache(
    input logic clk, rst,

    input logic [31:0] ifu_addr,
    input logic valid,

    output logic [31:0] opcode,
    output logic ready,

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

parameter BLOCK_SIZE = 4;
parameter NUMBER_OF_BLOCKS = 16;

localparam int off = $clog2(BLOCK_SIZE);
localparam int index_off = $clog2(NUMBER_OF_BLOCKS);

logic [31:0] block_cache [NUMBER_OF_BLOCKS];

logic [32-index_off-off-1:0] tag;
logic [index_off-1:0] index;
logic [off-1:0] redundant;

logic [32-index_off-off-1:0] block_tag [NUMBER_OF_BLOCKS];
logic block_valid[NUMBER_OF_BLOCKS];

logic [31:0] bypass;

logic call;

assign {tag, index, redundant} = ifu_addr;
 
logic hit;
assign hit = block_valid[index] && (tag == block_tag[index]);

typedef enum {
    IDLE, WAIT_AR, WAIT_R
} cache_state_t;
cache_state_t state;

always_comb begin
    arvalid = 0;
    araddr  = 0;
    rready  = 0;
    ready   = 0;
    opcode  = 0;

    if (valid) begin
        if (hit) begin
            opcode = block_cache[index];
            ready  = 1'b1;
        end else begin
            case (state)
                WAIT_AR: begin
                    arvalid = 1'b1;
                    araddr  = ifu_addr;
                end
                WAIT_R: begin
                    rready  = 1'b1;
                end
                default: ;
            endcase
        end
    end
end

always_ff @(posedge clk) begin
    if (rst) begin
        state <= IDLE;
        for(int i = 0; i < NUMBER_OF_BLOCKS; i = i + 1) begin
            block_valid[i] <= 1'b0;
        end
    end else if (valid && !hit) begin
        case (state)
            IDLE: begin
                state <= WAIT_AR;
            end

            WAIT_AR: begin
                if (arready && arvalid) begin
                    state <= WAIT_R;
                end
            end

            WAIT_R: begin
                if (rvalid && rready) begin
                    block_cache[index] <= rdata;
                    block_tag[index]      <= tag;
                    block_valid[index]    <= 1'b1;
                    state                 <= IDLE;
                end
            end
            default: state <= IDLE;
        endcase
    end
end

endmodule
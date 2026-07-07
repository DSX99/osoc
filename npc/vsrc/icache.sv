module icache(
    input logic clk, rst,

    input logic [31:0] ifu_addr,
    input logic valid,

    output logic [31:0] opcode,
    output logic ready,

    // Read Addr Channel (AR)
    output logic [31:0] araddr,
    output logic        arvalid,
    output logic [7:0]  arlen,
    output logic [2:0]  arsize,
    output logic [1:0]  arburst,
    input  logic        arready,

    // Read Data Channel (R)
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready,

    output logic hit, miss
);

parameter BLOCK_SIZE = 32;
parameter NUMBER_OF_BLOCKS = 2;

localparam int off = $clog2(BLOCK_SIZE);
localparam int index_off = $clog2(NUMBER_OF_BLOCKS);
localparam int WORDS_IN_BLOCK = BLOCK_SIZE/4;

logic [31:0] block_cache [NUMBER_OF_BLOCKS][WORDS_IN_BLOCK];

logic [32-index_off-off-1:0] tag;
logic [index_off-1:0] index;
logic [off-3:0] word_select;
logic [1:0] word_align;

logic [32-index_off-off-1:0] block_tag [NUMBER_OF_BLOCKS];
logic block_valid[NUMBER_OF_BLOCKS];

assign {tag, index, word_select, word_align} = ifu_addr;

logic unused_bits;
assign unused_bits = |rresp | |word_align;

typedef enum {
    WAIT_AR, WAIT_R
} cache_state_t;
cache_state_t state;
logic [2:0] fill_count; 

assign hit = block_valid[index] && (tag == block_tag[index]);

always_comb begin
    // Default assignments to prevent latches
    arvalid = 1'b0;
    araddr  = 32'b0;
    rready  = 1'b0;
    ready   = 1'b0;
    opcode  = 32'b0;
    miss    = 1'b0;

    // Fixed AXI4 Burst Configurations
    arburst = 2'b00;   // INCR burst type
    arsize  = 3'b010;  // 4 bytes (32-bit) per transfer width
    arlen   = 8'd0;    // 8 beats total (AxLEN = N - 1, so 7 means 8 transfers)

    if (valid && !rst) begin
        if (hit) begin
            opcode = block_cache[index][word_select];
            ready  = 1'b1;
        end else begin
            miss = 1'b1;
            case (state)
                WAIT_AR: begin
                    arvalid = 1'b1;
                    // Force the burst request address to start at the base of the cache line
                    araddr  = {tag, index, 3'b000, 2'b00};
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
        fill_count <= 3'b0;
        state      <= WAIT_AR;
        for(int i = 0; i < NUMBER_OF_BLOCKS; i = i + 1) begin
            block_valid[i] <= 1'b0;
        end
    end else if (valid && !hit) begin
        case (state)
            WAIT_AR: begin
                // Address handshake successful -> move to streaming data phase
                if (arready && arvalid) begin
                    state <= WAIT_R;
                end
            end
            WAIT_R: begin
                if (rvalid && rready) begin
                    block_cache[index][fill_count] <= rdata;
                    
                    if (fill_count == 3'b001) begin
                        // Whole cache block populated! Update tags and metadata
                        block_tag[index]   <= tag;
                        block_valid[index] <= 1'b1;
                        fill_count         <= 3'b0;
                        state              <= WAIT_AR;
                    end else begin
                        // Stay in WAIT_R to collect the remaining burst beats
                        fill_count         <= fill_count + 1'b1;
                        state              <= WAIT_R;
                    end
                end
            end
            default: state <= WAIT_AR;
        endcase
    end
end

endmodule
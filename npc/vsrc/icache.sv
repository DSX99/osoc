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

logic unused_bits;
assign unused_bits = |rresp | |word_align;

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

typedef enum {
    WAIT_AR, WAIT_R
} cache_state_t;
cache_state_t state;
logic [2:0] fill_count; 

assign hit = block_valid[index] && (tag == block_tag[index]);

always_comb begin
    arvalid = 1'b0;
    araddr  = {tag, index, 3'b000, 2'b00}; // Start address of the block (aligned)
    arburst = 2'b01;                       // INCR burst type
    arsize  = 3'b010;                      // 4 bytes (32-bit) per beat
    arlen   = 8'd7;                        // 8 beats total (7 + 1)
    rready  = 1'b0;
    ready   = 1'b0;
    opcode  = 32'b0;
    miss    = 1'b0;

    if (valid && !rst) begin
        if (hit) begin
            opcode = block_cache[index][word_select];
            ready  = 1'b1;
        end else begin
            miss = 1'b1;
            case (state)
                WAIT_AR: begin
                    arvalid = 1'b1;
                end
                WAIT_R: begin
                    rready = 1'b1;
                end
            endcase
        end
    end
end

// Sequential State & Data Logic
always_ff @(posedge clk) begin
    if (rst) begin
        fill_count  <= 0;
        state       <= WAIT_AR;
        for(int i = 0; i < NUMBER_OF_BLOCKS; i++) begin
            block_valid[i] <= 1'b0;
        end
    end else if (valid && !hit) begin
        case (state)
            WAIT_AR: begin
                if (arready && arvalid) begin
                    state <= WAIT_R;
                end
            end
            WAIT_R: begin
                if (rvalid && rready) begin
                    block_cache[index][fill_count] <= rdata;
                    fill_count <= fill_count + 1;
                    
                    if (fill_count == 3'b111) begin
                        block_tag[index]   <= tag;
                        block_valid[index] <= 1'b1;
                        fill_count         <= 0;
                        state              <= WAIT_AR;
                    end
                end
            end
        endcase
    end
end
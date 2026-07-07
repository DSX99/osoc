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
    input  logic        arlast,

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
    arvalid = 0;
    araddr  = 0;
    rready  = 0;
    ready   = 0;
    opcode  = 0;
    miss    = 0;

    arburst=0;
    arlen=0;
    arsize=0;

    if (valid && !rst) begin
        if (hit) begin
            opcode = block_cache[index][word_select];
            ready  = 1'b1;
        end else begin
            miss=1;
            if(araddr>32'ha0000000 && araddr<32'hbfffffff)begin
                case (state)
                    WAIT_AR: begin
                        arvalid = 1'b1;
                        arburst = 2'b01;
                        arsize = 3'b010;
                        arlen = 8'd7;
                        araddr  = {tag, index, fill_count, 2'b00};
                    end
                    WAIT_R: begin
                        rready  = 1'b1;
                    end
                    default: ;
                endcase
            end else begin
                case (state)
                    WAIT_AR: begin
                        arvalid = 1'b1;
                        araddr  = {tag, index, fill_count, 2'b00};
                    end
                    WAIT_R: begin
                        rready  = 1'b1;
                    end
                    default: ;
                endcase
            end
        end
    end
end

always_ff @(posedge clk) begin
    if (rst) begin
        state <= WAIT_AR;
        for(int i = 0; i < NUMBER_OF_BLOCKS; i = i + 1) begin
            block_valid[i] <= 1'b0;
        end
    end else if (valid && !hit) begin
        if(araddr>32'ha0000000 && araddr<32'hbfffffff)begin
            case (state)
                WAIT_AR: begin
                    if (arready && arvalid) begin
                        state <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        if(fill_count==3'b111) begin
                            block_cache[index][fill_count] <= rdata;
                            block_tag[index] <= tag;
                            block_valid[index] <= 1'b1;
                            fill_count <= 0;
                            state <= WAIT_AR;
                        end else begin
                            block_cache[index][fill_count] <= rdata;
                            fill_count <= fill_count + 1;
                            state <= WAIT_R;
                        end
                    end
                end
                default: state <= WAIT_AR;
            endcase
        end else begin
            case (state)
                WAIT_AR: begin
                    if (arready && arvalid) begin
                        state <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        if(fill_count==3'b111) begin
                            block_cache[index][fill_count] <= rdata;
                            block_tag[index] <= tag;
                            block_valid[index] <= 1'b1;
                            fill_count <= 0;
                            state <= WAIT_AR;
                        end else begin
                            block_cache[index][fill_count] <= rdata;
                            fill_count <= fill_count + 1;
                            state <= WAIT_AR;
                        end
                    end
                end
                default: state <= WAIT_AR;
            endcase
        end
    end
end

endmodule
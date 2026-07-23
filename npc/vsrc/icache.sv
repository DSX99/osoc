module icache(
    input logic clk, rst, fencei,

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

parameter BLOCK_SIZE = 16;
parameter NUMBER_OF_BLOCKS = 4;
// here i use 2 rows

localparam int off = $clog2(BLOCK_SIZE);
localparam int index_off = $clog2(NUMBER_OF_BLOCKS);
localparam int WORDS_IN_BLOCK = BLOCK_SIZE/4;

logic [31:0] block_cache [NUMBER_OF_BLOCKS][WORDS_IN_BLOCK][2];
logic latest_row;

logic [31:0] miss_addr;
logic trans;

logic [32-index_off-off-1:0] tag;
logic [index_off-1:0] index;
logic [off-3:0] word_select;
logic [1:0] word_align;

logic [32-index_off-off-1:0] block_tag [NUMBER_OF_BLOCKS][2];
logic block_valid[NUMBER_OF_BLOCKS][2];
logic do_burst, burst_reg, burst_addr;

assign burst_addr = ifu_addr >= 32'ha0000000 && ifu_addr < 32'hc0000000;
assign {tag, index, word_select, word_align} = trans ? miss_addr : ifu_addr;
assign do_burst = trans ? burst_reg : burst_addr;

typedef enum {
   WAIT_AR, WAIT_R
} cache_state_t;
cache_state_t state;
logic [1:0] fill_count; 

logic hit_0, hit_1;
assign hit_0 = block_valid[index][0] && (tag == block_tag[index][0]);
assign hit_1 = block_valid[index][1] && (tag == block_tag[index][1]);

assign hit = hit_0 | hit_1;


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

    if ((valid && !rst) || trans) begin
        if (hit & !trans) begin
            opcode = block_cache[index][word_select][hit_1]; //hit_1 is 0 if hit and hit_0 and 1 if hit_1
            ready  = 1'b1;
        end else begin
            miss=1;
            case (state)
                WAIT_AR: begin
                    arvalid = 1'b1;
                    if(do_burst)begin
                        arburst = 2'b01;
                        arsize = 3'b010;
                        arlen = 8'd3;
                    end
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

always_ff @(posedge clk) begin
    if (rst) begin
        fill_count<=0;
        trans<=0;
        latest_row<=0;
        burst_reg<=0;
        miss_addr<=0;
        state <= WAIT_AR;
        for(int i = 0; i < NUMBER_OF_BLOCKS; i = i + 1) begin
            block_valid[i][0] <= 1'b0;
            block_valid[i][1] <= 1'b0;
        end
    end else begin
        if (hit) begin
            latest_row<=hit_1;
        end
        if ((valid && !hit) || trans) begin
            case (state)
                WAIT_AR: begin
                    if(arvalid && !trans) begin
                        trans<=1;
                        burst_reg <= burst_addr;
                        miss_addr <= ifu_addr;
                    end
                    if (arready && arvalid) begin
                        state <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        if(fill_count==2'b11) begin
                            block_cache[index][fill_count][~latest_row] <= rdata;
                            block_tag[index][~latest_row] <= tag;
                            block_valid[index][~latest_row] <= 1'b1;
                            fill_count <= 0;
                            trans<=0;
                            state <= WAIT_AR;
                        end else begin
                            block_cache[index][fill_count][~latest_row] <= rdata;
                            fill_count <= fill_count + 1;
                            if(do_burst) state <= WAIT_R;
                            else state <= WAIT_AR;
                        end
                    end
                end
                default: state <= WAIT_AR;
            endcase
        end
        if (fencei) begin
            for(int i = 0; i < NUMBER_OF_BLOCKS; i = i + 1) begin
                block_valid[i][0] <= 1'b0;
                block_valid[i][1] <= 1'b0;
            end
        end
    end
end

endmodule
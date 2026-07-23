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

localparam int OFF_W          = $clog2(BLOCK_SIZE);        
localparam int SET_W          = $clog2(NUMBER_OF_BLOCKS);  
localparam int WORDS_IN_BLOCK = BLOCK_SIZE / 4;            
localparam int WORD_W         = $clog2(WORDS_IN_BLOCK);    
localparam int WAY_W          = $clog2(2);            
localparam int TAG_W          = 32 - SET_W - OFF_W;        

localparam int TAG_IDX_W  = SET_W + WAY_W;              
localparam int DATA_IDX_W = SET_W + WORD_W + WAY_W;     
localparam int TAG_DEPTH  = 1 << TAG_IDX_W;             
localparam int DATA_DEPTH = 1 << DATA_IDX_W;            

                logic [31:0]      block_cache [0:DATA_DEPTH-1];
(* mem2reg *)   logic [TAG_W-1:0] block_tag   [0:TAG_DEPTH-1];
                logic [TAG_DEPTH-1:0] block_valid;   

logic [31:0]        miss_addr;
logic               trans;

logic [TAG_W-1:0]   tag;
logic [SET_W-1:0]   index;
logic [WORD_W-1:0]  word_select;
logic [1:0]         word_align;

logic do_burst, burst_reg, burst_addr;

assign burst_addr = ifu_addr >= 32'ha0000000 && ifu_addr < 32'hc0000000;
assign {tag, index, word_select, word_align} = trans ? miss_addr : ifu_addr;
assign do_burst = trans ? burst_reg : burst_addr;

logic [TAG_IDX_W-1:0]  tag_idx_w0, tag_idx_w1; 
logic [TAG_IDX_W-1:0]  tag_idx_fill;             
logic [DATA_IDX_W-1:0] data_idx_rd, data_idx_fill;

logic [WORD_W-1:0] fill_count;
logic hit_0, hit_1, latest_row;

assign tag_idx_w0   = {index, {WAY_W{1'b0}}};
assign tag_idx_w1   = {index, {WAY_W{1'b1}}};
assign tag_idx_fill = {index, ~latest_row};

assign data_idx_rd   = {index, word_select, hit_1};
assign data_idx_fill = {index, fill_count,  ~latest_row};

typedef enum {
   WAIT_AR, WAIT_R
} cache_state_t;
cache_state_t state;

assign hit_0 = block_valid[tag_idx_w0] && (tag == block_tag[tag_idx_w0]);
assign hit_1 = block_valid[tag_idx_w1] && (tag == block_tag[tag_idx_w1]);
assign hit   = hit_0 | hit_1;


always_comb begin
    arvalid = 0;
    araddr  = 0;
    rready  = 0;
    ready   = 0;
    opcode  = 0;
    miss    = 0;

    arburst=2'b1;
    arlen=0;
    arsize=3'b0;

    if ((valid && !rst) || trans) begin
        if (hit & !trans) begin
            opcode = block_cache[data_idx_rd]; //hit_1 is 0 if hit and hit_0 and 1 if hit_1
            ready  = 1'b1;
        end else begin
            miss=1;
            case (state)
                WAIT_AR: begin
                    arvalid = 1'b1;
                    if(do_burst)begin
                        arburst = 2'b01;
                        arsize  = 3'b010;
                        arlen   = 8'(WORDS_IN_BLOCK - 1);
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
        block_valid <= 0;
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
                            block_cache[data_idx_fill] <= rdata;
                            block_tag[tag_idx_fill] <= tag;
                            block_valid[tag_idx_fill] <= 1'b1;
                            fill_count <= 0;
                            trans<=0;
                            state <= WAIT_AR;
                        end else begin
                            block_cache[data_idx_fill] <= rdata;
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
            block_valid <= 0;
        end
    end
end

endmodule
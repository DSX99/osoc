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

    // Exception / speculation tracking (placeholder pass-through)
    output logic [3:0]  bus_out_mcause,
    output logic         bus_out_exception,
    output logic         bus_out_speculate,

    // Handshake control signals
    output logic valid,
    input  logic ready,

    output logic [31:0] cache_addr,
    output logic cache_valid,

    input logic [31:0] cache_opcode,
    input logic cache_ready,

    output logic do_spec,
    output logic [11:0] addr_spec,

    input logic [31:0] pc_to_write,
    input logic [11:0] offset_to_write,
    input logic write,
    input logic fencei
);

    typedef enum {
        WAIT_AR, WAIT_R, AWAIT
    } IFU_state_t;
    // IFU_state_t ifu;

    logic unused_bits;

    assign unused_bits = ready;

    
    //branch pred
    parameter NUMBER_OF_BLOCKS = 2;
    parameter SIZE_OF_OFFSET = 12;
    // here i use 2 rows

    localparam int OFF_W = 2;                           
    localparam int SET_W = $clog2(NUMBER_OF_BLOCKS);     
    localparam int WAY_W = $clog2(2);               
    localparam int TAG_W = 32 - SET_W - OFF_W;           
 
    localparam int IDX_W = SET_W + WAY_W;                
    localparam int DEPTH = 1 << IDX_W;                   

    (* mem2reg *) logic [TAG_W-1:0]           block_tag    [0:DEPTH-1];
    (* mem2reg *) logic [SIZE_OF_OFFSET-1:0]  block_offset [0:DEPTH-1];
                  logic [DEPTH-1:0]           block_valid;   // packed -> flops
 
    logic latest_row;

    logic [TAG_W-1:0] tag;
    logic [SET_W-1:0] index;
    logic [OFF_W-1:0] word_align;

    assign {tag, index, word_align} = pc;

    logic [IDX_W-1:0] idx_w0, idx_w1;
    assign idx_w0 = {index, {WAY_W{1'b0}}};
    assign idx_w1 = {index, {WAY_W{1'b1}}};

    logic hit, hit_0, hit_1;
    assign hit_0 = (block_tag[idx_w0] == tag) && block_valid[idx_w0];
    assign hit_1 = (block_tag[idx_w1] == tag) && block_valid[idx_w1];

    assign hit = (hit_0 | hit_1) & !fencei;

    logic [SET_W-1:0] wr_set;
    logic [IDX_W-1:0] wr_idx;
 
    assign wr_set = pc_to_write[SET_W+OFF_W-1:OFF_W];
    assign wr_idx = {wr_set, ~latest_row};

    always_comb begin
        bus_out_pc      = pc;
        bus_out_next_pc = next_pc;

        cache_valid=1;
        cache_addr = pc;

        valid = cache_ready;
        bus_out_opcode = cache_opcode;

        bus_out_mcause    = 4'b0;
        bus_out_exception = 1'b0; 
        
        if(pc[0])begin      //misaligned (idk btw will i do C or not (i will))
            bus_out_exception=1;
            bus_out_mcause=0;
        end

        if(1'b0)begin       //page fault
            bus_out_exception=1;
            bus_out_mcause=12;
        end
        
        do_spec=0;
        addr_spec=0;

        if(hit) begin
            bus_out_speculate = 1'b1;
            do_spec=1;
            if(hit_0)begin
                addr_spec = block_offset[idx_w0];
            end
            if(hit_1)begin
                addr_spec = block_offset[idx_w1];
            end
        end else
            bus_out_speculate = 1'b0;
    end

    always_ff @(posedge clk) begin
        if(rst)begin
            block_valid <= '0;
            latest_row<=0;
        end else begin
            if(fencei) begin
               block_valid <= '0;
            end
            if(hit)begin
                latest_row<=hit_1;
            end

            if(write) begin
                block_tag   [wr_idx] <= pc_to_write[31:SET_W+OFF_W];
                block_offset[wr_idx] <= offset_to_write;
                block_valid [wr_idx] <= 1'b1;
            end
        end
    end
endmodule
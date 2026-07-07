// ... (Keep your port declarations and assignments)

typedef enum logic [0:0] {
    WAIT_AR = 1'b0,
    WAIT_R  = 1'b1
} cache_state_t;
cache_state_t state;
logic [2:0] fill_count; 

assign hit = block_valid[index] && (tag == block_tag[index]);

// Combinatorial Output Logic
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
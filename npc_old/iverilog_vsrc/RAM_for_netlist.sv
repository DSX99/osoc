module ysyx_26060184_ram(
    input logic clk, rst,
    
        // Read Addr Channel (AR)
    input  logic [31:0] araddr,
    input  logic [7:0]  arlen,
    input  logic [2:0]  arsize, 
    input  logic [1:0]  arburst,
    input  logic        arvalid,
    output logic        arready,

    // Read Data Channel (R)
    output logic [31:0] rdata,
    output logic [1:0]  rresp,
    output logic        rlast,
    output logic        rvalid,
    input  logic        rready,

    // Write Address Channel (AW)
    input logic [31:0] awaddr,
    input logic        awvalid,
    output  logic        awready,

    // Write Data Channel (W)
    input logic [31:0] wdata,
    input logic [3:0]  wstrb,
    input logic        wvalid,
    output logic        wready,

    // Write Response Channel (B)
    output logic [1:0]  bresp,
    output logic        bvalid,
    input logic        bready
);

typedef enum{
    IDLE, WAIT_R
} IFU_state_t;
IFU_state_t slave;

logic [31:0] r_addr_reg;
logic [7:0]  r_len_reg;
logic [2:0]  r_size_reg;

logic [31:0] addr_increment;
always_comb begin
    addr_increment = (1 << r_size_reg); 
end

logic [7:0] mem [134217728];

initial begin
    $readmemh(`MEM_ADDR, mem);
  end

//reading
always_ff @(posedge clk) begin
    if(rst) begin
        slave<=IDLE;
        arready<=1;
        rdata<=0;
        rresp<=0;
        rvalid<=0;
        rlast<=0;
        r_addr_reg  <= 0;
        r_len_reg   <= 0;
        r_size_reg  <= 0;
    end else begin
        case(slave)
            IDLE: begin
                rlast  <= 1'b0;
                rvalid <= 1'b0;

                if(arvalid && arready) begin
                    r_addr_reg <= {araddr[31:2],2'b0};
                    r_len_reg  <= arlen;
                    r_size_reg <= arsize;
                    
                    rdata      <= {mem[{araddr[31:2],2'b0}-32'h80000000+3],mem[{araddr[31:2],2'b0}-32'h80000000+2],mem[{araddr[31:2],2'b0}-32'h80000000+1],mem[{araddr[31:2],2'b0}-32'h80000000]};
                    rvalid     <= 1'b1;
                    arready    <= 1'b0; 
                    
                    if (arlen == 8'h00) begin
                        rlast <= 1'b1;
                    end
                    
                    slave <= WAIT_R;
                end else begin
                    arready <= 1'b1;
                end
            end
            
            WAIT_R: begin
                if(rvalid && rready) begin
                    if(r_len_reg == 8'h00) begin
                        rvalid  <= 1'b0;
                        rlast   <= 1'b0;
                        arready <= 1'b1;
                        slave   <= IDLE;
                    end else begin
                        r_len_reg  <= r_len_reg - 1'b1;
                        r_addr_reg <= r_addr_reg + addr_increment;
                        
                        rdata  <= {mem[r_addr_reg + addr_increment -32'h80000000+3],mem[r_addr_reg + addr_increment -32'h80000000+2],mem[r_addr_reg + addr_increment -32'h80000000+1],mem[r_addr_reg + addr_increment -32'h80000000]};
                        rvalid <= 1'b1;
                        
                        if (r_len_reg == 8'h01) begin
                            rlast <= 1'b1;
                        end
                    end
                end
            end
            default: slave <= IDLE;
        endcase
    end
end

typedef enum{
    IDLE_S, WAIT, WAIT_RESP
} IFU_state_s_t;
IFU_state_s_t slave_w;

logic done_aw, done_w;
logic [31:0] w,aw;
logic [3:0] mask;
logic [31:0] w_base;
assign w_base = {aw[31:2], 2'b00} - 32'h80000000;
//writing
always_ff @(posedge clk) begin
    if(rst) begin
        slave_w<=IDLE_S;
        awready<=1;
        wready<=1;
        aw<=0;
        w<=0;
        mask<=0;
        done_aw<=0;
        done_w<=0;
        bvalid<=0;
        bresp<=0;
    end else begin
        case(slave_w)
            IDLE_S: begin
                if(awvalid) begin
                    aw<=awaddr;
                    done_aw<=1;
                end
                if(wvalid) begin
                    w<=wdata;
                    mask<=wstrb;
                    done_w<=1;
                end
                if((done_aw || awvalid)&&(done_w || wvalid)) slave_w<=WAIT;
            end
            WAIT: begin
                if({aw[31:2], 2'b00} == 32'ha00003f8) begin
                    if      (mask[0]) $write("%c", w[7:0]);
                    else if (mask[1]) $write("%c", w[15:8]);
                    else if (mask[2]) $write("%c", w[23:16]);
                    else if (mask[3]) $write("%c", w[31:24]);
                    $fflush();
                end else begin
                    if (mask[0]) mem[w_base]     <= w[7:0];
                    if (mask[1]) mem[w_base + 1] <= w[15:8];
                    if (mask[2]) mem[w_base + 2] <= w[23:16];
                    if (mask[3]) mem[w_base + 3] <= w[31:24];
                end
                done_aw<=0;
                done_w<=0;
                bvalid<=1;
                slave_w<=WAIT_RESP;
            end
            WAIT_RESP: begin
                if(bready)begin
                    bvalid<=0;
                    bresp<=0;
                    slave_w<=IDLE_S;
                end
            end
        endcase
    end
end

endmodule
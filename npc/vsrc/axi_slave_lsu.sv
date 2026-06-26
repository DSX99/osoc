module axi_slave_lsu(
    input logic clk, rst,
    
        // Read Addr Channel (AR)
    input  logic [31:0] araddr,
    input  logic        arvalid,
    output logic        arready,

    // Read Data Channel (R)
    output logic [31:0] rdata,
    output logic [1:0]  rresp,
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

import "DPI-C" function int memread(int addr);
import "DPI-C" function void memwrite(int addr, int data, int idk);

typedef enum{
    IDLE, WAIT_AR, WAIT_R
} IFU_state_t;
IFU_state_t slave;

//reading
always_ff @(posedge clk) begin
    if(rst) begin
        slave<=IDLE;
        arready<=0;
        rdata<=0;
        rresp<=0;
        rvalid<=0;
    end else begin
        case(slave)
            IDLE: begin
                if(arvalid) begin
                    arready<=1;
                    slave<=WAIT_AR;
                end
            end
            WAIT_AR: begin
                if(arready & arvalid) begin
                    arready<=0;
                    slave<=WAIT_R;
                    rvalid<=1;
                    rdata<=memread(araddr);
                end
            end
            WAIT_R: begin
                if(rvalid && rready) begin
                    rdata<=0;
                    rvalid<=0;
                    slave<=IDLE;
                end
            end
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
                case(mask)
                    4'b0001:memwrite(aw, w,0);
                    4'b0011:memwrite(aw, w,1);
                    4'b1111:memwrite(aw, w,2);
                    default:;
                endcase
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
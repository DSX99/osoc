module axi_slave(
    input logic clk, rst,
    
        // Read Addr Channel (AR)
    input  logic [31:0] araddr,
    input  logic        arvalid,
    output logic        arready,

    // Read Data Channel (R)
    output logic [31:0] rdata,
    output logic [1:0]  rresp,
    output logic        rvalid,
    input  logic        rready
);

import "DPI-C" function int memread(int addr);

typedef enum{
    IDLE, WAIT_AR, WAIT_R
} IFU_state_t;
IFU_state_t slave;

always_ff @(posedge clk) begin
    if(rst) begin
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

endmodule
module CLINT(
    input logic clk, rst,

    input logic [31:0] caddr,
    input logic [31:0] cwdata,
    output logic [31:0] crdata,

    input logic carvalid, cwvalid, cawvalid,
    output logic carready, cawready, cwready,

    input logic crready,
    output logic crvalid
);

parameter NUM = 3; //possibly can be changed on start of simulation, may be good
parameter DEN = 1698;

logic [11:0]  divisor; 
logic [63:0] mtime; 
logic [31:0] timecp; //TODO
logic [31:0] buff;


logic done_aw, done_w;

logic unused_bits;

assign unused_bits = |caddr[31:16];

assign cwready = cwvalid;
assign cawready = cawvalid;
assign carready = carvalid;

typedef enum{
IDLE_R, WAIT_RR, WAIT_RRESP
} CLINT_R;

CLINT_R clint_r;

typedef enum{
IDLE_W, WAIT_WW, WAIT_WRESP
} CLINT_W;

CLINT_W clint_w;

always_ff @(posedge clk) begin
    if(rst) begin
        crdata<=0;
        mtime<=0;
        clint_r<=IDLE_R;
        divisor<=0;
        crvalid<=0;
    end else begin
        if(divisor == DEN) divisor<=1;
        else divisor<= divisor+1;
        
        if(divisor == DEN) mtime <= mtime + NUM;

        case(clint_r) 
            IDLE_R:begin
                if(carready && carvalid)begin
                    clint_r<=WAIT_RR;
                    if(caddr[15:0] == 16'hbffc) begin
                        crdata <= mtime[31:0];
                        buff <= mtime[63:32];
                    end else if(caddr[15:0] == 16'hbff8) begin
                        crdata <= buff;
                    end
                    crvalid<=1;
                end
            end
            WAIT_RR:begin
                if(crready && crvalid) begin
                    clint_r<=IDLE_R;
                    crvalid<=0;
                end
            end
            WAIT_RRESP:begin
                ;
            end
            default: ;
        endcase


        //TODO writing to reg
    end
end


endmodule
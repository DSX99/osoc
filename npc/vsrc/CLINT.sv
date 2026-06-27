module CLINT(
    input logic clk, rst,

    input logic [31:0] caddr,

    input logic [31:0] cwdata,
    output logic [31:0] crdata,

    input logic crvalid, cwvalid,
    output logic cready
);

logic [63:0] mtime; //mtimecmp, msip
logic [31:0] timecp;

logic unused_bits;

assign unused_bits = |caddr[31:16];

always_ff @( posedge clk ) begin
    if(rst) begin
        mtime<=0;
    end else begin
        mtime<=mtime+1;
        if(crvalid) begin
            if(caddr[15:0] == 16'h4) begin 
                crdata<=mtime[63:32];
                timecp<=mtime[31:0];
            end
            if(caddr[15:0] == 0) crdata<=timecp;
            cready<=1;
        end
        if(cwvalid) begin
            if(caddr[15:0] == 0) mtime[31:0]<=cwdata;
            if(caddr[15:0] == 16'h4) mtime[63:32]<=cwdata;
            cready<=1;
        end
        if((crvalid || cwvalid) && cready) cready<=0;
    end
end

endmodule
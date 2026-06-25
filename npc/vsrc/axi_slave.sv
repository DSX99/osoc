module axi_slave (
    input  logic        clk,
    input  logic        rst,
    
    // Write Address Channel
    input  logic [31:0] awaddr,  
    input  logic        awvalid,
    output logic        awready,
    
    // Write Data Channel
    input  logic [31:0] wdata,   
    input  logic        wvalid,
    output logic        wready,
    input  logic [3:0]  wstrb,
    
    // Write Response Channel
    output logic [1:0]  bresp,
    output logic        bvalid,
    input  logic        bready,
    
    // Read Address Channel
    input  logic [31:0] araddr,  
    input  logic        arvalid,
    output logic        arready,
    
    // Read Data Channel
    output logic [31:0] rdata,   
    output logic [1:0]  rresp,
    output logic        rvalid,
    input  logic        rready
);

logic [31:0] aw;
logic aw_done, ar_done;
logic [3:0] aw_mask;

import "DPI-C" function void memwrite(int addr, int data, int idk);
import "DPI-C" function int memread(int addr);

assign arready = arvalid;

always_ff @(posedge clk) begin
    if (rst) begin
            awready     <= 1'b0;
            wready      <= 1'b0;
            bvalid      <= 1'b0;
            bresp       <= 2'b00;
            rdata<=0;
            rresp<=0;
            rvalid<=0;
            aw<=0;
            aw_done<=0;
            aw_done<=0;
            ar_done<=0;
            aw_mask<=0;
    end else begin

        //reading
        if(arvalid && arready) begin
            rdata<=memread(araddr);
            rvalid<=1;
            ar_done<=1;
        end

        if(rvalid && rready || ar_done) begin
            rvalid<=0;
            rresp<=0;
            ar_done<=0;
        end



        //writing

        if(awvalid) awready<=1;
        if(awvalid && awready) begin
            aw<=awaddr;
            aw_mask <= wstrb;
            aw_done<=1;
            awready<=0;
        end

        if(wvalid && (aw_done || awvalid)) wready<=1;
        if(wvalid && wready) begin
            if(aw_done) memwrite(aw, wdata, {28'b0,aw_mask});
            if(awvalid && awready) memwrite(aw, wdata, {28'b0,aw_mask});
            bvalid<=1;
            wready<=0;
            aw_done<=0;
        end

        if(bvalid && bready) begin
            bresp<=0;
            bvalid<=0;
        end

    end
end


endmodule
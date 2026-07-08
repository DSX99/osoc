module regs (
    input logic clk,
    input logic rst,
    input logic [31:0] data_in,
    input logic [4:0] rs1,
    input logic [4:0] rs2,
    input logic [4:0] rd,
    output logic [31:0] data_rs1,
    output logic [31:0] data_rs2,
    
    input logic valid,
    output logic ready
);
    
    logic [31:0] regs [15:0] /* verilator public */; 

    always_comb begin
        ready=1;

        data_rs1 = regs[rs1];
        data_rs2 = regs[rs2];
    end

    always_ff @(posedge clk) begin
        if(rst) begin
            for (int i=0;i<15;i++) begin
                regs[i]<=0;
            end
        end else begin
            if(valid) begin
                regs[rd]<=data_in;
                regs[0]<=0;
            end
        end
    end
endmodule
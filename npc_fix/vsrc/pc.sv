module pc(
    input logic clk,
    input logic rst,
    input logic branch,
    input logic [31:0] data_in,
    input logic valid,
    input logic wb_valid,

    output logic [31:0] pc,
    output logic [31:0] next_pc
);

    initial begin
        pc = 32'h30000000;
    end

    assign next_pc = pc + 4;


    always_ff @(posedge clk) begin
        if(rst) begin
            pc<=32'h30000000;
        end else begin
            if(valid) begin
                pc<=next_pc;
            end
            if(wb_valid)begin
                if(branch)begin
                    pc<=data_in;
                end
            end
        end
    end

endmodule
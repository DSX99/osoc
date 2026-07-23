module pc(
    input logic clk,
    input logic rst,

    input logic do_spec,
    input logic [11:0] addr_spec,

    input logic branch,
    input logic csr_branch,
    input logic speculation,

    input logic [31:0] branch_addr,
    input logic [31:0] csr_branch_addr,
    input logic [31:0] mispred_addr,

    input logic valid,
    input logic wb_valid,
    input logic ex_valid,

    output logic [31:0] pc,
    output logic [31:0] next_pc
);

    initial begin
        `ifdef SOC
            pc = 32'h30000000;
        `endif
        `ifdef NPC
            pc = 32'h80000000;
        `endif
        `ifdef __ICARUS__
            pc = 32'h80000000;
        `endif
    end

    assign next_pc = pc + (do_spec ? {{19{addr_spec[11]}}, addr_spec, 1'b0} : 4);

    always_ff @(posedge clk) begin
        if(rst) begin
        `ifdef SOC
            pc = 32'h30000000;
        `endif
        `ifdef NPC
            pc = 32'h80000000;
        `endif
        `ifdef __ICARUS__
            pc = 32'h80000000;
        `endif
        end else begin
            if(wb_valid && csr_branch) begin
                pc <= csr_branch_addr;
            end else if(ex_valid && (speculation != branch)) begin
                if(speculation) begin
                    pc <= mispred_addr + 4;
                end else begin
                    pc <= branch_addr;
                end
            end else if(valid) begin
                pc <= next_pc;
            end
        end
    end

endmodule
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
        pc = 32'h30000000;
    end

    assign next_pc = ((speculation!=branch) && speculation && ex_valid ? mispred_addr : pc) + (do_spec ? {{19{addr_spec[11]}},addr_spec,1'b0} : 4);
    
    always_ff @(posedge clk) begin
        if(rst) begin
            pc<=32'h30000000;
        end else begin
            if(valid) begin
                pc<=next_pc;
            end
            if(ex_valid && (speculation!=branch))begin
                if(speculation)begin
                    pc<=next_pc;
                end else begin
                    pc<=branch_addr;
                end
            end
            if(wb_valid && csr_branch)begin
                pc<=csr_branch_addr;
            end
        end
    end

endmodule
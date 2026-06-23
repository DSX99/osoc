module csr(
    input logic clk,
    input logic rst,
    input logic [1:0] oper,
    input logic [4:0] cause,
    input logic [11:0] addr,
    input logic [31:0] data_in,
    input logic [31:0] pc,
    output logic [31:0] data_out
);

logic [31:0] regs [3:0];

enum{
    MEPS, MSTATUS, MCAUSE, MTVEC
} idk;

logic [3:0] working_reg;

initial begin
    for(int i=0;i<4;i++) begin
        regs[i]<=0;
    end
end

always_comb begin
    case(addr)
        12'h300: working_reg = MSTATUS;
        12'h305: working_reg = MTVEC;
        12'h341: working_reg = MEPS;
        12'h342: working_reg = MCAUSE;
    endcase
    if(cause != 0) working_reg = MTVEC;
    data_out = regs[working_reg];
end

always_ff @(posedge clk) begin
    case(oper)
        2'b00: ;
        2'b00 : begin
            regs[working_reg] <= data_in;
        end
        2'b10 : begin
            regs[working_reg] <= regs[working_reg] | data_in;
        end
        2'b11 : begin
            regs[working_reg] <= regs[working_reg] & (~data_in);
        end
    endcase

    if(cause !=0) begin
        regs[MEPS]<=pc;
        regs[MCAUSE]<=cause;
    end
end



endmodule
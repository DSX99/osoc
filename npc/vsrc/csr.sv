module csr(
    input logic clk,
    input logic rst,
    input logic [1:0] oper,
    input logic [4:0] cause,
    input logic [11:0] addr,
    input logic [31:0] data_in,
    input logic [31:0] pc,
    output logic [31:0] data_out,

    input logic valid_left, ready_right,
    output logic ready_left, valid_right
);

logic [31:0] regs [4:0];

typedef enum bit [2:0]{
    UNUSED, MEPS, MSTATUS, MCAUSE, MTVEC, MVENDORID, MARCHID
} csr_t;

logic [2:0] working_reg;

initial begin
    for(int i = 0; i < 32; i++) begin
        regs[i] = 32'h0;
    end
    regs[MSTATUS] = 32'h00001800;
    regs[MVENDORID] = 32'h20445358;
    regs[MARCHID] = 32'h20393920;
end

always_comb begin
    valid_right = valid_left;
    ready_left = ready_right;


    working_reg =0;
    case(addr)
        12'h300: working_reg = MSTATUS;
        12'h305: working_reg = MTVEC;
        12'h341: working_reg = MEPS;
        12'h342: working_reg = MCAUSE;
        12'hF11: working_reg = MVENDORID;
        12'hF12: working_reg = MARCHID;
        default working_reg = UNUSED;
    endcase
    if(cause != 0) working_reg = MTVEC;
    data_out = regs[working_reg];
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < 32; i++) begin
            regs[i] <= 32'h0;
        end
        regs[MSTATUS] <= 32'h00001800;
    end else begin
        if(valid_left && ready_left) begin
            case(oper)
                2'b00: ;
                2'b01 : begin
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
                regs[MCAUSE]<={27'b0,cause};
            end
        end
    end
end



endmodule
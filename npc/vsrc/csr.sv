module csr(
    input logic clk,
    input logic rst,
    input logic [11:0] raddr,waddr,
    input logic [31:0] data_in, pc,
    input logic exception,
    input logic [3:0] cause,
    output logic [31:0] data_out, data_pc_out,

    input logic valid
);

logic [31:0] regs [32];

typedef enum bit [4:0]{
    UNUSED, MEPS, MSTATUS, MCAUSE, MTVEC, MVENDORID, MARCHID, MSCRATCH
} csr_t;

logic [4:0] working_reg_r,working_reg_w;

initial begin
    for(int i = 0; i < 32; i++) begin
        regs[i] = 32'h0;
    end
    regs[MSTATUS] = 32'h00001800;
    regs[MVENDORID] = 32'h20445358;
    regs[MARCHID] = 32'h20393920;
end

always_comb begin
    working_reg_r =0;
    working_reg_w =0;
    case(raddr)
        12'h300: working_reg_r = MSTATUS;
        12'h305: working_reg_r = MTVEC;
        12'h340: working_reg_r = MSCRATCH;
        12'h341: working_reg_r = MEPS;
        12'h342: working_reg_r = MCAUSE;
        12'hF11: working_reg_r = MVENDORID;
        12'hF12: working_reg_r = MARCHID;
        default working_reg_r = UNUSED;
    endcase
    case(waddr)
        12'h300: working_reg_w = MSTATUS;
        12'h305: working_reg_w = MTVEC;
        12'h340: working_reg_r = MSCRATCH;
        12'h341: working_reg_w = MEPS;
        12'h342: working_reg_w = MCAUSE;
        12'hF11: working_reg_w = MVENDORID;
        12'hF12: working_reg_w = MARCHID;
        default working_reg_w = UNUSED;
    endcase
    if(exception) data_pc_out = regs[MTVEC];
    else data_pc_out = regs[MEPS];

    data_out = regs[working_reg_r];
end

always_ff @(posedge clk) begin
    if(rst) begin
        for(int i = 0; i < 32; i++) begin
            regs[i] <= 32'h0;
        end
        regs[MSTATUS] <= 32'h00001800;
        regs[MVENDORID] = 32'h20445358;
        regs[MARCHID] = 32'h20393920;
    end else begin
        if(valid) begin
            if(exception) begin
                regs[MEPS]<=pc;
                regs[MCAUSE]<={28'b0,cause};
            end else begin
                regs[working_reg_w] <= data_in;
            end
        end
    end
end



endmodule
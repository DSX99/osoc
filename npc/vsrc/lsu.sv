`include "pipeline_bus_pkg.sv"
import pipeline_bus_pkg::*;

module lsu(
    input logic clk,
    input ex_to_ls_bus_t bus_in,
    output ls_to_wb_bus_t bus_out,
    output logic valid,
    input logic ready
);

    // LB 0
    // LH 1
    // LW 2
    // LBU 3
    // LHU 4
    // SB 5
    // SH 6
    // SW 7

    import "DPI-C" function void memwrite(int addr, int data, int idk);
    import "DPI-C" function int memread(int addr);

    int A;

    always_comb begin
        bus_out = '0;
        bus_out.alu_out = bus_in.alu_out;
        bus_out.next_pc = bus_in.next_pc;
        bus_out.csr_out = bus_in.csr_out;
        bus_out.rd = bus_in.rd;
        bus_out.mux_select = bus_in.mux_select;

        if(bus_in.lsu_le) begin
            case(bus_in.lsu_oper)
                0: begin //LB
                    A = memread(bus_in.alu_out);
                    bus_out.lsu_out = {{24{A[7]}},A[7:0]};
                end 
                1: begin //LH
                    A = memread(bus_in.alu_out);
                    bus_out.lsu_out = {{16{A[15]}},A[15:0]};
                end 
                2: begin //LW
                    A = memread(bus_in.alu_out);
                    bus_out.lsu_out = A[31:0];
                end 
                4: begin //LBU
                    A = memread(bus_in.alu_out);
                    bus_out.lsu_out = {24'b0,A[7:0]};
                end 
                5: begin //LHU
                    A = memread(bus_in.alu_out);
                    bus_out.lsu_out = {16'b0,A[15:0]};
                end 
            endcase
        end
    end 

always_ff @( posedge clk ) begin
    if(bus_in.lsu_we) begin
        case(bus_in.lsu_oper)
            0: begin //SB
                memwrite(bus_in.alu_out, bus_in.data_rs2, 0);
            end 
            1: begin //SH
                memwrite(bus_in.alu_out, bus_in.data_rs2, 1);
            end 
            2: begin //SW
                memwrite(bus_in.alu_out, bus_in.data_rs2, 2);
            end
        endcase
    end
end

    always_comb valid = 1'b1;

endmodule
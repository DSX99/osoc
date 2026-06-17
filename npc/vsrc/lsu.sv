module lsu(
    input logic we,
    input logic [31:0] data_in,
    input logic [31:0] addr,
    input logic [2:0] oper,
    output logic [31:0] data_out
);

    // LB 0
    // LH 1
    // LW 2
    // LBU 3
    // LHU 4
    // SB 5
    // SH 6
    // SW 7

    import "DPI-C" function void write(int addr, int data, int idk);
    import "DPI-C" function int read(int addr);

    int A;

    always_comb begin
        data_out = 0;
        if(we) begin
            case(oper)
                0: begin //LB
                    A = read(addr);
                    data_out = {{24{A[7]}},A[7:0]};
                end 
                1: begin //LH
                    A = read(addr);
                    data_out = {{16{A[15]}},A[15:0]};
                end 
                2: begin //LW
                    A = read(addr);
                    data_out = A[31:0];
                end 
                3: begin //LBU
                    A = read(addr);
                    data_out = {24'b0,A[7:0]};
                end 
                4: begin //LHU
                    A = read(addr);
                    data_out = {16'b0,A[15:0]};
                end 
                5: begin //SB
                    write(addr, data_in, 0);
                end 
                6: begin //SH
                    write(addr, data_in, 1);
                end 
                7: begin //SW
                    write(addr, data_in, 2);
                end
            endcase
        end
    end 

endmodule
import pipeline_bus_pkg::ex_to_ls_bus_t;
import pipeline_bus_pkg::ls_to_wb_bus_t;

module lsu(
    input logic clk,
    input pipeline_bus_pkg::ex_to_ls_bus_t bus_in,
    output pipeline_bus_pkg::ls_to_wb_bus_t bus_out,
    input logic valid_left, ready_right,
    output logic ready_left, valid_right,

    // Read Address Channel (AR)
    output logic [31:0] araddr,
    output logic        arvalid,
    input  logic        arready,

    // Read Data Channel (R)
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready,

    // Write Address Channel (AW)
    output logic [31:0] awaddr,
    output logic        awvalid,
    input  logic        awready,

    // Write Data Channel (W)
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wvalid,
    input  logic        wready,

    // Write Response Channel (B)
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready
);

    // LB 0
    // LH 1
    // LW 2
    // LBU 3
    // LHU 4
    // SB 5
    // SH 6
    // SW 7

    typedef enum{
        IDLE, WAIT_AR, WAIT_R
    } IFU_state_t;
    IFU_state_t lsu_l;

    typedef enum{
        IDLE, WAIT, WAIR_RESP,
    } IFU_state_t;
    IFU_state_t lsu_s;

    import "DPI-C" function void memwrite(int addr, int data, int idk);

    logic [31:0] lsu_out;
    logic unused_branch;
    logic ready;

    always_comb begin
        valid_right = valid_left;
        ready_left = ready_right && !(lsu_le && ready);
        unused_branch = bus_in.branch;


        bus_out = '0;

        if(valid_left && ready_right) begin //should it be here or better to take out for future?                   !!check when doing pipeline            
            bus_out.lsu_out = lsu_out;
                
            bus_out.alu_out = bus_in.alu_out;
            bus_out.next_pc = bus_in.next_pc;
            bus_out.csr_out = bus_in.csr_out;
            bus_out.rd = bus_in.rd;
            bus_out.mux_select = bus_in.mux_select;
            bus_out.mux_select_pc = bus_in.mux_select_pc;
        end 
    end

//reading
always_ff @(posedge clk) begin
    if(rst) begin
        bus_out.lsu_out<=0;
        arvalid<=0;
        araddr<=0;
        rready<=0;
        ready<=0;
    end else begin
        if(ready_right && valid_left) begin
            case(lsu_l)
                IDLE:begin
                    if(lsu_le) begin
                        arvalid<=1;
                        araddr<=addr;
                        lsu_l<=WAIT_AR;
                        ready<=0;
                    end
                end
                WAIT_AR:begin
                    if(arready)begin 
                        arvalid<=0;
                        lsu_l<=WAIT_R;
                        rready<=1;
                    end
                end
                WAIT_R:begin
                    if(rvalid) begin
                        lsu_l<=IDLE;
                        case(bus_in.lsu_oper)
                            0: begin //LB
                                lsu_out = {{24{rdata[7]}},rdata[7:0]};
                            end 
                            1: begin //LH
                                lsu_out = {{16{rdata[15]}},rdata[15:0]};
                            end 
                            2: begin //LW
                                lsu_out = rdata[31:0];
                            end 
                            4: begin //LBU
                                lsu_out = {24'b0,rdata[7:0]};
                            end 
                            5: begin //LHU
                                lsu_out = {16'b0,rdata[15:0]};
                            end 
                        endcase
                        rready<=0;
                        ready<=1;
                    end
                end
            endcase
        end
    end
end

logic done_aw, done_w;

//writing

always_comb begin
    case(lsu_oper) 
        3'b000: wstrb=4'0001;
        3'b001: wstrb=4'0011;
        3'b010: wstrb=4'1111;
    endcase
end

always_ff @(posedge clk) begin
    if(rst) begin
        bready<=1;
        wdata<=0;
        wvalid<=0;
        awaddr<=0;
        awvalid<=0;
    end else begin
        if(ready_right && valid_left) begin
            case(lsu_s)
                IDLE:begin
                    if(lsu_we) begin
                        awaddr<=addr;
                        awvalid<=1;
                        wdata<=data;
                        wvalid<=1;
                        lsu_s<=WAIT;
                        ready<=0;
                    end
                end
                WAIT:begin
                    if(wready)begin 
                        wvalid<=0;
                        done_w<=1;
                    end
                    if(awready) begin
                        awvalid<=0;
                        done_aw<=1;
                    end
                    if((done_aw || awready) && (done_w || wready)) lsu_s <= WAIR_RESP;
                end
                WAIT_RESP:begin
                    done_aw<=0;
                    done_w<=0;
                    if(bvalid) begin
                        lsu_s<=IDLE;
                        ready<=1;
                    end
                end
            endcase
        end
    end
end


endmodule
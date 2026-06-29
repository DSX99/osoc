import pipeline_bus_pkg::ex_to_ls_bus_t;
import pipeline_bus_pkg::ls_to_wb_bus_t;

module lsu(
    input logic clk,
    input logic rst,
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
    output logic        bready,


    //To CLINT

    input  logic [31:0] crdata,
    output logic        crvalid,
    output logic [31:0] cwdata,
    output logic        cwvalid,
    input  logic        cready,
    output logic [31:0] caddr

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
        IDLE_R, WAIT_AR, WAIT_R, AWAIT_R
    } LSU_state_R_t;
    LSU_state_R_t lsu_r;

    logic unused_branch;
    logic done_r, done_w;

    always_comb begin
        valid_right = valid_left && (!bus_in.lsu_re || done_r) && (!bus_in.lsu_we || done_w); //
        ready_left = ready_right && (!bus_in.lsu_re || done_r) && (!bus_in.lsu_we || done_w);
        unused_branch = bus_in.branch | |rresp | |bresp;

        bus_out.alu_out = 0;
        bus_out.next_pc = 0;
        bus_out.csr_out = 0;
        bus_out.rd = 0;
        bus_out.mux_select = 0;
        bus_out.mux_select_pc = 0;


        if(valid_left && ready_right) begin //should it be here or better to take out for future?                   !!check when doing pipeline                        
            bus_out.alu_out = bus_in.alu_out;
            bus_out.next_pc = bus_in.next_pc;
            bus_out.csr_out = bus_in.csr_out;
            bus_out.rd = bus_in.rd;
            bus_out.mux_select = bus_in.mux_select;
            bus_out.mux_select_pc = bus_in.mux_select_pc;
        end 
    end

//reading (load)

always_ff @(posedge clk) begin
    if(rst) begin
        bus_out.lsu_out<=0;
        arvalid<=0;
        araddr<=0;
        rready<=0;
        done_r<=1;
    end else begin
        if(bus_in.alu_out[31:16] == 16'h0200)begin
            case(lsu_r)
                IDLE_R:begin
                    done_r<=0;
                    if(bus_in.lsu_re && valid_left) begin
                        crvalid<=1;
                        caddr<=bus_in.alu_out;
                        lsu_r<=WAIT_R;
                    end
                end
                WAIT_R:begin
                    if(crvalid && cready) begin
                        lsu_r<=AWAIT_R;
                        case(bus_in.lsu_oper)
                            0: begin //LB
                                case(bus_in.alu_out[1:0])
                                    2'b00: bus_out.lsu_out <= {{24{crdata[7]}},crdata[7:0]};
                                    2'b01: bus_out.lsu_out <= {{24{crdata[15]}},crdata[15:8]};
                                    2'b10: bus_out.lsu_out <= {{24{crdata[23]}},crdata[23:16]};
                                    2'b11: bus_out.lsu_out <= {{24{crdata[31]}},crdata[31:24]};
                                endcase
                            end 
                            1: begin //LH
                                case(bus_in.alu_out[1])
                                    1'b0: bus_out.lsu_out <= {{16{crdata[15]}},crdata[15:0]};
                                    1'b1: bus_out.lsu_out <= {{16{crdata[31]}},crdata[31:16]};
                                endcase
                            end 
                            2: begin //LW
                                bus_out.lsu_out <= crdata[31:0];
                            end 
                            4: begin //LBU
                                case(bus_in.alu_out[1:0])
                                    2'b00: bus_out.lsu_out <= {{24'b0},crdata[7:0]};
                                    2'b01: bus_out.lsu_out <= {{24'b0},crdata[15:8]};
                                    2'b10: bus_out.lsu_out <= {{24'b0},crdata[23:16]};
                                    2'b11: bus_out.lsu_out <= {{24'b0},crdata[31:24]};
                                endcase
                            end 
                            5: begin //LHU
                                case(bus_in.alu_out[1])
                                    1'b0: bus_out.lsu_out <= {{16'b0},crdata[15:0]};
                                    1'b1: bus_out.lsu_out <= {{16'b0},crdata[31:16]};
                                endcase
                            end 
                        endcase
                        crvalid<=0;
                        done_r<=1;
                    end
                end
                AWAIT_R:begin
                    if(ready_right && valid_left) begin
                        done_r<=0;
                        lsu_r<=IDLE_R;
                    end
                end
            endcase            
        end else begin
            case(lsu_r)
                IDLE_R:begin
                    done_r<=0;
                    if(bus_in.lsu_re && valid_left) begin
                        arvalid<=1;
                        araddr<=bus_in.alu_out;
                        lsu_r<=WAIT_AR;
                    end
                end
                WAIT_AR:begin
                    if(arready && arvalid)begin 
                        arvalid<=0;
                        rready<=1;
                        lsu_r<=WAIT_R;
                    end
                end
                WAIT_R:begin
                    if(rvalid && rready) begin
                        lsu_r<=AWAIT_R;
                        case(bus_in.lsu_oper)
                            0: begin //LB
                                case(bus_in.alu_out[1:0])
                                    2'b00: bus_out.lsu_out <= {{24{rdata[7]}},rdata[7:0]};
                                    2'b01: bus_out.lsu_out <= {{24{rdata[15]}},rdata[15:8]};
                                    2'b10: bus_out.lsu_out <= {{24{rdata[23]}},rdata[23:16]};
                                    2'b11: bus_out.lsu_out <= {{24{rdata[31]}},rdata[31:24]};
                                endcase
                            end 
                            1: begin //LH
                                case(bus_in.alu_out[1])
                                    1'b0: bus_out.lsu_out <= {{16{rdata[15]}},rdata[15:0]};
                                    1'b1: bus_out.lsu_out <= {{16{rdata[31]}},rdata[31:16]};
                                endcase
                            end 
                            2: begin //LW
                                bus_out.lsu_out <= rdata[31:0];
                            end 
                            4: begin //LBU
                                case(bus_in.alu_out[1:0])
                                    2'b00: bus_out.lsu_out <= {{24'b0},rdata[7:0]};
                                    2'b01: bus_out.lsu_out <= {{24'b0},rdata[15:8]};
                                    2'b10: bus_out.lsu_out <= {{24'b0},rdata[23:16]};
                                    2'b11: bus_out.lsu_out <= {{24'b0},rdata[31:24]};
                                endcase
                            end 
                            5: begin //LHU
                                case(bus_in.alu_out[1])
                                    1'b0: bus_out.lsu_out <= {{16'b0},rdata[15:0]};
                                    1'b1: bus_out.lsu_out <= {{16'b0},rdata[31:16]};
                                endcase
                            end 
                        endcase
                        rready<=0;
                        done_r<=1;
                    end
                end
                AWAIT_R:begin
                    if(ready_right && valid_left) begin
                        done_r<=0;
                        lsu_r<=IDLE_R;
                    end
                end
            endcase
        end
    end
end


//writing (save)


logic done_aw, done_wdata;

typedef enum{
    IDLE_W, WAIT_W, WAIT_WRESP, AWAIT_W
} LSU_state_w_t;
LSU_state_w_t lsu_w;

always_comb begin
    case(bus_in.lsu_oper) 
        3'b000: wstrb=(4'b0001 << bus_in.alu_out[1:0]);
        3'b001: wstrb=(4'b0011 << bus_in.alu_out[1:0]);
        3'b010: wstrb=4'b1111;
        default: wstrb=0;
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
        if(bus_in.alu_out[31:16] == 16'h0200)begin
            case(lsu_w)
                IDLE_W:begin
                    done_w<=0;
                    if(bus_in.lsu_we && valid_left) begin
                        caddr<=bus_in.alu_out;
                        cwdata<=bus_in.data_rs2;
                        cwvalid<=1;
                        lsu_w<=WAIT_W;
                    end
                end
                WAIT_WRESP:begin
                    if(cwvalid && cready) begin
                        cwvalid<=0;
                        lsu_w<=AWAIT_W;
                        done_w<=1;
                    end
                end
                AWAIT_W:begin
                    if(ready_right && valid_left) begin
                        done_w<=0;
                        lsu_w<=IDLE_W;
                    end
                end
            endcase
        end else begin
            case(lsu_w)
                IDLE_W:begin
                    done_w<=0;
                    if(bus_in.lsu_we && valid_left) begin
                        awaddr<=bus_in.alu_out;
                        awvalid<=1;
                        wdata<=(bus_in.data_rs2 << (bus_in.alu_out[1:0]*8));
                        wvalid<=1;
                        lsu_w<=WAIT_W;
                    end
                end
                WAIT_W:begin
                    if(wready)begin 
                        wvalid<=0;
                        done_wdata<=1;
                    end
                    if(awready) begin
                        awvalid<=0;
                        done_aw<=1;
                    end
                    if((done_aw || awready) && (done_wdata || wready)) lsu_w <= WAIT_WRESP;
                end
                WAIT_WRESP:begin
                    done_aw<=0;
                    done_wdata<=0;
                    if(bvalid) begin
                        lsu_w<=AWAIT_W;
                        done_w<=1;
                    end
                end
                AWAIT_W:begin
                    if(ready_right && valid_left) begin
                        done_w<=0;
                        lsu_w<=IDLE_W;
                    end
                end
            endcase
        end
    end
end


endmodule
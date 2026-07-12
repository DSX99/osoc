module lsu (
    input logic clk,
    input logic rst,
    input logic flush,

    input logic [31:0] bus_in_next_pc,       
    input logic [31:0] bus_in_alu_out,       
    input logic [31:0] bus_in_data_rs2,      
    input logic [31:0] bus_in_csr_out,       
    input logic        bus_in_lsu_we,        
    input logic        bus_in_lsu_re,        
    input logic [2:0]  bus_in_lsu_oper,      
    input logic [4:0]  bus_in_rd,            
    input logic [1:0]  bus_in_mux_select,    
    input logic        bus_in_mux_select_pc, 
    input logic        bus_in_branch,        

    output logic [31:0] bus_out_alu_out,       
    output logic [31:0] bus_out_lsu_out,       
    output logic [31:0] bus_out_next_pc,       
    output logic [31:0] bus_out_csr_out,       
    output logic [4:0]  bus_out_rd,            
    output logic [1:0]  bus_out_mux_select,    
    output logic        bus_out_mux_select_pc, 
    output logic        bus_out_branch,

    input  logic valid_left, ready_right,
    output logic ready_left, valid_right,

    output logic [31:0] araddr,
    output logic        arvalid,
    input  logic        arready,
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready,

    output logic [31:0] awaddr,
    output logic        awvalid,
    input  logic        awready,
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wvalid,
    output logic        wlast,
    input  logic        wready,
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready

);

    // LB 0, LH 1, LW 2, LBU 3, LHU 4, SB 5, SH 6, SW 7

    logic unused_branch;
    logic done_r, done_w;
    logic trans_r, trans_w;

    assign wlast = wvalid;

    always_comb begin

        unused_branch = |rresp | |bresp;

        bus_out_alu_out       = 0;
        bus_out_next_pc       = 0;
        bus_out_csr_out       = 0;
        bus_out_rd            = 0;
        bus_out_mux_select    = 0;
        bus_out_mux_select_pc = 0;
        bus_out_branch        = 0;

        if (valid_left && ready_right) begin 
            bus_out_alu_out       = bus_in_alu_out;
            bus_out_next_pc       = bus_in_next_pc;
            bus_out_csr_out       = bus_in_csr_out;
            bus_out_rd            = bus_in_rd;
            bus_out_mux_select    = bus_in_mux_select;
            bus_out_mux_select_pc = bus_in_mux_select_pc;
            bus_out_branch        = bus_in_branch;
        end 


        arvalid = 0;
        araddr  = 0;
        rready  = 0;
        bus_out_lsu_out = 0;
        done_r = 0;

        awaddr  = 0;
        awvalid = 0;
        wdata = 0;
        wvalid = 0;
        done_w = 0;
        bready = 0;

        if(!rst) begin
        //read
        if(bus_in_lsu_re || trans_r) begin
        case(lsu_r)
            IDLE_R: begin
                if (bus_in_lsu_re && valid_left && !flush) begin
                    arvalid = 1;
                    araddr  = bus_in_alu_out;
                end
            end
            WAIT_AR: begin
                arvalid = 1;
                araddr  = bus_in_alu_out;
                
            end
            WAIT_R: begin
                rready  = 1;

                if (rvalid && rready) begin
                    case (bus_in_lsu_oper)
                        0: begin // LB
                            case (bus_in_alu_out[1:0])
                                2'b00: bus_out_lsu_out = {{24{rdata[7]}}, rdata[7:0]};
                                2'b01: bus_out_lsu_out = {{24{rdata[15]}}, rdata[15:8]};
                                2'b10: bus_out_lsu_out = {{24{rdata[23]}}, rdata[23:16]};
                                2'b11: bus_out_lsu_out = {{24{rdata[31]}}, rdata[31:24]};
                            endcase
                        end 
                        1: begin // LH
                            case (bus_in_alu_out[1])
                                1'b0: bus_out_lsu_out = {{16{rdata[15]}}, rdata[15:0]};
                                1'b1: bus_out_lsu_out = {{16{rdata[31]}}, rdata[31:16]};
                            endcase
                        end 
                        2: begin // LW
                            bus_out_lsu_out = rdata[31:0];
                        end 
                        4: begin // LBU
                            case (bus_in_alu_out[1:0])
                                2'b00: bus_out_lsu_out = {{24'b0}, rdata[7:0]};
                                2'b01: bus_out_lsu_out = {{24'b0}, rdata[15:8]};
                                2'b10: bus_out_lsu_out = {{24'b0}, rdata[23:16]};
                                2'b11: bus_out_lsu_out = {{24'b0}, rdata[31:24]};
                            endcase
                        end 
                        5: begin // LHU
                            case (bus_in_alu_out[1])
                                1'b0: bus_out_lsu_out = {{16'b0}, rdata[15:0]};
                                1'b1: bus_out_lsu_out = {{16'b0}, rdata[31:16]};
                            endcase
                        end 
                    endcase
                    done_r = 1;
                end
            end
        endcase
        end

        //write
        if(bus_in_lsu_we || trans_w) begin
        case(lsu_w)
            IDLE_W: begin
                if (bus_in_lsu_we && valid_left && !flush) begin
                    awaddr  = bus_in_alu_out; 
                    awvalid = 1;
                    wdata   = (bus_in_data_rs2 << (bus_in_alu_out[1:0] * 8));
                    wvalid  = 1;
                end
            end
            WAIT_W: begin
                awaddr  = bus_in_alu_out; 
                awvalid = 1;
                wdata   = (bus_in_data_rs2 << (bus_in_alu_out[1:0] * 8));
                wvalid  = 1;
            end
            WAIT_WRESP: begin
                bready = 1;
            end
            WAIT_COMMIT: begin
                done_w = 1;
            end
        endcase
        end
        end

        valid_right   = valid_left && (!bus_in_lsu_re || done_r) && (!bus_in_lsu_we || done_w); 
        ready_left    = ready_right && (!bus_in_lsu_re || done_r) && (!bus_in_lsu_we || done_w);
    end

    //read
    
    typedef enum {
        IDLE_R, WAIT_AR, WAIT_R
    } LSU_state_R_t;
    LSU_state_R_t lsu_r;

    always_ff @(posedge clk) begin
        if (rst) begin
            lsu_r           <= IDLE_R;
        end else begin
            case (lsu_r)
                IDLE_R: begin
                    if (bus_in_lsu_re && valid_left && !flush) begin
                        lsu_r <= WAIT_AR;
                        trans_r<=1;
                        if (arready && arvalid) begin
                            lsu_r <= WAIT_R;
                        end
                    end
                end
                WAIT_AR: begin
                    if (arready && arvalid) begin
                        lsu_r <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        lsu_r <= IDLE_R;
                        trans_r<=0;
                    end
                end
                default: ;
            endcase
        end

    end

    //write
    logic done_aw, done_wdata;

    typedef enum {
        IDLE_W, WAIT_W, WAIT_WRESP, WAIT_COMMIT
    } LSU_state_w_t;
    LSU_state_w_t lsu_w;

    always_comb begin
        case (bus_in_lsu_oper) 
            3'b000:  wstrb = (4'b0001 << bus_in_alu_out[1:0]);
            3'b001:  wstrb = (4'b0011 << bus_in_alu_out[1:0]);
            3'b010:  wstrb = 4'b1111;
            default: wstrb = 0;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            done_aw     <= 0;
            done_wdata  <= 0;
            lsu_w       <= IDLE_W;
        end else begin
            case (lsu_w)
                IDLE_W: begin
                    if (bus_in_lsu_we && valid_left && !flush) begin
                        lsu_w   <= WAIT_W;
                        if (wready) begin 
                            done_wdata <= 1;
                        end
                        if (awready) begin
                            done_aw <= 1;
                        end
                        if ( (awready) && (wready)) begin
                            lsu_w <= WAIT_WRESP;
                        end
                    end
                end
                WAIT_W: begin
                    if (wready) begin 
                        done_wdata <= 1;
                    end
                    if (awready) begin
                        done_aw <= 1;
                    end
                    if ((done_aw || awready) && (done_wdata || wready)) begin
                        lsu_w <= WAIT_WRESP;
                    end
                end
                WAIT_WRESP: begin
                    if (bvalid && bready) begin
                        done_aw<=0;
                        done_wdata<=0;
                        lsu_w <= WAIT_COMMIT;
                    end
                end
                WAIT_COMMIT: begin
                    if (ready_right) begin
                        lsu_w <= IDLE_W;
                    end
                end
                default: ;
            endcase
        end
    end

endmodule
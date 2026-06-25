module lsu(
    input logic clk,
    input logic rst,
    input logic we,
    input logic le,
    input logic [31:0] data_in,
    input logic [31:0] addr,
    input logic [2:0] oper,
    output logic [31:0] data_out,

    input logic external_stall,
    output logic stall,

    // Read Address Channel (AR)
    output logic [31:0] araddr_lsu,
    output logic        arvalid_lsu,
    input  logic        arready_lsu,

    // Read Data Channel (R)
    input  logic [31:0] rdata_lsu,
    input  logic [1:0]  rresp_lsu,
    input  logic        rvalid_lsu,
    output logic        rready_lsu,

    // Write Address Channel (AW)
    output logic [31:0] awaddr_lsu,
    output logic        awvalid_lsu,
    input  logic        awready_lsu,

    // Write Data Channel (W)
    output logic [31:0] wdata_lsu,
    output logic [3:0]  wstrb_lsu,
    output logic        wvalid_lsu,
    input  logic        wready_lsu,

    // Write Response Channel (B)
    input  logic [1:0]  bresp_lsu,
    input  logic        bvalid_lsu,
    output logic        bready_lsu
);

assign rready_lsu = 1; // it was !external_stall but i guess 1 is okay here
assign bready_lsu = 1;

always_comb begin
    case(oper[1:0])
        2'b00: wstrb_lsu=4'b0001;
        2'b01: wstrb_lsu=4'b0011;
        2'b10: wstrb_lsu=4'b1111;
        default: wstrb_lsu=0;
    endcase
end

logic idk;
logic aw_sent, aw_done, w_done;

always_ff @(posedge clk) begin
    idk<= idk | |rresp_lsu | |bresp_lsu;
    if(rst) begin
        araddr_lsu<=0;
        arvalid_lsu<=0;
        awaddr_lsu<=0;
        awvalid_lsu<=0;
        wdata_lsu<=0;
        wvalid_lsu<=0;
        aw_done<=0;
        w_done<=0;
        aw_sent<=0;
    end else begin
        if(le) begin
            if(!external_stall) begin       // starting a read
                araddr_lsu<=addr;
                arvalid_lsu<=1;
                ff_stall<=1;
            end
            if(arvalid_lsu && arready_lsu) begin // done handshake for ar
                arvalid_lsu<=0;
            end
            if(rvalid_lsu && rready_lsu) begin  // releasing stall
                case(oper)
                    3'b000: data_out<={{24{rdata_lsu[7]}},rdata_lsu[7:0]};
                    3'b001: data_out<={{16{rdata_lsu[7]}},rdata_lsu[15:0]};
                    3'b010: data_out<=rdata_lsu;
                    3'b100: data_out<={{24'b0},rdata_lsu[7:0]};
                    3'b101: data_out<={{16'b0},rdata_lsu[15:0]};
                    default: data_out<=0;
                endcase
                ff_stall<=0;
            end
        end

        if(we) begin
            if(!lsu_stall && !aw_sent) begin  // starting handshake fro aw and w
                awvalid_lsu<=1;
                awaddr_lsu<=addr; 
                aw_sent<=1;
                wvalid_lsu<=1;
                wdata_lsu<=data_in;
            end
            if(awvalid_lsu && awready_lsu) begin // done handshake for aw
                awvalid_lsu<=0;
                aw_done<=1;
            end
            if(wvalid_lsu && wready_lsu) begin //done handshake for w
                w_done<=1;
            end
            if(aw_done && w_done) aw_sent<=0; //finishing transfer
        end
    end
end

endmodule


// assign rready_lsu = 1; // it was !external_stall but i guess 1 is okay here
// assign bready_lsu = 1;

// logic prev_le; //for posedge le

// logic we_stall; //meta-stall for write operations. Here idea to not stall unless we get read after write hazard. !! It is actually what fence is for so.... delete it when fence is implemented!!
// logic ff_stall; //stall due to ongoing read/write oper

// assign stall = ff_stall | (~prev_le & le) | (we_stall & le); //combinationally setting stall to avoid use before read + meta stall

// /*
//     In idea when we have some opcode it combinationally goes up to lsu, if we do read/write
//     then we stall and ifu does not fetch new instruction
//     as we drop stall reg can sample read value and ifu can fetch new opcode
//     in next cycle everything should be okay
// */

// always_comb begin
//     case(oper[1:0])
//         2'b00: wstrb_lsu=4'b0001;
//         2'b01: wstrb_lsu=4'b0011;
//         2'b10: wstrb_lsu=4'b1111;
//         default: wstrb_lsu=0;
//     endcase
// end

// logic idk;

// always_ff @(posedge clk) begin
//     idk<= idk | |rresp_lsu | |bresp_lsu;
//     prev_le <= le;
//     if(rst) begin
//         araddr_lsu<=0;
//         arvalid_lsu<=0;
//         awaddr_lsu<=0;
//         awvalid_lsu<=0;
//         wdata_lsu<=0;
//         wvalid_lsu<=0;
//     end else begin


//         if(we & !external_stall ) begin  //starting write if we are not in stall and we
//             awaddr_lsu<=addr;
//             wdata_lsu<=data_in;
//             awvalid_lsu<=1;
//             wvalid_lsu<=1;
//             we_stall<=1;
//         end
//         if(awvalid_lsu && awready_lsu) begin //drop
//             awvalid_lsu<=0;
//         end
//         if(wvalid_lsu && wready_lsu) begin  //drop
//             wvalid_lsu<=0;
//         end
//         if(bvalid_lsu) begin                //returned a write
//             we_stall<=0;
//         end


//         if(le && !we_stall) begin
//             if(arvalid_lsu && arready_lsu) begin //
//                 arvalid_lsu<=0;
//             end
//             if(!external_stall) begin       // starting a read
//                 araddr_lsu<=addr;
//                 arvalid_lsu<=1;
//                 ff_stall<=1;
//             end
//             if(rvalid_lsu && rready_lsu) begin  // releasing stall
//                 case(oper)
//                     3'b000: data_out<={{24{rdata_lsu[7]}},rdata_lsu[7:0]};
//                     3'b001: data_out<={{16{rdata_lsu[7]}},rdata_lsu[15:0]};
//                     3'b010: data_out<=rdata_lsu;
//                     3'b100: data_out<={{24'b0},rdata_lsu[7:0]};
//                     3'b101: data_out<={{16'b0},rdata_lsu[15:0]};
//                     default: data_out<=0;
//                 endcase
//                 ff_stall<=0;
//             end
//         end
//     end
// end

// endmodule
module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);
  
  // typedef enum [2:0] { nop_t, addr_t, read_t, write_t, term_t, reg_t } state_t;
  
  // reg [2:0] state;
  // reg [2:0] next_state

  // reg [23:0] addr

  // always @* begin
  //   if(cs) begin
  //     ;//do nothing
  //   end else begin
  //     case({ras,cas,we})
  //       3'b111: begin //NOP
  //         state = nop_t;
  //       end
  //       3'b011: begin //ACTIVE
  //         state = addr_t;
  //       end
  //       3'b101: begin //READ
  //         state = read_t;
  //       end
  //       3'b100: begin //WRITE
  //         state = write_t;
  //       end
  //       3'b110: begin //BURST TERM
  //         state = term_t;
  //       end
  //       3'b010: begin //PRECHARGE (NOP)
  //         state = nop_t;
  //       end
  //       3'b001: begin //AUTOREFRESH (NOP)
  //         state = nop_t;
  //       end
  //       3'b000: begin //LOAD MODE REGISTERS
  //         state = reg_t;
  //       end
  //     endcase
  //   end
  // end

  // always @(posedge clk) begin
  //   case(state)
  //     nop_t: begin
  //       ;
  //     end
  //     addr_t: begin
  //       addr<=
  //     end

  //   endcase
  // end

  assign dq = 16'bz;

endmodule

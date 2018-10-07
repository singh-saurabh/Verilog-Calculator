`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:47 10/07/2018 
// Design Name: 
// Module Name:    calculator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
////////////////////////////////////////////////////////////////////////////////
module calculator(z,opcode);
input [13:0]opcode;
output [3:0]z;
reg [3:0]z;
reg [3:0]a;
reg [3:0]b;
reg [1:0]sel;
always@(opcode)
begin
sel = opcode[13:12];
a = opcode[11:8];
b = opcode[7:4];
case(sel)
2'b00: z=a+b;
2'b01: z=a-b;
2'b10: z=a|b;
2'b11: z=~a+1;
endcase
end
endmodule

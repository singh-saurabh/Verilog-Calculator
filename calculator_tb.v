`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:39:40 10/07/2018
// Design Name:   calculator
// Module Name:   /home/saurabh/XilinxProjects/Calculator/calculator_tb.v
// Project Name:  Calculator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: calculator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module calculator_tb;

	// Inputs
	reg [13:0] opcode[0:0];
	integer outputb;	
	// Outputs
	wire [3:0] z;
	

	initial begin
		// Initialize Inputs
		//#200;
		/*opcode = 14'b01010000100000;
		#200;
		opcode = 14'b10101001010000;
		#200;
		opcode = 14'b11001000000000;
		*/
		$readmemb("/home/saurabh/XilinxProjects/Calculator/input.txt",opcode);
	 end
		calculator uut (
			.z(z),
			.opcode(opcode[0])
		);
	 initial begin
		#10
		outputb=$fopen("output.txt","w");
		$fdisplay(outputb, "%b",z);
		$fdisplay(outputb, "%d",z);
		$fclose(outputb);

	end
      
endmodule


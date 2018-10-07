////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: calculator_synthesis.v
// /___/   /\     Timestamp: Sun Oct  7 17:16:26 2018
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim calculator.ngc calculator_synthesis.v 
// Device	: xc3s100e-5-vq100
// Input file	: calculator.ngc
// Output file	: /home/saurabh/XilinxProjects/Calculator/netgen/synthesis/calculator_synthesis.v
// # of Modules	: 1
// Design Name	: calculator
// Xilinx        : /opt/Xilinx/14.7/ISE_DS/ISE/
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module calculator (
z, a, b, sel
);
  output [3 : 0] z;
  input [3 : 0] a;
  input [7 : 4] b;
  input [1 : 0] sel;
  wire N2;
  wire N8;
  wire a_0_IBUF_11;
  wire a_1_IBUF_12;
  wire a_2_IBUF_13;
  wire a_3_IBUF_14;
  wire b_4_IBUF_19;
  wire b_5_IBUF_20;
  wire b_6_IBUF_21;
  wire b_7_IBUF_22;
  wire sel_0_IBUF_25;
  wire sel_1_IBUF_26;
  wire \z<0>31_28 ;
  wire \z<0>52 ;
  wire \z<0>521_30 ;
  wire z_0_OBUF_34;
  wire z_1_OBUF_35;
  wire z_2_OBUF_36;
  wire z_3_OBUF_37;
  wire [1 : 0] Maddsub_z_addsub0000_cy;
  wire [3 : 1] Maddsub_z_addsub0000_lut;
  LUT4 #(
    .INIT ( 16'h283C ))
  \z<1>1  (
    .I0(sel_0_IBUF_25),
    .I1(Maddsub_z_addsub0000_lut[1]),
    .I2(Maddsub_z_addsub0000_cy[0]),
    .I3(sel_1_IBUF_26),
    .O(z_1_OBUF_35)
  );
  LUT4 #(
    .INIT ( 16'hFFFE ))
  \z<0>31  (
    .I0(b_7_IBUF_22),
    .I1(b_6_IBUF_21),
    .I2(b_5_IBUF_20),
    .I3(b_4_IBUF_19),
    .O(\z<0>31_28 )
  );
  LUT4 #(
    .INIT ( 16'h283C ))
  \z<2>1  (
    .I0(sel_0_IBUF_25),
    .I1(Maddsub_z_addsub0000_lut[2]),
    .I2(Maddsub_z_addsub0000_cy[1]),
    .I3(sel_1_IBUF_26),
    .O(z_2_OBUF_36)
  );
  LUT4 #(
    .INIT ( 16'h283C ))
  \z<3>  (
    .I0(sel_0_IBUF_25),
    .I1(N2),
    .I2(Maddsub_z_addsub0000_lut[3]),
    .I3(sel_1_IBUF_26),
    .O(z_3_OBUF_37)
  );
  IBUF   a_3_IBUF (
    .I(a[3]),
    .O(a_3_IBUF_14)
  );
  IBUF   a_2_IBUF (
    .I(a[2]),
    .O(a_2_IBUF_13)
  );
  IBUF   a_1_IBUF (
    .I(a[1]),
    .O(a_1_IBUF_12)
  );
  IBUF   a_0_IBUF (
    .I(a[0]),
    .O(a_0_IBUF_11)
  );
  IBUF   b_7_IBUF (
    .I(b[7]),
    .O(b_7_IBUF_22)
  );
  IBUF   b_6_IBUF (
    .I(b[6]),
    .O(b_6_IBUF_21)
  );
  IBUF   b_5_IBUF (
    .I(b[5]),
    .O(b_5_IBUF_20)
  );
  IBUF   b_4_IBUF (
    .I(b[4]),
    .O(b_4_IBUF_19)
  );
  IBUF   sel_1_IBUF (
    .I(sel[1]),
    .O(sel_1_IBUF_26)
  );
  IBUF   sel_0_IBUF (
    .I(sel[0]),
    .O(sel_0_IBUF_25)
  );
  OBUF   z_3_OBUF (
    .I(z_3_OBUF_37),
    .O(z[3])
  );
  OBUF   z_2_OBUF (
    .I(z_2_OBUF_36),
    .O(z[2])
  );
  OBUF   z_1_OBUF (
    .I(z_1_OBUF_35),
    .O(z[1])
  );
  OBUF   z_0_OBUF (
    .I(z_0_OBUF_34),
    .O(z[0])
  );
  LUT4 #(
    .INIT ( 16'h6762 ))
  \Maddsub_z_addsub0000_cy<0>11  (
    .I0(sel_1_IBUF_26),
    .I1(a_0_IBUF_11),
    .I2(b_4_IBUF_19),
    .I3(sel_0_IBUF_25),
    .O(Maddsub_z_addsub0000_cy[0])
  );
  LUT4 #(
    .INIT ( 16'h3396 ))
  \Maddsub_z_addsub0000_lut<2>1  (
    .I0(b_6_IBUF_21),
    .I1(a_2_IBUF_13),
    .I2(sel_0_IBUF_25),
    .I3(sel_1_IBUF_26),
    .O(Maddsub_z_addsub0000_lut[2])
  );
  LUT4 #(
    .INIT ( 16'h3396 ))
  \Maddsub_z_addsub0000_lut<1>1  (
    .I0(b_5_IBUF_20),
    .I1(a_1_IBUF_12),
    .I2(sel_0_IBUF_25),
    .I3(sel_1_IBUF_26),
    .O(Maddsub_z_addsub0000_lut[1])
  );
  LUT4 #(
    .INIT ( 16'h3396 ))
  \Maddsub_z_addsub0000_lut<3>1  (
    .I0(b_7_IBUF_22),
    .I1(a_3_IBUF_14),
    .I2(sel_0_IBUF_25),
    .I3(sel_1_IBUF_26),
    .O(Maddsub_z_addsub0000_lut[3])
  );
  LUT4 #(
    .INIT ( 16'hBE14 ))
  \Maddsub_z_addsub0000_cy<1>11  (
    .I0(Maddsub_z_addsub0000_lut[1]),
    .I1(sel_1_IBUF_26),
    .I2(a_1_IBUF_12),
    .I3(Maddsub_z_addsub0000_cy[0]),
    .O(Maddsub_z_addsub0000_cy[1])
  );
  LUT4 #(
    .INIT ( 16'hBE14 ))
  \z<3>_SW0  (
    .I0(Maddsub_z_addsub0000_lut[2]),
    .I1(sel_1_IBUF_26),
    .I2(a_2_IBUF_13),
    .I3(Maddsub_z_addsub0000_cy[1]),
    .O(N2)
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \z<0>52_SW0_SW0  (
    .I0(a_1_IBUF_12),
    .I1(a_2_IBUF_13),
    .I2(a_3_IBUF_14),
    .I3(\z<0>31_28 ),
    .O(N8)
  );
  LUT3 #(
    .INIT ( 8'hF1 ))
  \z<0>521  (
    .I0(sel_0_IBUF_25),
    .I1(N8),
    .I2(a_0_IBUF_11),
    .O(\z<0>52 )
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \z<0>522  (
    .I0(a_0_IBUF_11),
    .I1(b_4_IBUF_19),
    .O(\z<0>521_30 )
  );
  MUXF5   \z<0>52_f5  (
    .I0(\z<0>521_30 ),
    .I1(\z<0>52 ),
    .S(sel_1_IBUF_26),
    .O(z_0_OBUF_34)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif


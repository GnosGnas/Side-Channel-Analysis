/* verilator lint_off UNOPTFLAT */
module AND2X1 (A,B,Y);
input A, B;
output Y;
and a1(Y,A,B);
endmodule

module AND2X2 (A,B,Y);
input A, B;
output Y;
and a1(Y,A,B);
endmodule

module AOI21X1 (A,B,C,Y);
input A, B, C;
output Y;
wire y1, y2;

and a1(y1,A,B);
or o1(y2,y1,C);
not n1(Y,y2);
endmodule

module AOI22X1(A,B,C,D,Y);
input A,B,C,D;
output Y;
wire y1,y2,y3;

and a1(y1,A,B);
and a2(y2,C,D);
or o1(y3,y1,y2);
not n1(Y,y3);

endmodule

module BUFX2(A,Y);
input A;
output Y;

buf b1(Y,A);
endmodule

module BUFX4(A,Y);
input A;
output Y;

buf b1(Y,A);
endmodule

module CLKBUFX2(A,Y);
input A;
output Y;

buf b1(Y,A);
endmodule

module CLKBUFX3(A,Y);
input A;
output Y;

buf b1(Y,A);
endmodule

module  DFFSR (D,CLK,S,R,Q);
input D,CLK,S,R;
output Q;
buf b1(Q,D);
endmodule

module DFFNEGX1(D,CLK,Q);
input D,CLK;
output Q;
buf b1(Q,D);
endmodule

module DFFPOSX1(D,CLK,Q);
input D,CLK;
output Q;
buf b1(Q,D);
endmodule

module FAX1(A,B,C,YC,YS);
input A,B,C;
output YC,YS;
wire y1,y2,y3,y4,y5,y6;
and a1(y1,A,B);
and a2(y2,B,C);
and a3(y3,A,C);
or o1(y4,y1,y2);
or o2(YC,y4,y3);

xor x1(y5,A,B);
xor x2(YS,C,y5);
endmodule

module HAX1(A,B,YC,YS);
input A,B;
output YC,YS;
and a1(YC,A,B);
xor x1(YS,A,B);
endmodule

module  INVX1(A,Y);
input A;
output Y;
not n1(Y,A);
endmodule

module  INVX2(A,Y);
input A;
output Y;
not n1(Y,A);
endmodule

module  INVX4(A,Y);
input A;
output Y;
not n1(Y,A);
endmodule

module  INVX8(A,Y);
input A;
output Y;
not n1(Y,A);
endmodule

module LATCH(CLK,D,Q);
input D,CLK;
output Q;
buf b1(Q,D);
endmodule

module MUX2X1(A,B,S,Y);
input A,B,S;
output Y;
wire y1,y2,y3;

and a1(y1,A,S);
not n1(y3,S);
and a2(y2,B,y3);
or o1(Y,y1,y2);
endmodule

module NAND2X1(A,B,Y);
input A,B;
output Y;
nand n2 (Y,A,B);

endmodule

module NAND3X1(A,B,C,Y);
input A,B,C;
output Y;
wire y1,y2;
and a1 (y1,A,B);
and a2(y2,y1,C);
not n1(Y,y2);

endmodule

module NOR2X1(A,B,Y);
input A,B;
output Y;
nor n2 (Y,A,B);

endmodule

module NOR3X1(A,B,C,Y);
input A,B,C;
output Y;
wire y1,y2;
or o1 (y1,A,B);
or o2 (y2,y1,C);
not n1 (Y,y2);

endmodule

module OAI21X1(A,B,C,Y);
input A,B,C;
output Y;
wire y1,y2;

or o1(y1,A,B);
and a1(y2,y1,C);
not n1(Y,y2);

endmodule

module OR2X1(A,B,Y);
input A,B;
output Y;
or o1 (Y,A,B);

endmodule

module OR2X2(A,B,Y);
input A,B;
output Y;
or o1 (Y,A,B);

endmodule

module TBUFX1(A,EN,Y);
input A,EN;
output Y;
not n1(Y,A);

endmodule

module TBUFX2(A,EN,Y);
input A,EN;
output Y;
not n1(Y,A);

endmodule

module XOR2X1(A,B,Y);
input A, B;
output Y;
xor x1(Y,A,B);
endmodule

module XNOR2X1(A,B,Y);
input A, B;
output Y;
wire y1;
xor x1(y1,A,B);
not n1(Y,y1);
endmodule



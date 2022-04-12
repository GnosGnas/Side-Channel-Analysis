///home/indrani/Desktop/Aditya/VFiles/19_1_13_16_AES_31.v;

module GF2_4sqr_(input [3:0]x , output [3:0]out);

assign out[3]=x[3];
assign out[2]=x[3]^x[1];
assign out[1]=x[2];
assign out[0]=x[2]^x[0];
endmodule
//------------------------------------------------------------------------------------------------------------

module GF2_4sqr_v_(input[3:0]x , output [3:0] out);

wire [6:0]c;
assign c[0]=((x[2]^x[0])&1'b1);
assign c[1]=((x[2]^x[0])&1'b0^(x[2])&1'b1);
assign c[2]=((x[2]^x[0])&1'b1^(x[2])&1'b0^(x[3]^x[1])&1'b1);
assign c[3]=((x[2]^x[0])&1'b1^(x[2])&1'b1^(x[3]^x[1])&1'b0^(x[3])&1'b1);
assign c[4]=((x[3])&1'b0^(x[3]^x[1])&1'b1^(x[2])&1'b1);
assign c[5]=((x[3])&1'b1^(x[3]^x[1])&1'b1);
assign c[6]=((x[3])&1'b1);
assign out[3]= (c[6]^c[3]) ;
assign out[2]= ( c[6] ^ c[5] ^  c[2] );
assign out[1]= (c[5] ^ c[4] ^c[1] );
assign out[0]= ( (c[4]) ^c[0]);
endmodule
//-----------------------------------------------------------------------------------------------

module GF2_4mult_t_(input[3:0]x , input[3:0]y,output [3:0] out);

wire [6:0]c;
wire [6:0]d;
wire [6:0]out1;
assign c[0]=(x[0]&y[0]);
assign c[1]=(x[0]&y[1] ^ x[1]&y[0]);
assign c[2]=(x[0]&y[2] ^ x[1]&y[1] ^ x[2]&y[0]);
assign c[3]=(x[0]&y[3] ^ x[1]&y[2] ^ x[2]&y[1]  ^ x[3]&y[0]);
assign c[4]=(x[3]&y[1] ^ x[2]&y[2] ^ x[1]&y[3]);
assign c[5]=(x[3]&y[2] ^ x[2]&y[3]);
assign c[6]=(x[3]&y[3]);
assign out1[3]= (c[6]^c[3]) ;
assign out1[2]= (c[6] ^ c[5] ^  c[2] );
assign out1[1]= (c[5] ^ c[4] ^c[1] );
assign out1[0]= ((c[4]) ^c[0]);
assign d[0]=(out1[0]&1'b1);
assign d[1]=(out1[0]&1'b0^out1[1]&1'b1);
assign d[2]=(out1[0]&1'b0^out1[1]&1'b0^ out1[2]&1'b1);
assign d[3]=(out1[0]&1'b0^out1[1]&1'b0^ out1[2]&1'b0^out1[3]&1'b1);
assign d[4]=(out1[3]&1'b0^out1[2]&1'b0^ out1[1]&1'b0);
assign d[5]=(out1[3]&1'b0^out1[2]&1'b0);
assign d[6]=(out1[3]&1'b0);
assign out[3]= (d[6]^d[3]) ;
assign out[2]= (d[6] ^ d[5] ^ d[2] );
assign out[1]= (d[5] ^ d[4] ^d[1] );
assign out[0]= ((d[4]) ^d[0]);
endmodule
//------------------------------------------------------------------------------------------------------------

module GF2_4mult_( input [3:0]x,input [3:0]y, output [3:0]out);

wire [6:0]c;
assign c[0]=(x[0]&y[0]);
assign c[1]=(x[0]&y[1] ^ x[1]&y[0]);
assign c[2]=(x[0]&y[2] ^ x[1]&y[1] ^ x[2]&y[0]);
assign c[3]=(x[0]&y[3] ^ x[1]&y[2] ^ x[2]&y[1]  ^ x[3]&y[0]);
assign c[4]=(x[3]&y[1] ^ x[2]&y[2] ^ x[1]&y[3]);
assign c[5]=(x[3]&y[2] ^ x[2]&y[3]);
assign c[6]=(x[3]&y[3]);
assign out[3]= (c[6]^c[3]) ;
assign out[2]= ( c[6] ^ c[5] ^  c[2] );
assign out[1]= (c[5] ^ c[4] ^c[1] );
assign out[0]= ( (c[4]) ^c[0]);
endmodule
//-----------------------------------------------------------------------------------------------

(*dont_touch="true"*)
module GF2_4mult_t_thres_(input [3:0]x, input[3:0]y, output [3:0]out, input [23:0]r3);

wire [3:0]x1;
wire [3:0]x2;
wire [3:0]x3;
wire [3:0]x4;
wire [3:0]y1;
wire [3:0]y2;
wire [3:0]y3;
wire [3:0]y4;
wire [3:0]f1;
wire [3:0]f2;
wire [3:0]f3;
wire [3:0]f1_t;
wire [3:0]f2_t;
wire [3:0]f3_t;
wire [3:0]temp1;
wire [3:0]temp2;
wire [3:0]temp3;
wire [3:0]temp4;
wire [3:0]temp5;
wire [3:0]temp6;
wire [3:0]temp7;
wire [3:0]temp8;

assign x1 = r3[3:0];
assign x2 = r3[7:4];
assign x3 = r3[11:8];
assign y1 = r3[15:12];
assign y2 = r3[19:16];
assign y3 = r3[23:20];

assign x4 = x^x1^x2^x3;
assign y4 = y^y1^y2^y3;

assign temp1 = (x2^x3^x4);
assign temp2 = (y2^y3);
GF2_4mult_t mult1(
 .x(temp1),
 .y(temp2),
 .out(f1_t)
);
assign f1 = f1_t^y4;

assign temp3 = x1^x3;
assign temp4 = y1^y4;
GF2_4mult_t mult2(
 .x(temp3),
 .y(temp4),
 .out(f2_t)
);

GF2_4mult_t mult3(
 .x(x1),
 .y(y3),
 .out(temp5)
);
assign f2 = f2_t^temp5^x4;

assign temp6 = x2^x4;
assign temp7 = y1^y4;
GF2_4mult_t mult4(
 .x(temp6),
 .y(temp7),
 .out(f3_t)
);
GF2_4mult_t mult5(
 .x(x1),
 .y(y2),
 .out(temp8)
);
assign f3 = f3_t^temp8^x4^y4;

assign out = f1^f2^f3;

endmodule

//-----------------------------------------------------------------------------------------------

(*dont_touch="true"*)
module GF2_4mult_thres_(input [3:0]x, input[3:0]y, output [3:0]out, input [23:0]r2);

wire [3:0]x1;
wire [3:0]x2;
wire [3:0]x3;
wire [3:0]x4;
wire [3:0]y1;
wire [3:0]y2;
wire [3:0]y3;
wire [3:0]y4;
wire [3:0]f1;
wire [3:0]f2;
wire [3:0]f3;
wire [3:0]f1_t;
wire [3:0]f2_t;
wire [3:0]f3_t;
wire [3:0]temp1;
wire [3:0]temp2;
wire [3:0]temp3;
wire [3:0]temp4;
wire [3:0]temp5;
wire [3:0]temp6;
wire [3:0]temp7;
wire [3:0]temp8;


assign x1 = r2[3:0];
assign x2 = r2[7:4];
assign x3 = r2[11:8];
assign y1 = r2[15:12];
assign y2 = r2[19:16];
assign y3 = r2[23:20];

assign x4 = x^x1^x2^x3;
assign y4 = y^y1^y2^y3;

assign temp1 = (x2^x3^x4);
assign temp2 = (y2^y3);
GF2_4mult mult1(
 .x(temp1),
 .y(temp2),
 .out(f1_t)
);
assign f1 = f1_t^y4;

assign temp3 = x1^x3;
assign temp4 = y1^y4;
GF2_4mult mult2(
 .x(temp3),
 .y(temp4),
 .out(f2_t)
);

GF2_4mult mult3(
 .x(x1),
 .y(y3),
 .out(temp5)
);
assign f2 = f2_t^temp5^x4;

assign temp6 = x2^x4;
assign temp7 = y1^y4;
GF2_4mult mult4(
 .x(temp6),
 .y(temp7),
 .out(f3_t)
);
GF2_4mult mult5(
 .x(x1),
 .y(y2),
 .out(temp8)
);
assign f3 = f3_t^temp8^x4^y4;

assign out = f1^f2^f3;

endmodule

//-----------------------------------------------------------------------------------------------

module i_cob_(input [3:0]in, output [3:0]out);

assign out[3] = in[3];
assign out[2] = in[3]^in[2]^in[1];
assign out[1] = in[3]^in[2];
assign out[0] = in[0];

endmodule

//-----------------------------------------------------------------------------------------------

module i_cob_inv_(input [3:0]in, output [3:0]out);

assign out[3] = in[3];
assign out[2] = in[3]^in[1];
assign out[1] = in[2]^in[1];
assign out[0] = in[0];

endmodule

//-----------------------------------------------------------------------------------------------

(*dont_touch="true"*)
module invGF2_4_thres_(input [3:0]in, output [3:0]out,input [15:0]r1);

wire x, y, z, v;
wire nx, ny, nz, nv;
wire [3:0] new_in;
wire [3:0] old_out;

wire x5;
wire y5;
wire z5;
wire v5;

wire f, g, h, k;
wire f1;
wire f2;
wire f3;
wire f4;
wire f5;

wire g1;
wire g2;
wire g3;
wire g4;
wire g5;

wire h1;
wire h2;
wire h3;
wire h4;
wire h5;

wire k1;
wire k2;
wire k3;
wire k4;
wire k5;

wire t1;
wire t2;
wire t3;
wire t4;

wire u1;
wire u2;
wire u3;
wire u4;

i_cob i_cob1(
 .in(in),
 .out(new_in)
);
assign x = new_in[3];
assign y = new_in[2];
assign z = new_in[1];
assign v = new_in[0];
assign nx = ~x;
assign ny = ~y;
assign nz = ~z;
assign nv = ~v;
//assign x = in[3];
//assign y = in[2];
//assign z = in[1];
//assign v = in[0];

assign x5 = x^r1[0]^r1[1]^r1[2]^r1[3];
assign y5 = y^r1[4]^r1[5]^r1[6]^r1[7];
assign z5 = z^r1[8]^r1[9]^r1[10]^r1[11];
assign v5 = v^r1[12]^r1[13]^r1[14]^r1[15];

assign t1 = r1[1]^r1[2]^r1[3]^x5;
assign t2 = r1[5]^r1[6]^r1[7]^y5;
assign t3 = r1[9]^r1[10]^r1[11]^z5;
assign t4 = r1[13]^r1[14]^r1[15]^v5;

assign u1 = r1[2]^r1[3]^x5;
assign u2 = r1[6]^r1[7]^y5;
assign u3 = r1[10]^r1[11]^z5;
assign u4 = r1[14]^r1[15]^v5;

assign f1 = r1[1] ^ r1[5] ^ t1*t4
^ t1*t2*t3;
assign f2 = r1[2] ^ r1[6] ^ r1[0]*u4 ^ r1[12]*u1 ^ r1[0]*r1[12]
^ r1[0]*u2*u3 ^ r1[4]*u1*u3
^ r1[8]*u1*u2 ^ r1[0]*r1[4]*u3 ^ r1[0]*r1[8]*u2
^ r1[4]*r1[8]*u1 ^ r1[0]*r1[4]*r1[8];
assign f3 = r1[3] ^ r1[7] ^ r1[1]*r1[12] ^ r1[0]*r1[13] ^ r1[0]*r1[4]*r1[9] ^ r1[0]*r1[5]*r1[8] ^ r1[1]*r1[4]*r1[8] ^ r1[0]*r1[5]*r1[9] ^ r1[1]*r1[4]*r1[9] ^ r1[1]*r1[5]*r1[8]
^ r1[0]*r1[5]*r1[11] ^ r1[1]*r1[4]*r1[11] ^ r1[0]*r1[7]*r1[9] ^ r1[1]*r1[7]*r1[8] ^ r1[3]*r1[4]*r1[9] ^ r1[3]*r1[5]*r1[8] ^ r1[0]*r1[5]*z5 ^ r1[1]*r1[4]*z5
^ r1[0]*y5*r1[9] ^ r1[1]*y5*r1[8] ^ x5*r1[4]*r1[9] ^ x5*r1[5]*r1[8];
assign f4 = x5 ^ y5 ^ r1[0]*r1[5]*r1[10] ^ r1[0]*r1[6]*r1[9] ^ r1[1]*r1[4]*r1[10] ^ r1[1]*r1[6]*r1[8] ^ r1[2]*r1[4]*r1[9] ^ r1[2]*r1[5]*r1[8];
assign f5 = r1[0] ^ r1[4];

assign g1 = t1*t2*t3
^ t1*t2*t4
^ t1*t4
^ t2*t3 ^ r1[5];
assign g2 = r1[0]*u2*u3 ^ r1[4]*u1*u3
^ r1[8]*u1*u2 ^ r1[0]*r1[4]*u3 ^ r1[0]*r1[8]*u2
^ r1[4]*r1[8]*u1 ^ r1[0]*r1[4]*r1[8] ^ r1[0]*u2*u4
^ r1[4]*u1*u4 ^ r1[12]*u1*u2
^ r1[0]*r1[4]*u4 ^ r1[0]*r1[12]*u2 ^ r1[4]*r1[12]*u1 ^ r1[0]*r1[4]*r1[12]
^ r1[0]*u4 ^ r1[12]*u1 ^ r1[0]*r1[12] ^ r1[4]*u3
^ r1[8]*u2 ^ r1[4]*r1[8] ^ r1[6];
assign g3 = r1[0]*r1[4]*r1[9] ^ r1[0]*r1[5]*r1[8] ^ r1[1]*r1[4]*r1[8] ^ r1[0]*r1[5]*r1[9] ^ r1[1]*r1[4]*r1[9] ^ r1[1]*r1[5]*r1[8] ^ r1[0]*r1[5]*r1[11] ^ r1[1]*r1[4]*r1[11]
^ r1[0]*r1[7]*r1[9] ^ r1[1]*r1[7]*r1[8] ^ r1[3]*r1[4]*r1[9] ^ r1[3]*r1[5]*r1[8] ^ r1[0]*r1[5]*z5 ^ r1[1]*r1[4]*z5 ^ r1[0]*y5*r1[9] ^ r1[1]*y5*r1[8]
^ x5*r1[4]*r1[9] ^ x5*r1[5]*r1[8] ^ r1[0]*r1[4]*r1[13] ^ r1[0]*r1[5]*r1[12] ^ r1[1]*r1[4]*r1[12] ^ r1[0]*r1[5]*r1[13] ^ r1[1]*r1[4]*r1[13] ^ r1[1]*r1[5]*r1[12]
^ r1[0]*r1[5]*r1[15] ^ r1[1]*r1[4]*r1[15] ^ r1[0]*r1[7]*r1[13] ^ r1[1]*r1[7]*r1[12] ^ r1[3]*r1[4]*r1[13] ^ r1[3]*r1[5]*r1[12] ^ r1[0]*r1[5]*v5 ^ r1[1]*r1[4]*v5
^ r1[0]*y5*r1[13] ^ r1[1]*y5*r1[12] ^ x5*r1[4]*r1[13] ^ x5*r1[5]*r1[12] ^ r1[1]*r1[12] ^ r1[0]*r1[13] ^ r1[5]*r1[8] ^ r1[4]*r1[9] ^ r1[7];
assign g4 = r1[0]*r1[5]*r1[10] ^ r1[0]*r1[6]*r1[9] ^ r1[1]*r1[4]*r1[10] ^ r1[1]*r1[6]*r1[8] ^ r1[2]*r1[4]*r1[9] ^ r1[2]*r1[5]*r1[8] ^ r1[0]*r1[5]*r1[14] ^ r1[0]*r1[6]*r1[13]
^ r1[1]*r1[4]*r1[14] ^ r1[1]*r1[6]*r1[12] ^ r1[2]*r1[4]*r1[13] ^ r1[2]*r1[5]*r1[12] ^ y5;
assign g5 = r1[4];

assign h1 = t1*t4*t3 ^ r1[6] ^ r1[13]
^ t1*t4
^ t2*t4;
assign h2 = r1[0]*u4*u3 ^ r1[12]*u1*u3
^ r1[8]*u1*u4 ^ r1[0]*r1[12]*u3 ^ r1[0]*r1[8]*u4
^ r1[12]*r1[8]*u1 ^ r1[0]*r1[12]*r1[8] ^ r1[0]*u4 ^ r1[12]*u1 ^ r1[0]*r1[12]
^ r1[4]*u4 ^ r1[12]*u2 ^ r1[4]*r1[12] ^ r1[7] ^ r1[12] ^ v5;
assign h3 = r1[0]*r1[12]*r1[9] ^ r1[0]*r1[13]*r1[8] ^ r1[1]*r1[12]*r1[8] ^ r1[0]*r1[13]*r1[9] ^ r1[1]*r1[12]*r1[9] ^ r1[1]*r1[13]*r1[8] ^ r1[0]*r1[13]*r1[11] ^ r1[1]*r1[12]*r1[11]
^ r1[0]*r1[15]*r1[9] ^ r1[1]*r1[15]*r1[8] ^ r1[3]*r1[12]*r1[9] ^ r1[3]*r1[13]*r1[8] ^ r1[0]*r1[13]*z5 ^ r1[1]*r1[12]*z5 ^ r1[0]*v5*r1[9] ^ r1[1]*v5*r1[8]
^ x5*r1[12]*r1[9] ^ x5*r1[13]*r1[8] ^ r1[1]*r1[12] ^ r1[0]*r1[13] ^ r1[5]*r1[12] ^ r1[4]*r1[13] ^ y5 ^ r1[12] ^ r1[13] ^ v5;
assign h4 = r1[0]*r1[13]*r1[10] ^ r1[0]*r1[14]*r1[9] ^ r1[1]*r1[12]*r1[10] ^ r1[1]*r1[14]*r1[8] ^ r1[2]*r1[12]*r1[9] ^ r1[2]*r1[13]*r1[8] ^ r1[4] ^ r1[12];
assign h5 = r1[5] ^ r1[12];

assign k1 = t1*t4*t3
^ t4*t2*t3
^ t1*t3
^ t2*t3
^ t2*t4 ^ r1[9] ^ r1[13];
assign k2 = r1[0]*u4*u3 ^ r1[12]*u1*u3
^ r1[8]*u1*u4 ^ r1[0]*r1[12]*u3 ^ r1[0]*r1[8]*u4
^ r1[12]*r1[8]*u1 ^ r1[0]*r1[12]*r1[8] ^ r1[12]*u2*u3
^ r1[4]*u4*u3 ^ r1[8]*u4*u2
^ r1[12]*r1[4]*u3 ^ r1[12]*r1[8]*u2 ^ r1[4]*r1[8]*u4 ^ r1[12]*r1[4]*r1[8]
^ r1[0]*u3 ^ r1[8]*u1 ^ r1[0]*r1[8] ^ r1[4]*u3
^ r1[8]*u2 ^ r1[4]*r1[8] ^ r1[4]*u4 ^ r1[12]*u2 ^ r1[4]*r1[12]
^ r1[10] ^ r1[14];
assign k3 = r1[0]*r1[12]*r1[9] ^ r1[0]*r1[13]*r1[8] ^ r1[1]*r1[12]*r1[8] ^ r1[0]*r1[13]*r1[9] ^ r1[1]*r1[12]*r1[9] ^ r1[1]*r1[13]*r1[8] ^ r1[0]*r1[13]*r1[11] ^ r1[1]*r1[12]*r1[11]
^ r1[0]*r1[15]*r1[9] ^ r1[1]*r1[15]*r1[8] ^ r1[3]*r1[12]*r1[9] ^ r1[3]*r1[13]*r1[8] ^ r1[0]*r1[13]*z5 ^ r1[1]*r1[12]*z5 ^ r1[0]*v5*r1[9] ^ r1[1]*v5*r1[8]
^ x5*r1[12]*r1[9] ^ x5*r1[13]*r1[8] ^ r1[12]*r1[4]*r1[9] ^ r1[12]*r1[5]*r1[8] ^ r1[13]*r1[4]*r1[8] ^ r1[12]*r1[5]*r1[9] ^ r1[13]*r1[4]*r1[9] ^ r1[13]*r1[5]*r1[8]
^ r1[12]*r1[5]*r1[11] ^ r1[13]*r1[4]*r1[11] ^ r1[12]*r1[7]*r1[9] ^ r1[13]*r1[7]*r1[8] ^ r1[15]*r1[4]*r1[9] ^ r1[15]*r1[5]*r1[8] ^ r1[12]*r1[5]*z5 ^ r1[13]*r1[4]*z5
^ r1[12]*y5*r1[9] ^ r1[13]*y5*r1[8] ^ v5*r1[4]*r1[9] ^ v5*r1[5]*r1[8] ^ r1[1]*r1[8] ^ r1[0]*r1[9] ^ r1[5]*r1[8] ^ r1[4]*r1[9] ^ r1[5]*r1[12]
^ r1[4]*r1[13] ^ r1[11] ^ r1[15];
assign k4 = r1[0]*r1[13]*r1[10] ^ r1[0]*r1[14]*r1[9] ^ r1[1]*r1[12]*r1[10] ^ r1[1]*r1[14]*r1[8] ^ r1[2]*r1[12]*r1[9] ^ r1[2]*r1[13]*r1[8] ^ r1[12]*r1[5]*r1[10] ^ r1[12]*r1[6]*r1[9]
^ r1[13]*r1[4]*r1[10] ^ r1[13]*r1[6]*r1[8] ^ r1[14]*r1[4]*r1[9] ^ r1[14]*r1[5]*r1[8] ^ z5 ^ v5;
assign k5 = r1[8] ^ r1[12];


assign f = f1 ^ f2 ^ f3 ^ f4 ^ f5;
assign g = g1 ^ g2 ^ g3 ^ g4 ^ g5;
assign h = h1 ^ h2 ^ h3 ^ h4 ^ h5 ^ z ^ (x*y*z*v) ^(x*ny*z*nv)  ^ (x*ny*nz*nv) ^ (x*y*nz*nv);
assign k = k1 ^ k2 ^ k3 ^ k4 ^ k5 ^ (nx*y*nz*nv)^ (nx*y*z*nv)^ (x*y*z*v) ^ (x*ny*z*v)  ^ (x*y*nz*nv) ^(x*ny*nz*v);


assign old_out[3] = f;
assign old_out[2] = g;
assign old_out[1] = h;
assign old_out[0] = k;

i_cob_inv i_cob_inv1(
.in(old_out),
.out(out)
);

endmodule
//-----------------------------------------------------------------------------------------------

//module invGF2_4(input [3:0]in ,output [3:0]out);

//assign out[0]=((~in[0])&(~in[1])&(~in[2])&in[3])|((~in[0])&(~in[3])&in[1])|((~in[0])&in[1]&in[2])|((~in[1])&(~in[3])&in[0])|((~in[1])&(~in[3])&in[2])|((~in[2])&in[0]&in[1]&in[3]);
//assign out[1]=((~in[0])&(~in[1])&in[3])|((~in[0])&in[1]&in[2])|((~in[1])&(~in[2])&in[3])|((~in[3])&in[0]&in[1])|((~in[3])&in[0]&in[2])|((~in[3])&in[1]&in[2]);
//assign out[2]=((~in[0])&(~in[2])&in[3])|((~in[0])&(~in[3])&in[2])|((~in[1])&in[0]&in[2]&in[3])|((~in[2])&in[0]&in[1])|((~in[3])&in[0]&in[1]);
//assign out[3]=((~in[0])&(~in[1])&in[2])|((~in[0])&(~in[2])&in[3])|((~in[1])&(~in[3])&in[2])|((~in[2])&(~in[3])&in[1])|(in[0]&in[1]&in[2]&in[3]);
//endmodule

//-----------------------------------------------------------------------------------------------

module icobaff_(input [7:0]in,output [7:0]out
);
assign out[0]=1^ in[0]^ in[5]^ in[6]^ in[7];
assign out[1]=1^ in[0]^ in[2]^ in[7];
assign out[2]=0^ in[0]^ in[1]^ in[3]^ in[4];
assign out[3]=0^ in[0];
assign out[4]=0^ in[0]^ in[1]^ in[2]^ in[4]^ in[6]^ in[7];
assign out[5]=1^ in[1]^ in[2]^ in[7];
assign out[6]=1^ in[4]^ in[7];
assign out[7]=0^ in[1]^ in[2]^ in[3]^ in[7];
endmodule

//-----------------------------------------------------------------------------------------------------------------
module cob_(input [7:0]in,output [7:0]out
);
assign out[0] =in[1]^ in[0]^ in[3]^ in[2]^ in[7];
assign out[1] =in[1]^ in[4]^ in[6];
assign out[2] =in[3]^ in[2]^ in[7]^ in[6];
assign out[3] =in[1]^ in[2]^ in[7]^ in[6];
assign out[4] =in[3]^ in[2]^ in[4]^ in[7]^ in[6];
assign out[5] =in[3]^ in[2]^ in[5]^ in[7];
assign out[6] =in[1]^ in[5]^ in[4]^ in[6];
assign out[7] =in[5]^ in[7];
endmodule

//-----------------------------------------------------------------------------------------------------------------
module invGF2_4_2_( input [7:0]a,output [7:0]c,input [15:0]r1, input [23:0]r2,input [23:0] r3);

wire [3:0]ah;
wire [3:0]al;//ah and al are top and bottom slices of a
wire [3:0]t;
assign t =4'b1;
wire [3:0]b; // b is output inv in GF(2^4)
wire [3:0]d0;
wire [3:0]d1;
wire [3:0]out1;
wire [3:0]out3;
wire [3:0]out4;
wire [3:0]out6;
assign al[0]=a[0];
assign al[1]=a[1];
assign al[2]=a[2];
assign al[3]=a[3];
assign ah[0]=a[4];
assign ah[1]=a[5];
assign ah[2]=a[6];
assign ah[3]=a[7];
 GF2_4sqr_v_ sqr1(
 .x(ah),
 .out(out1)
);
GF2_4mult_t_thres_ mult2(
 .x(ah),
 .y(al),
 .out(out3),
 .r3(r3)
);
GF2_4sqr_ sqr2(
 .x(al),
 .out(out4)
);
invGF2_4_thres_ inv240(
 .in((out1^out3^out4)),
 .out(b),
 .r1(r1)
 );
GF2_4mult_thres_ mult4(
 .x(ah),
 .y(b),
 .out(d1),
 .r2(r2)
);
GF2_4mult_thres_ mult5(
 .x(ah),
 .y(t),
 .out(out6),
 .r2(r2)
);
GF2_4mult_thres_ mult6(
 .x(out6^al),
 .y(b),
 .out(d0),
 .r2(r2)
);
assign c[0]=d0[0];
assign c[1]=d0[1];
assign c[2]=d0[2];
assign c[3]=d0[3];
assign c[4]=d1[0];
assign c[5]=d1[1];
assign c[6]=d1[2];
assign c[7]=d1[3];
endmodule
//-----------------------------------------------------------------------------------------------------------------
module sbox(input [7:0]in, input [15:0]r1, input [23:0]r2, input [23:0]r3, output [7:0]out
);
wire [7:0]temp1;
wire [7:0]temp2;

cob_ cob1(
.in(in),
.out(temp1)
);
invGF2_4_2_ invGF2420(
.a(temp1),
.c(temp2),
.r1(r1),
.r2(r2),
.r3(r3)
);
icobaff_ icobaff1(
.in(temp2),
.out(out)
);
endmodule
//--------------------------------------------------------------------------------------------------------------------
//*------------------------------------------------------  TESTBENCH  -------------------------------------
/*
module testsbox();
reg [7:0]in;
wire [7:0]out;
reg clock;
integer i;
initial begin
clock = 0;
forever begin
#2 clock= ~clock;
end
end
sbox sboxtb(
.in(in),
.r1(0),
.r2(0),
.r3(0),
.out(out)
);
initial
begin
for (i = 0; i < 256; i = i + 1) begin
#2
in=i;
$strobe(in,,out);
$display($time," \t For input %x output %x (%d) \n",in-1,out,out);
end
$display($time," \t For input %x output %x (%d) \n",in-1,out,out);
$finish;
end
endmodule
*/

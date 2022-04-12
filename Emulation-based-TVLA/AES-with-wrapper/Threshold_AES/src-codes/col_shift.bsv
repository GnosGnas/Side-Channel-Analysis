package col_shift;

import colByteMix :: *;

interface Col_shift;
	method Action shift(Bit#(32) col_in_);
	method Bit#(32) shifted(Bit#(32) col_in_, Bit#(32) key_col);
endinterface

module mkColShift(Col_shift);
	Reg#(Bit#(32)) col_in <- mkReg(32);

	ColByteMix_ cbm0 <- mkcolByteMix;
	ColByteMix_ cbm1 <- mkcolByteMix;
	ColByteMix_ cbm2 <- mkcolByteMix;
	ColByteMix_ cbm3 <- mkcolByteMix;

	method Action shift(Bit#(32) col_in_);
		col_in <= col_in_;
	endmethod

	method Bit#(32) shifted(Bit#(32) col_in_, Bit#(32) key_col);
		Bit#(32) col_out;
		col_out[31:24] = cbm0.mix_col(col_in_[31:24], col_in_[23:16],col_in_[15:8],col_in_[7:0]);
		col_out[23:16] = cbm1.mix_col(col_in_[23:16], col_in_[15:8],col_in_[7:0],col_in_[31:24]);
		col_out[15:8] = cbm2.mix_col(col_in_[15:8], col_in_[7:0],col_in_[31:24],col_in_[23:16]);
		col_out[7:0] = cbm3.mix_col(col_in_[7:0], col_in_[31:24],col_in_[23:16],col_in_[15:8]);
		return col_out^key_col;
	endmethod
endmodule

endpackage

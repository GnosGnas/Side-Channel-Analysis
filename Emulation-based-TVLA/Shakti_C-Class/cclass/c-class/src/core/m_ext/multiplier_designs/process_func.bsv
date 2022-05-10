
`define num 32
`define num2 64

//(*doc="func: This function pre and post processes the output "*)
	function Bit#(`num) fn_process ( Bit#(`num) in1, Bit#(`num) in2, Bit#(`num2) prod,
                                              Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif );
		  `ifdef RV64
		    if(word_flag)begin
		      in1=funct3[0]==0? signExtend(in1[(`num-1):0]):zeroExtend(in1[(`num-1):0]);
		      in2=funct3[0]==0? signExtend(in2[(`num-1):0]):zeroExtend(in2[(`num-1):0]);
		    end
		  `endif

		    Bool lv_take_complement = False;
		    if(funct3==1 ) // in case of MULH or DIV
			    lv_take_complement=unpack(in1[valueOf(`num)-1]^in2[valueOf(`num)-1]);
		    else if(funct3==2)
			    lv_take_complement=unpack(in1[valueOf(`num)-1]);

		    Bool lv_upperbits = funct3[2]==0?unpack(|funct3[1:0]):unpack(funct3[1]);

		    /*Bool invert_op1 = False;
		    Bool invert_op2 = False;
		    
		    if(funct3[2]==0 && (funct3[0]^funct3[1])==1 && in1[valueOf(`num)-1]==1)
		      invert_op1=True;
		    if(funct3[2]==0 && funct3[1:0]==1 && in2[valueOf(`num)-1]==1)// in multiplication operations
		      invert_op2=True;

		    Bit#(`num) t1=signExtend(pack(invert_op1));
		    Bit#(`num) t2=signExtend(pack(invert_op2));
		    Bit#(`num) op1= (t1^in1)+ zeroExtend(pack(invert_op1));
		    Bit#(`num) op2= (t2^in2)+ zeroExtend(pack(invert_op2));*/

		    Bit#(TMul#(2, `num)) out = prod; 

		    if(lv_take_complement)
		      out=~out+1;

		    Bit#(`num) default_out;
		    if(lv_upperbits)
		      default_out=truncateLSB(out);
		    else
		      default_out=truncate(out);

		  `ifdef RV64
		    if(word_flag)
		      default_out=signExtend(default_out[(`num-1):0]);
		  `endif
		    return default_out;

	  endfunction


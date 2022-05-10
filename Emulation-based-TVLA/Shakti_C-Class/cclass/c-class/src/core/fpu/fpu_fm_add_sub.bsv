/*
Authors     : Vinod.G, Aditya Govardhan
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See LICENSE for more details
Paper Reference: Floating Point Fused Multiply-Add Architectures (http://ieeexplore.ieee.org/stamp/stamp.jsp?arnumber=4487224)
Description:
TODO
*/

package fpu_fm_add_sub;
import DReg::*;
import common_types::*;
import RegFile::*;
import UniqueWrappers::*;
`include "common_params.bsv"	
`include "fpu.defines"
import ConfigReg::*;

interface Ifc_fpu_fm_add_sub#(numeric type fpinp, numeric type fpman, numeric type fpexp);
    method Action _start(Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand1, Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand2,Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul, bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
	method Floating_output#(fpinp) get_result();
    method Action flush;
endinterface


`ifdef fpu_hierarchical
    interface Ifc_fpu_fm_add_sub32;
        method Action _start(Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand1, Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand2,Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul, bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
    	method Floating_output#(32) get_result();
        method Action flush;
    endinterface
    
    interface Ifc_fpu_fm_add_sub64;
        method Action _start(Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand1, Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand2,Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul,bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
    	method Floating_output#(64) get_result();	
        method Action flush;
    endinterface
`endif

typedef struct{
    Bit#(TMul#(2,TAdd#(fpman,1))) product_mantissa;
    Bit#(TAdd#(fpexp,2)) lv_summed_exponent;           // exponent of the resultant
    bit sign;                                          // sign bit of the result
    Bit#(fpinp) _operand3;
    Bit#(1) invalid;                                   // indicating that the ff_output is NaN.
    Bit#(1) infinity;                                  // indicating that the ff_output is infinity.
    Bit#(1) zero;                                      // indicating that the ff_output is zero.
    Bit#(5) add_flags;
    Bit#(3) rounding_mode;                             // static rounding mode encoded in the instruction
    bit _operation;                                    // bit denoting the operation to be performed 0 - Add, 1 - Sub
    bit _negate;                                       // bit denoting whether the operands should be negated or not
    bit mul;                                           // bit denoting whether the operation is mul or not
    bit muladd;
    bit quiet_nan_two;
    bit inp_denormal;
}Input_data_type #(numeric type fpinp, numeric type fpman, numeric type fpexp) deriving (Bits,Eq);

typedef struct{
    Bit#(1) lv_product_sign;                 //The result of the integer multiplier stage
    Bit#(1) lv_negate;
    Bit#(TAdd#(fpexp,2)) lv_product_exponent;
    Bit#(TAdd#(TMul#(2,TAdd#(1,fpman)),1)) lv_product_mantissa;
    Bit#(fpinp) lv_operand3;
    Bit#(5) add_flags;
    bit operation;
    bit mul;
    bit muladd;
    Bit#(3) rounding_mode;
    bit lv_product_is_invalid;
    bit lv_product_is_zero;
    bit lv_product_is_infinity;
    bit lv_product_overflow;
    bit lv_product_underflow;
    bit quiet_nan_two;
    bit inp_denormal;
}Stage2_data_type #(numeric type fpinp, numeric type fpman, numeric type fpexp) deriving (Bits,Eq);

typedef struct{
    bit actual_operation;
    bit lv_resultant_sign;
    bit man2_gt_man3;
    Bit#(TAdd#(fpexp,2)) resultant_exponent;
    Bit#(TAdd#(TMul#(fpman,3),4)) mantissa2;
    Bit#(TAdd#(TMul#(fpman,3),4)) mantissa3;
    Bit#(3) rounding_mode;
    bit result_is_invalid;
    Bit#(2) result_is_infinity;
    Bit#(2) result_is_zero;
    bit product_overflow;
    bit product_underflow;
    bit quiet_nan_two;
    bit quiet_nan_three;
    bit lv_product_is_zero;
}Stage4_data_type #(numeric type fpman, numeric type fpexp) deriving (Bits,Eq);

typedef struct{
    Bit#(TAdd#(fpexp,2)) resultant_exponent;
    Bit#(TAdd#(TMul#(fpman,3),4)) resultant_mantissa;
    bit lv_resultant_sign;
    Bit#(3) lv_rounding_mode;
    Bit#(2) add_sub_is_zero;
    bit lv_result_is_invalid;
    Bit#(2) lv_result_is_infinity;
    Bit#(2) lv_result_is_zero;
    bit lv_product_overflow;
    bit lv_product_underflow;
    bit quiet_nan_two;
    bit quiet_nan_three;
    bit lv_product_is_zero;
    Bit#(TLog#(TAdd#(TAdd#(TMul#(fpman,3),4),1))) lv_zeros_on_left;
}Stage5_data_type #(numeric type fpman, numeric type fpexp) deriving (Bits,Eq);

    typedef enum{
                 Begin,
                 Stage1,
                 Stage2,
                 Stage3,
                 Stage4
                } FMA_states deriving (Bits,Eq);

module mkfpu_fm_add_sub(Ifc_fpu_fm_add_sub#(fpinp,fpman,fpexp))
    provisos(
             Add#(TAdd#(fpexp,fpman),1,fpinp),
             Add#(fpexp,2,fpexp2),
             Add#(TMul#(fpman,3),4,fmaman),
             Add#(fpman,1,fpman1),
             Add#(fpexp,1,fpexp1),
             Add#(b__,fpinp,64),
             Mul#(TAdd#(fpman,1),2,impfpman2),
             Add#(fpinp,fpinp,fpinp2),
             //per request of bsc
             Add#(c__, TSub#(fpexp, 1), fpexp1),
             Add#(d__,1,fpexp2),          
             Add#(e__, fpexp2, fpman),
             Add#(f__, TSub#(fpexp, 1), fpman),
             Add#(g__, TAdd#(fpman, 1), fpinp),
             Add#(h__, TSub#(fpexp, 1), fpexp2),
             Add#(j__, TLog#(TAdd#(1, fmaman)), fpexp2),
             Add#(l__, 1, fmaman),
             Add#(m__, TAdd#(2, fpman), fmaman),
             Add#(n__,TAdd#(fpman,1),fpinp2),
             Add#(a__, TMul#(2, TAdd#(1, fpman)), fmaman),
             Mul#(2, TAdd#(1, fpman), impfpman2),
             Add#(i__, TAdd#(TMul#(2, TAdd#(1, fpman)), 1), fmaman),
             Add#(k__, TLog#(TAdd#(1, TAdd#(impfpman2, 1))), fpexp2),
             Add#(o__, TLog#(TAdd#(1, fmaman)), TAdd#(fpexp, 2)),
             Log#(TAdd#(TAdd#(TMul#(fpman, 3), 4), 1), TLog#(TAdd#(1, fmaman))),
             Add#(p__, TLog#(TAdd#(TAdd#(TMul#(fpman, 3), 4), 1)), TAdd#(fpexp, 2)),
						 Add#(s__, TAdd#(1, TAdd#(f__, fpexp)), fmaman),
						 Add#(t__, TAdd#(f__, fpexp), impfpman2),
						 Add#(q__, TAdd#(fpexp, f__), impfpman2),
						 Add#(r__, TAdd#(1, TAdd#(fpexp, f__)), fmaman)
             );



    Wire#(Floating_output#(fpinp))                            ff_final_out        <-   mkWire();   
    Reg#(Stage2_data_type#(fpinp,fpman,fpexp))                ff_stage2           <-   mkConfigRegU();
    Reg#(Stage4_data_type#(fpman,fpexp))                      ff_stage4           <-   mkConfigRegU();
    Reg#(Stage5_data_type#(fpman,fpexp))                      ff_stage5           <-   mkConfigRegU();
    Reg#(Input_data_type#(fpinp,fpman,fpexp))                 ff_input_register   <-   mkConfigRegU();
    Reg#(FMA_states)                                          rg_state_handler    <-   mkReg(Begin);
    Wire#(Bool)                                               wr_flush            <-   mkDWire(False);

    function zeroExtendLSB(inp_man) = unpack(reverseBits(extend(reverseBits(pack(inp_man))))); 
  
    let fPMAN              =  valueOf(fpman);
    let fPINP              =  valueOf(fpinp);
    let fPEXP              =  valueOf(fpexp);
    let iMPFPMAN2          =  valueOf(impfpman2); 
    let fMAMAN             =  valueOf(fmaman);
    
    rule rl_flush(wr_flush);
         rg_state_handler <= Begin;
         //ff_input_register <= tagged Invalid;
         //ff_stage2         <= tagged Invalid;
         //ff_stage4         <= tagged Invalid;
         //ff_stage5         <= tagged Invalid;
    endrule
    
    rule rl_stage1_after_input_stage(rg_state_handler == Stage1 && !wr_flush);

         Bit#(impfpman2)  x = ff_input_register.product_mantissa;
         Bit#(TAdd#(impfpman2,1)) lv_product_mantissa              =  {x[iMPFPMAN2-1:0],1'b0};          //extra zero for 10.xxxx case
         Bit#(fpexp2)             lv_product_exponent              =  ff_input_register.lv_summed_exponent;
         Bit#(fpinp)              lv_operand3                      =  ff_input_register._operand3;
         Bit#(5)                  add_flags                        =  ff_input_register.add_flags;
         bit                      lv_product_underflow             =  0;
         bit                      lv_product_overflow              =  0;
         let                      lv_product_is_invalid            =  ff_input_register.invalid;
         let                      lv_product_is_infinity           =  ff_input_register.infinity;
         let                      lv_product_is_zero               =  ff_input_register.zero;	
         let                      rounding_mode                    =  ff_input_register.rounding_mode;
         let                      operation                        =  ff_input_register._operation;
         let                      lv_negate                        =  ff_input_register._negate;
         let                      lv_product_sign                  =  ff_input_register.sign;
         let                      mul                              =  ff_input_register.mul;
         let                      muladd                           =  ff_input_register.muladd;
         let                      quiet_nan_two                    =  ff_input_register.quiet_nan_two;
         bit                      inp_denormal                     =  ff_input_register.inp_denormal;
         Bit#(TSub#(fpexp,1))     bias                             =  '1;
         Int#(fpexp2)             lv_actual_product_exponent       =  unpack(lv_product_exponent - {3'b0,bias});
         let                      msb_zeros                        =  pack(countZerosMSB(lv_product_mantissa));
         let                      lsb_zeros                        =  0;

         //Change-2 Removing Redundant Variables
         //Bit#(fpman)              bias_temp                        =  zeroExtend(bias);
         //Int#(fpman)              lv_actual_product_exponent_temp  =  signExtend(lv_actual_product_exponent);
         //`ifdef verbose $display("lv_actual_product_exponent_temp : %d",lv_actual_product_exponent_temp); `endif
         rg_state_handler <= Stage2;

         // lv_product_is_subnormal construct is like a flag which can be used in difficult situations
         // bit lv_product_is_subnormal = 0;

         bit lv_sticky = lv_product_mantissa[0];
         `ifdef verbose $display("and thus the sticky bit = %b", lv_sticky); `endif

         /*
          if exponent is > bias then obviously none of the numbers are subnormal
          so the product is of the form 1x.xxxx or 01.xxxx
          the overflow conditions are handled in the following if condition accordingly
         */

         `ifdef verbose $display("lv_actual_product_exponent = %d",lv_actual_product_exponent); `endif
         bit exp_overflow_bit  = pack(lv_actual_product_exponent)[fPEXP]; //Says if Exponent Overflows
         bit exp_underflow_bit = pack(lv_actual_product_exponent)[fPEXP+1];  //Says if Exponent Underflows
         Bit#(fpexp) expo_temp = pack(lv_actual_product_exponent)[fPEXP-1:0];
         bit exp_and           = &(expo_temp);  //Says if Exponent is equal to Bias
         bit is_msb_zeros       = |(msb_zeros);

         //Change-1 -- Reducing the size of the Muxes from EXP size to just a bunch of 1bits and a Or-tree
         //Change-1 was wrong apparently, according to Paranoia!! Should see why! Rolling back
         //if((exp_overflow_bit==1'b1 && exp_underflow_bit==1'b0) || (is_msb_zeros==1'b0 && exp_and==1'b1)) begin
	     if(lv_actual_product_exponent > zeroExtend(unpack(bias)) || (msb_zeros == 0 && lv_actual_product_exponent == zeroExtend(unpack(bias)))) begin
	 	    if(muladd == 0 ||(muladd==1 && ((lv_product_sign^lv_operand3[fPINP-1]^operation) == 0)))  
	 		   lv_product_overflow = 1;
            //When the product overflows, the FMA result is an overflow
            `ifdef verbose $display("lv_product_overflow!!!"); `endif
         end

         /*
          -lowest_exp = -denormal_bias -mantissa_size -2
          -2 is for the implicit bit and the carry bit
          i.e. if all the bits are shifted out then its an underflow
         */

         else begin
             //Thought-1 -- Can something be done to reduce the countZerosMSB and countZerosLSB              
             //Cannot reduce this mux to 1-bit but can reduce size since it's unwanted
            if(lv_actual_product_exponent < unpack(-zeroExtend(bias)-fromInteger(fPMAN)-1)) begin
            //if(lv_actual_product_exponent_temp < unpack(-bias_temp-fromInteger(fPMAN)-1)) begin
               if((muladd == 1'b0  || (muladd==1'b1 && (add_flags[3]==1'b1 || add_flags[4]==1'b1))) && lv_product_is_zero == 1'b0)
                lv_product_underflow = 1;
               `ifdef verbose $display("lv_product_underflow!!!"); `endif
            end
            /*
             if msb of product is 1 then the case is 1x.xxxx
             product is shifted right once to make it 01.xxxx
             we don't care what is the exponent, just increase it by one
             actual exponent is also increased by one since exponent is increased by one
             this increasing of exponent leading to overflow is handled in the overflow case
             msb_zeros is increased for further arising conditions
            */
             //Change-4 Using the previously computed msb_zeros. Synthesis will detect this anyhow, but still. Fanout?
            if(is_msb_zeros==1'b0) begin
            //if(msb_zeros == 0) begin
               lv_product_mantissa        =  lv_product_mantissa >> 1;	 			
               lv_product_exponent        =  lv_product_exponent + 1;
               lv_actual_product_exponent =  lv_actual_product_exponent + 1;
               msb_zeros                  =  msb_zeros + 1;
            end
            // possible shift is positive when exponent is lesser than -126

            //Change-5 Possible shift needn't use lv_actual_product_exponent -- It's enough if exponent is used I guess
//            Int#(fpexp2) possible_shift   =  1-zeroExtend(unpack(bias))-(lv_actual_product_exponent);
            Int#(fpexp2) possible_shift   =  1-unpack(lv_product_exponent);

            //Experiment-1 -- Do all the operations parallely and use the if-else for just assignments
              lsb_zeros = pack(countZerosLSB(lv_product_mantissa));
              let lv_product_mantissa_shiftR     = (lv_product_mantissa >> pack(possible_shift));
              //lv_product_mantissa_shiftR         = {lv_product_mantissa_shiftR[iMPFPMAN2:1], lv_product_mantissa_shiftR[0] | lv_sticky};
              let lv_product_exponent_inc_shift     = lv_product_exponent + pack(possible_shift);
           
              let shift_neg = ~pack(possible_shift)+1; 
            
              let lv_product_mantissa_shiftL_expo = lv_product_mantissa << (shift_neg);
              let lv_product_exponent_sub_shift = lv_product_exponent - (shift_neg);
                  
              let lv_product_mantissa_shiftL_zerosMSB = lv_product_mantissa << (msb_zeros - 1);
              let lv_product_exponent_sub_zerosMSB = lv_product_exponent - (zeroExtend(msb_zeros) - 1); 
              
            /*
            msb_zeros = 1 when
            i)  the product is 1x.xxxx and shifted right once
            ii) the product is 01.xxxx already
            if possible_shift is negative or zero, it means that exponent is -126 or greater
            and thus the product is already normalized
            but if possible_shift is positive, it means that exponent is < -126
            and thus product is shifted right to make exponent -126 and the result is subnormal
            */
            if(possible_shift > 0) begin
               //Setting sticky if all lsb zeros are removed out

               //Is there a better logic for this? Since, lsb_zeros is a big if-else logic
               //lsb_zeros = pack(countZerosLSB(lv_product_mantissa));
               if(possible_shift > unpack(zeroExtend(lsb_zeros)) || lv_product_mantissa[0] == 1) 
                  lv_sticky = 1;
               
                lv_product_mantissa = {lv_product_mantissa_shiftR[iMPFPMAN2:1], lv_product_mantissa_shiftR[0]|lv_sticky};
                lv_sticky = lv_product_mantissa[0];
                lv_product_exponent = lv_product_exponent_inc_shift;

                `ifdef verbose $display("possible_shift",possible_shift); `endif
               /*if(mul==1 && lv_product_is_zero==0)
                   lv_product_underflow = 1;*/
               //Handling sticky

               `ifdef verbose $display("lv_product_exponent : %d bin : %b",lv_product_exponent,lv_product_exponent); `endif
               `ifdef verbose $display("lv_product_mantissa = %b lv_product_exponent : %d since exp < -126", lv_product_mantissa,lv_product_exponent); `endif
               `ifdef verbose $display("and thus the sticky bit = %b", lv_sticky); `endif
               // lv_product_is_subnormal = 1;
            end

            /*
            msb_zeros != 1 means product is of the form 00.xxxx, important case
            */
            else if(msb_zeros != 'b1) begin
               /*
               if possible shift is < the number of leading zeros then the number can't be made normal
               */
               if((shift_neg) < zeroExtend(msb_zeros - 1)) begin
                   lv_product_mantissa = lv_product_mantissa_shiftL_expo;
                   lv_product_exponent = lv_product_exponent_sub_shift;
                              // lv_product_is_subnormal = 1;
               end
               /*
               if exponent affords to give away enough such that shifting left leads to 01.xxxx and exponent >= -126
               */
               else begin
                    lv_product_mantissa = lv_product_mantissa_shiftL_zerosMSB;
                    lv_product_exponent = lv_product_exponent_sub_zerosMSB;
               // lv_product_is_subnormal = 0;
               end
            end
         end
         ff_stage2 <= Stage2_data_type{
                                                    lv_product_sign        :  lv_product_sign,
                                                    lv_negate              :  lv_negate,
                                                    lv_product_exponent    :  lv_product_exponent,
                                                    lv_product_mantissa    :  lv_product_mantissa,
                                                    lv_operand3            :  lv_operand3,
                                                    add_flags              :  add_flags,
                                                    operation              :  operation,
                                                    mul                    :  mul,
                                                    muladd                 :  muladd,
                                                    rounding_mode          :  rounding_mode,
                                                    lv_product_is_invalid  :  lv_product_is_invalid,
                                                    lv_product_is_zero     :  lv_product_is_zero,
                                                    lv_product_is_infinity :  lv_product_is_infinity,
                                                    lv_product_overflow    :  lv_product_overflow,
                                                    lv_product_underflow   :  lv_product_underflow,
                                                    quiet_nan_two          :  quiet_nan_two
                                                   };


    endrule

    rule rl_stage_3(rg_state_handler == Stage2 && !wr_flush);

         rg_state_handler <= Stage3;
         let lv_negate              = ff_stage2.lv_negate;
         let lv_product_exponent    = ff_stage2.lv_product_exponent;
         let lv_product_mantissa    = ff_stage2.lv_product_mantissa;
         let lv_operand3            = ff_stage2.lv_operand3;
         let add_flags              = ff_stage2.add_flags;
         let operation              = ff_stage2.operation;
         let mul                    = ff_stage2.mul;
         let muladd                 = ff_stage2.muladd;
         let lv_product_sign        = ff_stage2.lv_product_sign;
         let lv_product_is_invalid  = ff_stage2.lv_product_is_invalid;
         let lv_product_is_zero     = ff_stage2.lv_product_is_zero;
         let lv_rounding_mode       = ff_stage2.rounding_mode;
         let lv_product_is_infinity = ff_stage2.lv_product_is_infinity;
         let lv_product_overflow    = ff_stage2.lv_product_overflow;
         let lv_product_underflow   = ff_stage2.lv_product_underflow;
         let quiet_nan_two          = ff_stage2.quiet_nan_two;
         let inp_denormal           = ff_stage2.inp_denormal;
         //ff_stage2 <= tagged Invalid;

         Bit#(1) sign2              = lv_product_sign ^ lv_negate;
         Bit#(fpexp2) exponent2     = lv_product_exponent;
         Bit#(fmaman) mantissa2     = zeroExtendLSB(lv_product_mantissa);
         Bit#(1) sign3              = lv_operand3[fPINP-1] ^ lv_negate;     
         Bit#(fpexp2) exponent3     = {2'b0, lv_operand3[fPINP-2:fPMAN]};
         Bit#(fmaman) mantissa3     = 0;
         Bit#(fpman) lv_man3        = lv_operand3[fPMAN-1:0];
         Bit#(fpexp) lv_exp_max     = '1;
         bit lv_op3_is_invalid      = add_flags[2] | add_flags[0];
         bit lv_op3_is_infinity     = add_flags[1];
         bit lv_op3_is_zero         = add_flags[3];
         bit op3_is_subnormal       = add_flags[4];
         bit quiet_nan_three        = add_flags[2];
         bit expo3_zero = |exponent3;
         //Change-7 Replaced all instances of operation^sign3 with op_xor_sign3
         bit op_xor_sign3 = operation ^ sign3;

         //Change-6 Avoiding exponent3==0 mux, but does that help?
         if(lv_op3_is_infinity==0 && lv_op3_is_invalid ==0 && lv_op3_is_zero==0) begin
             mantissa3 =  zeroExtendLSB({1'b0,expo3_zero,lv_man3});
         /*   if(exponent3 == '0)
                mantissa3 = zeroExtendLSB({2'b0,lv_man3});
            else
                mantissa3 = zeroExtendLSB({2'b01,lv_man3});*/
         end
		
         exponent3 = exponent3 + zeroExtend(op3_is_subnormal);

         Bit#(1) lv_result_is_invalid  = 0;
         Bit#(2) lv_result_is_infinity = 0;
         Bit#(2) lv_result_is_zero     = 0;
        
         if(quiet_nan_two == 0 && lv_product_is_invalid == 1)
             quiet_nan_three = 0;           //0*inf case

         //Result is invalid cases
         if(lv_op3_is_invalid == 1 || lv_product_is_invalid == 1)
            lv_result_is_invalid = 1;
         
         //Result is zero cases
         else if(lv_op3_is_zero == 1 && lv_product_is_zero == 1) begin
            if(mul==0) begin
               if((lv_rounding_mode == 'b010) && (sign2 | (op_xor_sign3)) == 1)
                  lv_result_is_zero = 2'b11; 
               else if((lv_rounding_mode != 'b010) && (sign2 & (op_xor_sign3)) == 1) 	
                  lv_result_is_zero = 2'b11;
               else begin
                  if(sign2 == 0)
                     lv_result_is_zero = 2'b01;
                  else
                     lv_result_is_zero = {op_xor_sign3,1'b1};
               end
            end
            else
            lv_result_is_zero = {sign2,1};
         end
         
         //Result is infinity cases
         else if(lv_product_is_infinity == 1 && lv_op3_is_infinity == 1) begin
            lv_result_is_infinity   = {sign2, ~(sign2 ^ (op_xor_sign3))};
            lv_result_is_invalid    = ~lv_result_is_infinity[0];
            quiet_nan_two = 0; //inf * qNaN + inf case
         end
         else if(lv_product_is_infinity == 1 || lv_op3_is_infinity == 1) begin
            lv_result_is_infinity   = {((lv_product_is_infinity & ~lv_op3_is_infinity) & sign2) | ((~lv_product_is_infinity & lv_op3_is_infinity) & (op_xor_sign3)), 1};
         end
         if(lv_product_is_zero == 1) begin
            exponent2 = '0;
            mantissa2 = '0;
         end
         
         Bit#(fpexp2) lv_minuend, lv_subtrahend;
         Bit#(fpexp2) exponent_difference = '0;
         Bit#(fpexp2) resultant_exponent = '0;
         bit op2_gt_op3 = 0;
         
         Bit#(fmaman) mantissa_to_shift;
         let lv_zeros_on_right;
         bit lv_sticky = 0;
         
         if(exponent2 > exponent3) begin
            lv_minuend        = exponent2;
            lv_subtrahend     = exponent3;
            mantissa_to_shift = mantissa3;
            op2_gt_op3        = 1;
         end
         else begin
            lv_minuend        = exponent3;
            lv_subtrahend     = exponent2;
            mantissa_to_shift = mantissa2;
            op2_gt_op3        = 0;
         end
         
         resultant_exponent           = lv_minuend;
         exponent_difference          = lv_minuend - lv_subtrahend;
         lv_zeros_on_right            = zeroExtend(pack(countZerosLSB(mantissa_to_shift)));
         Bit#(1) shifted_operand_zero = (mantissa_to_shift == '0) ? 1:0;
         mantissa_to_shift            = mantissa_to_shift >> exponent_difference;
        
         //Handling sticky
         if(((lv_zeros_on_right < exponent_difference) || (mantissa_to_shift[0] == 1)) && shifted_operand_zero != 1)
            lv_sticky = 1;
         
         mantissa_to_shift = {mantissa_to_shift[fMAMAN-1:1], lv_sticky};
         
         if(op2_gt_op3 == 1) begin
         mantissa3 = mantissa_to_shift;
         end
         else begin
         mantissa2 = mantissa_to_shift;
         end
         quiet_nan_two = quiet_nan_two & ~add_flags[0];
         `ifdef verbose $display("sign2 = %b exponent2 = %b mantissa2 = %b", sign2, resultant_exponent, mantissa2); `endif
         `ifdef verbose $display("sign3 = %b exponent3 = %b mantissa3 = %b", sign3, resultant_exponent, mantissa3); `endif
         `ifdef verbose $display(); `endif
         bit man2_gt_man3 = 0;
         if(mantissa2 > mantissa3) man2_gt_man3 = 1;   //Can this be optimized? 
         bit lv_resultant_sign = (man2_gt_man3 & sign2) | (~man2_gt_man3 & (operation ^ sign3));  // Using Karnaugh maps
         bit actual_operation  = sign2 ^ (operation ^ sign3);                          // 0 for addition 1 for subtraction  //Can this be pushed back to the prev. stage, saving 1 bit 

      ff_stage4<= Stage4_data_type{   
                                                lv_resultant_sign    :           lv_resultant_sign,
                                                actual_operation     :           actual_operation,
                                                mantissa2            :           mantissa2,
                                                mantissa3            :           mantissa3,
                                                man2_gt_man3         :           man2_gt_man3,
                                                resultant_exponent   :           resultant_exponent,
                                                rounding_mode        :           lv_rounding_mode,
                                                result_is_invalid    :           lv_result_is_invalid,
                                                result_is_infinity   :           lv_result_is_infinity,
                                                result_is_zero       :           lv_result_is_zero,
                                                product_overflow     :           lv_product_overflow,
                                                product_underflow    :           lv_product_underflow,
                                                quiet_nan_two        :           quiet_nan_two,
                                                quiet_nan_three      :           quiet_nan_three,
                                                lv_product_is_zero   :           lv_product_is_zero
                                                };
    endrule:rl_stage_3

    rule rl_stage4(rg_state_handler == Stage3 && !wr_flush);
         rg_state_handler <= Stage4;
         let          lv_resultant_sign     =  ff_stage4.lv_resultant_sign;
         let          man2_gt_man3          =  ff_stage4.man2_gt_man3;
         let          mantissa2             =  ff_stage4.mantissa2;
         let          mantissa3             =  ff_stage4.mantissa3;
         let          actual_operation      =  ff_stage4.actual_operation;
         Bit#(fpexp2) resultant_exponent    =  ff_stage4.resultant_exponent;
         Bit#(3)      lv_rounding_mode      =  ff_stage4.rounding_mode;
         bit          lv_result_is_invalid  =  ff_stage4.result_is_invalid;
         Bit#(2)      lv_result_is_infinity =  ff_stage4.result_is_infinity;
         Bit#(2)      lv_result_is_zero     =  ff_stage4.result_is_zero;
         bit          lv_product_overflow   =  ff_stage4.product_overflow;
         let          quiet_nan_two         =  ff_stage4.quiet_nan_two;
         let          quiet_nan_three       =  ff_stage4.quiet_nan_three;
         let          lv_product_underflow  =  ff_stage4.product_underflow;
         let          lv_product_is_zero    =  ff_stage4.lv_product_is_zero;
         //ff_stage4 <= tagged Invalid;

         Bit#(fmaman) resultant_mantissa = 0;
         Bit#(fmaman) add_mantissa = mantissa2 + mantissa3;

         //Serial Path?
         Bit#(fmaman) sub_mantissa1 = (man2_gt_man3==1)? mantissa2 : mantissa3;
         Bit#(fmaman) sub_mantissa2 = (man2_gt_man3==1)? mantissa3 : mantissa2;
         Bit#(fmaman) sub_mantissa  = sub_mantissa1 - sub_mantissa2;


         if(actual_operation == 0)  
             resultant_mantissa = add_mantissa;
         else                 
             resultant_mantissa = sub_mantissa;

         //Case when Mantissa2 = Mantissa3 and hence the result is zero
         Bit#(2) add_sub_is_zero = 0;

         if(resultant_mantissa == '0) begin
            if(lv_rounding_mode == 3'b010) begin   
               add_sub_is_zero = 2'b11;
            end
            else begin                    
               add_sub_is_zero = 2'b01;       // checks the resultant mantissa for zero
            end
         end

         let lv_zeros_on_left = pack(countZerosMSB(resultant_mantissa));
        ff_stage5 <= Stage5_data_type{
                                                    resultant_mantissa    : resultant_mantissa,
                                                    add_sub_is_zero       : add_sub_is_zero,
                                                    lv_resultant_sign     : lv_resultant_sign,
                                                    resultant_exponent    : resultant_exponent,
                                                    lv_rounding_mode      : lv_rounding_mode,
                                                    lv_result_is_invalid  : lv_result_is_invalid,
                                                    lv_result_is_infinity : lv_result_is_infinity,
                                                    lv_result_is_zero     : lv_result_is_zero,
                                                    lv_product_overflow   : lv_product_overflow,
                                                    quiet_nan_two         : quiet_nan_two,
                                                    quiet_nan_three       : quiet_nan_three,
                                                    lv_product_underflow  : lv_product_underflow,
                                                    lv_product_is_zero    : lv_product_is_zero,
                                                    lv_zeros_on_left      : lv_zeros_on_left
                                                };

    endrule



    rule rl_stage_5_final_stage(rg_state_handler == Stage4 && !wr_flush);
        Bit#(fmaman) resultant_mantissa    = ff_stage5.resultant_mantissa;
        let add_sub_is_zero       = ff_stage5.add_sub_is_zero;
        let resultant_exponent    = ff_stage5.resultant_exponent;
        let lv_resultant_sign     = ff_stage5.lv_resultant_sign;
        let lv_rounding_mode      = ff_stage5.lv_rounding_mode;
        let lv_result_is_invalid  = ff_stage5.lv_result_is_invalid;
        let lv_result_is_infinity = ff_stage5.lv_result_is_infinity;
        let lv_result_is_zero     = ff_stage5.lv_result_is_zero;
        let lv_product_overflow   = ff_stage5.lv_product_overflow;
        let quiet_nan_two         = ff_stage5.quiet_nan_two;
        let quiet_nan_three       = ff_stage5.quiet_nan_three;
        let lv_product_underflow  = ff_stage5.lv_product_underflow;
        let lv_product_is_zero    = ff_stage5.lv_product_is_zero;
        let lv_zeros_on_left      = ff_stage5.lv_zeros_on_left;
        bit add_sub_subnormal = 0;
        //ff_stage5 <= tagged Invalid;
        rg_state_handler <= Begin;
         bit lv_sticky = resultant_mantissa[0];

         //change-x+1
         let resultant_exponent_sub = resultant_exponent -1;
         let resultant_mantissa_unnormalized = resultant_mantissa >> 1;
         let resultant_exponent_inc = resultant_exponent + 1;
         let resultant_mantissa_norm_expo = resultant_mantissa << resultant_exponent_sub;
         let resultant_mantissa_norm_zerosMSB = resultant_mantissa << (lv_zeros_on_left - 1);
         let resultant_exponent_sub_zerosMSB = resultant_exponent - ((zeroExtend(lv_zeros_on_left)) - 1);


         if(resultant_mantissa[fMAMAN-1] == 1'b1) begin
            //resultant_mantissa = resultant_mantissa >> 1;
            resultant_mantissa = {resultant_mantissa_unnormalized[fMAMAN-1:1], lv_sticky | resultant_mantissa_unnormalized[0]};
            resultant_exponent = resultant_exponent_inc;
            //resultant_exponent = resultant_exponent + 1;
         end

         else if(resultant_mantissa[fMAMAN-2] != 1'b1) begin
            if((zeroExtend(lv_zeros_on_left) - 1) > resultant_exponent_sub) begin
            //if((zeroExtend(lv_zeros_on_left) - 1) > (resultant_exponent - 1)) begin
               `ifdef verbose $display("resultant_exponent : %d",resultant_exponent); `endif
               //resultant_mantissa = resultant_mantissa << (resultant_exponent - 1);
               resultant_mantissa = resultant_mantissa_norm_expo;
               resultant_exponent = 0;
               `ifdef verbose $display("add_sub subnormal!!!"); `endif
               add_sub_subnormal = 1;
            end
            else begin
               //resultant_mantissa = resultant_mantissa << (lv_zeros_on_left - 1);
               //resultant_exponent = resultant_exponent - (zeroExtend(lv_zeros_on_left) - 1);
               resultant_mantissa = resultant_mantissa_norm_zerosMSB;
               resultant_exponent = resultant_exponent_sub_zerosMSB;
            end
         end


         `ifdef verbose $display("resultant_exponent : %b",resultant_exponent); `endif
         Bit#(TSub#(fpexp,1)) bias = '1;
         bit ex_overflow = 0;
         Int#(fpexp2) res_exp_int = unpack(resultant_exponent) - zeroExtend(unpack(bias));
         `ifdef verbose $display("resultant_exponent : %d res_exp_int : %d",resultant_exponent, res_exp_int); `endif
         
         if(res_exp_int > zeroExtend(unpack(bias))) begin
             lv_product_overflow = 1;
             ex_overflow = 1;
         end
      /*   else if(res_exp_int == zeroExtend(unpack(bias)))
             ex_overflow = 1;*/
         else if(resultant_exponent[fPEXP+1] == 1 && lv_product_is_zero == 0) begin
             lv_product_underflow = 1;
             `ifdef verbose $display("Underflow"); `endif
         end
         /*`ifdef verbose $display("resultant_sign = %b resultant_exponent = %b resultant_mantissa = %b", resultant_sign, resultant_exponent, resultant_mantissa); `endif
         `ifdef verbose $display(); `endif
    */    
         Bit#(TAdd#(fpman,2)) lv_rounded_mantissa =   resultant_mantissa[fMAMAN-1:iMPFPMAN2];
         Bit#(2) lv_res_man                       =   resultant_mantissa[fMAMAN-1:fMAMAN-2];
         Bit#(TSub#(impfpman2,2)) lv_res1         =   resultant_mantissa[iMPFPMAN2-3:0];
         bit lv_guard                             =   resultant_mantissa[iMPFPMAN2-1];
         bit lv_round                             =   resultant_mantissa[iMPFPMAN2-2];
         lv_sticky                                =   |lv_res1;
         bit lv_round_up                          =   0;
         bit lv_inexact                           =   lv_guard | lv_round | lv_sticky;

         if(lv_rounding_mode == 'b000)       
            lv_round_up = lv_guard & (resultant_mantissa[iMPFPMAN2] | lv_round | lv_sticky);
         else if(lv_rounding_mode == 'b100)    
            lv_round_up = lv_guard ;//& (lv_round | lv_sticky | ~lv_resultant_sign);
         else if(lv_rounding_mode == 'b010)    
            lv_round_up = lv_inexact & (lv_resultant_sign);
         else if(lv_rounding_mode == 'b011)    
            lv_round_up = lv_inexact & (~lv_resultant_sign);

        if(add_sub_subnormal == 1 && lv_inexact == 1)
            lv_product_underflow = 1;

         `ifdef verbose $display("lv_guard = %b lv_round = %b lv_sticky = %b", lv_guard, lv_round, lv_sticky); `endif
         `ifdef verbose $display("lv_round_up = %b", lv_round_up); `endif
         `ifdef verbose $display("lv_rounded_mantissa = %b", lv_rounded_mantissa); `endif

          if(lv_round_up == 1) 
             lv_rounded_mantissa = lv_rounded_mantissa + 1;

         `ifdef verbose $display("lv_rounded_mantissa = %b after roundup", lv_rounded_mantissa); `endif

         if(lv_rounded_mantissa[fPMAN+1] == 1) begin
            resultant_exponent = resultant_exponent + 1;
            lv_rounded_mantissa   = lv_rounded_mantissa >> 1;
         end
         else if(lv_res_man == 'b0 && lv_rounded_mantissa[fPMAN] == 1) begin
            resultant_exponent = resultant_exponent + 1;
         end

         Bit#(fpexp) lv_res_exp_temp         = resultant_exponent[fPEXP-1:0];
         Bit#(fpman) man_all_zeros           = '0;
         Bit#(TSub#(fpman,1)) man1_all_zeros = '0;
         Bit#(fpman) man_all_ones            = '1;
         Bit#(fpexp) exp_all_zeros           = '0;
         Bit#(TSub#(fpexp,1)) exp_all_ones_1 = '1;
         Bit#(fpinp) lv_final_output         =  0;
         Bit#(fpexp) exp_all_ones            = '1;
         Bit#(fpexp) out_exp                 = resultant_exponent[fPEXP-1:0];
         Bit#(fpman) out_man                 = lv_rounded_mantissa[fPMAN-1:0];

         
         //Can I put these invalid, infinity, zero, cases in the first stage which will clear some of the paths????
         if(lv_result_is_invalid == 1) begin
           lv_final_output = {1'b0, exp_all_ones,1'b1, man1_all_zeros};
         end
         else if(lv_result_is_infinity[0] == 1) begin
            lv_final_output = {lv_result_is_infinity[1], exp_all_ones, man_all_zeros};
            ex_overflow = 0; lv_product_underflow = 0; lv_inexact = 0;
         end
         else if(lv_result_is_zero[0] == 1) begin
             lv_final_output = {lv_result_is_zero[1],exp_all_zeros, man_all_zeros};
         end
         else if(add_sub_is_zero[0] == 1) begin
            lv_final_output = {add_sub_is_zero[1], exp_all_zeros , man_all_zeros};
         end
         else if(lv_product_overflow == 1 || lv_res_exp_temp == '1) begin
            lv_inexact = 1;
            ex_overflow = 1;
           if(lv_rounding_mode == 'b001)                          
             lv_final_output={lv_resultant_sign,{exp_all_ones_1,1'b0},man_all_ones}; //??
           else if(lv_rounding_mode == 'b010 && lv_resultant_sign == 0) 
             lv_final_output={lv_resultant_sign,{exp_all_ones_1,1'b0},man_all_ones}; //??
           else if(lv_rounding_mode == 'b011 && lv_resultant_sign == 1) 
             lv_final_output={lv_resultant_sign,{exp_all_ones_1,1'b0},man_all_ones}; //??
           else begin                                             
             lv_final_output={lv_resultant_sign,exp_all_ones,man_all_zeros};
           end
         end
         else begin
             lv_final_output = {lv_resultant_sign, out_exp, out_man};
         end

         if(lv_product_underflow == 1'b1 && lv_rounded_mantissa[fPMAN]==1'b1 && lv_rounding_mode!=3'b011) //Tininess vanishing after rounding
             lv_product_underflow = 0;
       
         if(lv_result_is_invalid == 1) begin   //For effectively handling the flag cases between add,sub,mul and fused mul add
             ex_overflow  = 0;
             lv_inexact   = 0;
             lv_product_underflow = 0;
            if(quiet_nan_two == 1 || quiet_nan_three == 1)
                lv_result_is_invalid = 0;
         end

         Bit#(5) fflags={lv_result_is_invalid,1'b0,ex_overflow,lv_product_underflow,lv_inexact};
         `ifdef verbose $display("lv_inv : %b ex_overflow: %b lv_inexact : %b",lv_result_is_invalid,ex_overflow,lv_inexact); `endif
         ff_final_out <= Floating_output{
                                 final_result   :        lv_final_output,
                                 fflags         :        fflags
                                        };

         `ifdef verbose $display("FMA: Result: %h fflags: %8h",lv_final_output, {24'b0,fflags}); `endif
    endrule
	
    method Action _start(Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand1, Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand2,Tuple3#(Bit#(1),Bit#(fpexp),Bit#(fpman)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul, bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
		

         Bit#(TSub#(fpexp,1)) bias       =  '1;                                   //Bias for the exponent: 127 for SP and 1023 for DP
         Bit#(1) sign1                   =  tpl_1(_operand1);
         Bit#(1) sign2                   =  tpl_1(_operand2);
         Bit#(1) sign3                   =  tpl_1(_operand3);
         Bit#(fpexp) lv_exponent1        =  tpl_2(_operand1);
         Bit#(fpexp) lv_exponent2        =  tpl_2(_operand2);
         Bit#(fpexp) lv_exponent3        =  tpl_2(_operand3);
         Bit#(fpman) lv_mantissa1        =  tpl_3(_operand1);
         Bit#(fpman) lv_mantissa2        =  tpl_3(_operand2);
         Bit#(fpman) lv_mantissa3        =  tpl_3(_operand3);
         Bit#(5) flags1                  =  tpl_1(flags);
         Bit#(5) flags2                  =  tpl_2(flags);
         Bit#(5) flags3                  =  tpl_3(flags);
         Bit#(1) lv_op1_is_zero          =  flags1[3];                             //1 when operand1=0
         Bit#(1) lv_op2_is_zero          =  flags2[3];                             //1 when operand2=0
         Bit#(1) lv_op1_infinity         =  flags1[1];                             //1 when operand1=inf
         Bit#(1) lv_op2_infinity         =  flags2[1];                             //1 when operand2=inf
         Bit#(1) lv_op1_subnormal        =  flags1[4] | flags1[3];                 //1 when operand1 is subnormal
         Bit#(1) lv_op2_subnormal        =  flags2[4] | flags2[3];                 //1 when operand2 is subnormal
         Bit#(1) lv_inf                  =  0;                                     //Bit indicating infinity
         Bit#(1) lv_inv                  =  0;                                     //Invalid Bit
         Bit#(1) lv_zero                 =  0;                                     //Zero bit
         bit quiet_nan_two               = (flags1[2] & ~flags2[0]) | (flags2[2] & ~flags1[0]);

         if((((flags1[0] | flags1[2])==1) || (flags2[0] | flags2[2])==1))  //If either of the operands are NaN's (Quiet or Signalling - Not distinguishing between them here) 
             lv_inv = 1;
         else if(lv_op1_infinity==1 || lv_op2_infinity==1) begin           //If either of the operands are Infinity
             if(lv_op1_is_zero == 1 || lv_op2_is_zero ==1) begin                 //Provided atleast one of the operands are infinity, if either of them are zero, then res is NaN (0*inf)
                 lv_inv = 1;
             end
             else begin
                 lv_inf = 1;                                                //Else result is infinity - inf +/- op2 = inf
                 quiet_nan_two = 0;
             end
         end
         else if(lv_op1_is_zero == 1 || lv_op2_is_zero == 1)
             lv_zero = 1;                                                  //If they are not infinity - Checked for Zero, if it is then product is zero (0*x = 0)


         `ifdef verbose $display("lv_inv : %h lv_inf : %h lv_zero : %h",lv_inv,lv_inf,lv_zero);  `endif
         `ifdef verbose $display("flags1 : %b flags2 : %b flags3 : %b",flags1,flags2,flags3); `endif
   
         /*
            When normal and denormal number is multiplied, exponent is
            (biased_exponent - bias) + (1 - bias) + bias = biased_exponent - bias + 1;
            either _operand1[30:23] == 0 or _operand2[30:23] == 0 for the above if condition so no harm in adding both
         */

         Bit#(fpexp2) exp1_temp          =  {2'b0,lv_exponent1};
         Bit#(fpexp2) exp2_temp          =  {2'b0,lv_exponent2};
         Bit#(fpexp2) lv_summed_exponent =  exp1_temp + exp2_temp - zeroExtend(bias) + zeroExtend(lv_op1_subnormal) + zeroExtend(lv_op2_subnormal);
         Bit#(1) lv_sign                 =  sign1 ^ sign2;

         `ifdef verbose $display("lv_summed_exponent = %b", lv_summed_exponent/*, lv_actual_exponent*/); `endif

         Bit#(impfpman2) x = zeroExtend({~lv_op1_subnormal, lv_mantissa1})*zeroExtend({~lv_op2_subnormal, lv_mantissa2});    //Single Cycle Int Mul
         rg_state_handler <= Stage1;
         ff_input_register<= Input_data_type{  
                                                           product_mantissa    :          x,
                                                           lv_summed_exponent  :          lv_summed_exponent,
                                                           sign                :          lv_sign,
                                                           _operand3           :          {sign3,lv_exponent3,lv_mantissa3},
                                                           rounding_mode       :          rounding_mode,
                                                           infinity            :          lv_inf,
                                                           add_flags           :          flags3,
                                                           invalid             :          lv_inv,
                                                           zero                :          lv_zero,
                                                           _operation          :          operation,
                                                           _negate             :          _negate,
                                                           mul                 :          mul,
                                                           muladd              :          muladd,
                                                           quiet_nan_two       :          quiet_nan_two,
                                                           inp_denormal        :          lv_op1_subnormal | lv_op2_subnormal
                                                         };
    endmethod


   method Floating_output#(fpinp) get_result();
       return ff_final_out;
   endmethod
    method Action flush;
        wr_flush <= True;
    endmethod
endmodule


module mkTb_fpu_fm_add_sub(Empty);

	Ifc_fpu_fm_add_sub#(32,23,8) uut <- mkfpu_fm_add_sub();

    function Tuple3#(Bit#(5), Bit#(5), Bit#(5)) condFlags (Tuple2#(Bit#(m), Bit#(e)) x, Tuple2#(Bit#(m), Bit#(e)) y, Tuple2#(Bit#(m),Bit#(e)) z);
        let s = valueOf(m);
        let man1  = tpl_1(x);
        let expo1 = tpl_2(x);
        let man2  = tpl_1(y);
        let expo2 = tpl_2(y);
        let man3  = tpl_1(z);
        let expo3 = tpl_2(z);
        Bit#(5) flags1, flags2,flags3;
        Bool expZ1 = (expo1 == 0);
        Bool manZ1 = (man1  == 0);
        Bool expO1 = (expo1 == '1);
        Bool manO1 = (man1  == '1);
        Bool topB1 = (man1[s-1] == 1);
        Bool expZ2 = (expo2 == 0);
        Bool manZ2 = (man2  == 0);
        Bool expO2 = (expo2 == '1);
        Bool manO2 = (man2  == '1);
        Bool topB2 = (man2[s-1] == 1 && man2 !=0);
        Bool expZ3 = (expo3 == 0);
        Bool manZ3 = (man3  == 0);
        Bool expO3 = (expo3 == '1);
        Bool manO3 = (man3  == '1);
        Bool topB3 = (man3[s-1] == 1 && man3 !=0);
        flags1 = {pack(expZ1 && !manZ1),pack(manZ1 && expZ1),pack(expO1 && topB1),pack(expO1 && manZ1),pack(expO1 && !topB1 && !manZ1)}; //Denormal, isZero, QNaN, Infinity, SNaN
        flags2 = {pack(expZ2 && !manZ2),pack(manZ2 && expZ2),pack(expO2 && topB2),pack(expO2 && manZ2),pack(expO2 && !topB2 && !manZ2)}; //Denormal, isZero, QNaN, Infinity, SNaN
        flags3 = {pack(expZ3 && !manZ3),pack(manZ3 && expZ3),pack(expO3 && topB3),pack(expO3 && manZ3),pack(expO3 && !topB3 && !manZ3)}; //Denormal, isZero, QNaN, Infinity, SNaN
        return tuple3(flags1,flags2,flags3);
    endfunction

    function Tuple3#(Bit#(m),Bit#(m), Bit#(m)) getMantissa (Bit#(n) op1, Bit#(n) op2, Bit#(n) op3)
        provisos(Add#(TAdd#(m,1),e,n),
                 Add#(7,a__,e)
                );
        let expo = valueOf(e);
        let man  = valueOf(m);
        return tuple3(op1[man-1:0],op2[man-1:0],op3[man-1:0]);
    endfunction

    function Tuple3#(Bit#(e), Bit#(e), Bit#(e)) getExp (Bit#(n) op1, Bit#(n) op2, Bit#(n) op3)
        provisos(Add#(TAdd#(m,1),e,n),
                 Add#(7,a__,e)
                );
        let inp = valueOf(n);
        let man  = valueOf(m);
        return tuple3(op1[inp-2:man], op2[inp-2:man], op3[inp-2:man]);
    endfunction

    function Bool isNaNBox(Bit#(64) op);
        return (op[63:32]=='1);
    endfunction

    function Tuple3#(Bit#(32),Bit#(32),Bit#(32)) setCanNaN (Bit#(64) op1, Bit#(64) op2, Bit#(64) op3);
        return tuple3(isNaNBox(op1)? truncate(op1) : 32'h7fc00000, isNaNBox(op2)? truncate(op2) : 32'h7fc00000, isNaNBox(op3)? truncate(op3) : 32'h7fc00000);
    endfunction
    
    Wrapper3#(Tuple2#(Bit#(23), Bit#(8)),Tuple2#(Bit#(23), Bit#(8)), Tuple2#(Bit#(23), Bit#(8)),  Tuple3#(Bit#(5),Bit#(5),Bit#(5)))    condFlags32     <- mkUniqueWrapper3(condFlags);
    Wrapper3#(Tuple2#(Bit#(52), Bit#(11)),Tuple2#(Bit#(52), Bit#(11)),Tuple2#(Bit#(52), Bit#(11)), Tuple3#(Bit#(5),Bit#(5),Bit#(5)))   condFlags64     <- mkUniqueWrapper3(condFlags);
    Wrapper3#(Bit#(32),Bit#(32),Bit#(32),Tuple3#(Bit#(23),Bit#(23),Bit#(23)))                                                          getMant32       <- mkUniqueWrapper3(getMantissa);
    Wrapper3#(Bit#(32),Bit#(32),Bit#(32),Tuple3#(Bit#(8),Bit#(8),Bit#(8)))                                                             getExp32        <- mkUniqueWrapper3(getExp);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(52),Bit#(52),Bit#(52)))                                                          getMant64       <- mkUniqueWrapper3(getMantissa);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(11),Bit#(11),Bit#(11)))                                                          getExp64        <- mkUniqueWrapper3(getExp);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(32),Bit#(32),Bit#(32)))                                                          setCanonicalNaN <- mkUniqueWrapper3(setCanNaN);

    Reg#(Bit#(32)) rg_clock <-mkReg(0);
    //Reg#(Bit#(64)) operand1 <- mkReg(64'h17fffffffffff860);
    //Reg#(Bit#(64)) operand2 <- mkReg(64'h0000000000000200);
    //Reg#(Bit#(64)) operand3 <- mkReg(64'h000000000000005f);
    Reg#(Bit#(32)) operand1 <- mkReg(32'h31f36ab4);
    Reg#(Bit#(32)) operand2 <- mkReg(32'h08835f4d);
    Reg#(Bit#(32)) operand3 <- mkReg(32'h0);

    rule rl_count_clock ;
      	rg_clock<=rg_clock+1;
      	if(rg_clock=='d20) $finish(0);
    endrule

    rule rl_input1(rg_clock==1);
             let {man1,man2,man3}   <- getMant32.func(operand1,operand2, operand3);
             let {exp1,exp2,exp3}   <- getExp32.func(operand1,operand2, operand3);
             let x <- condFlags32.func(tuple2(man1,exp1),tuple2(man2,exp2),tuple2(man3,exp3));
             let sign1 = operand1[31];
             let sign2 = operand2[31];
             let sign3 = operand3[31];
             uut._start(tuple3(sign1,exp1,man1),tuple3(sign2,exp2,man2),tuple3(sign3,exp3,man3),3'b0,1'b0,1'b0,1'b0,1'b1,x);
`ifdef verbose $display("giving inputs at %0d", rg_clock); `endif

    endrule

    rule rl_finish;
        let res = uut.get_result();
        `ifdef verbose $display("Output = %h at %0d",res.final_result[31:0], rg_clock); `endif
    endrule

endmodule

`ifdef fpu_hierarchical
(*synthesize*)
module mkfpu_fm_add_sub32(Ifc_fpu_fm_add_sub32);
	Ifc_fpu_fm_add_sub#(32,23,8) uut <- mkfpu_fm_add_sub();

   method Action _start(Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand1, Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand2,Tuple3#(Bit#(1),Bit#(8),Bit#(23)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul, bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
        uut._start(_operand1,_operand2,_operand3,rounding_mode,operation,_negate,mul,muladd,flags);
   endmethod
    method Floating_output#(32) get_result();
        return uut.get_result();
    endmethod
    method Action flush;
        uut.flush();
    endmethod
endmodule

(*synthesize*)
module mkfpu_fm_add_sub64(Ifc_fpu_fm_add_sub64);
	Ifc_fpu_fm_add_sub#(64,52,11) uut <- mkfpu_fm_add_sub();
   method Action _start(Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand1, Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand2,Tuple3#(Bit#(1),Bit#(11),Bit#(52)) _operand3, Bit#(3) rounding_mode, bit operation, bit _negate, bit mul,bit muladd, Tuple3#(Bit#(5),Bit#(5),Bit#(5)) flags);
        uut._start(_operand1,_operand2,_operand3,rounding_mode,operation,_negate,mul,muladd, flags);
   endmethod
    method Floating_output#(64) get_result();
        return uut.get_result();
    endmethod
    method Action flush;
        uut.flush();
    endmethod
endmodule
`endif

//module mkTb_fpu_fm_add_sub_2 (Empty);
//	
////	RegFile #(Bit #(16), Bit #(100))  input_data <- mkRegFileFullLoad("./testcases/fma_inp_nor.txt");
////    RegFile #(Bit #(16), Bit #(68))  input_data <- mkRegFileFullLoad("./testcases/mul_denormal_testcases.txt");
//    RegFile #(Bit #(16), Bit #(68))  input_data <- mkRegFileFullLoad("./testcases/Add_normal_testcases.hex");
//	Reg #(Bit #(16)) index <- mkReg(0);
// 
//	Ifc_fpu_fm_add_sub#(32,23,8,16) multiplier <- mkfpu_fm_add_sub();
//	Reg #(Bit #(32)) state_clock <- mkReg(1);
//    Reg #(Bit #(1))  rg_state <- mkReg(0);
//
//	Reg#(int) cnt <- mkReg(0);                  //File Variable
//	let fh <- mkReg(InvalidFile) ;				//File handler		
//
//	//rule for file creation
//	rule open (cnt == 0 ) ;
//		File tb_mul_output <- $fopen("tb_madd_output.hex", "w+"); 
//		fh <= tb_mul_output;
//		cnt <= 1 ;
//	endrule
//
//	rule state_clock_count;
//		state_clock <= state_clock + 1;
//	endrule
//
//	rule take_input_in (rg_state == 0);
//	//	multiplier._start(input_data.sub(index)[99:68],input_data.sub(index)[67:36],input_data.sub(index)[35:4],0,input_data.sub(index)[2:0],0,0);
//	//	multiplier._start(input_data.sub(index)[67:36],input_data.sub(index)[35:4],32'b0,0,input_data.sub(index)[2:0],0,0);
//		multiplier._start(32'h3f800000, input_data.sub(index)[67:36],input_data.sub(index)[35:4],0,input_data.sub(index)[2:0],0,0);
//		index <= index + 1;
//	    rg_state <= 1;
//	endrule
//
//	rule display_output (rg_state == 1);
//        let abc = multiplier.get_result();
//		$fwrite(fh, "%h\n", abc.final_result[31:0]);
//		rg_state <= 0;
//	endrule
//
//	rule end_testing (index == 16562);
//		$finish(0);
//	endrule : end_testing
//
//endmodule

endpackage

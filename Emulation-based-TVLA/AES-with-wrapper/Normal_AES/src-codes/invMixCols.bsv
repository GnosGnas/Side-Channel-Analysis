/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): This packaged contains only functions
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Functions for inverse mix column operation of AES decryption

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package invMixCols;
   import Vector :: *;

   typedef Bit#(8)  UBYTE;

   function UBYTE xtime ( UBYTE a );
      return ((a & 8'h80)!=0) ? ((a<<1) ^ 8'h1B) : (a<<1);
   endfunction
      
   function UBYTE mc_mul_e (UBYTE x); 
      UBYTE two = xtime (x);
      UBYTE four = xtime (two);
      UBYTE eight = xtime (four);
      return eight^four^two;
   endfunction

   function UBYTE mc_mul_9 (UBYTE x); 
      UBYTE two = xtime (x);
      UBYTE four = xtime (two);
      UBYTE eight = xtime (four);
      return eight^x;
   endfunction

   function UBYTE mc_mul_d (UBYTE x); 
      UBYTE two = xtime (x);
      UBYTE four = xtime (two);
      UBYTE eight = xtime (four);
      return eight^four^x;
   endfunction

   function UBYTE mc_mul_b (UBYTE x); 
      UBYTE two = xtime (x);
      UBYTE four = xtime (two);
      UBYTE eight = xtime (four);
      return eight^two^x;
   endfunction

   function Bit#(32) funcInvMixCols( Bit#(32) d);
      Vector #(16, UBYTE) temp = newVector;
      Bit#(32) res;
      temp[0]  = mc_mul_e (d[31:24]);
      temp[1]  = mc_mul_b (d[23:16]);
      temp[2]  = mc_mul_d (d[15:8]);
      temp[3]  = mc_mul_9 (d[7:0]);
      temp[4]  = mc_mul_9 (d[31:24]);
      temp[5]  = mc_mul_e (d[23:16]);
      temp[6]  = mc_mul_b (d[15:8]);
      temp[7]  = mc_mul_d (d[7:0]);
      temp[8]  = mc_mul_d (d[31:24]);
      temp[9]  = mc_mul_9 (d[23:16]);
      temp[10] = mc_mul_e (d[15:8]);
      temp[11] = mc_mul_b (d[7:0]);
      temp[12] = mc_mul_b (d[31:24]);
      temp[13] = mc_mul_d (d[23:16]);
      temp[14] = mc_mul_9 (d[15:8]);
      temp[15] = mc_mul_e (d[7:0]);
      res[31:24] = temp[0]^temp[1]^temp[2]^temp[3];
      res[23:16] = temp[4]^temp[5]^temp[6]^temp[7];
      res[15:8] = temp[8]^temp[9]^temp[10]^temp[11];
      res[7:0] = temp[12]^temp[13]^temp[14]^temp[15];
      return res;
   endfunction
endpackage

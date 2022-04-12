/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkRconRom
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Module for computing round constant value.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

interface RconRom;
   method Bit#(8) read( Bit#(4) addr );
endinterface

(* synthesize, always_ready, always_enabled *)
module mkRconRom(RconRom);
   method Bit#(8) read( Bit#(4) addr ) = 
      case (addr)
         0: return 8'h01;
         1: return 8'h02;
         2: return 8'h04;
         3: return 8'h08;
         4: return 8'h10;
         5: return 8'h20;
         6: return 8'h40;
         7: return 8'h80;
         8: return 8'h1b;
         9: return 8'h36;
         default: return ?;
      endcase;

endmodule


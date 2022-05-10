/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package bpu;
  `ifdef gshare_nc
    import gshare_nc :: * ;
  `elsif gshare_fa_c
    import gshare_fa_c :: * ;
  `elsif gshare_fa_nc
    import gshare_fa_nc :: * ;
  `elsif gshare_c
    import gshare_c :: * ;
  `elsif bimodal_c
    import bimodal_c :: *;
  `else
    import bimodal_nc :: *;
  `endif
  
  import globals :: *;

  (*synthesize*)
  module mkbpu(Ifc_bpu);
    let ifc();
  `ifdef gshare_nc
    mkgshare_nc _temp(ifc);
  `elsif gshare_fa_c
    mkgshare_fa_c _temp(ifc);
  `elsif gshare_fa_nc
    mkgshare_fa_nc _temp(ifc);
  `elsif gshare_c
    mkgshare_c _temp(ifc);
  `elsif bimodal_c
    mkbimodal_c _temp(ifc);
  `else
    mkbimodal_nc _temp(ifc);
  `endif
    return (ifc);
  endmodule

endpackage


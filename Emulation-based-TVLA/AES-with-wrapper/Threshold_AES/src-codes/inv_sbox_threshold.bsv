package inv_sbox_threshold;

    import bsvmkinv_sbox::*;
    import LFSR::*;

    interface Ifc_inv_sbox_threshold;
        method ActionValue#(Bit#(8)) getbyte(Bit#(8) in);
    endinterface : Ifc_inv_sbox_threshold

    (*synthesize*)
    module mkinv_sbox_threshold#(Bit#(16) seed_1, Bit#(24) seed_2, Bit#(24) seed_3)(Ifc_inv_sbox_threshold);

        Ifc_inv_sbox isb <- mkinv_sbox;

        Reg#(Bool) rg_start_lfsr <- mkReg(True);

	    LFSR#(Bit#(16)) lfsr_1 <- mkLFSR_16;
	    LFSR#(Bit#(24)) lfsr_2 <- mkFeedLFSR(24'h8000d);
        LFSR#(Bit#(24)) lfsr_3 <- mkFeedLFSR(24'h8000d);

        rule rl_start_lfsr(rg_start_lfsr == True);
            lfsr_1.seed(seed_1);
            lfsr_2.seed(seed_2);
            lfsr_3.seed(seed_3);
            rg_start_lfsr <= False;
        endrule
        
        method ActionValue#(Bit#(8)) getbyte(Bit#(8) in);
            let temp_sb <- isb.getbyte(in,lfsr_1.value,lfsr_2.value,lfsr_3.value);
            lfsr_1.next;
            lfsr_2.next;
            lfsr_3.next;
            return temp_sb;
        endmethod

    endmodule : mkinv_sbox_threshold
    
    (*synthesize*)
    module mktb(Empty);
    	Ifc_inv_sbox_threshold mod <- mkinv_sbox_threshold(16'h4, 24'h2, 24'h1);
    	
    	Reg#(Bit#(8)) i <- mkReg(0);
    	
    	rule r1;
    		let z <- mod.getbyte(i);
    		$display("%h out", z);
    		i <= i+1;
    		if (i==8'hff) $finish;
    	endrule
    endmodule

endpackage : inv_sbox_threshold

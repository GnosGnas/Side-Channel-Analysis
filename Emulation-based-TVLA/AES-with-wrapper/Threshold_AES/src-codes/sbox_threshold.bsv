package sbox_threshold;

    import bsvmksbox::*;
    import LFSR::*;

    interface Ifc_sbox_threshold;
        method ActionValue#(Bit#(8)) getbyte(Bit#(8) in);
    endinterface : Ifc_sbox_threshold

    (*synthesize*)
    module mksbox_threshold#(Bit#(16) seed_1, Bit#(24) seed_2, Bit#(24) seed_3)(Ifc_sbox_threshold);

        Ifc_sbox sb <- mksbox;

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
            let temp_sb <-sb.getbyte(in,lfsr_1.value,lfsr_2.value,lfsr_3.value);
            lfsr_1.next;
            lfsr_2.next;
            lfsr_3.next;
            return temp_sb;
        endmethod

    endmodule : mksbox_threshold

endpackage : sbox_threshold
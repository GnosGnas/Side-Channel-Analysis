/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkSbox2
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Module for field composite S-box. It uses GF((2^4)^2).

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package sbox2;
    // Defined types
    typedef Bit#(2)  Bin;
    typedef Bit#(4)  Quad;
    typedef Bit#(8) Octa;
    typedef Bit#(1) Unit;

    // Functions for the module
    function Bin gf_sq_2 (Bin a);
        Bin q = {a[0], a[1]};
        return q;
    endfunction

    function Bin gf_sclw_2(Bin a);
        Bin q = { (a[1]^a[0]), a[1]};
        return q;
    endfunction

    function Bin gf_sclw2_2(Bin a);
        Bin q = {a[0], (a[1]^a[0])};
        return q;
    endfunction

    function Bin gf_muls_2(Bin a, Unit ab, Bin b, Unit cd);
        let abcd = ~(ab & cd); 
        let p = (~(a[1] & b[1])) ^ abcd;
        let qq = (~(a[0] & b[0])) ^ abcd;
        Bin q = {p, qq}; 
        return q;
    endfunction

    function Bin gf_muls_scl_2(Bin a, Unit ab, Bin b, Unit cd);
        let t = ~(a[0] & b[0]);
        let p = (~(ab & cd))^t;
        let qq = (~(a[1] & b[1]))^t;
        Bin q = {p, qq}; 
        return q;
    endfunction

    function Quad gf_inv_4(Quad a);
        Bin aa = a[3:2];
        Bin b = a[1:0];
        Bin d; Bin p; Bin qq;
        let sa = aa[1] ^aa[0];
        let sb = b[1] ^ b[0];
        Bin c = {~(aa[1] | b[1]) ^ (~(sa & sb)) , ~(sa | sb) ^ (~(aa[0] & b[0])) };
        d = gf_sq_2(c);
        Unit sd = d[1]^d[0];
        p = gf_muls_2(d, sd, b, sb);
        qq = gf_muls_2(d, sd, aa, sa);
        Quad q = {p, qq}; 
        return q;
    endfunction

    function Quad gf_sq_scl_4(Quad a);
        Bin aa = a[3:2];
        Bin b = a[1:0];
        Bin ab2 = gf_sq_2(aa^b);
        Bin b2 = gf_sq_2(b);
        Bin b2n2 = gf_sclw_2(b2);
        Quad q = {ab2, b2n2};
        return q;
    endfunction

    function Quad gf_muls_4(Quad a, Bin aa,Unit al, Unit ah, Unit aaa, Quad b, Bin bb, Unit bl, Unit bh, Unit bbb); // a as aa and aa as aaa
        Bin ph = gf_muls_2(a[3:2], ah, b[3:2], bh);
        Bin pl = gf_muls_2(a[1:0], al, b[1:0], bl);
        Bin p = gf_muls_scl_2(aa, aaa, bb, bbb);
        Quad q = { (ph^p), (pl^p)};
        return q;
    endfunction

    function Octa gf_inv_8(Octa a);
        Quad aa = a[7:4];
        Quad b = a[3:0];
        Bin sa = aa[3:2] ^ aa[1:0];
        Bin sb = b[3:2] ^ b[1:0];
        let al = aa[1] ^ aa[0];
        let ah = aa[3] ^ aa[2];
        let aaa = sa[1] ^ sa[0];
        let bl = b[1] ^ b[0];
        let bh = b[3] ^ b[2];
        let bb = sb[1] ^ sb[0];
        let c1 = ~(ah & bh);
        let c2 = ~(sa[0] & sb[0]);
        let c3 = ~(aaa & bb);
        Quad c = {
            (~(sa[0] | sb[0]) ^ (~(aa[3] & b[3]))) ^ c1 ^ c3 ,
            (~(sa[1] | sb[1]) ^ (~(aa[2] & b[2]))) ^ c1 ^ c2 ,
            (~(al | bl) ^ (~(aa[1] & b[1]))) ^ c2 ^ c3 ,
            (~(aa[0] | b[0]) ^ (~(al & bl))) ^ (~(sa[1] & sb[1])) ^ c2 };
        Quad d= gf_inv_4(c);
        Bin sd = d[3:2] ^ d[1:0];
        let dl = d[1] ^ d[0];
        let dh = d[3] ^ d[2];
        let dd = sd[1] ^ sd[0];
        Quad p = gf_muls_4(d, sd, dl, dh, dd, b, sb, bl, bh, bb);
        Quad qq = gf_muls_4(d, sd, dl, dh, dd, aa, sa, al, ah, aaa);
        Octa q = { p, qq };
        return q;
    endfunction

    function Octa select_not_8(Octa a, Octa b, Bool s);
        Octa q = ~(s?a:b);
        return q;
    endfunction

    function Octa bsbox(Octa a, Bool encrypt);
        let r1 = a[7] ^ a[5] ;
        let r2 = a[7] ~^ a[4] ;
        let r3 = a[6] ^ a[0] ;
        let r4 = a[5] ~^ r3 ;
        let r5 = a[4] ^ r4 ;
        let r6 = a[3] ^ a[0] ;
        let r7 = a[2] ^ r1 ;
        let r8 = a[1] ^ r3 ;
        let r9 = a[3] ^ r8 ;
        Octa b, c, d, x, y, z;
        b[7] = r7 ~^ r8 ;
        b[6] = r5 ;
        b[5] = a[1] ^ r4 ;
        b[4] = r1 ~^ r3 ;
        b[3] = a[1] ^ r2 ^ r6 ;
        b[2] = ~ a[0] ;
        b[1] = r4 ;
        b[0] = a[2] ~^ r9 ;
        y[7] = r2 ;
        y[6] = a[4] ^ r8 ;
        y[5] = a[6] ^ a[4] ;
        y[4] = r9 ;
        y[3] = a[6] ~^ r2 ;
        y[2] = r7 ;
        y[1] = a[4] ^ r6 ;
        y[0] = a[1] ^ r5 ;
        z = select_not_8(b, y, encrypt);
        c = gf_inv_8(z);
        let t1 = c[7] ^ c[3] ;
        let t2 = c[6] ^ c[4] ;
        let t3 = c[6] ^ c[0] ;
        let t4 = c[5] ~^ c[3] ;
        let t5 = c[5] ~^ t1 ;
        let t6 = c[5] ~^ c[1] ;
        let t7 = c[4] ~^ t6 ;
        let t8 = c[2] ^ t4 ;
        let t9 = c[1] ^ t2 ;
        let t10 = t3 ^ t5 ;
        d[7] = t4 ;
        d[6] = t1 ;
        d[5] = t3 ;
        d[4] = t5 ;
        d[3] = t2 ^ t5 ;
        d[2] = t3 ^ t8 ;
        d[1] = t7 ;
        d[0] = t9 ;
        x[7] = c[4] ~^ c[1] ;
        x[6] = c[1] ^ t10 ;
        x[5] = c[2] ^ t10 ;
        x[4] = c[6] ~^ c[1] ;
        x[3] = t8 ^ t9 ;
        x[2] = c[7] ~^ t7 ;
        x[1] = t6 ;
        x[0] = ~ c[2] ;
        Octa q = select_not_8(d, x, encrypt);
        return q;
    endfunction

    // Interface for S-box
    interface Sbox;
        method ActionValue#(Bit#(8)) getbyte(Bit #(8) byte_in, Bool decrypt_);
    endinterface

    // S-box module definition
    (* synthesize, always_ready,no_default_reset*)
    module mkSbox2(Sbox);
        method ActionValue#(Bit#(8)) getbyte(Bit #(8) byte_in, Bool decrypt_);
            return(bsbox(byte_in, !decrypt_));
        endmethod
    endmodule
endpackage


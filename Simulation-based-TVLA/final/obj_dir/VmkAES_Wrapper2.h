// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMKAES_WRAPPER2_H_
#define _VMKAES_WRAPPER2_H_  // guard

#include "verilated_heavy.h"

//==========

class VmkAES_Wrapper2__Syms;
class VmkAES_Wrapper2_mkSbox2;


//----------

VL_MODULE(VmkAES_Wrapper2) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8;
    VmkAES_Wrapper2_mkSbox2* __PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_OUT8(trigger_pin,0,0);
    VL_OUT8(RDY_trigger_pin,0,0);
    VL_OUT8(done_signal,0,0);
    VL_OUT8(RDY_done_signal,0,0);
    VL_OUT8(RDY_output_fix,0,0);
    VL_OUTW(output_fix,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mkAES_Wrapper2__DOT__block;
        CData/*0:0*/ mkAES_Wrapper2__DOT__done_reg;
        CData/*2:0*/ mkAES_Wrapper2__DOT__mod_state;
        CData/*2:0*/ mkAES_Wrapper2__DOT__mod_state__024D_IN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__mod_state__024EN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__switcher;
        CData/*0:0*/ mkAES_Wrapper2__DOT__switcher__024D_IN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__trigger;
        CData/*0:0*/ mkAES_Wrapper2__DOT__trigger__024EN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___024EN_encrypt;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___024RDY_encrypt;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete;
        CData/*0:0*/ mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__counter;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__counter__024D_IN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__decrypt;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__dr_rg_state;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_counter;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_counter__024D_IN;
        CData/*1:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_key_length;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_maxrounds;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rci;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rci__024D_IN;
        CData/*2:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_0;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_10;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_11;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_12;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_13;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_14;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_3;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_4;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_5;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_6;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_7;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_8;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_9;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number__024D_IN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192__024D_IN;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__maxround;
        CData/*2:0*/ mkAES_Wrapper2__DOT__aes___DOT__rg_state;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__rg_state2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__rg_state2__024EN;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rcongen__024read;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024ADDR;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024EN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024WE;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024ADDR;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024EN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024WE;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024ADDR;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024EN;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024WE;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024ADDR;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024EN;
    };
    struct {
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024WE;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4;
        CData/*3:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX___05Funnamed___024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rci__024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rot_prev_key__024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__MUX_sboxes_0__024getbyte_1___05FSEL_5;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229073;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229229;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229350;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229470;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231512;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231668;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231789;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231909;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh233951;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234107;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234228;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234348;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569790;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569912;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570033;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570144;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788;
    };
    struct {
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229084;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229361;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229741;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229983;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231523;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231800;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232180;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232422;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh233962;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234239;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234619;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234861;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569282;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569514;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569923;
        CData/*7:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh570155;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT___dfoo15;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT___dfoo31;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d112;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d182;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d189;
        CData/*0:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104;
        IData/*31:0*/ mkAES_Wrapper2__DOT__counter;
        IData/*31:0*/ mkAES_Wrapper2__DOT__counter__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__delayer;
        IData/*31:0*/ mkAES_Wrapper2__DOT__delayer__024D_IN;
        WData/*127:0*/ mkAES_Wrapper2__DOT__input_text[4];
        WData/*127:0*/ mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[4];
        WData/*127:0*/ mkAES_Wrapper2__DOT__aes___DOT__ciphertext[4];
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col0;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col0__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col1;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col1__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col2;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col2__024D_IN;
    };
    struct {
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col3;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__col3__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__dr_colout0;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__dr_colout1;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__dr_colout2;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__dr_colout3;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot__024D_IN;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key6;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rcon;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024DI;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024DI;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024DI;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024DI;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key4___05F_1___05Fh8756;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key4___05Fh8661;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key6___05Fh8664;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__temp_col___05Fh6675;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh187157;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh192455;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh197744;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198026;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198093;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198151;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212904;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212990;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh213067;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh222687;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh577620;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh594044;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__x___05Fh6542;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R;
        QData/*63:0*/ mkAES_Wrapper2__DOT__v___05Fh864;
        QData/*63:0*/ mkAES_Wrapper2__DOT__v___05Fh960;
        QData/*63:0*/ mkAES_Wrapper2__DOT__v___05Fh1092;
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM[16];
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM[16];
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM[16];
        IData/*31:0*/ mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM[16];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    static CData/*7:0*/ __Vtable1_mkAES_Wrapper2__DOT__aes___DOT__kg_rcongen__024read[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmkAES_Wrapper2__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmkAES_Wrapper2);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmkAES_Wrapper2(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmkAES_Wrapper2();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void __Vconfigure(VmkAES_Wrapper2__Syms* symsp, bool first);
  private:
    static QData _change_request(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    static QData _change_request_1(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VmkAES_Wrapper2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmkAES_Wrapper2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VmkAES_Wrapper2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VmkAES_Wrapper2__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard


?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2$
create_project: 2default:default2
00:00:152default:default2
00:00:152default:default2
2084.0552default:default2
0.0472default:default2
6332default:default2
97622default:defaultZ17-722h px? 
q
Command: %s
53*	vivadotcl2@
,synth_design -top Top -part xc7k160tfbg676-12default:defaultZ4-113h px? 
:
Starting synth_design
149*	vivadotclZ4-321h px? 
?
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2default:default2
xc7k160t2default:defaultZ17-347h px? 
?
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2default:default2
xc7k160t2default:defaultZ17-349h px? 
W
Loading part %s157*device2$
xc7k160tfbg676-12default:defaultZ21-403h px? 
?
HMultithreading enabled for synth_design using a maximum of %s processes.4828*oasys2
42default:defaultZ8-7079h px? 
a
?Launching helper process for spawning children vivado processes4827*oasysZ8-7078h px? 
`
#Helper process launched with PID %s4824*oasys2
161362default:defaultZ8-7075h px? 
?
%s*synth2?
?Starting RTL Elaboration : Time (s): cpu = 00:00:15 ; elapsed = 00:00:21 . Memory (MB): peak = 2084.180 ; gain = 0.000 ; free physical = 743 ; free virtual = 9248
2default:defaulth px? 
?
synthesizing module '%s'%s4497*oasys2
Top2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
192default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2"
mkAES_Wrapper12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkAES_Wrapper1.v2default:default2
352default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2(
mkinv_sbox_threshold2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkinv_sbox_threshold.v2default:default2
362default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
inv_sbox2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
5412default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
cob2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4492default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
cob2default:default2
 2default:default2
12default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4492default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2

invGF2_4_22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4622default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2

GF2_4sqr_v2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
112default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

GF2_4sqr_v2default:default2
 2default:default2
22default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
112default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2%
GF2_4mult_t_thres2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
812default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
GF2_4mult_t2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
302default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
GF2_4mult_t2default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
302default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2%
GF2_4mult_t_thres2default:default2
 2default:default2
42default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
812default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
GF2_4sqr2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
22default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
GF2_4sqr2default:default2
 2default:default2
52default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
22default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2"
invGF2_4_thres2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2682default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
i_cob2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2452default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
i_cob2default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2452default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
	i_cob_inv2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2562default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	i_cob_inv2default:default2
 2default:default2
72default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2562default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
invGF2_4_thres2default:default2
 2default:default2
82default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
2682default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2#
GF2_4mult_thres2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
1632default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
	GF2_4mult2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
622default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	GF2_4mult2default:default2
 2default:default2
92default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
622default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
GF2_4mult_thres2default:default2
 2default:default2
102default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
1632default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

invGF2_4_22default:default2
 2default:default2
112default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4622default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
icob2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4362default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
icob2default:default2
 2default:default2
122default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
4362default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
inv_sbox2default:default2
 2default:default2
132default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/inv_sbox.v2default:default2
5412default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
mkinv_sbox_threshold2default:default2
 2default:default2
142default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkinv_sbox_threshold.v2default:default2
362default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2$
mksbox_threshold2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mksbox_threshold.v2default:default2
362default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
sbox2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
5312default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
cob_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4502default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
cob_2default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4502default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
invGF2_4_2_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4632default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
GF2_4sqr_v_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
122default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
GF2_4sqr_v_2default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
122default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2&
GF2_4mult_t_thres_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
772default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2&
GF2_4mult_t_thres_2default:default2
 2default:default2
172default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
772default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
	GF2_4sqr_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
32default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	GF2_4sqr_2default:default2
 2default:default2
182default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
32default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2#
invGF2_4_thres_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
2602default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
invGF2_4_thres_2default:default2
 2default:default2
192default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
2602default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2$
GF2_4mult_thres_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
1572default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2$
GF2_4mult_thres_2default:default2
 2default:default2
202default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
1572default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
invGF2_4_2_2default:default2
 2default:default2
212default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4632default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
icobaff_2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4372default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
icobaff_2default:default2
 2default:default2
222default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
4372default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
sbox2default:default2
 2default:default2
232default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/sbox.v2default:default2
5312default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2$
mksbox_threshold2default:default2
 2default:default2
242default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mksbox_threshold.v2default:default2
362default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkRconRom2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkRconRom.v2default:default2
322default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkRconRom2default:default2
 2default:default2
252default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkRconRom.v2default:default2
322default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
mkAES_Wrapper12default:default2
 2default:default2
262default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/src-codes/verilog_files/mkAES_Wrapper1.v2default:default2
352default:default8@Z8-6155h px? 
?
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
12default:default2

output_fix2default:default2
1282default:default2"
mkAES_Wrapper12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
332default:default8@Z8-689h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
RDY_trigger_pin2default:default2"
mkAES_Wrapper12default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
RDY_done_signal2default:default2"
mkAES_Wrapper12default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2"
RDY_output_fix2default:default2"
mkAES_Wrapper12default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
Kinstance '%s' of module '%s' has %s connections declared, but only %s given4757*oasys2
M2default:default2"
mkAES_Wrapper12default:default2
82default:default2
52default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7023h px? 
?
synthesizing module '%s'%s4497*oasys2
	clk_wiz_02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.runs/synth_1/.Xil/Vivado-16009-surya-Legion/realtime/clk_wiz_0_stub.v2default:default2
52default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	clk_wiz_02default:default2
 2default:default2
272default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.runs/synth_1/.Xil/Vivado-16009-surya-Legion/realtime/clk_wiz_0_stub.v2default:default2
52default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
Top2default:default2
 2default:default2
282default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
192default:default8@Z8-6155h px? 
?
%s*synth2?
?Finished RTL Elaboration : Time (s): cpu = 00:00:28 ; elapsed = 00:00:36 . Memory (MB): peak = 2210.023 ; gain = 125.844 ; free physical = 624 ; free virtual = 9209
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Handling Custom Attributes : Time (s): cpu = 00:00:34 ; elapsed = 00:00:42 . Memory (MB): peak = 2224.867 ; gain = 140.688 ; free physical = 601 ; free virtual = 9215
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:34 ; elapsed = 00:00:42 . Memory (MB): peak = 2224.867 ; gain = 140.688 ; free physical = 601 ; free virtual = 9215
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.412default:default2
00:00:00.402default:default2
2224.8672default:default2
0.0002default:default2
5642default:default2
91922default:defaultZ17-722h px? 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px? 
>

Processing XDC Constraints
244*projectZ1-262h px? 
=
Initializing timing engine
348*projectZ1-569h px? 
?
$Parsing XDC File [%s] for cell '%s'
848*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-848h px? 
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
12default:default8@Z12-584h px?
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
42default:default8@Z12-584h px?
?
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-847h px? 
?
Parsing XDC File [%s]
179*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/constrs_1/imports/new/constr.xdc2default:default8Z20-179h px? 
?
Finished Parsing XDC File [%s]
178*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/constrs_1/imports/new/constr.xdc2default:default8Z20-178h px? 
?
?Implementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.srcs/constrs_1/imports/new/constr.xdc2default:default2)
.Xil/Top_propImpl.xdc2default:defaultZ1-236h px? 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:002default:default2
2382.6802default:default2
0.0002default:default2
4412default:default2
91252default:defaultZ17-722h px? 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common24
 Constraint Validation Runtime : 2default:default2
00:00:00.122default:default2
00:00:00.112default:default2
2382.6802default:default2
0.0002default:default2
4402default:default2
91252default:defaultZ17-722h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Constraint Validation : Time (s): cpu = 00:01:04 ; elapsed = 00:01:17 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 432 ; free virtual = 9200
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
V
%s
*synth2>
*Start Loading Part and Timing Information
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Loading part: xc7k160tfbg676-1
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Loading Part and Timing Information : Time (s): cpu = 00:01:04 ; elapsed = 00:01:17 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 432 ; free virtual = 9200
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
Z
%s
*synth2B
.Start Applying 'set_property' XDC Constraints
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:01:04 ; elapsed = 00:01:17 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 431 ; free virtual = 9200
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished RTL Optimization Phase 2 : Time (s): cpu = 00:01:30 ; elapsed = 00:01:44 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 262 ; free virtual = 9172
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
L
%s
*synth24
 Start RTL Component Statistics 
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
? 
:
%s
*synth2"
+---Adders : 
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   32 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    8 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    5 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    4 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    4 Bit       Adders := 1     
2default:defaulth p
x
? 
8
%s
*synth2 
+---XORs : 
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     32 Bit         XORs := 26    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input     32 Bit         XORs := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      8 Bit         XORs := 20    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   9 Input      8 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   7 Input      8 Bit         XORs := 6     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      8 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      8 Bit         XORs := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      8 Bit         XORs := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      4 Bit         XORs := 51    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      4 Bit         XORs := 39    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   9 Input      4 Bit         XORs := 12    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      1 Bit         XORs := 270   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      1 Bit         XORs := 153   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      1 Bit         XORs := 130   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input      1 Bit         XORs := 154   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   7 Input      1 Bit         XORs := 7     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      1 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	  39 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	  18 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	  69 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	  33 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   9 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	  42 Input      1 Bit         XORs := 3     
2default:defaulth p
x
? 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              128 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               32 Bit    Registers := 93    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               24 Bit    Registers := 6     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               16 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                8 Bit    Registers := 4     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                5 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                4 Bit    Registers := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                3 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                2 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                1 Bit    Registers := 27    
2default:defaulth p
x
? 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input  128 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   32 Bit        Muxes := 50    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   32 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   32 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input   32 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   32 Bit        Muxes := 8     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   31 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   31 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   30 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   30 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   24 Bit        Muxes := 12    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   16 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    8 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    8 Bit        Muxes := 59    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    8 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    5 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    4 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    4 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    4 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input    4 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    3 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    3 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    2 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    1 Bit        Muxes := 7     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    1 Bit        Muxes := 1     
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
O
%s
*synth27
#Finished RTL Component Statistics 
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
H
%s
*synth20
Start Part Resource Summary
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s
*synth2m
YPart Resources:
DSPs: 600 (col length:100)
BRAMs: 650 (col length: RAMB18 100 RAMB36 50)
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Finished Part Resource Summary
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
W
%s
*synth2?
+Start Cross Boundary and Area Optimization
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:03:42 ; elapsed = 00:04:00 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 351 ; free virtual = 9172
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
R
%s
*synth2:
&Start Applying XDC Timing Constraints
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Applying XDC Timing Constraints : Time (s): cpu = 00:03:59 ; elapsed = 00:04:20 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 576 ; free virtual = 9415
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
F
%s
*synth2.
Start Timing Optimization
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Timing Optimization : Time (s): cpu = 00:04:01 ; elapsed = 00:04:21 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 571 ; free virtual = 9409
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
E
%s
*synth2-
Start Technology Mapping
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Technology Mapping : Time (s): cpu = 00:04:12 ; elapsed = 00:04:33 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 611 ; free virtual = 9450
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s
*synth2'
Start IO Insertion
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
Q
%s
*synth29
%Start Flattening Before IO Insertion
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
T
%s
*synth2<
(Finished Flattening Before IO Insertion
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
H
%s
*synth20
Start Final Netlist Cleanup
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Finished Final Netlist Cleanup
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished IO Insertion : Time (s): cpu = 00:04:21 ; elapsed = 00:04:43 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 596 ; free virtual = 9435
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
O
%s
*synth27
#Start Renaming Generated Instances
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Renaming Generated Instances : Time (s): cpu = 00:04:21 ; elapsed = 00:04:43 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 595 ; free virtual = 9435
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
L
%s
*synth24
 Start Rebuilding User Hierarchy
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Rebuilding User Hierarchy : Time (s): cpu = 00:04:23 ; elapsed = 00:04:44 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 596 ; free virtual = 9435
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Start Renaming Generated Ports
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Renaming Generated Ports : Time (s): cpu = 00:04:23 ; elapsed = 00:04:45 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 595 ; free virtual = 9435
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Handling Custom Attributes : Time (s): cpu = 00:04:24 ; elapsed = 00:04:46 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 594 ; free virtual = 9434
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
J
%s
*synth22
Start Renaming Generated Nets
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Renaming Generated Nets : Time (s): cpu = 00:04:24 ; elapsed = 00:04:46 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 594 ; free virtual = 9433
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
K
%s
*synth23
Start Writing Synthesis Report
2default:defaulth p
x
? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
A
%s
*synth2)

Report BlackBoxes: 
2default:defaulth p
x
? 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
? 
O
%s
*synth27
#|      |BlackBox name |Instances |
2default:defaulth p
x
? 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
? 
O
%s
*synth27
#|1     |clk_wiz_0     |         1|
2default:defaulth p
x
? 
O
%s
*synth27
#+------+--------------+----------+
2default:defaulth p
x
? 
A
%s*synth2)

Report Cell Usage: 
2default:defaulth px? 
E
%s*synth2-
+------+--------+------+
2default:defaulth px? 
E
%s*synth2-
|      |Cell    |Count |
2default:defaulth px? 
E
%s*synth2-
+------+--------+------+
2default:defaulth px? 
E
%s*synth2-
|1     |clk_wiz |     1|
2default:defaulth px? 
E
%s*synth2-
|2     |CARRY4  |    16|
2default:defaulth px? 
E
%s*synth2-
|3     |LUT1    |     6|
2default:defaulth px? 
E
%s*synth2-
|4     |LUT2    |   339|
2default:defaulth px? 
E
%s*synth2-
|5     |LUT3    |   179|
2default:defaulth px? 
E
%s*synth2-
|6     |LUT4    |   547|
2default:defaulth px? 
E
%s*synth2-
|7     |LUT5    |   706|
2default:defaulth px? 
E
%s*synth2-
|8     |LUT6    |  1192|
2default:defaulth px? 
E
%s*synth2-
|9     |MUXF7   |    72|
2default:defaulth px? 
E
%s*synth2-
|10    |MUXF8   |    24|
2default:defaulth px? 
E
%s*synth2-
|11    |FDRE    |  2898|
2default:defaulth px? 
E
%s*synth2-
|12    |FDSE    |    47|
2default:defaulth px? 
E
%s*synth2-
|13    |IBUF    |     1|
2default:defaulth px? 
E
%s*synth2-
|14    |OBUF    |     3|
2default:defaulth px? 
E
%s*synth2-
|15    |OBUFT   |     1|
2default:defaulth px? 
E
%s*synth2-
+------+--------+------+
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Writing Synthesis Report : Time (s): cpu = 00:04:24 ; elapsed = 00:04:46 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 594 ; free virtual = 9433
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
r
%s
*synth2Z
FSynthesis finished with 0 errors, 0 critical warnings and 0 warnings.
2default:defaulth p
x
? 
?
%s
*synth2?
?Synthesis Optimization Runtime : Time (s): cpu = 00:04:09 ; elapsed = 00:04:31 . Memory (MB): peak = 2382.680 ; gain = 140.688 ; free physical = 646 ; free virtual = 9486
2default:defaulth p
x
? 
?
%s
*synth2?
?Synthesis Optimization Complete : Time (s): cpu = 00:04:24 ; elapsed = 00:04:46 . Memory (MB): peak = 2382.680 ; gain = 298.500 ; free physical = 646 ; free virtual = 9486
2default:defaulth p
x
? 
B
 Translating synthesized netlist
350*projectZ1-571h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.152default:default2
00:00:00.152default:default2
2382.6802default:default2
0.0002default:default2
7172default:default2
95572default:defaultZ17-722h px? 
g
-Analyzing %s Unisim elements for replacement
17*netlist2
1122default:defaultZ29-17h px? 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px? 
?
?Netlist '%s' is not ideal for floorplanning, since the cellview '%s' contains a large number of primitives.  Please consider enabling hierarchy in synthesis if you want to do floorplanning.
310*netlist2
Top2default:default2"
mkAES_Wrapper12default:defaultZ29-101h px? 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px? 
u
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:002default:default2
2395.6802default:default2
0.0002default:default2
6672default:default2
95062default:defaultZ17-722h px? 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px? 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
712default:default2
82default:default2
02default:default2
02default:defaultZ4-41h px? 
^
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
synth_design: 2default:default2
00:05:012default:default2
00:05:152default:default2
2395.6802default:default2
311.6252default:default2
8122default:default2
96522default:defaultZ17-722h px? 
?
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Threshold_AES/threshold_fpga/threshold_fpga.runs/synth_1/Top.dcp2default:defaultZ17-1381h px? 
?
%s4*runtcl2p
\Executing : report_utilization -file Top_utilization_synth.rpt -pb Top_utilization_synth.pb
2default:defaulth px? 
?
Exiting %s at %s...
206*common2
Vivado2default:default2,
Sun Apr 17 15:16:31 20222default:defaultZ17-206h px? 


End Record
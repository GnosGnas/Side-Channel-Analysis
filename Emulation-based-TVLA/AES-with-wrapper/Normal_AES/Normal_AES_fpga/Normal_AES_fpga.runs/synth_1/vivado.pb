
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2$
create_project: 2default:default2
00:00:082default:default2
00:00:072default:default2
2084.5862default:default2
0.0472default:default2
31892default:default2
119442default:defaultZ17-722h px? 
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
150872default:defaultZ8-7075h px? 
?
%s*synth2?
?Starting RTL Elaboration : Time (s): cpu = 00:00:06 ; elapsed = 00:00:08 . Memory (MB): peak = 2084.711 ; gain = 0.000 ; free physical = 2593 ; free virtual = 11344
2default:defaulth px? 
?
synthesizing module '%s'%s4497*oasys2
Top2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
192default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2"
mkAES_Wrapper22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkAES_Wrapper2.v2default:default2
352default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
mkAES2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkAES.v2default:default2
462default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkRconRom2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkRconRom.v2default:default2
322default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkRconRom2default:default2
 2default:default2
12default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkRconRom.v2default:default2
322default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
BRAM12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/BRAM1.v2default:default2
82default:default8@Z8-6157h px? 
Q
%s
*synth29
%	Parameter PIPELINED bound to: 1'b0 
2default:defaulth p
x
? 
_
%s
*synth2G
3	Parameter ADDR_WIDTH bound to: 4 - type: integer 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter DATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
? 
S
%s
*synth2;
'	Parameter MEMSIZE bound to: 5'b10000 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BRAM12default:default2
 2default:default2
22default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/BRAM1.v2default:default2
82default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkSbox22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkSbox2.v2default:default2
332default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkSbox22default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkSbox2.v2default:default2
332default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkAES2default:default2
 2default:default2
42default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkAES.v2default:default2
462default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
mkAES_Wrapper22default:default2
 2default:default2
52default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/src-codes/verilog_files/mkAES_Wrapper2.v2default:default2
352default:default8@Z8-6155h px? 
?
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
12default:default2

output_fix2default:default2
1282default:default2"
mkAES_Wrapper22default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
332default:default8@Z8-689h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
RDY_trigger_pin2default:default2"
mkAES_Wrapper22default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
RDY_done_signal2default:default2"
mkAES_Wrapper22default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2"
RDY_output_fix2default:default2"
mkAES_Wrapper22default:default2
M2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7071h px? 
?
Kinstance '%s' of module '%s' has %s connections declared, but only %s given4757*oasys2
M2default:default2"
mkAES_Wrapper22default:default2
82default:default2
52default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
302default:default8@Z8-7023h px? 
?
synthesizing module '%s'%s4497*oasys2
	clk_wiz_02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.runs/synth_1/.Xil/Vivado-13199-surya-Legion/realtime/clk_wiz_0_stub.v2default:default2
52default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	clk_wiz_02default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.runs/synth_1/.Xil/Vivado-13199-surya-Legion/realtime/clk_wiz_0_stub.v2default:default2
52default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
Top2default:default2
 2default:default2
72default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/imports/verilog_files/Top.v2default:default2
192default:default8@Z8-6155h px? 
?
%s*synth2?
?Finished RTL Elaboration : Time (s): cpu = 00:00:10 ; elapsed = 00:00:13 . Memory (MB): peak = 2190.586 ; gain = 105.875 ; free physical = 2669 ; free virtual = 11424
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
?Finished Handling Custom Attributes : Time (s): cpu = 00:00:12 ; elapsed = 00:00:15 . Memory (MB): peak = 2202.461 ; gain = 117.750 ; free physical = 2644 ; free virtual = 11400
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
?Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:12 ; elapsed = 00:00:15 . Memory (MB): peak = 2202.461 ; gain = 117.750 ; free physical = 2644 ; free virtual = 11400
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
00:00:00.092default:default2
00:00:00.092default:default2
2202.4612default:default2
0.0002default:default2
26212default:default2
113752default:defaultZ17-722h px? 
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
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-848h px? 
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
12default:default8@Z12-584h px?
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
42default:default8@Z12-584h px?
?
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-847h px? 
?
Parsing XDC File [%s]
179*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/constrs_1/new/constr.xdc2default:default8Z20-179h px? 
?
Finished Parsing XDC File [%s]
178*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/constrs_1/new/constr.xdc2default:default8Z20-178h px? 
?
?Implementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.srcs/constrs_1/new/constr.xdc2default:default2)
.Xil/Top_propImpl.xdc2default:defaultZ1-236h px? 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:002default:default2
2359.2732default:default2
0.0002default:default2
24822default:default2
112382default:defaultZ17-722h px? 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common24
 Constraint Validation Runtime : 2default:default2
00:00:00.032default:default2
00:00:00.032default:default2
2359.2732default:default2
0.0002default:default2
24822default:default2
112382default:defaultZ17-722h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Constraint Validation : Time (s): cpu = 00:00:23 ; elapsed = 00:00:28 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 2553 ; free virtual = 11295
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
?Finished Loading Part and Timing Information : Time (s): cpu = 00:00:23 ; elapsed = 00:00:28 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 2553 ; free virtual = 11295
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
?Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:23 ; elapsed = 00:00:28 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 2553 ; free virtual = 11295
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
?Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:26 ; elapsed = 00:00:31 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 2506 ; free virtual = 11249
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
,	   2 Input    4 Bit       Adders := 8     
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
.	   2 Input     32 Bit         XORs := 30    
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
.	   2 Input      8 Bit         XORs := 22    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   8 Input      8 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   9 Input      8 Bit         XORs := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      8 Bit         XORs := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      8 Bit         XORs := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      8 Bit         XORs := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   7 Input      8 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      2 Bit         XORs := 32    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      1 Bit         XORs := 1005  
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      1 Bit         XORs := 176   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      1 Bit         XORs := 126   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input      1 Bit         XORs := 33    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      1 Bit         XORs := 10    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   7 Input      1 Bit         XORs := 1     
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
.	              128 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               32 Bit    Registers := 25    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                8 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                4 Bit    Registers := 6     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                3 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                2 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                1 Bit    Registers := 23    
2default:defaulth p
x
? 
8
%s
*synth2 
+---RAMs : 
2default:defaulth p
x
? 
i
%s
*synth2Q
=	              512 Bit	(16 X 32 bit)          RAMs := 4     
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
,	   2 Input  128 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   32 Bit        Muxes := 61    
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
,	   5 Input   32 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input   32 Bit        Muxes := 5     
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
,	   2 Input    8 Bit        Muxes := 84    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    8 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    8 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input    8 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    7 Bit        Muxes := 32    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    4 Bit        Muxes := 9     
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
,	   9 Input    4 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    3 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    3 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    2 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    2 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    1 Bit        Muxes := 35    
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
?Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:52 ; elapsed = 00:00:58 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 2190 ; free virtual = 10945
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
?---------------------------------------------------------------------------------
Start ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px? 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px? 
j
%s*synth2R
>
Distributed RAM: Preliminary Mapping	Report (see note below)
2default:defaulth px? 
?
%s*synth2n
Z+------------+----------------------+-----------+----------------------+----------------+
2default:defaulth px? 
?
%s*synth2o
[|Module Name | RTL Object           | Inference | Size (Depth x Width) | Primitives     | 
2default:defaulth px? 
?
%s*synth2n
Z+------------+----------------------+-----------+----------------------+----------------+
2default:defaulth px? 
?
%s*synth2o
[|\M/aes_     | kg_save_key0/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2o
[|\M/aes_     | kg_save_key1/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2o
[|\M/aes_     | kg_save_key2/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2o
[|\M/aes_     | kg_save_key3/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2o
[+------------+----------------------+-----------+----------------------+----------------+

2default:defaulth px? 
?
%s*synth2?
?Note: The table above is a preliminary report that shows the Distributed RAMs at the current stage of the synthesis flow. Some Distributed RAMs may be reimplemented as non Distributed RAM primitives later in the synthesis flow. Multiple instantiated RAMs are reported only once.
2default:defaulth px? 
?
%s*synth2?
?---------------------------------------------------------------------------------
Finished ROM, RAM, DSP and Shift Register Reporting
2default:defaulth px? 
~
%s*synth2f
R---------------------------------------------------------------------------------
2default:defaulth px? 
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
?Finished Applying XDC Timing Constraints : Time (s): cpu = 00:01:02 ; elapsed = 00:01:09 . Memory (MB): peak = 2359.273 ; gain = 274.562 ; free physical = 1987 ; free virtual = 10742
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
?Finished Timing Optimization : Time (s): cpu = 00:01:25 ; elapsed = 00:01:32 . Memory (MB): peak = 2443.492 ; gain = 358.781 ; free physical = 1680 ; free virtual = 10439
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s
*synth2?
?---------------------------------------------------------------------------------
Start ROM, RAM, DSP and Shift Register Reporting
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
S
%s
*synth2;
'
Distributed RAM: Final Mapping	Report
2default:defaulth p
x
? 
?
%s
*synth2n
Z+------------+----------------------+-----------+----------------------+----------------+
2default:defaulth p
x
? 
?
%s
*synth2o
[|Module Name | RTL Object           | Inference | Size (Depth x Width) | Primitives     | 
2default:defaulth p
x
? 
?
%s
*synth2n
Z+------------+----------------------+-----------+----------------------+----------------+
2default:defaulth p
x
? 
?
%s
*synth2o
[|\M/aes_     | kg_save_key0/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2o
[|\M/aes_     | kg_save_key1/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2o
[|\M/aes_     | kg_save_key2/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2o
[|\M/aes_     | kg_save_key3/RAM_reg | Implied   | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2o
[+------------+----------------------+-----------+----------------------+----------------+

2default:defaulth p
x
? 
?
%s
*synth2?
?---------------------------------------------------------------------------------
Finished ROM, RAM, DSP and Shift Register Reporting
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
?Finished Technology Mapping : Time (s): cpu = 00:01:30 ; elapsed = 00:01:38 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 1596 ; free virtual = 10369
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
?Finished IO Insertion : Time (s): cpu = 00:01:35 ; elapsed = 00:01:43 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2654 ; free virtual = 11466
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
?Finished Renaming Generated Instances : Time (s): cpu = 00:01:35 ; elapsed = 00:01:43 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2654 ; free virtual = 11466
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
?Finished Rebuilding User Hierarchy : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2667 ; free virtual = 11467
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
?Finished Renaming Generated Ports : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2667 ; free virtual = 11467
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
?Finished Handling Custom Attributes : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2669 ; free virtual = 11466
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
?Finished Renaming Generated Nets : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2669 ; free virtual = 11466
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
F
%s*synth2.
+------+---------+------+
2default:defaulth px? 
F
%s*synth2.
|      |Cell     |Count |
2default:defaulth px? 
F
%s*synth2.
+------+---------+------+
2default:defaulth px? 
F
%s*synth2.
|1     |clk_wiz  |     1|
2default:defaulth px? 
F
%s*synth2.
|2     |CARRY4   |    16|
2default:defaulth px? 
F
%s*synth2.
|3     |LUT1     |     7|
2default:defaulth px? 
F
%s*synth2.
|4     |LUT2     |   287|
2default:defaulth px? 
F
%s*synth2.
|5     |LUT3     |   536|
2default:defaulth px? 
F
%s*synth2.
|6     |LUT4     |   418|
2default:defaulth px? 
F
%s*synth2.
|7     |LUT5     |   760|
2default:defaulth px? 
F
%s*synth2.
|8     |LUT6     |  1241|
2default:defaulth px? 
F
%s*synth2.
|9     |RAM16X1S |   128|
2default:defaulth px? 
F
%s*synth2.
|10    |FDRE     |   951|
2default:defaulth px? 
F
%s*synth2.
|11    |FDSE     |    17|
2default:defaulth px? 
F
%s*synth2.
|12    |IBUF     |     1|
2default:defaulth px? 
F
%s*synth2.
|13    |OBUF     |     3|
2default:defaulth px? 
F
%s*synth2.
|14    |OBUFT    |     1|
2default:defaulth px? 
F
%s*synth2.
+------+---------+------+
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
?Finished Writing Synthesis Report : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.492 ; gain = 373.781 ; free physical = 2669 ; free virtual = 11466
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
?Synthesis Optimization Runtime : Time (s): cpu = 00:01:32 ; elapsed = 00:01:39 . Memory (MB): peak = 2458.492 ; gain = 216.969 ; free physical = 2722 ; free virtual = 11519
2default:defaulth p
x
? 
?
%s
*synth2?
?Synthesis Optimization Complete : Time (s): cpu = 00:01:36 ; elapsed = 00:01:44 . Memory (MB): peak = 2458.500 ; gain = 373.781 ; free physical = 2722 ; free virtual = 11519
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
00:00:00.052default:default2
00:00:00.052default:default2
2458.5002default:default2
0.0002default:default2
27942default:default2
115912default:defaultZ17-722h px? 
g
-Analyzing %s Unisim elements for replacement
17*netlist2
1442default:defaultZ29-17h px? 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px? 
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
2490.5082default:default2
0.0002default:default2
27512default:default2
115482default:defaultZ17-722h px? 
?
!Unisim Transformation Summary:
%s111*project2p
\  A total of 128 instances were transformed.
  RAM16X1S => RAM32X1S (RAMS32): 128 instances
2default:defaultZ1-111h px? 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
292default:default2
72default:default2
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
00:01:542default:default2
00:01:582default:default2
2490.5082default:default2
405.9222default:default2
29492default:default2
117462default:defaultZ17-722h px? 
?
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/Side-Channel-Analysis/Emulation-based-TVLA/AES-with-wrapper/Normal_AES/Normal_AES_fpga/Normal_AES_fpga.runs/synth_1/Top.dcp2default:defaultZ17-1381h px? 
?
%s4*runtcl2p
\Executing : report_utilization -file Top_utilization_synth.rpt -pb Top_utilization_synth.pb
2default:defaulth px? 
?
Exiting %s at %s...
206*common2
Vivado2default:default2,
Sun Apr 10 09:40:58 20222default:defaultZ17-206h px? 


End Record

?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2$
create_project: 2default:default2
00:00:072default:default2
00:00:062default:default2
2085.5902default:default2
0.0472default:default2
64342default:default2
137362default:defaultZ17-722h px? 
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
a
#Helper process launched with PID %s4824*oasys2
2446232default:defaultZ8-7075h px? 
?
%s*synth2?
?Starting RTL Elaboration : Time (s): cpu = 00:00:07 ; elapsed = 00:00:09 . Memory (MB): peak = 2099.590 ; gain = 13.875 ; free physical = 5842 ; free virtual = 13145
2default:defaulth px? 
?
synthesizing module '%s'%s4497*oasys2
Top2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
212default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
mkSoc2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
782default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkRconRom2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkRconRom.v2default:default2
322default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkRconRom2default:default2
 2default:default2
12default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkRconRom.v2default:default2
322default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
BRAM12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM1.v2default:default2
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
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BRAM12default:default2
 2default:default2
22default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM1.v2default:default2
82default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
FIFO22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 52 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
FIFO22default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 71 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized02default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 77 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized12default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 6 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized22default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized32default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 128 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized32default:default2
 2default:default2
32default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
BRAM22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2.v2default:default2
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
3	Parameter ADDR_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter DATA_WIDTH bound to: 128 - type: integer 
2default:defaulth p
x
? 
T
%s
*synth2<
(	Parameter MEMSIZE bound to: 6'b100000 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BRAM22default:default2
 2default:default2
42default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2.v2default:default2
82default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
BRAM2BELoad2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2BELoad.v2default:default2
82default:default8@Z8-6157h px? 
?
%s
*synth2?
t	Parameter FILENAME bound to: /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/code_surya.mem - type: string 
2default:defaulth p
x
? 
Q
%s
*synth29
%	Parameter PIPELINED bound to: 1'b0 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter ADDR_WIDTH bound to: 15 - type: integer 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter DATA_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
? 
^
%s
*synth2F
2	Parameter CHUNKSIZE bound to: 8 - type: integer 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter WE_WIDTH bound to: 8 - type: integer 
2default:defaulth p
x
? 
_
%s
*synth2G
3	Parameter MEMSIZE bound to: 16'b1000000000000000 
2default:defaulth p
x
? 
N
%s
*synth26
"	Parameter BINARY bound to: 1'b0 
2default:defaulth p
x
? 
?
,$readmem data file '%s' is read successfully3426*oasys2Y
E/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/code_surya.mem2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2BELoad.v2default:default2
702default:default8@Z8-3876h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
BRAM2BELoad2default:default2
 2default:default2
52default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2BELoad.v2default:default2
82default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkdmem2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdmem.v2default:default2
1672default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
mkdcache2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdcache.v2default:default2
1262default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
bram_1rw2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/bram_1rw.v2default:default2
222default:default8@Z8-6157h px? 
_
%s
*synth2G
3	Parameter ADDR_WIDTH bound to: 6 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter DATA_WIDTH bound to: 512 - type: integer 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter MEMSIZE bound to: 64 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
bram_1rw2default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/bram_1rw.v2default:default2
222default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized42default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 141 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized42default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized52default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 3 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized52default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized62default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 43 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized62default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized72default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 107 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized72default:default2
 2default:default2
62default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
FIFO12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 555 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
FIFO12default:default2
 2default:default2
72default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2,
bram_1rw__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/bram_1rw.v2default:default2
222default:default8@Z8-6157h px? 
_
%s
*synth2G
3	Parameter ADDR_WIDTH bound to: 6 - type: integer 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter DATA_WIDTH bound to: 20 - type: integer 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter MEMSIZE bound to: 64 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2,
bram_1rw__parameterized02default:default2
 2default:default2
72default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/bram_1rw.v2default:default2
222default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkdcache2default:default2
 2default:default2
82default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdcache.v2default:default2
1262default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkfa_dtlb2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_dtlb.v2default:default2
742default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized82default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 181 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized82default:default2
 2default:default2
82default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO2__parameterized92default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 66 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO2__parameterized92default:default2
 2default:default2
82default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkfa_dtlb2default:default2
 2default:default2
92default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_dtlb.v2default:default2
742default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkdmem2default:default2
 2default:default2
102default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdmem.v2default:default2
1672default:default8@Z8-6155h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
214532default:default8@Z8-4446h px? 
?
synthesizing module '%s'%s4497*oasys2
	SizedFIFO2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter p1width bound to: 2 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter p2depth bound to: 4 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter p3cntr_width bound to: 2 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter p2depth2 bound to: 2 - type: integer 
2default:defaulth p
x
? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1202default:default8@Z8-155h px? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1772default:default8@Z8-155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	SizedFIFO2default:default2
 2default:default2
112default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6155h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
214672default:default8@Z8-4446h px? 
?
synthesizing module '%s'%s4497*oasys2-
SizedFIFO__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter p1width bound to: 4 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter p2depth bound to: 6 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter p3cntr_width bound to: 3 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter p2depth2 bound to: 4 - type: integer 
2default:defaulth p
x
? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1202default:default8@Z8-155h px? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1772default:default8@Z8-155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2-
SizedFIFO__parameterized02default:default2
 2default:default2
112default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkimem2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkimem.v2default:default2
902default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
mkicache2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkicache.v2default:default2
742default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized102default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 68 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized102default:default2
 2default:default2
112default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized112default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 2 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized112default:default2
 2default:default2
112default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkicache2default:default2
 2default:default2
122default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkicache.v2default:default2
742default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkitlb2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkitlb.v2default:default2
572default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkfa_itlb2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_itlb.v2default:default2
572default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized122default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 39 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized122default:default2
 2default:default2
122default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkfa_itlb2default:default2
 2default:default2
132default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_itlb.v2default:default2
572default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkitlb2default:default2
 2default:default2
142default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkitlb.v2default:default2
572default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkimem2default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkimem.v2default:default2
902default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO1__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 141 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized02default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized132default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 143 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized132default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized142default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 72 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized142default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized152default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 63 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized152default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkriscv2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscv.v2default:default2
1212default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2-
SizedFIFO__parameterized12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6157h px? 
]
%s
*synth2E
1	Parameter p1width bound to: 80 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter p2depth bound to: 3 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter p3cntr_width bound to: 1 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter p2depth2 bound to: 1 - type: integer 
2default:defaulth p
x
? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1202default:default8@Z8-155h px? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1772default:default8@Z8-155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2-
SizedFIFO__parameterized12default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized162default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 122 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized162default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized172default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 32 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized172default:default2
 2default:default2
152default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
FIFOL12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 103 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
FIFOL12default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 64 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized02default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 32 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized12default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized182default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 96 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized182default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized192default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 83 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized192default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 137 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized22default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized32default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 96 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized32default:default2
 2default:default2
162default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage0.v2default:default2
672default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2
mkbpu2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkbpu.v2default:default2
472default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2
RegFile2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RegFile.v2default:default2
152default:default8@Z8-6157h px? 
_
%s
*synth2G
3	Parameter addr_width bound to: 3 - type: integer 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter data_width bound to: 64 - type: integer 
2default:defaulth p
x
? 
L
%s
*synth24
 	Parameter lo bound to: 3'b000 
2default:defaulth p
x
? 
L
%s
*synth24
 	Parameter hi bound to: 3'b111 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
RegFile2default:default2
 2default:default2
172default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RegFile.v2default:default2
152default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkbpu2default:default2
 2default:default2
182default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkbpu.v2default:default2
472default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage02default:default2
 2default:default2
192default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage0.v2default:default2
672default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage1.v2default:default2
942default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized202default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 41 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b0 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized202default:default2
 2default:default2
192default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
	RevertReg2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RevertReg.v2default:default2
72default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 1 - type: integer 
2default:defaulth p
x
? 
L
%s
*synth24
 	Parameter init bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	RevertReg2default:default2
 2default:default2
202default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RevertReg.v2default:default2
72default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2(
module_fn_decompress2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_decompress.v2default:default2
302default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
module_fn_decompress2default:default2
 2default:default2
212default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_decompress.v2default:default2
302default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage12default:default2
 2default:default2
222default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage1.v2default:default2
942default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage2.v2default:default2
1532default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2"
mkregisterfile2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkregisterfile.v2default:default2
532default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2+
RegFile__parameterized02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RegFile.v2default:default2
152default:default8@Z8-6157h px? 
_
%s
*synth2G
3	Parameter addr_width bound to: 5 - type: integer 
2default:defaulth p
x
? 
`
%s
*synth2H
4	Parameter data_width bound to: 64 - type: integer 
2default:defaulth p
x
? 
N
%s
*synth26
"	Parameter lo bound to: 5'b00000 
2default:defaulth p
x
? 
N
%s
*synth26
"	Parameter hi bound to: 5'b11111 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2+
RegFile__parameterized02default:default2
 2default:default2
222default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RegFile.v2default:default2
152default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
mkregisterfile2default:default2
 2default:default2
232default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkregisterfile.v2default:default2
532default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
module_decoder_func_322default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decoder_func_32.v2default:default2
342default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2+
module_valid_csr_access2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_valid_csr_access.v2default:default2
382default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2+
module_hasCSRPermission2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_hasCSRPermission.v2default:default2
342default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2+
module_hasCSRPermission2default:default2
 2default:default2
242default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_hasCSRPermission.v2default:default2
342default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2+
module_valid_csr_access2default:default2
 2default:default2
252default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_valid_csr_access.v2default:default2
382default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2(
module_address_valid2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_address_valid.v2default:default2
312default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
module_address_valid2default:default2
 2default:default2
262default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_address_valid.v2default:default2
312default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
module_decoder_func_322default:default2
 2default:default2
272default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decoder_func_32.v2default:default2
342default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2(
module_chk_interrupt2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_chk_interrupt.v2default:default2
462default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
module_chk_interrupt2default:default2
 2default:default2
282default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_chk_interrupt.v2default:default2
462default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2(
module_decode_word322default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decode_word32.v2default:default2
312default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
module_decode_word322default:default2
 2default:default2
292default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decode_word32.v2default:default2
312default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage22default:default2
 2default:default2
302default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage2.v2default:default2
1532default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage32default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage3.v2default:default2
4402default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2
mkfwding2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfwding.v2default:default2
642default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkfwding2default:default2
 2default:default2
312default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfwding.v2default:default2
642default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2$
mkmulticycle_alu2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmulticycle_alu.v2default:default2
402default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2
mkfpu2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfpu.v2default:default2
432default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO1__parameterized12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 209 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized12default:default2
 2default:default2
312default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkfpu2default:default2
 2default:default2
322default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfpu.v2default:default2
432default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkmbox2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmbox.v2default:default2
362default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2#
mkrestoring_div2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkrestoring_div.v2default:default2
362default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2(
module_fn_single_div2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_single_div.v2default:default2
342default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
module_fn_single_div2default:default2
 2default:default2
332default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_single_div.v2default:default2
342default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
mkrestoring_div2default:default2
 2default:default2
342default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkrestoring_div.v2default:default2
362default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkcombo_mul2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcombo_mul.v2default:default2
362default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
	signedmul2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/signedmul.v2default:default2
312default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter AWIDTH bound to: 65 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter BWIDTH bound to: 65 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	signedmul2default:default2
 2default:default2
352default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/signedmul.v2default:default2
312default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkcombo_mul2default:default2
 2default:default2
362default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcombo_mul.v2default:default2
362default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkmbox2default:default2
 2default:default2
372default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmbox.v2default:default2
362default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2$
mkmulticycle_alu2default:default2
 2default:default2
382default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmulticycle_alu.v2default:default2
402default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2!
module_fn_alu2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_alu.v2default:default2
512default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2!
module_fn_alu2default:default2
 2default:default2
392default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_alu.v2default:default2
512default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage32default:default2
 2default:default2
402default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage3.v2default:default2
4402default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage42default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage4.v2default:default2
1372default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage42default:default2
 2default:default2
412default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage4.v2default:default2
1372default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mkstage52default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage5.v2default:default2
2082default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2
mkcsr2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcsr.v2default:default2
1152default:default8@Z8-6157h px? 
?
%s
*synth2v
b	Parameter hartid bound to: 64'b0000000000000000000000000000000000000000000000000000000000000000 
2default:defaulth p
x
? 
?
synthesizing module '%s'%s4497*oasys2 
mk_csr_daisy2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_daisy.v2default:default2
1162default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp12default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp1.v2default:default2
1272default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized42default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 80 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized42default:default2
 2default:default2
412default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2$
module_fn_csr_op2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_csr_op.v2default:default2
322default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2$
module_fn_csr_op2default:default2
 2default:default2
422default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_csr_op.v2default:default2
322default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp12default:default2
 2default:default2
432default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp1.v2default:default2
1272default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp2.v2default:default2
502default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp22default:default2
 2default:default2
442default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp2.v2default:default2
502default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp32default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp3.v2default:default2
892default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp32default:default2
 2default:default2
452default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp3.v2default:default2
892default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp42default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp4.v2default:default2
682default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp42default:default2
 2default:default2
462default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp4.v2default:default2
682default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp52default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp5.v2default:default2
682default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp52default:default2
 2default:default2
472default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp5.v2default:default2
682default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp62default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp6.v2default:default2
682default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp62default:default2
 2default:default2
482default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp6.v2default:default2
682default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2
mk_csr_grp72default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp7.v2default:default2
642default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mk_csr_grp72default:default2
 2default:default2
492default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp7.v2default:default2
642default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2 
mk_csr_daisy2default:default2
 2default:default2
502default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_daisy.v2default:default2
1162default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkcsr2default:default2
 2default:default2
512default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcsr.v2default:default2
1152default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFOL1__parameterized52default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6157h px? 
\
%s
*synth2D
0	Parameter width bound to: 168 - type: integer 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFOL1__parameterized52default:default2
 2default:default2
512default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v2default:default2
302default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkstage52default:default2
 2default:default2
522default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage5.v2default:default2
2082default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
mkriscv2default:default2
 2default:default2
532default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscv.v2default:default2
1212default:default8@Z8-6155h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2&
EN_store_is_cached2default:default2
mkriscv2default:default2 
cclass_riscv2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
216992default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
EN_ma_debugger_available2default:default2
mkriscv2default:default2 
cclass_riscv2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
216992default:default8@Z8-7071h px? 
?
Kinstance '%s' of module '%s' has %s connections declared, but only %s given4757*oasys2 
cclass_riscv2default:default2
mkriscv2default:default2
842default:default2
822default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
216992default:default8@Z8-7023h px? 
?
synthesizing module '%s'%s4497*oasys2#
mkriscvDebug0132default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscvDebug013.v2default:default2
842default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2
ResetEither2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ResetEither.v2default:default2
192default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
ResetEither2default:default2
 2default:default2
542default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ResetEither.v2default:default2
192default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2

MakeReset02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/MakeReset0.v2default:default2
172default:default8@Z8-6157h px? 
L
%s
*synth24
 	Parameter init bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

MakeReset02default:default2
 2default:default2
552default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/MakeReset0.v2default:default2
172default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
mkriscvDebug0132default:default2
 2default:default2
562default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscvDebug013.v2default:default2
842default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized212default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 34 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized212default:default2
 2default:default2
562default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2*
FIFO2__parameterized222default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6157h px? 
[
%s
*synth2C
/	Parameter width bound to: 64 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
FIFO2__parameterized222default:default2
 2default:default2
562default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v2default:default2
282default:default8@Z8-6155h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222052default:default8@Z8-4446h px? 
?
synthesizing module '%s'%s4497*oasys2
FIFO102default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO10.v2default:default2
242default:default8@Z8-6157h px? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
FIFO102default:default2
 2default:default2
572default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO10.v2default:default2
242default:default8@Z8-6155h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222142default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222232default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222322default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222412default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
222502default:default8@Z8-4446h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO1__parameterized22default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 3 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized22default:default2
 2default:default2
572default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO1__parameterized32default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
Z
%s
*synth2B
.	Parameter width bound to: 4 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized32default:default2
 2default:default2
572default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
224792default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
224882default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
224972default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
225062default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
225152default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
225242default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227532default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227622default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227712default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227802default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227892default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
227982default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
234482default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
234722default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
235082default:default8@Z8-4446h px? 
?
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v2default:default2
235322default:default8@Z8-4446h px? 
?
synthesizing module '%s'%s4497*oasys2
	mkjtagdtm2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkjtagdtm.v2default:default2
632default:default8@Z8-6157h px? 
?
synthesizing module '%s'%s4497*oasys2!
ClockInverter2default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ClockInverter.v2default:default2
72default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2!
ClockInverter2default:default2
 2default:default2
582default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ClockInverter.v2default:default2
72default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2

SyncReset02default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SyncReset0.v2default:default2
172default:default8@Z8-6157h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2

SyncReset02default:default2
 2default:default2
592default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SyncReset0.v2default:default2
172default:default8@Z8-6155h px? 
?
synthesizing module '%s'%s4497*oasys2)
FIFO1__parameterized42default:default2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6157h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-61572default:default2
1002default:defaultZ17-14h px? 
[
%s
*synth2C
/	Parameter width bound to: 40 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b0 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized42default:default2
 2default:default2
592default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
[
%s
*synth2C
/	Parameter width bound to: 34 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b0 
2default:defaulth p
x
? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
FIFO1__parameterized52default:default2
 2default:default2
592default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
282default:default8@Z8-6155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
	mkjtagdtm2default:default2
 2default:default2
602default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkjtagdtm.v2default:default2
632default:default8@Z8-6155h px? 
\
%s
*synth2D
0	Parameter p1width bound to: 3 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter p2depth bound to: 8 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter p3cntr_width bound to: 3 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter p2depth2 bound to: 6 - type: integer 
2default:defaulth p
x
? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1202default:default8@Z8-155h px? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1772default:default8@Z8-155h px? 
?
'done synthesizing module '%s'%s (%s#%s)4495*oasys2-
SizedFIFO__parameterized22default:default2
 2default:default2
602default:default2
12default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
352default:default8@Z8-6155h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-61552default:default2
1002default:defaultZ17-14h px? 
_
%s
*synth2G
3	Parameter dataWidth bound to: 41 - type: integer 
2default:defaulth p
x
? 
_
%s
*synth2G
3	Parameter dataWidth bound to: 34 - type: integer 
2default:defaulth p
x
? 
[
%s
*synth2C
/	Parameter width bound to: 16 - type: integer 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter init bound to: 16'b0000000000000000 
2default:defaulth p
x
? 
Z
%s
*synth2B
.	Parameter width bound to: 3 - type: integer 
2default:defaulth p
x
? 
N
%s
*synth26
"	Parameter init bound to: 3'b000 
2default:defaulth p
x
? 
\
%s
*synth2D
0	Parameter p1width bound to: 8 - type: integer 
2default:defaulth p
x
? 
]
%s
*synth2E
1	Parameter p2depth bound to: 16 - type: integer 
2default:defaulth p
x
? 
a
%s
*synth2I
5	Parameter p3cntr_width bound to: 4 - type: integer 
2default:defaulth p
x
? 
O
%s
*synth27
#	Parameter guarded bound to: 1'b1 
2default:defaulth p
x
? 
^
%s
*synth2F
2	Parameter p2depth2 bound to: 14 - type: integer 
2default:defaulth p
x
? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1202default:default8@Z8-155h px? 
?
-case statement is not full and has no default155*oasys2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v2default:default2
1772default:default8@Z8-155h px? 
?
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
12default:default2$
gpio_io_gpio_out2default:default2
322default:default2
mkSoc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
552default:default8@Z8-689h px? 
?
Pwidth (%s) of port connection '%s' does not match port width (%s) of module '%s'689*oasys2
12default:default2'
gpio_io_gpio_out_en2default:default2
322default:default2
mkSoc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
582default:default8@Z8-689h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
CLK_tck_clk2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2

RST_N_trst2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_AWVALID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_AWADDR2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_AWPROT2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_AWLEN2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_AWSIZE2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_AWBURST2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2*
correlator_master_AWID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_AWREADY2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_WVALID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_WDATA2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_WSTRB2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_WLAST2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2)
correlator_master_WID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_WREADY2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_BVALID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_BRESP2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2)
correlator_master_BID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_BREADY2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_ARVALID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_ARADDR2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_ARPROT2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_ARLEN2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_ARSIZE2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_ARBURST2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2*
correlator_master_ARID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2-
correlator_master_ARREADY2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_RVALID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_RRESP2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_RDATA2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
correlator_master_RLAST2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2)
correlator_master_RID2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2,
correlator_master_RREADY2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
uart_io_SIN2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2 
uart_io_SOUT2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
wire_tms_tms_in2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
wire_tdi_tdi_in2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
wire_tdo2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2"
interrupts_inp2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2(
RDY_gpio_io_gpio_out2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2+
RDY_gpio_io_gpio_out_en2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2"
EN_io_dump_get2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2
io_dump_get2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
9port '%s' of module '%s' is unconnected for instance '%s'4818*oasys2#
RDY_io_dump_get2default:default2
mkSoc2default:default2
pc2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7071h px? 
?
Kinstance '%s' of module '%s' has %s connections declared, but only %s given4757*oasys2
pc2default:default2
mkSoc2default:default2
512default:default2
62default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v2default:default2
472default:default8@Z8-7023h px? 
?
%s*synth2?
?Finished RTL Elaboration : Time (s): cpu = 00:01:02 ; elapsed = 00:01:08 . Memory (MB): peak = 3016.824 ; gain = 931.109 ; free physical = 5147 ; free virtual = 12469
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
?Finished Handling Custom Attributes : Time (s): cpu = 00:01:19 ; elapsed = 00:01:27 . Memory (MB): peak = 3016.824 ; gain = 931.109 ; free physical = 5327 ; free virtual = 12654
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
?Finished RTL Optimization Phase 1 : Time (s): cpu = 00:01:19 ; elapsed = 00:01:27 . Memory (MB): peak = 3016.824 ; gain = 931.109 ; free physical = 5327 ; free virtual = 12654
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
00:00:032default:default2
00:00:032default:default2
3016.8242default:default2
0.0002default:default2
44872default:default2
119942default:defaultZ17-722h px? 
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
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-848h px? 
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
12default:default8@Z12-584h px?
?
No ports matched '%s'.
584*	planAhead2
 2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
42default:default8@Z12-584h px?
?
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0/clk_wiz_0_in_context.xdc2default:default2
cl	2default:default8Z20-847h px? 
?
Parsing XDC File [%s]
179*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default8Z20-179h px? 
?
.Invalid option value '%s' specified for '%s'.
161*common2
#52default:default2
objects2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default2
382default:default8@Z17-161h px?
?
.Invalid option value '%s' specified for '%s'.
161*common2
#12default:default2
objects2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default2
392default:default8@Z17-161h px?
?
.Invalid option value '%s' specified for '%s'.
161*common2
#42default:default2
objects2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default2
402default:default8@Z17-161h px?
?
Finished Parsing XDC File [%s]
178*designutils2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default8Z20-178h px? 
?
?Implementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc2default:default2)
.Xil/Top_propImpl.xdc2default:defaultZ1-236h px? 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.022default:default2
00:00:00.012default:default2
3344.4022default:default2
0.0002default:default2
40972default:default2
116042default:defaultZ17-722h px? 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common24
 Constraint Validation Runtime : 2default:default2
00:00:00.592default:default2
00:00:00.582default:default2
3344.4022default:default2
0.0002default:default2
40972default:default2
116042default:defaultZ17-722h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Constraint Validation : Time (s): cpu = 00:02:14 ; elapsed = 00:02:15 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 4674 ; free virtual = 12180
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
?Finished Loading Part and Timing Information : Time (s): cpu = 00:02:14 ; elapsed = 00:02:15 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 4672 ; free virtual = 12178
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
?Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:02:14 ; elapsed = 00:02:15 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 4674 ; free virtual = 12180
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
3inferred FSM for state register '%s' in module '%s'802*oasys2 
tapstate_reg2default:default2
	mkjtagdtm2default:defaultZ8-802h px? 
?
?The signal %s was recognized as a true dual port RAM template.
3473*oasys2$
"BRAM2:/RAM_reg"2default:defaultZ8-3971h px? 
?
?Block RAM (%s) originally specified as a Byte Wide Write Enable RAM cannot take advantage of ByteWide feature and is implemented with single write enable per RAM due to following reason.
(%s)4698*oasys2'
portb_we[1].RAM_reg2default:default2?
?address width (15) is more than optimal threshold of 12. Implementing using BWWE will require more logic and timing would be suboptimal. Please use attribute ram_decomp = power if BWWE is desired.2default:defaultZ8-6841h px? 
?
?The signal %s was recognized as a true dual port RAM template.
3473*oasys26
""BRAM2BELoad:/portb_we[1].RAM_reg"2default:defaultZ8-3971h px? 
?
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s
*synth2t
`                   State |                     New Encoding |                Previous Encoding 
2default:defaulth p
x
? 
?
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE7 |                 0001000000000000 |                             0000
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE6 |                 0000100000000000 |                             0001
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE1 |                 0000000000100000 |                             0010
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE9 |                 0000000001000000 |                             1001
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE5 |                 0000010000000000 |                             1010
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE4 |                 0000001000000000 |                             1011
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE3 |                 0000000010000000 |                             1100
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE2 |                 0000000000001000 |                             1101
2default:defaulth p
x
? 
?
%s
*synth2s
_                iSTATE13 |                 0000000000010000 |                             1110
2default:defaulth p
x
? 
?
%s
*synth2s
_                iSTATE12 |                 0000000100000000 |                             1111
2default:defaulth p
x
? 
?
%s
*synth2s
_                  iSTATE |                 0000000000000001 |                             0011
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE0 |                 0000000000000100 |                             0100
2default:defaulth p
x
? 
?
%s
*synth2s
_                iSTATE14 |                 0000000000000010 |                             0101
2default:defaulth p
x
? 
?
%s
*synth2s
_                iSTATE11 |                 1000000000000000 |                             0110
2default:defaulth p
x
? 
?
%s
*synth2s
_                 iSTATE8 |                 0010000000000000 |                             0111
2default:defaulth p
x
? 
?
%s
*synth2s
_                iSTATE10 |                 0100000000000000 |                             1000
2default:defaulth p
x
? 
?
%s
*synth2x
d---------------------------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
Gencoded FSM with state register '%s' using encoding '%s' in module '%s'3353*oasys2 
tapstate_reg2default:default2
one-hot2default:default2
	mkjtagdtm2default:defaultZ8-3354h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished RTL Optimization Phase 2 : Time (s): cpu = 00:03:43 ; elapsed = 00:03:50 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 1506 ; free virtual = 9027
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2<
(pc/fabric_xactors_to_slaves_10_f_rd_addr2default:default2
FIFO22default:default2<
(pc/fabric_xactors_to_slaves_10_f_wr_addr2default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2<
(pc/fabric_xactors_to_slaves_10_f_rd_addr2default:default2
FIFO22default:default2<
(pc/fabric_xactors_to_slaves_11_f_rd_addr2default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2<
(pc/fabric_xactors_to_slaves_10_f_rd_addr2default:default2
FIFO22default:default2<
(pc/fabric_xactors_to_slaves_11_f_wr_addr2default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_rd_err_user_12default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_rd_err_user_22default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_rd_err_user_32default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_rd_err_user_42default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_rd_err_user_52default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_02default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_12default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_22default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_32default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_42default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default2/
pc/fabric_v_f_wr_err_user_52default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_02default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_12default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_22default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_32default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_42default:defaultZ8-223h px? 
?
$decloning instance '%s' (%s) to '%s'223*oasys2/
pc/fabric_v_f_rd_err_user_02default:default2
FIFO102default:default20
pc/fabric_v_f_wrd_err_user_52default:defaultZ8-223h px? 
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
,	   3 Input  160 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  114 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input  114 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   73 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   65 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   64 Bit       Adders := 19    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   64 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   62 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   58 Bit       Adders := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   58 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   56 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   56 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   54 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   53 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   32 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   32 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   29 Bit       Adders := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   29 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   27 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   27 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   25 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   24 Bit       Adders := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   17 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   16 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   16 Bit       Adders := 8     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   13 Bit       Adders := 12    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   13 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input   13 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   13 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   12 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   12 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   12 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   11 Bit       Adders := 7     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   11 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   10 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input   10 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   10 Bit       Adders := 11    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   10 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   10 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    9 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    9 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    9 Bit       Adders := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    8 Bit       Adders := 23    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    8 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    7 Bit       Adders := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    6 Bit       Adders := 18    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    5 Bit       Adders := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    4 Bit       Adders := 23    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    4 Bit       Adders := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    3 Bit       Adders := 11    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    3 Bit       Adders := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    2 Bit       Adders := 10    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    1 Bit       Adders := 4     
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
.	   2 Input    128 Bit         XORs := 4     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     65 Bit         XORs := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     64 Bit         XORs := 7     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     32 Bit         XORs := 94    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input     32 Bit         XORs := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     13 Bit         XORs := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     11 Bit         XORs := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input     10 Bit         XORs := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      8 Bit         XORs := 51    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      8 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   8 Input      8 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   7 Input      8 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input      8 Bit         XORs := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      8 Bit         XORs := 4     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      8 Bit         XORs := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   9 Input      8 Bit         XORs := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   2 Input      1 Bit         XORs := 239   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   3 Input      1 Bit         XORs := 144   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   4 Input      1 Bit         XORs := 144   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   5 Input      1 Bit         XORs := 82    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	   6 Input      1 Bit         XORs := 29    
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
.	              555 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              512 Bit    Registers := 20    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              349 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              294 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              256 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              209 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              204 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              197 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              181 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              172 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              170 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              168 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              146 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              143 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              142 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              141 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              139 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              137 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              135 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              129 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              128 Bit    Registers := 18    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              122 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              111 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              108 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              107 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              106 Bit    Registers := 9     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	              103 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               97 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               96 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               83 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               80 Bit    Registers := 7     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               78 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               77 Bit    Registers := 74    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               73 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               72 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               71 Bit    Registers := 77    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               70 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               69 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               68 Bit    Registers := 34    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               67 Bit    Registers := 4     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               66 Bit    Registers := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               65 Bit    Registers := 7     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               64 Bit    Registers := 60    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               63 Bit    Registers := 38    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               62 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               56 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               53 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               52 Bit    Registers := 146   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               44 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               43 Bit    Registers := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               42 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               41 Bit    Registers := 5     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               40 Bit    Registers := 3     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               39 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               38 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               36 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               35 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               34 Bit    Registers := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               33 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               32 Bit    Registers := 210   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               29 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               27 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               25 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               24 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               22 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               20 Bit    Registers := 8     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               19 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               16 Bit    Registers := 20    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               13 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               12 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               11 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	               10 Bit    Registers := 1     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                9 Bit    Registers := 2     
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                8 Bit    Registers := 64    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                6 Bit    Registers := 88    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                5 Bit    Registers := 10    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                4 Bit    Registers := 248   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                3 Bit    Registers := 74    
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                2 Bit    Registers := 701   
2default:defaulth p
x
? 
Z
%s
*synth2B
.	                1 Bit    Registers := 1007  
2default:defaulth p
x
? 
?
%s
*synth2'
+---Multipliers : 
2default:defaulth p
x
? 
X
%s
*synth2@
,	              65x65  Multipliers := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	              53x53  Multipliers := 1     
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
l
%s
*synth2T
@	            2048K Bit	(32768 X 64 bit)          RAMs := 1     
2default:defaulth p
x
? 
j
%s
*synth2R
>	              32K Bit	(64 X 512 bit)          RAMs := 8     
2default:defaulth p
x
? 
j
%s
*synth2R
>	               4K Bit	(32 X 128 bit)          RAMs := 2     
2default:defaulth p
x
? 
i
%s
*synth2Q
=	               1K Bit	(64 X 20 bit)          RAMs := 8     
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
h
%s
*synth2P
<	              160 Bit	(2 X 80 bit)          RAMs := 1     
2default:defaulth p
x
? 
h
%s
*synth2P
<	              120 Bit	(15 X 8 bit)          RAMs := 2     
2default:defaulth p
x
? 
g
%s
*synth2O
;	               21 Bit	(7 X 3 bit)          RAMs := 1     
2default:defaulth p
x
? 
g
%s
*synth2O
;	               20 Bit	(5 X 4 bit)          RAMs := 1     
2default:defaulth p
x
? 
g
%s
*synth2O
;	                6 Bit	(3 X 2 bit)          RAMs := 1     
2default:defaulth p
x
? 
8
%s
*synth2 
+---ROMs : 
2default:defaulth p
x
? 
P
%s
*synth28
$	                    ROMs := 16    
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
,	   2 Input  555 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input  512 Bit        Muxes := 11    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  512 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  349 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  294 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input  294 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  204 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  172 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input  172 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  166 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  160 Bit        Muxes := 10    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  146 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input  146 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input  143 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  143 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input  142 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  142 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  139 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  135 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  134 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  129 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input  128 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  128 Bit        Muxes := 11    
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
,	   5 Input  128 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  114 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  113 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  111 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  110 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  107 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input  106 Bit        Muxes := 19    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   97 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   85 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   83 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   81 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   80 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   80 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   78 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input   77 Bit        Muxes := 15    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   77 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   75 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   73 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   73 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   73 Bit        Muxes := 18    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   72 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   71 Bit        Muxes := 7     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  15 Input   71 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   70 Bit        Muxes := 12    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   70 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   70 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   69 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   69 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   68 Bit        Muxes := 33    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   67 Bit        Muxes := 22    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   67 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   66 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   66 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   65 Bit        Muxes := 13    
2default:defaulth p
x
? 
X
%s
*synth2@
,	  17 Input   65 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  13 Input   65 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input   65 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   65 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   64 Bit        Muxes := 29    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   64 Bit        Muxes := 210   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   64 Bit        Muxes := 17    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input   64 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  14 Input   64 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  16 Input   64 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input   64 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  17 Input   64 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   63 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   63 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   63 Bit        Muxes := 74    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   62 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   62 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   58 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   56 Bit        Muxes := 9     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   55 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   54 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   53 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   52 Bit        Muxes := 17    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input   52 Bit        Muxes := 24    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   52 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   52 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   49 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   42 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   42 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   41 Bit        Muxes := 14    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   41 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   40 Bit        Muxes := 12    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   40 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   40 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   39 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   38 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   37 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   35 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   34 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   33 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   32 Bit        Muxes := 255   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   32 Bit        Muxes := 11    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   32 Bit        Muxes := 22    
2default:defaulth p
x
? 
X
%s
*synth2@
,	  16 Input   32 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input   32 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input   32 Bit        Muxes := 10    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   31 Bit        Muxes := 3     
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
,	   4 Input   31 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   29 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   27 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   25 Bit        Muxes := 25    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   24 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   23 Bit        Muxes := 12    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   20 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   20 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   19 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   18 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   17 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   16 Bit        Muxes := 62    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   16 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  15 Input   16 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input   16 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   15 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   15 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   13 Bit        Muxes := 17    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   12 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   11 Bit        Muxes := 10    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input   11 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input   10 Bit        Muxes := 15    
2default:defaulth p
x
? 
X
%s
*synth2@
,	  11 Input   10 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  10 Input   10 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    9 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    9 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    8 Bit        Muxes := 196   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    8 Bit        Muxes := 14    
2default:defaulth p
x
? 
X
%s
*synth2@
,	 161 Input    8 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    8 Bit        Muxes := 9     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    8 Bit        Muxes := 9     
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
,	   6 Input    8 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  64 Input    7 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	 106 Input    7 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    7 Bit        Muxes := 7     
2default:defaulth p
x
? 
X
%s
*synth2@
,	 108 Input    7 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  74 Input    7 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  54 Input    7 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    6 Bit        Muxes := 23    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    6 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    6 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    6 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  50 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  48 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  57 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  56 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  32 Input    6 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  53 Input    6 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  25 Input    6 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  15 Input    6 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    6 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  24 Input    5 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  27 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    5 Bit        Muxes := 35    
2default:defaulth p
x
? 
X
%s
*synth2@
,	  28 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  10 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  23 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  17 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   9 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    5 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  14 Input    5 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    5 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   9 Input    4 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    4 Bit        Muxes := 128   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    4 Bit        Muxes := 131   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    4 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  15 Input    4 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  14 Input    4 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  16 Input    4 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  13 Input    4 Bit        Muxes := 19    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    4 Bit        Muxes := 4     
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
,	   7 Input    4 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    4 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  10 Input    4 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    3 Bit        Muxes := 4     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    3 Bit        Muxes := 61    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    3 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input    3 Bit        Muxes := 49    
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
,	   6 Input    3 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    3 Bit        Muxes := 10    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   9 Input    3 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    2 Bit        Muxes := 138   
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    2 Bit        Muxes := 3     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    2 Bit        Muxes := 18    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    2 Bit        Muxes := 5     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    2 Bit        Muxes := 16    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input    2 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   2 Input    1 Bit        Muxes := 1229  
2default:defaulth p
x
? 
X
%s
*synth2@
,	   4 Input    1 Bit        Muxes := 72    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   8 Input    1 Bit        Muxes := 2     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   3 Input    1 Bit        Muxes := 9     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   7 Input    1 Bit        Muxes := 44    
2default:defaulth p
x
? 
X
%s
*synth2@
,	   5 Input    1 Bit        Muxes := 6     
2default:defaulth p
x
? 
X
%s
*synth2@
,	   6 Input    1 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  14 Input    1 Bit        Muxes := 1     
2default:defaulth p
x
? 
X
%s
*synth2@
,	  26 Input    1 Bit        Muxes := 6     
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
{
%s
*synth2c
ODSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
{
%s
*synth2c
ODSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
{
%s
*synth2c
ODSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
{
%s
*synth2c
ODSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2h
TDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: PCIN+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2n
ZDSP Report: Generating DSP mbox/mul_/signed_mul/c, operation Mode is: (PCIN>>17)+A''*B''.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: register mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
%s
*synth2m
YDSP Report: operator mbox/mul_/signed_mul/c is absorbed into DSP mbox/mul_/signed_mul/c.
2default:defaulth p
x
? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2:
&ff_read_mem_request/\data1_reg_reg[5] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2;
'ff_read_mem_request/\data1_reg_reg[13] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2;
'ff_nc_write_request/\data1_reg_reg[10] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2:
&ff_nc_read_request/\data1_reg_reg[10] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default25
!\ff_write_mem_response_rv_reg[1] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default27
#\ff_write_mem_request/D_OUT_reg[5] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default29
%\ff_write_mem_request/D_OUT_reg[528] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default24
 \ff_nc_read_response_rv_reg[66] 2default:defaultZ8-3333h px? 
?
%s
*synth2?
pDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198, operation Mode is: A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198 is absorbed into DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198 is absorbed into DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198.
2default:defaulth p
x
? 
?
%s
*synth2?
{DSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198, operation Mode is: (PCIN>>17)+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198 is absorbed into DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198 is absorbed into DSP _0_CONCAT_INV_IF_condFlags32_res_whas__343_THEN_ETC___d5198.
2default:defaulth p
x
? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default29
%\inst_dpfpu_sqrt_ff_final_out_reg[3] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2:
&\inst_spfpu_divider_rg_stage1_reg[32] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default25
!\inst_spfpu_sqrt_rg_state_reg[5] 2default:defaultZ8-3333h px? 
?
cNot enough pipeline registers after wide multiplier. Recommended levels of pipeline registers is %s4267*oasys2
102default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfpu.v2default:default2
39302default:default8@Z8-5845h px? 
?
%s
*synth2?
pDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
uDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: PCIN+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
{DSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: (PCIN>>17)+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
pDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
uDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: PCIN+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
uDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: PCIN+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
pDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
{DSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: (PCIN>>17)+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
uDSP Report: Generating DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277, operation Mode is: PCIN+A*B.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
%s
*synth2?
?DSP Report: operator _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277 is absorbed into DSP _0_CONCAT_INV_IF_condFlags64_res_whas__428_THEN_ETC___d5277.
2default:defaulth p
x
? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2&
ma_core_req_req[1]2default:default2
mk_csr_grp72default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2&
ma_core_req_req[0]2default:default2
mk_csr_grp72default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[63]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[62]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[61]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[60]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[59]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[58]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[57]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[56]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[55]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[54]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[53]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[52]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[51]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[50]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[49]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[48]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[47]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[46]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[45]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[44]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[43]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[42]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[41]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[40]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[39]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[38]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[37]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[36]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[35]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[34]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[33]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[32]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[31]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[30]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[29]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[28]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[27]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2%
ma_csr_misa_m[26]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2)
mav_upd_on_trap_pc[0]2default:default2
mk_csr_grp12default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2-
mav_upd_on_debugger_pc[0]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[63]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[62]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[61]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[60]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[59]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[58]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[57]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[56]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[55]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[54]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[53]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[52]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[51]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[50]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[49]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[48]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[47]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[46]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[45]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[44]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[43]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[42]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[41]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[40]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[39]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[38]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[37]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[36]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[35]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[34]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[33]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[32]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[31]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[30]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[29]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[28]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[27]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[26]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[25]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[24]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[23]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[22]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[21]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[20]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[19]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[18]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[17]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[16]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[15]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[14]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[13]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[12]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[11]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys20
mav_upd_on_debugger_tval[10]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2/
mav_upd_on_debugger_tval[9]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2/
mav_upd_on_debugger_tval[8]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2/
mav_upd_on_debugger_tval[7]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
9Port %s in module %s is either unconnected or has no load4865*oasys2/
mav_upd_on_debugger_tval[6]2default:default2
mk_csr_grp32default:defaultZ8-7129h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-71292default:default2
1002default:defaultZ17-14h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-71292default:default2
1002default:defaultZ17-14h px? 
?
+design %s has port %s driven by constant %s3447*oasys2!
mkriscv__GCB02default:default2-
tx_to_stage1_enq_data[17]2default:default2
02default:defaultZ8-3917h px? 
?
+design %s has port %s driven by constant %s3447*oasys2!
mkriscv__GCB02default:default2-
tx_to_stage1_enq_data[16]2default:default2
02default:defaultZ8-3917h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-71292default:default2
1002default:defaultZ17-14h px? 
?
?RAM (%s) has partial Byte Wide Write Enable pattern with ram_style = "%s", however no output register found in fanout of RAM. Recommended to use supported Byte Wide Write Enable template. 
4702*oasys2'
portb_we[1].RAM_reg2default:default2
block2default:defaultZ8-6850h px? 
?
?RAM (%s) has partial Byte Wide Write Enable pattern with ram_style = "%s", however no output register found in fanout of RAM. Recommended to use supported Byte Wide Write Enable template. 
4702*oasys2'
porta_we[1].RAM_reg2default:default2
block2default:defaultZ8-6850h px? 
~
+Unused sequential element %s was removed. 
4326*oasys2/
ff_lower_order_bits/arr_reg2default:defaultZ8-6014h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[1]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[2]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[1]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[2]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[1]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[1] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[2]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[3]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[2]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[3]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[2]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[2] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[3]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_wr_data/data1_reg_reg[4]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[3]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[4]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2A
-dma_dma_m_xactor_f_wr_data/\data1_reg_reg[3] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[3]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[3] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2A
-cclass_io_xactor_f_wr_data/\data1_reg_reg[4] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2E
1cclass_memory_xactor_f_wr_data/\data1_reg_reg[4] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2A
-dma_dma_m_xactor_f_wr_data/\data1_reg_reg[4] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[4]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[4] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[5]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[6]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[5]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[5] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[6]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[7]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[6]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[6] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[7]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[8]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[7]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[7] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[8]2default:default2
FDE2default:default2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[9]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[8]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[8] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_memory_xactor_f_wr_data/data1_reg_reg[9]2default:default2
FDE2default:default2D
0cclass_memory_xactor_f_wr_data/data1_reg_reg[10]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[9]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[9] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2D
0cclass_memory_xactor_f_wr_data/data1_reg_reg[10]2default:default2
FDE2default:default2D
0cclass_memory_xactor_f_wr_data/data1_reg_reg[11]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[10]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[10] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2D
0cclass_memory_xactor_f_wr_data/data1_reg_reg[11]2default:default2
FDE2default:default2D
0cclass_memory_xactor_f_wr_data/data1_reg_reg[12]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[11]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[11] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2F
2cclass_memory_xactor_f_wr_data/\data1_reg_reg[12] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[12]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[12] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[13]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[13] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[14]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[14] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[15]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[15] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[16]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[16] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[17]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[17] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[18]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[18] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[19]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[19] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[20]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[20] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[21]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[21] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[22]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[22] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[23]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[23] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[24]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[24] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[25]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[25] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[26]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[26] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[27]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[27] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[28]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[28] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[29]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[29] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[30]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[30] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[31]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[31] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[32]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[32] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[33]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[33] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[34]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[34] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[35]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[35] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[36]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[36] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[37]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[37] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[38]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[38] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[39]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[39] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[40]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[40] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[41]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[41] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[42]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[42] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[43]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[43] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[44]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[44] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[45]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[45] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[46]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[46] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[47]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[47] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[48]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[48] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[49]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[49] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[50]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[50] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[51]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[51] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[52]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[52] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[53]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[53] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[54]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[54] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[55]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[55] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[56]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[56] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[57]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[57] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[58]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[58] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[59]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[59] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[60]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[60] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[61]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[61] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[62]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[62] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[63]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[63] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[64]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[64] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[65]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[65] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[66]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[66] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[67]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[67] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[68]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[68] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[69]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[69] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[70]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[70] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[71]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[71] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[72]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[72] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[73]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[73] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[74]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[74] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[75]2default:default2
FDE2default:default2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[75] 2default:defaultZ8-3333h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2C
/cclass_fetch_xactor_f_wr_data/data1_reg_reg[76]2default:default2
FDE2default:default2B
.cclass_fetch_xactor_f_wr_data/data1_reg_reg[0]2default:defaultZ8-3886h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0signature/\m_xactor_f_wr_data/data1_reg_reg[76] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2A
-cclass_io_xactor_f_wr_data/\data1_reg_reg[0] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2D
0cclass_fetch_xactor_f_wr_data/\data1_reg_reg[0] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2>
*cclass_fetch_xactor_f_wr_data/full_reg_reg2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\m_xactor_f_wr_data/data1_reg_reg[0] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
12default:default2?
+signature/\m_xactor_f_wr_data/full_reg_reg 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\s_xactor_f_rd_data/data1_reg_reg[0] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\s_xactor_f_rd_data/data1_reg_reg[1] 2default:defaultZ8-3333h px? 
?
6propagating constant %s across sequential element (%s)3333*oasys2
02default:default2C
/signature/\s_xactor_f_rd_data/data1_reg_reg[2] 2default:defaultZ8-3333h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-33332default:default2
1002default:defaultZ17-14h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-33332default:default2
1002default:defaultZ17-14h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[0]2default:default2
FDE2default:default2@
,cclass_io_xactor_f_rd_addr/data1_reg_reg[19]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[0]2default:default2
FDE2default:default2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[2]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[1]2default:default2
FDE2default:default2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[4]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[2]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[3]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+dma_dma_m_xactor_f_rd_addr/data1_reg_reg[2]2default:default2
FDE2default:default2?
+dma_dma_m_xactor_f_rd_addr/data1_reg_reg[5]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[2]2default:default2
FDE2default:default2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[3]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[3]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[5]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[3]2default:default2
FDE2default:default2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[5]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2A
-signature/m_xactor_f_rd_addr/data1_reg_reg[4]2default:default2
FDE2default:default2B
.signature/m_xactor_f_rd_addr/data1_reg_reg[15]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[5]2default:default2
FDE2default:default2?
+cclass_io_xactor_f_rd_addr/data1_reg_reg[6]2default:defaultZ8-3886h px? 
?
"merging instance '%s' (%s) to '%s'3436*oasys2?
+dma_dma_m_xactor_f_rd_addr/data1_reg_reg[5]2default:default2
FDE2default:default2@
,dma_dma_m_xactor_f_rd_addr/data1_reg_reg[16]2default:defaultZ8-3886h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-38862default:default2
1002default:defaultZ17-14h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-38862default:default2
1002default:defaultZ17-14h px? 
?
[ROM "%s" won't be mapped to Block RAM because address size (%s) smaller than threshold (%s)3996*oasys2J
6CASE_bram_rg_read_packet_BITS_13_TO_6_3_2_7_3__ETC__q82default:default2
42default:default2
52default:defaultZ8-5544h px? 
?
[ROM "%s" won't be mapped to Block RAM because address size (%s) smaller than threshold (%s)3996*oasys2J
6CASE_bram_rg_write_packet_BITS_16_TO_9_3_2_7_3_ETC__q72default:default2
42default:default2
52default:defaultZ8-5544h px? 
?
merging register '%s' into '%s'3619*oasys27
#fabric_v_f_rd_mis_10/D_OUT_reg[2:0]2default:default27
#fabric_v_f_rd_mis_11/D_OUT_reg[2:0]2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
1072default:default8@Z8-4471h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-38862default:default2
1002default:defaultZ17-14h px? 
?
merging register '%s' into '%s'3619*oasys28
$fabric_v_f_wrd_mis_10/D_OUT_reg[2:0]2default:default28
$fabric_v_f_wrd_mis_11/D_OUT_reg[2:0]2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
1072default:default8@Z8-4471h px? 
?
merging register '%s' into '%s'3619*oasys27
#fabric_v_f_wr_mis_11/D_OUT_reg[2:0]2default:default28
$fabric_v_f_wrd_mis_11/D_OUT_reg[2:0]2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
1072default:default8@Z8-4471h px? 
?
merging register '%s' into '%s'3619*oasys27
#fabric_v_f_wr_mis_10/D_OUT_reg[2:0]2default:default28
$fabric_v_f_wrd_mis_11/D_OUT_reg[2:0]2default:default2?
?/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v2default:default2
1072default:default8@Z8-4471h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-38862default:default2
1002default:defaultZ17-14h px? 
?
+Unused sequential element %s was removed. 
4326*oasys2<
(aesbuf_aes_aes_b_bram_inp_memory/RAM_reg2default:defaultZ8-6014h px? 
?
+Unused sequential element %s was removed. 
4326*oasys2<
(aesbuf_aes_aes_b_bram_out_memory/RAM_reg2default:defaultZ8-6014h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-33332default:default2
1002default:defaultZ17-14h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-38862default:default2
1002default:defaultZ17-14h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:08:44 ; elapsed = 00:08:52 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 986 ; free virtual = 8668
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
M
%s*synth25
!
ROM: Preliminary Mapping	Report
2default:defaulth px? 
?
%s*synth2?
p+------------+---------------------------------------------------------------+---------------+----------------+
2default:defaulth px? 
?
%s*synth2?
q|Module Name | RTL Object                                                    | Depth x Width | Implemented As | 
2default:defaulth px? 
?
%s*synth2?
p+------------+---------------------------------------------------------------+---------------+----------------+
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1635716                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1634256                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1637178                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1632570                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1631047                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1629564                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1628082                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1646799                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1640131                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1651056                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1624814                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1623287                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1626492                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1813634                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1807853                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1819373                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1771516                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1760040                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1754297                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1777347                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | MUX_aesbuf_aes_aes_b_blockaes_aes__dr_sbox_out_write_1__VAL_3 | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1674712                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1654703                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1656134                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1657564                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1658991                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1660420                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1661850                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1663280                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1664707                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1666136                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1667566                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1668996                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1670423                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1671852                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1673282                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | MUX_aesbuf_aes_aes_b_blockaes_aes__dr_sbox_out_write_1__VAL_1 | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1730288                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1734181                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1718378                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1698358                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1699790                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1701221                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1702649                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1704078                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1705509                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1706940                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1708368                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1709797                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1711228                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1712659                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1714087                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1715516                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | x__h1716947                                                   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col2_4798_BITS_7_TO_0_3121_EQ__ETC___d33633   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col1_4795_BITS_15_TO_8_2606_EQ_ETC___d33118   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col0_4792_BITS_23_TO_16_2089_E_ETC___d32601   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col3_4801_BITS_31_TO_24_1575_E_ETC___d32087   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col0_4792_BITS_7_TO_0_8611_EQ__ETC___d29123   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col2_4798_BITS_23_TO_16_7579_E_ETC___d28091   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col3_4801_BITS_15_TO_8_8096_EQ_ETC___d28608   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col1_4795_BITS_31_TO_24_7065_E_ETC___d27577   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col1_4795_BITS_7_TO_0_0866_EQ__ETC___d31378   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col0_4792_BITS_15_TO_8_0351_EQ_ETC___d30863   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col3_4801_BITS_23_TO_16_9834_E_ETC___d30346   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col2_4798_BITS_31_TO_24_9320_E_ETC___d29832   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col3_4801_BITS_7_TO_0_6356_EQ__ETC___d26868   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col1_4795_BITS_23_TO_16_5324_E_ETC___d25836   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col2_4798_BITS_15_TO_8_5841_EQ_ETC___d26353   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | IF_aes_aes_aes__col0_4792_BITS_31_TO_24_4810_E_ETC___d25322   | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits175623_0b0_0x63_0b1_0x7C_0b10_ETC__q12       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits178090_0b0_0x63_0b1_0x7C_0b10_ETC__q11       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits180557_0b0_0x63_0b1_0x7C_0b10_ETC__q10       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits574992_0b0_0x63_0b1_0x7C_0b10_ETC__q9        | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits180501_0b0_0x63_0b1_0x7C_0b10_ETC__q20       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits574936_0b0_0x63_0b1_0x7C_0b10_ETC__q19       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits175679_0b0_0x63_0b1_0x7C_0b10_ETC__q18       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits178146_0b0_0x63_0b1_0x7C_0b10_ETC__q17       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits178062_0b0_0x63_0b1_0x7C_0b10_ETC__q16       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits180529_0b0_0x63_0b1_0x7C_0b10_ETC__q15       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits574964_0b0_0x63_0b1_0x7C_0b10_ETC__q14       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits175707_0b0_0x63_0b1_0x7C_0b10_ETC__q13       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits574908_0b0_0x63_0b1_0x7C_0b10_ETC__q24       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits175651_0b0_0x63_0b1_0x7C_0b10_ETC__q23       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits178118_0b0_0x63_0b1_0x7C_0b10_ETC__q22       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | CASE_spliced_bits180585_0b0_0x63_0b1_0x7C_0b10_ETC__q21       | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h804376                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h802904                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h805850                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h801206                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h799673                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h798178                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h796684                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h813583                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h811596                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h809672                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h793439                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h791482                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q|mkSoc       | v__h795053                                                    | 256x8         | LUT            | 
2default:defaulth px? 
?
%s*synth2?
q+------------+---------------------------------------------------------------+---------------+----------------+

2default:defaulth px? 
d
%s*synth2L
8
Block RAM: Preliminary Mapping	Report (see note below)
2default:defaulth px? 
?
%s*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth px? 
?
%s*synth2?
?|Module Name          | RTL Object                               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
2default:defaulth px? 
?
%s*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB3        | data_arr_3_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB3        | data_arr_2_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB3        | data_arr_1_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB3        | data_arr_0_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB4        | tag_arr_3_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB4        | tag_arr_2_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB4        | tag_arr_1_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|mkdcache__GB4        | tag_arr_0_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|BRAM2BELoad:         | portb_we[1].RAM_reg                      | 32 K x 64(WRITE_FIRST) | W | R | 32 K x 64(WRITE_FIRST) | W | R | Port A and B     | 0      | 64     | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | data_arr_0_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | data_arr_1_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | data_arr_2_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | data_arr_3_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | tag_arr_0_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | tag_arr_1_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | tag_arr_2_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|\cclass_imem/icache  | tag_arr_3_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth px? 
?
%s*synth2?
?|mkSoc__GCB7          | aesbuf_aes_aes_b_bram_inp_memory/RAM_reg | 32 x 128(READ_FIRST)   | W |   | 32 x 128(WRITE_FIRST)  |   | R | Port A and B     | 0      | 2      | 
2default:defaulth px? 
?
%s*synth2?
?|mkSoc__GCB7          | aesbuf_aes_aes_b_bram_out_memory/RAM_reg | 32 x 128(READ_FIRST)   | W |   | 32 x 128(WRITE_FIRST)  |   | R | Port A and B     | 0      | 2      | 
2default:defaulth px? 
?
%s*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

2default:defaulth px? 
?
%s*synth2?
?Note: The table above is a preliminary report that shows the Block RAMs at the current stage of the synthesis flow. Some Block RAMs may be reimplemented as non Block RAM primitives later in the synthesis flow. Multiple instantiated Block RAMs are reported only once. 
2default:defaulth px? 
j
%s*synth2R
>
Distributed RAM: Preliminary Mapping	Report (see note below)
2default:defaulth px? 
?
%s*synth2?
|+----------------------------+-----------------------------------+----------------+----------------------+----------------+
2default:defaulth px? 
?
%s*synth2?
}|Module Name                 | RTL Object                        | Inference      | Size (Depth x Width) | Primitives     | 
2default:defaulth px? 
?
%s*synth2?
|+----------------------------+-----------------------------------+----------------+----------------------+----------------+
2default:defaulth px? 
?
%s*synth2?
}|\stage0/bpu                 | ras_stack_array_reg/arr_reg       | User Attribute | 8 x 64               | RAM32M x 11	   | 
2default:defaulth px? 
?
%s*synth2?
}|stage2                      | registerfile/floating_rf/arr_reg  | User Attribute | 32 x 64              | RAM32M x 44	   | 
2default:defaulth px? 
?
%s*synth2?
}|stage2                      | registerfile/integer_rf/arr_reg   | User Attribute | 32 x 64              | RAM32M x 33	   | 
2default:defaulth px? 
?
%s*synth2?
}|pipe0                       | arr_reg                           | Implied        | 2 x 80               | RAM32M x 14	   | 
2default:defaulth px? 
?
%s*synth2?
}|uart_user_ifc_uart_fifoRecv | arr_reg                           | Implied        | 16 x 8               | RAM32M x 2	    | 
2default:defaulth px? 
?
%s*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key3/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key2/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key1/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key0/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth px? 
?
%s*synth2?
}|uart_user_ifc_uart_fifoXmit | arr_reg                           | Implied        | 16 x 8               | RAM32M x 2	    | 
2default:defaulth px? 
?
%s*synth2?
}+----------------------------+-----------------------------------+----------------+----------------------+----------------+

2default:defaulth px? 
?
%s*synth2?
?Note: The table above is a preliminary report that shows the Distributed RAMs at the current stage of the synthesis flow. Some Distributed RAMs may be reimplemented as non Distributed RAM primitives later in the synthesis flow. Multiple instantiated RAMs are reported only once.
2default:defaulth px? 
^
%s*synth2F
2
DSP: Preliminary Mapping	Report (see note below)
2default:defaulth px? 
?
%s*synth2?
?+------------+--------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+
2default:defaulth px? 
?
%s*synth2?
?|Module Name | DSP Mapping        | A Size | B Size | C Size | D Size | P Size | AREG | BREG | CREG | DREG | ADREG | MREG | PREG | 
2default:defaulth px? 
?
%s*synth2?
?+------------+--------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+
2default:defaulth px? 
?
%s*synth2?
?|Top         | A''*B''            | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 14     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | A''*B''            | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | A''*B''            | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 18     | 14     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | A''*B''            | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | PCIN+A''*B''       | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|Top         | (PCIN>>17)+A''*B'' | 18     | 18     | -      | -      | 48     | 2    | 2    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu       | A*B                | 25     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu       | (PCIN>>17)+A*B     | 25     | 8      | -      | -      | 31     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | A*B                | 20     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | PCIN+A*B           | 20     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | (PCIN>>17)+A*B     | 20     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | A*B                | 20     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | PCIN+A*B           | 18     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | PCIN+A*B           | 20     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | A*B                | 18     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | (PCIN>>17)+A*B     | 18     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?|mkfpu__GB1  | PCIN+A*B           | 18     | 18     | -      | -      | 48     | 0    | 0    | -    | -    | -     | 0    | 0    | 
2default:defaulth px? 
?
%s*synth2?
?+------------+--------------------+--------+--------+--------+--------+--------+------+------+------+------+-------+------+------+

2default:defaulth px? 
?
%s*synth2?
?Note: The table above is a preliminary report that shows the DSPs inferred at the current stage of the synthesis flow. Some DSP may be reimplemented as non DSP primitives later in the synthesis flow. Multiple instantiated DSPs are reported only once.
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
?Finished Applying XDC Timing Constraints : Time (s): cpu = 00:09:05 ; elapsed = 00:09:14 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 673 ; free virtual = 8478
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
?Finished Timing Optimization : Time (s): cpu = 00:10:33 ; elapsed = 00:10:47 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 520 ; free virtual = 8346
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
M
%s
*synth25
!
Block RAM: Final Mapping	Report
2default:defaulth p
x
? 
?
%s
*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth p
x
? 
?
%s
*synth2?
?|Module Name          | RTL Object                               | PORT A (Depth x Width) | W | R | PORT B (Depth x Width) | W | R | Ports driving FF | RAMB18 | RAMB36 | 
2default:defaulth p
x
? 
?
%s
*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB3        | data_arr_3_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB3        | data_arr_2_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB3        | data_arr_1_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB3        | data_arr_0_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB4        | tag_arr_3_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB4        | tag_arr_2_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB4        | tag_arr_1_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkdcache__GB4        | tag_arr_0_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|BRAM2BELoad:         | portb_we[1].RAM_reg                      | 32 K x 64(WRITE_FIRST) | W | R | 32 K x 64(WRITE_FIRST) | W | R | Port A and B     | 0      | 64     | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | data_arr_0_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | data_arr_1_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | data_arr_2_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | data_arr_3_ram_single_0/ram_reg          | 64 x 512(NO_CHANGE)    | W | R |                        |   |   | Port A           | 1      | 7      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | tag_arr_0_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | tag_arr_1_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | tag_arr_2_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|\cclass_imem/icache  | tag_arr_3_ram_single_0/ram_reg           | 64 x 20(NO_CHANGE)     | W | R |                        |   |   | Port A           | 1      | 0      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkSoc__GCB7          | aesbuf_aes_aes_b_bram_inp_memory/RAM_reg | 32 x 128(READ_FIRST)   | W |   | 32 x 128(WRITE_FIRST)  |   | R | Port A and B     | 0      | 2      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?|mkSoc__GCB7          | aesbuf_aes_aes_b_bram_out_memory/RAM_reg | 32 x 128(READ_FIRST)   | W |   | 32 x 128(WRITE_FIRST)  |   | R | Port A and B     | 0      | 2      | 
2default:defaulth p
x
? 
?
%s
*synth2?
?+---------------------+------------------------------------------+------------------------+---+---+------------------------+---+---+------------------+--------+--------+

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
*synth2?
|+----------------------------+-----------------------------------+----------------+----------------------+----------------+
2default:defaulth p
x
? 
?
%s
*synth2?
}|Module Name                 | RTL Object                        | Inference      | Size (Depth x Width) | Primitives     | 
2default:defaulth p
x
? 
?
%s
*synth2?
|+----------------------------+-----------------------------------+----------------+----------------------+----------------+
2default:defaulth p
x
? 
?
%s
*synth2?
}|\stage0/bpu                 | ras_stack_array_reg/arr_reg       | User Attribute | 8 x 64               | RAM32M x 11	   | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|stage2                      | registerfile/floating_rf/arr_reg  | User Attribute | 32 x 64              | RAM32M x 44	   | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|stage2                      | registerfile/integer_rf/arr_reg   | User Attribute | 32 x 64              | RAM32M x 33	   | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|pipe0                       | arr_reg                           | Implied        | 2 x 80               | RAM32M x 14	   | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|uart_user_ifc_uart_fifoRecv | arr_reg                           | Implied        | 16 x 8               | RAM32M x 2	    | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key3/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key2/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key1/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2?
}|mkSoc__GCB3                 | aes_aes_aes__kg_save_key0/RAM_reg | Implied        | 16 x 32              | RAM16X1S x 32	 | 
2default:defaulth p
x
? 
?
%s
*synth2?
}+----------------------------+-----------------------------------+----------------+----------------------+----------------+

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
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_3_ram_single_0/ram_reg_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_2_ram_single_0/ram_reg_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_1_ram_single_0/ram_reg_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2U
Adcachei_4/pc/cclass_dmem/dcache/data_arr_0_ram_single_0/ram_reg_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_3_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_3_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_2_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_2_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_1_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_1_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_0_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2R
>dcachei_5/pc/cclass_dmem/dcache/tag_arr_0_ram_single_0/ram_reg2default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_0_0_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_1_0_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_2_0_72default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_02default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_12default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_22default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_32default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_42default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_52default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_62default:default2
Block2default:defaultZ8-7052h px? 
?
?The timing for the instance %s (implemented as a %s RAM) might be sub-optimal as no optional output register could be merged into the ram block. Providing additional output register may help in improving timing.
4799*oasys2H
4pci_21/pc/bram_dut_dmemMSB/portb_we[1].RAM_reg_3_0_72default:default2
Block2default:defaultZ8-7052h px? 
?
?Message '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-70522default:default2
1002default:defaultZ17-14h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_8_82default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_9_92default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_10_102default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_11_112default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_12_122default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_13_132default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_14_142default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_15_152default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_16_162default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_17_172default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_18_182default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_19_192default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_20_202default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_21_212default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_22_222default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_23_232default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_24_242default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_25_252default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_26_262default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_27_272default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_28_282default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_29_292default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_30_302default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key3/RAM_reg_0_15_31_312default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_8_82default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_9_92default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_10_102default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_11_112default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_12_122default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_13_132default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_14_142default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_15_152default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_16_162default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_17_172default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_18_182default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_19_192default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_20_202default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_21_212default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_22_222default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_23_232default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_24_242default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_25_252default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_26_262default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_27_272default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_28_282default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_29_292default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_30_302default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key2/RAM_reg_0_15_31_312default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_8_82default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_9_92default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_10_102default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_11_112default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_12_122default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_13_132default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_14_142default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_15_152default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_16_162default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_17_172default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_18_182default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_19_192default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_20_202default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_21_212default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_22_222default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_23_232default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_24_242default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_25_252default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_26_262default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_27_272default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_28_282default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_29_292default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_30_302default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key1/RAM_reg_0_15_31_312default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_8_82default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2H
4pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_9_92default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_10_102default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_11_112default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_12_122default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_13_132default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_14_142default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_15_152default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_16_162default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_17_172default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_18_182default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_19_192default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_20_202default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_21_212default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_22_222default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_23_232default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_24_242default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_25_252default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_26_262default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_27_272default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_28_282default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_29_292default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_30_302default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
BRemoved %s instance %s from module %s due to constant propagation
4811*oasys2
DRAM2default:default2J
6pci_24/pc/aes_aes_aes__kg_save_key0/RAM_reg_0_15_31_312default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7067h px? 
?
CRemoved %s %s instances from module %s due to constant propagation
4810*oasys2
962default:default2
DRAM2default:default2(
mkSoc__GCB3_tempName2default:defaultZ8-7066h px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
?
%s*synth2?
?Finished Technology Mapping : Time (s): cpu = 00:11:38 ; elapsed = 00:11:52 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 400 ; free virtual = 7613
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
?Finished IO Insertion : Time (s): cpu = 00:12:23 ; elapsed = 00:12:38 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 316 ; free virtual = 7626
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
?Finished Renaming Generated Instances : Time (s): cpu = 00:12:23 ; elapsed = 00:12:38 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 317 ; free virtual = 7627
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
?Finished Rebuilding User Hierarchy : Time (s): cpu = 00:13:03 ; elapsed = 00:13:19 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 263 ; free virtual = 7579
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
?Finished Renaming Generated Ports : Time (s): cpu = 00:13:04 ; elapsed = 00:13:20 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 263 ; free virtual = 7579
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
?Finished Handling Custom Attributes : Time (s): cpu = 00:13:18 ; elapsed = 00:13:34 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 269 ; free virtual = 7586
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
?Finished Renaming Generated Nets : Time (s): cpu = 00:13:19 ; elapsed = 00:13:35 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 269 ; free virtual = 7586
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
|2     |CARRY4   |  2975|
2default:defaulth px? 
F
%s*synth2.
|3     |DSP48E1  |    27|
2default:defaulth px? 
F
%s*synth2.
|6     |LUT1     |   494|
2default:defaulth px? 
F
%s*synth2.
|7     |LUT2     |  4478|
2default:defaulth px? 
F
%s*synth2.
|8     |LUT3     | 10557|
2default:defaulth px? 
F
%s*synth2.
|9     |LUT4     | 11079|
2default:defaulth px? 
F
%s*synth2.
|10    |LUT5     | 15394|
2default:defaulth px? 
F
%s*synth2.
|11    |LUT6     | 56801|
2default:defaulth px? 
F
%s*synth2.
|12    |MUXF7    |  5327|
2default:defaulth px? 
F
%s*synth2.
|13    |MUXF8    |  1140|
2default:defaulth px? 
F
%s*synth2.
|14    |RAM32M   |    82|
2default:defaulth px? 
F
%s*synth2.
|15    |RAMB18E1 |    24|
2default:defaulth px? 
F
%s*synth2.
|17    |RAMB36E1 |   124|
2default:defaulth px? 
F
%s*synth2.
|83    |FDCE     |  7756|
2default:defaulth px? 
F
%s*synth2.
|84    |FDPE     |     2|
2default:defaulth px? 
F
%s*synth2.
|85    |FDRE     | 36972|
2default:defaulth px? 
F
%s*synth2.
|86    |FDSE     |   919|
2default:defaulth px? 
F
%s*synth2.
|87    |IBUF     |     1|
2default:defaulth px? 
F
%s*synth2.
|88    |OBUF     |     4|
2default:defaulth px? 
F
%s*synth2.
|89    |OBUFT    |     2|
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
?Finished Writing Synthesis Report : Time (s): cpu = 00:13:19 ; elapsed = 00:13:35 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 269 ; free virtual = 7586
2default:defaulth px? 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
? 
t
%s
*synth2\
HSynthesis finished with 0 errors, 0 critical warnings and 263 warnings.
2default:defaulth p
x
? 
?
%s
*synth2?
?Synthesis Optimization Runtime : Time (s): cpu = 00:12:44 ; elapsed = 00:13:03 . Memory (MB): peak = 3344.402 ; gain = 931.109 ; free physical = 4844 ; free virtual = 12161
2default:defaulth p
x
? 
?
%s
*synth2?
?Synthesis Optimization Complete : Time (s): cpu = 00:13:27 ; elapsed = 00:13:37 . Memory (MB): peak = 3344.402 ; gain = 1258.688 ; free physical = 4861 ; free virtual = 12161
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
00:00:022default:default2
00:00:022default:default2
3344.4022default:default2
0.0002default:default2
47902default:default2
120902default:defaultZ17-722h px? 
h
-Analyzing %s Unisim elements for replacement
17*netlist2
96992default:defaultZ29-17h px? 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
12default:defaultZ29-28h px? 
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
00:00:00.032default:default2
00:00:00.032default:default2
3368.4142default:default2
0.0002default:default2
47332default:default2
120382default:defaultZ17-722h px? 
?
!Unisim Transformation Summary:
%s111*project2z
f  A total of 82 instances were transformed.
  RAM32M => RAM32M (RAMD32(x6), RAMS32(x2)): 82 instances
2default:defaultZ1-111h px? 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px? 
?
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
6682default:default2
1852default:default2
32default:default2
02default:defaultZ4-41h px? 
^
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
synth_design: 2default:default2
00:14:072default:default2
00:14:192default:default2
3368.4142default:default2
1282.8242default:default2
50942default:default2
123992default:defaultZ17-722h px? 
?
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2?
s/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.runs/synth_1/Top.dcp2default:defaultZ17-1381h px? 
?
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:362default:default2
00:00:342default:default2
3400.4302default:default2
32.0162default:default2
50652default:default2
123932default:defaultZ17-722h px? 
?
%s4*runtcl2p
\Executing : report_utilization -file Top_utilization_synth.rpt -pb Top_utilization_synth.pb
2default:defaulth px? 
?
Exiting %s at %s...
206*common2
Vivado2default:default2,
Tue Dec  7 10:37:29 20212default:defaultZ17-206h px? 


End Record
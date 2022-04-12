README for Simulation-based-TVLA

## Overview
Generating traces for a given hardware can be done through emulation or through simulation. This directory details on how to do the TVLA Analysis through simulation. 

**NOTE**: The traces couldn't be generated from the synthesized code and was were not resolved as this experiment was not important for the project. 

## Procedure
There are 3 parts involved:
- Synthesizing the verilog code for ASIC designs using Synopsys Design Compiler  
- Adding required files to enable compiling the   synthesized verilog code using a verilog simulator  
- Generating traces and computing TVLA score    
  
**Synthesis**:  
For ASIC synthesis, Synopsys Design compiler version O-2018.06-SP5-4 was used. Normal AES accelerator with composite S-box was synthesized. mkAES_Wrapper2 was also synthesized if any analysis is required to be done with it. To synthesize:  
a) Create the following files  
- block.sdc - In the initial synthesis give 0 period and then based on slack in the timing report (in this it is aes_timing.txt under reports) change the clock period appropriately. After the 2nd synthesis move on to generating traces
```
create_clock -name CLK -period 0 -waveform {0 0} [get_ports CLK]
set_input_delay  0 -clock CLK [all_inputs]
set_output_delay 0  -clock CLK [all_outputs]
set_clock_uncertainty 0 CLK
```
- .synopsys_dc_130.setup - place both the db and the lib file in the same directory and give its path here
```
set search_path [list . /home/surya/]
set link_library {* /home/surya/gscl45nm.db }
set physical_library ""
set target_library {"/home/surya/gscl45nm.db"}
set synthetic_library ""
```
- synth.tcl - I used another folder to store all my verilog codes which is not necessary
```
remove_design -all # removes any previous loaded designs
source .synopsys_dc_130.setup # loads the gate-level models

set myFiles [list verilog_files/mkAES.v verilog_files/mkRconRom.v verilog_files/mkSbox2.v verilog_files/BRAM1.v]; # List of files you want to synthesize
set myTop mkAES; # Top module from among the files in the above list

# Give the names for each of the report file as you wish
analyze -library WORK -format verilog ${myFiles} > reports/aes_report.txt
elaborate ${myTop} -architecture verilog -library DEFAULT >> reports/aes_report.txt
current_design ${myTop} >> reports/aes_report.txt
link

source ./block.sdc
ungroup -all -flatten
set_max_area 0
set_max_delay 0.0 -from [all_inputs] -to [all_outputs]
compile_ultra > reports/aes_compile.txt
report_cell > reports/aes_cell.txt
report_area > reports/aes_area.txt
report_timing > reports/aes_timing.txt
report_power > reports/aes_power.txt
write -hierarchy -format verilog -output mkAES_synthesized.v > reports/aes_write_report.txt
write_sdc aes.sdc > reports/aes_sdc_report.txt
write_parasitics -format reduced aes.spef > reports/aes_spef.txt
exit
```
b) Design compiler - source dc_shell if required and then compile using the following command

	dc_shell -f synth.tcl

**Verilog simulation**:  
Any system function calls inside the verilog code like $display, $finish etc will get removed in the synthesized code. To test the circuit, the top module, mkAES_Wrapper2, was continued to being used. Iverilog and Verilator were used for Verilog simulation. For both, main.v taken from bsc source folder was used for convenience. sample.v contains module definitions of various modules used in the synthesized code.  
a) Iverilog  
```
iverilog main.v mkAES_Wrapper2.v mkAES_synthesized.v sample.v -o iv  
```
(or)
```
make iv
```

b) Verilator

**Computing TVLA score**:
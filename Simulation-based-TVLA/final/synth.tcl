# things to do
# create folder for each benchmark circuit let it be ckt1
# inside ckt1 create folder called reports
# copy these three files .synopsys_dc_130.setup, synth.tcl & block.sdc * Note: verilog file also should be inside ckt1
# rename aes_128 to the name of the random verilog file that is created
# synthesize once with clock at 0 in block.sdc & max_delay 0.0 note the delay value in modulename_timing.txt
# replace clock with magnitude value and set period accordingly and max_delay to the same value and resynthesize
# run using the following command  1. source /tools/setup.sh 2. dc_shell -f synth.tcl


remove_design -all
#removes any previous loaded designs
source .synopsys_dc_130.setup
#loads the gate-level models
set myFiles [list verilog_files/mkAES.v verilog_files/mkRconRom.v verilog_files/mkSbox2.v verilog_files/BRAM1.v]; # replace with verilog files that you want to synthesize
set myTop mkAES; # check the name of the module in the verilog file that you are synthesizing and replace it here
analyze -library WORK -format verilog ${myFiles} > reports/aes_report.txt
#rename aes_128 to file that you are synthesizing
elaborate ${myTop} -architecture verilog -library DEFAULT >> reports/aes_report.txt
#rename aes_128 to file that you are synthesizing
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

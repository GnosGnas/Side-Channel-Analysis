# 
# Synthesis run script generated by Vivado
# 

create_project -in_memory
set_property part xc7k160tfbg676-1 [current_project]
set_param project.compositeFile.enableAutoGeneration 0
set_property constrs_type UCF [current_fileset -constrset]
read_verilog {
  {C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/aes_composite_enc.v}
  {C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/chip_sasebo_giii_aes.v}
  {C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/lbus_if.v}
}
set_property webtalk.parent_dir {C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/sasebo_giii_aes/project_2/project_2.data/wt} [current_project]
set_property parent.project_dir {C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/sasebo_giii_aes/project_2} [current_project]
synth_design -top CHIP_SASEBO_GIII_AES -part xc7k160tfbg676-1
write_checkpoint CHIP_SASEBO_GIII_AES.dcp
report_utilization -file CHIP_SASEBO_GIII_AES_utilization_synth.rpt

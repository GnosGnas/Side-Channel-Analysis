# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
namespace eval ::optrace {
  variable script "/home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.runs/synth_1/Top.tcl"
  variable category "vivado_synth"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
OPTRACE "synth_1" START { ROLLUP_AUTO }
set_param chipscope.maxJobs 3
OPTRACE "Creating in-memory project" START { }
create_project -in_memory -part xc7k160tfbg676-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.cache/wt [current_project]
set_property parent.project_path /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.xpr [current_project]
set_property XPM_LIBRARIES XPM_CDC [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
OPTRACE "Creating in-memory project" END { }
OPTRACE "Adding files" START { }
read_verilog -library xil_defaultlib {
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/BRAM2BELoad.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ClockInverter.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Counter.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO10.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFO2.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/FIFOL1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/MakeReset0.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RegFile.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/ResetEither.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/RevertReg.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SizedFIFO.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SyncFIFO1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/SyncReset0.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/bram_1rw.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkRconRom.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkSoc.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_daisy.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp2.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp3.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp4.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp5.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp6.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mk_csr_grp7.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkbpu.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcombo_mul.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkcsr.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdcache.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkdmem.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_dtlb.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfa_itlb.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfpu.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkfwding.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkicache.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkimem.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkitlb.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkjtagdtm.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmbox.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkmulticycle_alu.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkregisterfile.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkrestoring_div.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscv.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkriscvDebug013.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mksign_dump.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage0.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage1.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage2.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage3.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage4.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/mkstage5.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_address_valid.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_chk_interrupt.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decode_word32.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_decoder_func_32.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_alu.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_csr_op.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_decompress.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_fn_single_div.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_hasCSRPermission.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/module_valid_csr_access.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/signedmul.v
  /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/imports/verilog/Top.v
}
read_ip -quiet /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0.xci
set_property used_in_implementation false [get_files -all /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0.xdc]
set_property used_in_implementation false [get_files -all /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/sources_1/ip/clk_wiz_0/clk_wiz_0_ooc.xdc]

OPTRACE "Adding files" END { }
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc
set_property used_in_implementation false [get_files /home/surya/Desktop/sem_5/Diff-power-analysis/vighnesh/cclass/c-class/fpga/project_2/project_2.srcs/constrs_1/imports/new/constr.xdc]

set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

OPTRACE "synth_design" START { }
synth_design -top Top -part xc7k160tfbg676-1
OPTRACE "synth_design" END { }


OPTRACE "write_checkpoint" START { CHECKPOINT }
# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef Top.dcp
OPTRACE "write_checkpoint" END { }
OPTRACE "synth reports" START { REPORT }
create_report "synth_1_synth_report_utilization_0" "report_utilization -file Top_utilization_synth.rpt -pb Top_utilization_synth.pb"
OPTRACE "synth reports" END { }
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
OPTRACE "synth_1" END { }

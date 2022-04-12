#!/bin/sh
# Vivado(TM)
# compile.sh: Vivado-generated Script for launching XSim application
# Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.
# 
if [ -z "$PATH" ]; then
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:C:/Xilinx/14.3/ISE_DS/EDK/bin/nt64;C:/Xilinx/14.3/ISE_DS/EDK/lib/nt64;C:/Xilinx/14.3/ISE_DS/ISE/bin/nt64;C:/Xilinx/14.3/ISE_DS/ISE/lib/nt64;C:/Xilinx/14.3/ISE_DS/common/bin/nt64;C:/Xilinx/14.3/ISE_DS/common/lib/nt64
else
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:C:/Xilinx/14.3/ISE_DS/EDK/bin/nt64;C:/Xilinx/14.3/ISE_DS/EDK/lib/nt64;C:/Xilinx/14.3/ISE_DS/ISE/bin/nt64;C:/Xilinx/14.3/ISE_DS/ISE/lib/nt64;C:/Xilinx/14.3/ISE_DS/common/bin/nt64;C:/Xilinx/14.3/ISE_DS/common/lib/nt64:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=:
else
  LD_LIBRARY_PATH=::$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

#
# Setup env for Xilinx simulation libraries
#
XILINX_PLANAHEAD=C:/Xilinx/14.3/ISE_DS/PlanAhead
export XILINX_PLANAHEAD
ExecStep()
{
   "$@"
   RETVAL=$?
   if [ $RETVAL -ne 0 ]
   then
       exit $RETVAL
   fi
}
XELAB_1="C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/sasebo_giii_aes/project_2/project_2.sim/sim_1/behav/unknown.prj"

ExecStep xelab -m64 --incremental --debug typical --O2 --relax --mt auto -L work -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L secureip --snapshot unknown_behav --prj "$XELAB_1"   work.unknown   work.glbl

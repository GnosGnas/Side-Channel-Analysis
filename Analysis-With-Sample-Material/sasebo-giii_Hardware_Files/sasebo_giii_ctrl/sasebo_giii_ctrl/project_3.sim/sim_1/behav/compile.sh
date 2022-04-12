#!/bin/sh
# Vivado(TM)
# compile.sh: Vivado-generated Script for launching XSim application
# Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.
# 
if [ -z "$PATH" ]; then
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:C:/Xilinx/14.3/ISE_DS/EDK/bin/nt;C:/Xilinx/14.3/ISE_DS/EDK/lib/nt;C:/Xilinx/14.3/ISE_DS/ISE/bin/nt;C:/Xilinx/14.3/ISE_DS/ISE/lib/nt;C:/Xilinx/14.3/ISE_DS/common/bin/nt;C:/Xilinx/14.3/ISE_DS/common/lib/nt
else
  PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%:C:/Xilinx/14.3/ISE_DS/EDK/bin/nt;C:/Xilinx/14.3/ISE_DS/EDK/lib/nt;C:/Xilinx/14.3/ISE_DS/ISE/bin/nt;C:/Xilinx/14.3/ISE_DS/ISE/lib/nt;C:/Xilinx/14.3/ISE_DS/common/bin/nt;C:/Xilinx/14.3/ISE_DS/common/lib/nt:$PATH
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

ExecStep xelab -m32 --incremental --debug typical --O2 --relax --mt auto -L work -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L secureip --snapshot unknown_behav --prj C:/Arsath/sasebo_giii/sasebo_giii_aes/sasebo_giii_aes/project_1.sim/sim_1/behav/unknown.prj   work.unknown   work.glbl

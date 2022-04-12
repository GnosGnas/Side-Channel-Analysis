@echo off
rem  Vivado(TM)
rem  compile.bat: a Vivado-generated XSim simulation Script
rem  Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.

set PATH=%XILINX%\lib\%PLATFORM%;%XILINX%\bin\%PLATFORM%;C:/Xilinx/14.3/ISE_DS/EDK/bin/nt64;C:/Xilinx/14.3/ISE_DS/EDK/lib/nt64;C:/Xilinx/14.3/ISE_DS/ISE/bin/nt64;C:/Xilinx/14.3/ISE_DS/ISE/lib/nt64;C:/Xilinx/14.3/ISE_DS/common/bin/nt64;C:/Xilinx/14.3/ISE_DS/common/lib/nt64;C:/Xilinx/Vivado/2012.3/bin;%PATH%
set XILINX_PLANAHEAD=C:/Xilinx/14.3/ISE_DS/PlanAhead

xelab -m64 --incremental --debug typical --O2 --relax --mt auto -L work -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L secureip --snapshot unknown_behav --prj "C:/Users/netlab/Google Drive/Arsath_PC/sasebo_giii/sasebo_giii_aes/sasebo_giii_aes/project_2/project_2.sim/sim_1/behav/unknown.prj"   work.unknown   work.glbl
if errorlevel 1 (
   cmd /c exit /b %errorlevel%
)

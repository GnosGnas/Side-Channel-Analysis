#create_clock -period 5.000 -name CLK_P -waveform {0.000 2.500} -add [get_ports CLK_P]
# Commented by Arsath on 28 Aug 2017 #
#set_property -dict {PACKAGE_PIN E3 IOSTANDARD LVCMOS33} [get_ports CLK]
set_property -dict {PACKAGE_PIN AA3 IOSTANDARD LVDS} [get_ports CLK_P] 

#create_clock -period 5.000 -name CLK_N -waveform {0.000 2.500} -add [get_ports CLK_N]
# Commented by Arsath on 28 Aug 2017 #
#set_property -dict {PACKAGE_PIN E3 IOSTANDARD LVCMOS33} [get_ports CLK]
set_property -dict {PACKAGE_PIN AA2 IOSTANDARD LVDS} [get_ports CLK_N]

#UART
#set_property -dict {PACKAGE_PIN C4 IOSTANDARD LVCMOS33} [get_ports sin_in]
#set_property -dict {PACKAGE_PIN D4 IOSTANDARD LVCMOS33} [get_ports sout]
#set_property -dict { PACKAGE_PIN D3    IOSTANDARD LVCMOS33 } [get_ports { cts }]; #IO_L12N_T1_MRCC_35 Sch=uart_cts
#set_property -dict { PACKAGE_PIN E5    IOSTANDARD LVCMOS33 } [get_ports { rts }]; #IO_L5N_T0_AD13N_35 Sch=uart_rts
# Added by Arsath on 28 Aug 2017 #
#set_property -dict {PACKAGE_PIN T22 IOSTANDARD LVCMOS25} [get_ports sin_in]
#set_property -dict {PACKAGE_PIN M24 IOSTANDARD LVCMOS25} [get_ports sout]


#RESET

# Commented by Arsath on 28 Aug 2017 #
#set_property -dict {PACKAGE_PIN U8 IOSTANDARD LVCMOS33} [get_ports RST_N]
set_property -dict {PACKAGE_PIN L23 IOSTANDARD LVCMOS25} [get_ports RST_N]
 
#set_property BITSTREAM.CONFIG.SPI_32BIT_ADDR YES [current_design]
#set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]
set_property BITSTREAM.General.UnconstrainedPins {Allow} [current_design]
write_bitstream  /home/rise/cclass_cache_latest2/cclass_cache_latest.runs/impl_1/Top.bit

#GPIO
#set_property -dict {PACKAGE_PIN D19 IOSTANDARD LVCMOS25} [get_ports sin_in]
#set_property -dict {PACKAGE_PIN N17 IOSTANDARD LVCMOS25} [get_ports sout]
set_property -dict {PACKAGE_PIN N17 IOSTANDARD LVCMOS25} [get_ports sin_in]
set_property -dict {PACKAGE_PIN N16 IOSTANDARD LVCMOS25} [get_ports sout]
#set_property -dict {PACKAGE_PIN P24 IOSTANDARD LVCMOS25} [get_ports gpio0]
set_property -dict {PACKAGE_PIN E23 IOSTANDARD LVCMOS25} [get_ports gpio0]
#Clock Reference Pin
set_property -dict {PACKAGE_PIN D19 IOSTANDARD LVCMOS25} [get_ports observe_clock]

#LED
#set_property -dict {PACKAGE_PIN H12 IOSTANDARD=LVCMOS25} [get_ports val]


#QSPI Flash
#set_property -dict { PACKAGE_PIN K17   IOSTANDARD LVCMOS33 } [get_ports { sio0 }]; #IO_L1P_T0_D00_MOSI_14 Sch=qspi_dq[0]
#set_property -dict { PACKAGE_PIN K18   IOSTANDARD LVCMOS33 } [get_ports { sio1 }]; #IO_L1N_T0_D01_DIN_14 Sch=qspi_dq[1]
#set_property -dict { PACKAGE_PIN L14   IOSTANDARD LVCMOS33 } [get_ports { sio2 }]; #IO_L2P_T0_D02_14 Sch=qspi_dq[2]
#set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { sio3 }]; #IO_L2N_T0_D03_14 Sch=qspi_dq[3]
#set_property -dict { PACKAGE_PIN L13   IOSTANDARD LVCMOS33 } [get_ports { qspi0_ncs }]; #IO_L6P_T0_FCS_B_14 Sch=qspi_csn

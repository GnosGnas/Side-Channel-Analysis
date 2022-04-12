# Author: Surya Prasad S
# Title: MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator
# Main reference: Arsath's constraint file


## Clock configuration
### Default settings were instead used (with clk_wizard)
#create_clock -period 5.000 -name CLK_P -waveform {0.000 2.500} -add [get_ports CLK_P]
set_property -dict {PACKAGE_PIN AA3 IOSTANDARD LVDS} [get_ports CLK_P] 
#create_clock -period 5.000 -name CLK_N -waveform {0.000 2.500} -add [get_ports CLK_N]
set_property -dict {PACKAGE_PIN AA2 IOSTANDARD LVDS} [get_ports CLK_N]


## RESET configuration
set_property -dict {PACKAGE_PIN L23 IOSTANDARD LVCMOS25} [get_ports RST_N]


## GPIO configuration
### These are the mappings of some of the pins on the SASEBO-GIII board
### CN8.1 - D19    CN8.2 - N17   CN8.3 - N16  CN8.4 - P24   CN8.5 - E23  
### E23 is used for giving the trigger signal
set_property -dict {PACKAGE_PIN E23 IOSTANDARD LVCMOS25} [get_ports gpio0]
set_property -dict {PACKAGE_PIN N17 IOSTANDARD LVCMOS25} [get_ports gpio1]
set_property -dict {PACKAGE_PIN P24 IOSTANDARD LVCMOS25} [get_ports gpio2]


# General configuration
set_property BITSTREAM.General.UnconstrainedPins {Allow} [current_design]

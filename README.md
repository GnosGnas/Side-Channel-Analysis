# Side-Channel-Analysis
####// More updates to be added

### Aim of the project:
To evaluate Shakti's AES accelerators using *Test Vector Leakage Assessment*. Other experiments were also performed and are part of this repository. The project related work can be found in Emulation-based-TVLA/AES-with-wrapper.

## Overview of SASEBO-GIII Board: 
The SASEBO-GIII is a successor of SASEBO-GII board, and is for further side-channel attack experimentation. 
The board has Xilinx 28-nm Kintex-7 FPGA device, which enables advanced measurement with on-the-edge 
technology. The basic features of SASEBO-GIII are as follows: 
* 200 mm x 150 mm x 1.6mm, FR-4, eight layers. 
* Two Xilinx FPGAs 
  * Cryptographic FPGA: Kintex-7 XC7K160T-1FBGC (Flat Ball Grid) (xc7k160tfbg676-1)
  * Control FPGA: Spartan-6 XC6LX45-2FGG484C 
* 1 Gigabit DDR3 SDRAM. 
* External power source supplies the on-board power regulators and the FPGAs with 5.0 V. 
* Shunt resistor is provided to insert on the core VDD line of the cryptographic FPGA for measuring power 
traces. 
* The host PC controls and communicates with the board via the USB port. 
* The FPGA is default programmed with the vendor's Bit file. 

### Specification:
![image](https://user-images.githubusercontent.com/69968227/136505278-aae660c9-397a-4c25-84fd-507dcb325878.png)
![image](https://user-images.githubusercontent.com/69968227/136505351-400df3ef-f637-4bcb-abe9-0f9977b3ccd0.png)

Relevant ports of the FPGAs: 


![image](https://user-images.githubusercontent.com/69968227/136505868-284df612-8e33-4907-b8f2-ff7cbb8b35a4.png)
![image](https://user-images.githubusercontent.com/69968227/136506905-b44b3257-adab-445b-acb2-3016ce0fb018.png)
![image](https://user-images.githubusercontent.com/69968227/136507019-d0b51549-18e8-4235-b356-041545db20c1.png)
![image](https://user-images.githubusercontent.com/69968227/136507161-70f0c0dd-2e89-49ea-9d56-5fa113b71583.png)

### Simple constraint file:
```
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
```
## Contents of this repository:
1. sasebo_giii files provided by the vendor, Sakura, at https://satoh.cs.uec.ac.jp/SAKURA/hardware/SAKURA-X.html 
2. Differential Power Analysis
3. Simulation based TVLA for AES implementations
4. Hardware (emulation) based TVLA for AES implementations


## AES algo for both encryption and decryption:
http://www.cs.columbia.edu/~sedwards/classes/2008/4840/reports/AES.pdf

## Cheatsheet
![image](https://user-images.githubusercontent.com/69968227/137715095-c2adbb85-c0c9-4c8b-b8ac-0464e0d76cb2.png)

https://towardsdatascience.com/stop-using-csvs-for-storage-pickle-is-an-80-times-faster-alternative-832041bbc199

https://www.rambus.com/wp-content/uploads/2015/08/TVLA-DTR-with-AES.pdf

# Differential-Power-Analysis

## Overview of SASEBO-GIII Board: 
The SASEBO-GIII is a successor of SASEBO-GII board, and is for further side-channel attack experimentation. 
The board has Xilinx 28-nm Kintex-7 FPGA device, which enables advanced measurement with on-the-edge 
technology. The basic features of SASEBO-GIII are as follows: 
* 200 mm x 150 mm x 1.6mm, FR-4, eight layers. 
* Two Xilinx FPGAs 
  * Cryptographic FPGA: Kintex-7 XC7K160T-1FBGC (xc7k160tfbg676-1)
  * Control FPGA: Spartan-6 XC6LX45-2FGG484C 
* 1 Gigabit DDR3 SDRAM. 
* External power source supplies the on-board power regulators and the FPGAs with 5.0 V. 
* Shunt resistor is provided to insert on the core VDD line of the cryptographic FPGA for measuring power 
traces. 
* The host PC controls and communicates with the board via the USB port. 

## Specification:
![image](https://user-images.githubusercontent.com/69968227/136505278-aae660c9-397a-4c25-84fd-507dcb325878.png)
![image](https://user-images.githubusercontent.com/69968227/136505351-400df3ef-f637-4bcb-abe9-0f9977b3ccd0.png)

Relevant ports of the FPGAs: 


![image](https://user-images.githubusercontent.com/69968227/136505868-284df612-8e33-4907-b8f2-ff7cbb8b35a4.png)
![image](https://user-images.githubusercontent.com/69968227/136506905-b44b3257-adab-445b-acb2-3016ce0fb018.png)
![image](https://user-images.githubusercontent.com/69968227/136507019-d0b51549-18e8-4235-b356-041545db20c1.png)
![image](https://user-images.githubusercontent.com/69968227/136507161-70f0c0dd-2e89-49ea-9d56-5fa113b71583.png)

## Simple constraint file:
```
create_clock -period 5.000 -name clk -waveform {0.000 2.500} -add [get_ports clk]
set_property -dict {PACKAGE_PIN J8 IOSTANDARD LVCMOS33} [get_ports clk]
# The above pin didnt work..............
# L23 is the push button
set_property -dict {PACKAGE_PIN L23 IOSTANDARD LVCMOS25} [get_ports reset]

# H12 is for LED9
set_property -dict {PACKAGE_PIN H12 IOSTANDARD LVCMOS25} [get_ports done]
```

## AES algo for both encryption and decryption:
http://www.cs.columbia.edu/~sedwards/classes/2008/4840/reports/AES.pdf

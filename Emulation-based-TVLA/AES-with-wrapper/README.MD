# Mini-Project: Side-channel Evaluation of Shakti's AES accelerators

## Introduction
Advanced Encryption Standard, or AES, is a popular symmetric algorithm for encryption. It has been a replacement for DES algorithm which failed to protect data due to its small key. The features of AES are as follows:
- Symmetric key symmetric block cipher
- 128-bit data, 128/192/256-bit keys
- Stronger and faster than Triple-DES
AES is an iterative algorithm and number of rounds of a process is determined by the length of the Key.

Side-channel attacks started becoming more viable as compared to exhaustive search and one of the attacks proven to be fatal are power analysis attacks. Non-invasive attacks like SPA and DPA are particularly dangerous as they can be easily reproduced and scaled. So, enter Test Vector Leakage Assessment Methodology (TVLA), a popular side-channel testing methodology recommended by NIST as it can detect power leakages at any time of the operation irrespective of whether an attack can be successfully performed or not with that leakage. 

TVLA aims to provide detection of information leakage using statistical analysis. The aim of this project is to evaluate the vulnerability of Shakti's AES accelerators which can be integrated with the Shakti C-Class processor.

////ADD image here for TVLA

## Side-channel evaluation methodology
The procedure followed here is for non-specific TVLA test on an FPGA.
1. **Make a wrapper module for the accelerators to feed the inputs**:  
	If the target hardware is a processor, then no such wrapper module is required and an appropriate C-code can be used to feed the inputs. In the wrapper module, inputs for processing are given along with the trigger. Ideally, there should not be any other process during the targetted process so that the TVLA test gives more accurate conclusion. Example of such a process would be storing of the output into registers which should be done outside the trigger.
2. **Configuring the module for the FPGA**:  
	This is very important as for side-channel evaluation custom FPGA boards are used. A Top module above the wrapper module was required in our setup to map the appropriate ports to the pins and to convert the different clock to single-ended clock.
3. **Configuring the oscilloscope**:  
	The oscilloscope needs to be configured for collecting trigger and power consumption values. We also have to configure the resolution and sampling rate per trigger. Remote setup would be beneficial.
4. **Program the FPGA**:  
	For programming, we used Xilinx Vivado 2020.1. Use a tool which has the given FPGA's configuration files and required features. It is suggested to add probes so that the user can keep track by remotely monitoring the computer.
5. **Collect the traces and evaluate the TVLA score**:  
	While moving files from one device to another, zip the files to prevent any data loss. Reduction parallelism can be used to speed up the computation of TVLA score (maximum t-value). It is also suggested to collect traces couple of times due to physical randomness and possibility of false or missing triggers.

## More about TVLA:
The reasons for its popularity are as follows:  
1. Reproducible results and reasonable conditions of testing
2. User controlled test vector suite with updates
3. Ease of testing and low cost in terms of time and resources
4. No need for exceptional operator skills or specialised hardware.

TVLA uses Welch's t-test, a PASS/FAIL test that checks if t-value crosses a predefined threshold (proposed as ±4.5).It is to be noted that this is not sufficient to objectively tell that the device leaks data, which can
be confirmed only by performing side-channel attacks. More details can be found in the report.  
T-value is given by, $$t=\frac{\mu_A - \mu_B}{\sqrt{\frac{\sigma_A^{2}}{n_A}+\frac{\sigma_B^{2}}{n_B}}}.$$
where A and B correspond to the fixed and random dataset.

## 







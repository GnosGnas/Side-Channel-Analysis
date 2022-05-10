# Mini-Project: Side-channel Evaluation of Shakti's AES accelerators

This directory contains tested codes for side-channel evaluation. Details about the process and setup can be found in the report as well.

## Contents of this repository
1. Normal_AES - source codes for typical AES accelerator
2. Threshold AES - source codes for threshold AES accelerator
3. Report - Contains report and associated files

### Normal AES
This directory contains the files related to typical AES accelerator. Four configurations are possible:
1. Typical AES accelerator with LUT based S-box using Wrapper1
2. Typical AES accelerator with Composite S-box using Wrapper1
3. Typical AES accelerator with LUT based S-box using Wrapper2
4. Typical AES accelerator with Composite S-box using Wrapper2

These four configurations have been evaluated and results can be found in the report. Wrapper1 and Wrapper2 are modules which feed the inputs to the accelerator and also set the trigger. 

**Wrapper1**  
![wrapper1](https://user-images.githubusercontent.com/69968227/167641091-8f899617-a3a2-4aef-b546-2413d8e65d52.png)  
**Wrapper2**  
![wrapper2](https://user-images.githubusercontent.com/69968227/167641171-68bee5cc-a1ba-4b22-8233-73e163d802c8.jpg)  

### Threshold AES
This directory contains the files related to Threshold Implementation of AES accelerator. Here only the wrapper module can be configured between Wrapper1 and Wrapper2. For this project, we evaluated the accelerator directly using Wrapper2 as it performed better than Wrapper1 from our previous analysis of Normal AES implementation. Results of the evaluation can be found in the report.

##
Normal and Threshold implementation differs in two parts. Normal uses 16 S-boxes in parallel while Threshold uses only 1 S-box. Threshold implementation consumes more resources and also more clock cycles compared to the Normal implementation but is far more secure. The TVLA score was found to cross the threshold only for large number of traces of above 1 lakh for the threshold impelementation while it crossed the threshold after 50K traces itself for the normal implementation. 

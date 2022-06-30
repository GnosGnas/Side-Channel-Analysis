

Contents of this directory:
1. aes-20k-traces: Folder which contains 20K traces which were got by running the sample material's bit file. To use the DPA attack codes, a copy of the scripts need to be kept along with the traces inside a folder like this.
2. MATLAB-codes: The codes in this directory were originally authored by Muhammad Arsath K F.  
a) aes-cipher-internals.xlsx: Excel sheet to see output of various stages of AES encryption.
b) DPA_Attack.m: Matlab code to analyse traces and fetch the fixed key using DPA attack with Hamming weights
c) InvSboxDec_1D.mat: Code to compute S-box transformation
3. Difference-of-Mean: Python script to perform DOM attack

	**Note**: The matlab code is not optimised to run on small RAMs. Minimum RAM required to run 20K traces is 24GB.
3. DPA_AES.py: Python code to perform DPA attack and generate correlation matrix. This code was originally authored by Vikash. 


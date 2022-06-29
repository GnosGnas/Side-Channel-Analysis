# README for DOM attacks (Difference of Mean)

This is one type of DPA attack.
The code was used for Shakti's LUT based S-box AES accelerator.

## Steps involved:
 - Modify the Wrapper file in this repository used for TVLA (found in Emulated based TVLA under AES with Wrapper) such that only random inputs are fed and the key is fixed.
 - Analyse the code and display the plaintext and key being fed into the accelerator. The plaintexts need to be stored in a separate file to be used later. (I simply displayed the values appropriately and used ubuntu's script :p)
 - Use the plaintexts in the attack and check if the predicted key matches with the actual key.

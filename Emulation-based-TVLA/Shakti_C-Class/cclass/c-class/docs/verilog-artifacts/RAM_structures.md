# RAM structures in SHAKTI

This document describes in detail how various RAM based structures are used within the shakti-designs (specifically the C-class processor). The doc also highlights the differences for porting the same structures to ASIC or FPGAs.

# Contents
[TOC]

# Overview

The caches used in the C-class core (instruction and data both), use a single-ported RAM instance (1RW), i.e. one port to perform either a read or a write.

The branch predictors ,however, depending on the choice at compile time may or may not use RAMs. For specific instances, the RAMs used are dual-ported (1R + 1W) i.e. a dedicated port to read and another dedicated port to write. 

# Functionality
## Single-Ported RAMs (1RW)

### - Module Name: bram_1rw
### - Verilog source: [bram_1rw.v](https://gitlab.com/shaktiproject/common_verilog/blob/master/bram_1rw.v)
### - Port Descriptions:
| Port Name | Direction | Description |
|-----------|-----------|-------------|
| clka        | input     | Clock signal. Operations are performed at the positive edge of the clock.  |
| ena         | input     | When high indicates the port is being used|
| wea         | input     | When high indicates a write operation is being performed.|
| addr        | input     | Indicates the address for read/write|
| dina        | Input     | Indicates the data for write operations|
| douta       | output    | Holds the data for a read operation |
 
 
### - Instantiation Parameters:
| Parameter Name | Description |
|----------------| ------------|
| DATA_WIDTH     | Width of `dina` and `douta` ports. |
| ADDR_WIDTH     | Width of `addra` port. |
| MEMSIZE        | Depth of the RAM. |

The size of the instantiated RAM will be `MEMSIZE x DATA_WIDTH` bits where the number of indices is equal to `MEMSIZE` and the number of bits at each index is equal to `DATA_WIDTH`.

### - Read Operation
The address is written onto the `addr` port, and the `ena` signal is driven high. In the next positive edge, `douta` port will hold the data. Therefore, the read operations have a one cycle latency. Also, a new address can be given at every cycle (whose output will be obtained in the subsequent cycle).

### - Write Operation
The address is written onto the `addr` port, data to be written is driven on the *dina* port, and, `ena` and `wea` signals are asserted. At the next positive edge of clock the value at `dina` is written onto the address `addr`. Also, a new write operation can be initiated at every clock edge.

### - Note:
1. The single-ported rams follow a `no-change` model, where the output `douta` remains unchanged on write-operations and will always hold the data of the previous read operation.
2. The single-ported rams assume the outputs are registered for reads.

## Dual-Ported RAMs (1R + 1W)

### - Module Name: bram_1r1w
### - Verilog source: [bram_1r1w.v](https://gitlab.com/shaktiproject/common_verilog/blob/master/bram_1r1w.v)

### - Ports
| Port Name | Direction | Description |
|-----------|-----------|-------------|
| clka   | Input    | Clock signal for port A. Operations are performed at the positive edge of the clock.   |
| ena    | Input    | Enable signal for port A. When high, indicates that the port is being used for write. |
| wea    | Input    | Write enable for port A. When high, indicates that a write operation is being performed. |
| addra  | Input    | Index address for port A that indicates the address for write |
| dina   | Input    | Indicates the data for write operations |
| clkb   | Input    | Clock signal for port B. Operations are performed at the positive edge of the clock.   |
| enb    | Input    | Enable signal for port B. When high, indicates that the port is being used for read. |
| addrb  | Input    | Index address for port B that indicates the address for read |
| doutb  | Output   | Holds the data for a read operation |

#### - Instantiation Parameters
| Parameter Name | Description |
|----------------| ------------|
| DATA_WIDTH     | Width of `dina` and `douta` ports. |
| ADDR_WIDTH     | Width of `addra` and `addrb` ports. |
| MEMSIZE        | Depth of the RAM. |

The size of the instantiated BRAM will be MEMSIZE x DATA_WIDTH bits where the number of indices is equal to MEMSIZE and the number of bits at each index is equal to DATA_WIDTH.

### - Read Operation
Port-B is used for performing reads. The address is written onto the `addrb` port, and the `enb` signal is driven high. In the next cycle, `doutb` port will hold the data. Therefore, the read operations have a one cycle latency. Also, a new address can be given at every cycle (whose output will be obtained in the subsequent cycle).

### - Write Operation
Port-A is used for writes. The address is written onto the `addra` port, data to be written is driven on the `dina` port, and, `ena` and `wea` signals are asserted. At the next positive edge of clock the value at `dina` is written onto the address `addra`. Also, a new write operation can be initiated at every clock edge.

### - Read Write Conflicts
In case of a read and write occurring to the same `address` at the same time, the writes are guaranteed while the reads need __not__ be.

### - Note
1. Here port A is used for write, and port B is used for read operations. Also, the various enable and write enable signals are active high signals.
2. The dual-ported rams assume the outputs are registered for reads.

# Synthesis
## Mapping to FPGAs

The single-ported RAMs (1RW) used in the caches are directly mapped to the true-single ported BRAMs provided by xilinx.

The dual-ported RAMs (1R + 1W) used in branch predictors are directly mapped to true-dual ported RAMs provided by Xilinx. Since the true-dual ported RAMs from xilinx provide a (1RW + 1RW) configuration, our dual-ported instances ensure that portA is used for writes and portB is used only for reads (by ensuring wea port is held low always)

 The `* RAM_STYLE = "BLOCK" *` pragma in the verilog source makes it easy for Vivado to infer these as BRAMs and thus no edits are required in the source file.
 
## Mapping to ASICs

For mapping to ASICs, the user has to replace the files `bram_1rw` and `bram_1r1w` with respective instances for SRAM modules which meet the same functionality as described above.

In case where SRAM cells of the same size as that of the instantiations are not avaialable, it is the onus of the user to bank/combine available SRAMs cells into a top-module which has the same functionality as `bram_1r1w` or `bram_1rw`. 

If an SRAM cell has extra ports than the ones required in this document, the user is required to ensure they are driven accordingly to maintain the same functionality as described in this document.

Additionally, if a parameterized instance of the SRAMs can be developed by the user, its the user's responsibility to manually replace each instance of the RAM's in the design. For the c-class the instances are defined below:


# C-Class Specific instances of RAMs.

The size and configuration of the RAMs instantiated in the design can be controlled at the BSV level at compile time using the configuration file : `core_config.inc`

## Instruction Cache:

#### - For Data Array
* instance path: `mkicache/data_arr_* `
* Total number of 1RW instances : `IDBANKS x IWAYS`
* `DATA_WIDTH` per instance: `(IWORDS x 8 x IBLOCKS)/ IDBANKS`
* `MEM_SIZE` per instance: `ISETS`
* `ADDR_WIDTH` per instance: `Log(ISETS)`

#### - For Tag Array
* instance path: `mkicache/tag_arr_* `
* Total number of 1RW instances : `ITBANKS x IWAYS`
* `DATA_WIDTH` per instance: `PADDR - (Log(IWORDS) + Log(IBLOCKS) + Log(ISETS)) )/ITBANKS`
* `MEM_SIZE` per instance: `ISETS`
* `ADDR_WIDTH` per instance: `Log(ISETS)`

## Data Cache:

#### - For Data Array
* instance path: `mkdcache/data_arr_* `
* Total number of 1RW instances : `DDBANKS x DWAYS`
* `DATA_WIDTH` per instance: `(DWORDS x 8 x DBLOCKS)/ IDBANKS`
* `MEM_SIZE` per instance: `DSETS`
* `ADDR_WIDTH` per instance: `Log(DSETS)`

#### - For Tag Array
* instance path: `mkdcache/tag_arr_* `
* Total number of 1RW instances : `DTBANKS x DWAYS`
* `DATA_WIDTH` per instance: `PADDR - (Log(DWORDS) + Log(DBLOCKS) + Log(DSETS)) )/DTBANKS`
* `MEM_SIZE` per instance: `DSETS`
* `ADDR_WIDTH` per instance: `Log(DSETS)`

## Branch Predictors
RAMs will not be instantiated if the `PREDICTOR` option in core_config is set to `gshare_fa`. RAM instances for other values are described below:


#### - With compressed support:
* Total number of 1R+1W instances : 2
* `DATA_WIDTH` per instance: `(VADDR - Log(BTBDEPTH)) + VADDR + 4`
* `MEM_SIZE` per instance: `BTBDEPTH/2`
* `ADDR_WIDTH` per instance: `Log(BTBDEPTH/2)`
* __NOTE__: One instance will have `DATA_WIDTH + 1` bits.

#### - Without compressed support:
* Total number of 1R+1W instances : 1
* `DATA_WIDTH` per instance: `(VADDR - Log(BTBDEPTH)) + VADDR + 3`
* `MEM_SIZE` per instance: `BTBDEPTH`
* `ADDR_WIDTH` per instance: `Log(BTBDEPTH)`

## Quick Look-up:
For a quick reference of all 1RW instances do the following in the verilog release:
```
grep "bram_1rw #" mk*cache.v -A2
```

For 1R + 1W:

```
grep "bram_1r1w #" mkbpu.v -A2
```

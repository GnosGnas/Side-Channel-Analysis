# Benchmarking the Core

The max DMIPS of the C-class core is **1.72DMIPs/MHz.**

The C-class core is highly configurable and thus requires a specific kind of tuning to achieve the maximum performance. This document will highlight some of the settings and their respective benchmark numbers.

## Contents
- [Benchmarking the Core](#benchmarking-the-core)
  * [Benchmarking Dhrystone](#benchmarking-dhrystone)
    + [Without Compressed support](#without-compressed-support)
      - [--- Config1: GShare (Fully associative)](#----config1--gshare--fully-associative-)
      - [--- Config2: GShare (Direct Mapped)](#----config2--gshare--direct-mapped-)
      - [--- Config3: Bimodal](#----config3--bimodal)
    + [With Compressed Support](#with-compressed-support)
      - [--- Config4: GShare (Fully associative)](#----config4--gshare--fully-associative-)
      - [--- Config5: GShare (Direct-Mapped)](#----config5--gshare--direct-mapped-)
      - [--- Config6: Bimodal](#----config6--bimodal)
    + [Why Compressed reduces performance?](#why-compressed-reduces-performance-)
  * [Benchmarking CoreMarks](#benchmarking-coremarks-)

## Benchmarking Dhrystone
The dhrystone benchmark has been compiled using the following opts:
```
riscv64-unknown-elf-gcc -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -fno-common -fno-builtin-printf -w -march=$(ISA)
```
Where the ISA variable depends on the config as described below for each case.

### Without Compressed support
Dhrystone is compiled with ``` -march=rv64im``` .

#### --- Config1: GShare (Fully associative)
The DMIPs for this config is : **1.72 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=gshare_fa
BTBDEPTH=32
BHTDEPTH=256
HISTLEN=8
RASDEPTH=8
```

#### --- Config2: GShare (Direct Mapped)
The DMIPs for this config is : **1.72 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=gshare
BTBDEPTH=256
BHTDEPTH=64
HISTLEN=8
RASDEPTH=8 
RASTAGDEPTH=64
```

#### --- Config3: Bimodal 
The DMIPs for this config is : **1.70 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```
with ```BTBDEPTH=256```, DMIPs = **1.66 DMIPs/MHz** with rest of the config being the same.

### With Compressed Support

#### --- Config4: GShare (Fully associative)
Dhrystone compiled with `march = rv64imc` and run on c-class with the following config will give a dmips of: **1.70 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare_fa
BHTDEPTH=128
HISTLEN=7
BTBDEPTH=32
RASDEPTH=8
```

Dhrystone compiled with `march = rv64im` and run on c-class with the following config will give a dmips of: **1.72 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare_fa
BHTDEPTH=256
HISTLEN=8
BTBDEPTH=32
RASDEPTH=8
```
#### --- Config5: GShare (Direct-Mapped)
Dhrystone compiled with `march = rv64imc` and run on c-class with the following config will give a dmips of: **1.70 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare
BTBDEPTH=512
BHTDEPTH=128
HISTLEN=7
RASDEPTH=8
RASTAGDEPTH=128
```

Dhrystone compiled with `march = rv64im` and run on c-class with the following config will give a dmips of: **1.70 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare
BTBDEPTH=512
BHTDEPTH=64
HISTLEN=8
RASDEPTH=8
RASTAGDEPTH=128
```

#### --- Config6: Bimodal
Dhrystone compiled with `march = rv64imc` and run on c-class with the following config will give a dmips of: **1.67 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```

Dhrystone compiled with `march = rv64im` and run on c-class with the following config will give a dmips of: **1.66 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```

### Why Compressed reduces performance?

If you have observed the numbers above, it is evident that for the same configuration of the branch-predictor compressed provides a slight reduction in the performance of DMIPs. 
This is because how the fetch-stage (stage1) has been designed. 

The fetch stage always expects the I$ to respond with a 32-bit word which is 4-byte aligned. Since it is possible that the 32-bit word can hold upto 2 16-bit compressed instructions the predictor also always presents 2 predictions one for `pc` and one for `pc+2`. 
While analysing the 32-bit word from the I$ the following scenarios can occur:

* **Case-1**: entire word is a 32-bit instruction. In this case the entire word and the prediction for `pc` is sent to the decode stage.
* **Case-2**: word contains 2 16-bit instructions. in this case in the first cycle the lower 16-bits of the word and prediction of `pc` is sent to the decode stage. In the next cycle the upper 16-bits and prediction of `pc+2` is sent to the decode stage.
* **Case-3**: lower 16-bits need to be concatenated with the upper 16-bits of the previous I$ response. in this case the a new 32-bit instruction is formed and the prediction of the previous response is sent to the decode stage.
* **Case-4**" Only the upper 16-bits of the I$ needs to be analysed. If the upper 16-bits are compressed then the same and prediction of `pc+2` is sent to the decode stage. If however, the upper 16-bits are the lower part of a 32-bit instruction, then we need to wait for the next I$ response and use the Case-3 scheme then. Now one can land in this case, when there is jump to a 32-bit instruction placed at a 2-byte buondary.

Now that we understand how the fetch-stage works, assume that all the dhrystone code fits within the I$ (i.e. no misses) and predictor is also well trained to provide all correct-predictions. Consider the following sequence from dhrystone:

```
...
8000106e: 0x00001797            auipc a5,0x1
...
...
...
800010d8: 0xf97ff0ef            jal ra,8000106e
...
```

Now each time the `jal` instruction is executed the fetch-stage enters into case-4 where the upper 16-bits of the 32-bit word at `8000106c` is the lower part of a 32-bit instruction starting at `0x8000106e` and thus lead to a single-cycle stall in sending the `auipc` instruction into the decode stage. 

Since in dhrystone the above kind of sequence occurs for 3 scenarios in each iteration, and thus there is always a single-cycle delay for each scenario - hence the reduced performance for compressed support.

## Benchmarking CoreMarks
Coming Soon !!
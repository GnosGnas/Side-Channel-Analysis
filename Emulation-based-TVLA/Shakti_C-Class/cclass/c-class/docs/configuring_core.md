# Configuring the Core

The C-class is a highly-configurable core. Almost all the configurable hooks can be controlled buy the variables defined in the `soc-config.inc` file (yes yes .. it will be renamed as core-config).



  * [Configuring the ISA](#configuring-the-isa)
  * [Configuring the M-Extension](#configuring-the-m-extension)
  * [Configuring the Simulation Environment](#configuring-the-simulation-environment)
  * [Configuring the Branch Predictor](#configuring-the-branch-predictor)
  * [Configuring the Instruction Cache](#configuring-the-instruction-cache)
  * [Configuring the Instruction Cache](#configuring-the-instruction-cache-1)
  * [Configuring Physical Memory Protection.](#configuring-physical-memory-protection)
  * [Configuring Debugger and Triggers](#configuring-debugger-and-triggers)
  * [Miscellaneous Configurations](#miscellaneous-configurations)


## Configuring the ISA

* __ISA__: This variable defines the RISC-V ISA to be supported by the C-Class core. The core supports the I, M, A, F, D and C extensions in both 32-bit and 64-bit formats. 
    * *Usage*: `ISA=RV32IMAC`, `ISA=RV64IMAFDC`, etc

## Configuring User Support
* __USERTRAPS__: Valid options:
    * `enable`: enables the `N` Extension of RISC-V ISA spec.
    * `disable`: disables the `N` Extension of RISC-V ISA spec.
* __USER__: Valid options:
    * `enable`: enables the `U` Extension of the RISC-V ISA spec.
    * `disable`: disables the `U` Extension of the RISC-V ISA spec.

## Configuring Supervisor Support
* __SUPERVISOR__: Valid options:
    * `sv32`: enables the `sv32` mode support
    * `sv39`: enables the `sv39` mode support
    * `sv48`: enables the `sv48` mode support.
    * `none`: disables the `S` Extension of the RISC-V ISA spec.
* __ITLBSIZE__: Integer value defining the number of entries in the fully-associative Instruction TLB
* __DTLBSIZE__: Integer value defining the number of entries in the fully-associative Data TLB

## Configuring the M-Extension

The following hooks only come in to effect when `M` is present in the `ISA` variable described above.

* __MULSTAGES__: a numerical value indicating the number of cycles to perform multiplication. When set to `0` a single-cycle multiplier is instantiated. When `MUL` is set to fpga, this variable will indicate the number of cycles the Xilinx IP is configured with. When `MUL` is set to `asic` a non-zero value will instantiate an 8-cycle early out multiplier.  

    Please note, Max number should not cross XLEN value specified in the `ISA` variable.
    
* __DIVSTAGES__: The c-class implements an iterative restoring division algorithm. This variable indicates the number of cycles it takes the algorithm to complete the division. For max-frequency keep this value as equal to the XLEN value specified in the `ISA` variable. For highest throughput keep it low. i.e. 1.

## Configuring the Branch Predictor
* __PREDICTOR__: Valid options:
    * `none`: will disable the pc-gen stage and stage0 will no longer exist. PC generation happens in stage1 module.
    * `gshare`: will instantiate a gshare predictor using a full-associative BTB.
* __BPURESET__: Can be either 0 or 1. A value of 0 indicates that the branch predictor is disabled at reset. A value of 1 indicates that the branch predictor will be enabled immediately after reset. The predictor can later be enabled/disabled by setting the relevant bit of the custom-control csr.

* __BTBDEPTH__: Integer number defining the number of entries in the BTB
* __BHTDEPTH__: Valid of gshare only. Accepts a number indicating the number of entries in the branch history table. 
* __HISTLEN__: Valid only for gshare. Accepts a number indicating the number of bits in the global history register.
* __EXTRAHIST__: Valid only for gshare. Accepts a number indicating the number of extra speculative bits in the GHR. For c-class 3 gives the best performance.
* __RASDEPTH__: Number of entries in the Return-Address-Stack.


## Configuring the Instruction Cache

* __ICACHE__: Valid options:
    * `enable`: Will enable creating a single instance of the instruction-cache
    * `disable`: No instruction cache will be instantiated. But instead a simple state-machine to handle requests on the fabric will be instantiated. This simple state-machine is created to keep the interface between the core and the fabric constant irrespective of whether a cache is instantiated or not.
* __ISETS__: An integer value indicating the number of sets of the SRAMs in the I-cache.
* __IWORDS__: An integer value indicating the number of bytes in a word for the I-cache. For any core-config this should be typically be set to 4. This variable defines the size of the response from the cache to the core. Even when compressed is enabled, we expect the I-cache to respond with 32-bits, and expect the fetch-stage to handle the split/join of the instructions.
* __IBLOCKS__: An integer value indicating the number of the words in a block/cache-line. Please note to prevent aliasing in the caches the following should hold: `ISETS`x`IWORDS`x`IBLOCK`<=4096.
* __IWAYS__: An integer value >0 indicating the number of ways in the I-cache.
* __IFBSIZE__: An integer value >1 indicating the number of entries in the Fill-buffer of the I-cache. 
* __IESIZE__: Should always be set to 3 for all configs. This variable indicates the number of the `epoch` bits in the request from the core to the Cache.
* __IRESET__: Can be either 0 or 1. A value of 0 indicates that the I-cache, though instantiated in HW, will be disabled on reset and has to be enabled thorugh software by setting the relevant bit in the custom-control csr. A value of 1 indicates that the I-cache is available immediately after reset.
* __IDBANKS__: The number of banks that data-rams of the I-cache should be split into.
* __ITBANKS__: The number of banks that tag-rams of the I-cache should be split into.

## Configuring the Data Cache
* __DCACHE__: Valid options:
    * `enable`: Will enable creating a single instance of the data-cache
    * `disable`: No data cache will be instantiated. But instead a simple state-maching to handle requests will be used and maintain a store-buffer will be used..
* __DSETS__: An integer value indicating the number of sets in the D-cache
* __DWORDS__: An integer value indicating the number of bytes in a word for the D-cache. For a 64-bit core this should be set to 8 and for a 32-bit core this should be set to 4.
* __DBLOCKS__: An integer value indicating the number of the words in a block. Please note, in order to prevent aliasing in the caches the following should hold: `DSETS`x`DWORDS`x`DBLOCK`<=4096. `DBLOCKs` should not be less than 8. See issue#70 for more details on this constraint.
* __DWAYS__: An integer value >0 indicating the number of ways in the I-cache.
* __DFBSIZE__: An integer value >1 indicating the number of entries in the Fill-buffer of the D-cache. 
* __DSBSIZE__: An integer value >1 indicating the number of entries in the store-buffer of the D-cache. 
* __DESIZE__: Should always be set to 1 for all configs.
* __DRESET__: Can be either 0 or 1. A value of 0 indicates that the D-cache, though instantiated in HW, will be disabled and has to be enabled thorugh software. A value of 1 indicates that the D-cache is available immediately after reset.
* __DDBANKS__: The number of banks that data-rams of the D-cache should be split into.
* __DTBANKS__: The number of banks that tag-rams of the D-cache should be split into.

## Enable ECC in caches
* __ECC__: Valid options:
    * `enable`: will enable ECC based SEC-DED support on instruction and data caches both
    * `disable`: no ECC support.

## Configuring Physical Memory Protection.
* __PMP__: Valid options
    * `enable`: Will enable physical memory protection scheme as mentioned in the spec.
    * `disable`: Will disable physical memory protection scheme as mentioned in the spec.
* __PMPSIZE__: An integer `<=16` indicating the number of PMP registers to be implemented.
* __ASIDWIDTH__: An integer `<=16` for RV64 and `<=9` for RV32 indicating the size of the ASID when supervisor is enabled. 

## Configuring Debugger and Triggers
* __DEBUG__: Valid options are `enable` or `disable`. When enabled a JTAG based debugger is instantiated in the SoC. This debugger is based on the riscv-debug-spec.
* __OPENOCD__: Valid options are `enable` or `disable`. When enabled the test-bench includes a vpi to connect to open-ocd via remote-bitbang.
* __TRIGGERS__: Accepts a valid number >=0. 
    Indicates the number of hardware triggers instantiated in the core. More information about the nature of the triggers can be found [here](../docs/triggers.md)

# BSV compile options
* __SUPPRESSWARNINGS__: setting to `all` will suppress all warnings during bsv compilation. default is none

## Configuring the Simulation Environment

* __COVERAGE__: This is used by verilator to generate specific coverage metrics during simulation. Valid otions:
    * `none`: disable all coverage
    * `all`: enable all coverage metrics supported in verilator
    * `line`: enable line coverage
    * `toggle`: enable toggle coverage
* __TRACE__: Valid options:
    * `enable`: enables vcd dump for verilator simulation
    * `disable`: disables vcd dump for verilator simulations
    To enable vcd generation during simulation use the command `./out +trace`
* __THREAD__: Integer number indicating the number of threads to be used by verilator for simulation
* __VERILATESIM__: Valid options:
    * `fast`: This will insert the `-CFLAGS -O3` flag while compiling with verilator. The resultant
      executable is small and fast in simulation. The compile time for this is quite huge.
    * `small`: The verilated binary compiled with this option will be large and slow in simulation.
      However, the compile time is much much faster.
* __VERBOSITY__: Valid values are 0 or 1. 
    Once the bluespec-generated-verilog is available, post-processing script is run to subsume all the `$display` statements in the verilog file, under the `VERBOSE` macro. This variable is used to indicate the RTL simulator (e.g. verilator, vcs, modelsim, etc.) whether or not to the `VERBOSE` macro is to be defined or not at compile-time. A value of 0 will ensure that no `$display` statements are compiled (except the ones inserted by bluespec based on rule-conflicts). A non-zero 0 will ensure they are compiled and one can use the Logger scheme to enabled different modules and levels at simulation time.
* __RTLDUMP__: Valid options:
    * `enable`: Will generate a rtl.dump file during simulation providing a trace of the instruction execution of the application on the core. Please note that enabilng this feature requires extra hardware to be generated and thus should be disabled when targeting synthesis.
    * `disable`: Will disable rtl.dump generation.
* __ASSERTIONS__: Valid options:
    * `enable`: Will enable dynamic assertions where-ever found.
    * `disable`: Will disable dynamic assertions where-ever found.
    In Bluespec, the dynamic/static assertions from the `Assert` library are compiled into `$display` statements in the generated verilog. Thus, having this feature enabled while targeting synthesis will have no effect on the synthesis. (All the display statements come under synopsys_translate_off macro which almost all synthesis tools will ignore)

## Miscellaneous Configurations
* __RESETPC__: Values in integer format indicating the reset program counter value.
* __PADDR__: Bit-wdith of the phyiscal address.
* __COREFABRIC__: This variable indicates the fabric protocol supported by the Core. Current valid options are only `AXI4`. Future support will be provided for AXI4-Lite, TileLink-U, TileLink-H and TileLink-C.
* __SYNTH__: Indicates the nature of the generated verilog. Valid options:
    * `sim`: Setting this variable to `sim` will enable the `simulate` macro during bluesim compilation which enable a few simulation logic in the hardware. Eg,: if the MUL variable is set to `fpga` and `SYNTH` is set to `sim` then a naive bluespec model which mimics DSP multiplier in functionality will be used to simulation. The `sim` setting should only be used for simulations. 
    * `asic`: This should be set to generate a verilog for synthesis and will not include any simulation models.
* __ARITH_TRAP__: Valid values are `enable` or `disable`. When enabled, the core will treat some arithmetic operations as traps. More details of the behavior area available [here](../docs/arithmetic_trap.md)
* __ADDR_SPACE__: An integer to indicate the amount of testbench memory to be instantiated. Memory size = `2^ADDR_SPACE` bytes
* __DTVEC__: reset value for dtvec register in csr

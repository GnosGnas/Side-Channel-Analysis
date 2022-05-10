# CHANGELOG

This project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).
## [1.6.1] - 2019-11-21
## Fixed
- The indication of whether a instruction-page-fault was due to the lower-16 bits or the upper-16
  bits has been fixed.
 
## [1.6.0] - 2019-11-21
## Fixed
- upstream verification with virtual mode runs
- updated ci
 
## [1.5.0] - 2019-11-21
## Added
- added support for ITIM and DTIM
- new csrs to define the address map of the ITIM and DTIM
- directed tests for performance counters and Tightly-integrated memories
- doc update for custom csrs of c-class done.

## Fixed
- interrupt mask when debbuger is enabled has been fixed.


## [1.4.2] - 2019-11-08
## Added
- macro for reset value of dtvec csr
- updated doc and template with the macro

## [1.4.1] - 2019-10-29
## Fixed
- Makefile to detect tools directory for artifacts release.

## [1.4.0] - 2019-10-28
## Added
- support for WFI
- support for illegal trapping when tvm, tw and tsr registers are set in supervisor mode
- verilog artifacts now have rtldump support and logger support.
- 256MBytes of BRAM for verilog artifact simulation

## Fixed
- made ADDR_SPACE as a variable in config file
- fixed paramaters for linux template
- bumped verification version to 3.2.4
- access to csr 0x321 and 0x322 now generates trap
- bumping devices to 5.0.0 with new uart features.
- fixed verilator setup for gdb as well
- added suppresswarnings as part of the gitlab ci/cd

## [1.3.6] - 2019-10-22
## Added
- Micro Arch ppt of the core pipeline.

## [1.3.5] - 2019-10-16
## Fixed
- verification update for csmith path fix. Close #152

## [1.3.4] - 2019-10-16
## Fixed
- Illegal instruction generation script. Close #151
 
## [1.3.3] - 2019-10-08
## Fixed
- Illegal encoding were being treated as FCVT.D.S and FCVT.S.D. This has been fixed. Close #149

## [1.3.2] - 2019-10-04
## Fixed
- Passing arith_en to FPU which enables arith_traps Close #147

## [1.3.1] - 2019-10-04
## Fixed
- Traps for floating point ops with ARITH_TRAP enabled but disabled through csr no longer generates
  traps. Close #147

## [1.3.0] - 2019-10-03
## Added
- bumped to caches with ECC support. Added corresponding hooks and details in readme as well.

## Fixed
- typos in readme fixed #138
- improved verilator build speed.


## [1.2.5] - 2019-10-01
## Fixed
- compile issues with arith_trap enabled fixed
- decoding for WFI fixed.

## [1.2.4] - 2019-09-28
## Added
- scripts and edits to collect coverage from verilator sim


## [1.2.3] - 2019-09-27
## Fixed
- mie and mip widths fixed when compiling with debug mode enabled. refer to issue #144.


## [1.2.2] - 2019-09-26
## Changed
- tracking cache misses instead of hits. refer to issue #143 for more info.
- updated performance tests with encodings.

## [1.2.1] - 2019-09-26
## Fixed
- fixed mm benchmark to print stats at end of program

## [1.2.0] - 2019-09-26
## Fixed
- performance counter increment conditions and interrupt generation scheme. A counter will not
  increment if the respective interrupt has been set.
- the last daisy-module instantiated should respond with true and data=0
- fixed op-fwding bug mentioned in issue #140
- decoding performance counters is fixed now. refer issue #141

## Added
- added tests and benchmarks for performance counters.

## Removed
- removed redundant epoch register and method from stage4


## [1.1.1] - 2019-09-16
## Fixed
- ci-cd script fixed to delete all generated files


## [1.1.0] - 2019-09-16
## Added
- CSRs are now daisy chained.
- Performance counters and their event encodings added.
- Interrupts for counters has also been added.
- Increased default bram size in TB to be 32MB. This has increased regression time but now the same
  executable can be used for linux sim as well

## Fixed
- BRAM now uses only a single file: `code.mem` for read-only. MSB and LSB files no longer required.
- Updated docs to reflect new additions and fixes made above.
- renamed a few methods based on the coding guidelines.

## [1.0.3] - 2019-09-10
## Added
- makefile now uses bsvpath to identify directories for bsv source. This makes using vim-bsv easier.

## [1.0.2] - 2019-09-10
## Fixed
- rg_delayed_redirect register in stage0 should only be used when bpu and compressed both enabled.


## [1.0.1] - 2019-09-09
## Fixed
- links to verilog artifacts in readme fixed.

## [1.0.0] - 2019-09-09
## Fixed
- data types of ISBs has been split to keep logic minimal and optimize frequency closure
- Logger is used in all submodules.
- macros and configurable options have been fixed to be more precise and granular
- stage0 or pc-fetch stage with fully-associative gshare has been fixed and tuned for higher
  frequency closure
- ALU has ben further optimized for better freqency closure
- ISB types and operand forwarding tuned for better frequency closure.
- overall changes to remove trailing white-spaces from all files.
- version extraction based on CHANGELOG will be followed hence forth.
- fpu convert from dp to sp roundup conditions fixed.

## Added
- decompressor function added in stage1
- reset-pc can now be controlled by the SoC as an input without having to compromize on synthesi
  boundaries
- retimed multiplier with configurable stages is used always.
- different multiplier modules for evaluation have also been added.
- fully-associative TLB support has also been added.
- configuration support to supress all warnings during bsv compile
- CHANGELOG will be maintained from these release onwards.

## Removed
- bimodal bpu support has been removed for now since it needs to be re-structured based on new
  interfaces and also requires new verilog-bram models
- gshare index model has also been removed along the same arguments as above.
- support for variable cycle mutliplier has also been removed as part of this release.


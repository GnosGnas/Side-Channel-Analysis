[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](LICENSE)
[![pipeline status](https://gitlab.com/shaktiproject/cores/c-class/badges/master/pipeline.svg)](https://gitlab.com/shaktiproject/cores/c-class/commits/master)
# SHAKTI C-CLASS Core
---------------------
This is the [RISC-V](https://riscv.org) based C-Class core of the [SHAKTI](http://shakti.org.in/) Processor family. 
## Guide
- [SHAKTI C-CLASS Core](#shakti-c-class-core)
  * [Guide](#guide)
  * [Quick Start](#quick-start)
      - [Dependencies](#dependencies)
      - [Clone the repo](#clone-the-repo)
      - [Install DTC](#install-dtc)
  * [Directory Structure](#directory-structure)
  * [Block Diagram](#block-diagram)
  * [Overview of C-CLASS](#overview-of-c-class)
  * [Micro-Architecture](./docs/micro_arch.pdf)
  * [Configuring the Core](./docs/configuring_core.md)
  * [Compiling and Simulating the the Core](#compiling-and-simulating-the-the-core)
  * [Custom CSRS](./docs/custom_csrs.md)
  * [Performance Counters](./docs/performance_counters.md)
  * [Benchmarking the Core](./docs/benchmarking.md)
  * [Verilog-Artifacts](./docs/verilog-artifacts/verilog-artifacts.md)
  * [CI-CD](#ci-cd)
  * [Contributing to the Project](#contributing-to-the-project)

## Quick Start

#### Dependencies

A BSV compiler (version 2017 or above) is necessary to compile the code. More information
on Bluespec can be found [here](www.bluespec.com).

#### Clone the repo

```
git clone https://gitlab.com/shaktiproject/cores/c-class.git
cd c-class/base-sim
./manager.sh
```
#### Install DTC
We use the DTC 1.4.7 to generate the device tree string in the boot-files. To install DTC follow the below commands:
```
sudo wget https://git.kernel.org/pub/scm/utils/dtc/dtc.git/snapshot/dtc-1.4.7.tar.gz
sudo tar -xvzf dtc-1.4.7.tar.gz
cd dtc-1.4.7/
sudo make NO_PYTHON=1 PREFIX=/usr/
sudo make install NO_PYTHON=1 PREFIX=/usr/
```

## Directory Structure
    ├── src                     # dir: Source code of the core, uncore and devices
    │   ├── core                # dir: c-class core
    │   │   ├── fpu             # dir: fpu unit
    │   │   ├── m_ext           # dir: modules for M extension support
    │   │   ├── predictors      # dir: modules for branch predictors
    ├── base-sim                # Contains a base SoC and setup to simulate and verify the core.
    ├── docs                    # Contains more info about the core and the environment.


## Block Diagram

This an overview of the c-class core. More detail documents commenting about the micro-arch will be uploaded soon.

![](https://imgur.com/OOV6KPc)

## Overview of C-CLASS

* 5-stage 64/32-bit pipelined core.
* Supports ISA=RV64IMAFDCSUN based on riscv-spec-2.2 and privilege-spec-1.10.
* Parameterized blocking Instruction and Data cache.
* Serialized Single and Double Precision Floating Point Units.
* Early out multiplier and a restoring divider.
* Supervisor mode - sv32/sv39.
* Boots riscv-linux kernel, FreeRTOS, Zephyr.
* Performance: 1.72 DMIPs/MHz

## Compiling and Simulating the the Core

The repository provides a sample SoC with minimal components like uart, clint, signature-dump, etc which can be used to simulate programs on the core. For more details please refer to the [readme](base-sim/README.md) in the base-sim folder

## CI-CD

The project uses a local gitlab-runner housed at RISE-LAB, CSE-Dept, IIT-Madras. Each commit to the master branch will trigger a build run on the runner which does the following:

1. generate the verilog for the core config=rv64imafdc. More details can be found in gitlab-cy.yaml.
2. Run all the riscv-tests on the generated verilog using verilator.
3. Run 40 torture tests on the the generated verilog using verilator
4. Run 60 AAPG tests on the generated verilog
5. Run 230 CSMITH tests
6. Run benchmarks as well.

The runner also performs a nightly build which checks for other configs the runs tests on them as well.


## Contributing to the Project

The quickest way to contribute to the SHAKTI project is to create a pull-request for existing issues or any feature additions. A contributing guideline will be uploaded soon

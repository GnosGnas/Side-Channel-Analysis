# Benchmarks
This repo contains various benchmarks and their compile scripts to execute the same on SHAKTI cores.

Compiled binaries generated files will be available in `output` folder.

Please install the riscv-gnu-toolchain available [here](https://github.com/riscv/riscv-gnu-toolchain) before running any of the make commands

## Hello World
```
make

## Dhrystone

Use the following command to compile dhrystone:

```
  make dhrystone xlen=64 iterations=10000 target=SHAKTI march=imafd
```
| Arguments | Description | Valid Options | Defaults |
|-----------|-------------|---------------|----------|
| __xlen__  | indicates 64/32bit target|64, 32| 64   |
| __iterations__| Number of Dhrystone Iterations | Any Integer >1024 | 10000|
| __target__| Defines target specific functions | SHAKTI, SPIKE| SHAKTI|
| __march__ | The `march` argument to gcc| [imafdc] | imfd |


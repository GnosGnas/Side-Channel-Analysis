# Custom CSRs Implemented

The C-class includes the following custom csrs implemented in the non-standard space for extra control and special features.

## Custom Control CSR (0x800)

The csr is used to the enable or disable the caches, branch predictor and [arithmetic exceptions](../docs/arithmetic_traps.md) at run-time. 

| Bit Position | Reset Value|Description |
|--------------|-------------|-----------|
| 0  | DRESET in `soc_config`|Enable or disable the data-cache. |
| 1  | IRESET in `soc_config`|Enable or disable the instruction-cache.|
| 2  | BPURESET in `soc_config`| Enable or disable the branch predictor.|
| 3  | Disabled on Reset| Enable or disable arithmetic exceptions.|

## DTVEC CSR (0x7c0)
XLEN register which indicates the address of the debug loop when a the debugger halts the core.

## DENABLE CSR (0x7c1)
1-bit csr indicating if the debugger can halt the core

## MHPMINTERRUPTEN CSR (0x7c2) 
XLEN bit register following the same encoding as ```mcounteren/mcountinhibit```. A bit set to 1
indicates the an interrupt will be generated when the corresponding counter reaches the value 0.
More details to use this register is available [here](../docs/performance_counters.md#interrupts-from-counters)

## DTIM BASE Adddress CSR (0x7c3)
An XLEN bit register holding the base address of the data tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

## DTIM BOUND Adddress CSR (0x7c4)
An XLEN bit register holding the bound address of the data tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

## ITIM BASE Adddress CSR (0x7c5)
An XLEN bit register holding the base address of the instruction tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

## ITIM BOUND Adddress CSR (0x7c6)
An XLEN bit register holding the bound address of the instruction tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

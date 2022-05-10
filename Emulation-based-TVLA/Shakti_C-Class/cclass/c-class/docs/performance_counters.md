# Performance Monitors

## Introduction

Currently RISC-V privilege spec (v1.11) describes a basic hardware performance facility at the hart (core) level . 

3 counters for dedicated functions have been defined:

| Address |Name | Description|
|-------------|----------|------------|
| 0xB01       | `mcycle`   | counts the number of cycles executed by the hart starting from an arbitrary point of time.            |
| 0xB02       | `minstret` | counts the number of instructions executed by the hard starting from an arbitrary point of time.           |
| 0xC03       | `mtime`    | this is a read-only csr which reads the memory mapped value of the platforms real-time counter. |

Each of the above are 64-bit counters. Shadow csrs of the above also exist in the user-space.

Apart from the above, RISC-V also provides provision to instantiate additional 29 64-bit event counters: `mhpmcounter3` - `mhpmcounter31`. The event selectors for these counters are also defined: `mhpmevent3` - `mhpmevent31`. The meaning of these events is defined by the platform and can be customized for each platform.

In addition, RISC-V also defines a single 32-bit counter-enable register : `mcounteren`. Each bit in this register corresponds to each of the 32 event-counters described above. This register controls only the accessibility of the counter registers and has no effect on the underlying counters, which can continue to increment irrespective of the settings of the `mcounteren` fields. 

Clearing a bit in the `mcounteren` only indicates that the event-counters cannot be accessed by lower level privilege modes. Similar functionality is implemented by the `scounteren` register when S-mode is supported.

## Overhead Analysis

1. Each event-counter is mapped to a CSR address and additionally all counters are read-write CSRs. Thus each 64-bit counter will have an additional 12-bit decoder to select that counter in case of a read/write CSR op.

2. Since all CSRs are accessed in the write-back stage of the C-Class core, the 12-bit address from this stage, fans-out to all CSRs. Since the event-counters are implemented as 64-bit adders, the fan-out load is further increased as they become part of the CSR read/write op.

3. Further more, suppose there are 30 events defined by the core/platform and each event-counter if configurable to choose any of the 30 events to track. This leads to an additional 30 is 1 demux on each event-counter.

All the three factors defined above can cause the event-counters to become critical in terms of area and frequency closure.

#### Possible solutions

1. To address the issues `1 and 2` listed above, it is possible to implement the CSRs as a daisy-chain as shown below:

![daisy chain](./figs/daisy-chain-csrs.png)

Here the CSRs are group based on their functionality and accesses to CSRs can thus take variable number of cycles. For eg, less frequently accessed CSRs like `fcssr` or `*scratch` or `debug registers` can be placed in GRP-2 or GRP-3. Performance counters and status registers can be placed in GRP-1 to enable quick and fast access. 
Such daisy chaining will reduce the comparator fan-out while performing CSR read/write ops.

2. To address the 3rd issue from the above list, it is proposed to split the events in groups and have each counter track only events involved within a specific group. This strategy is further elaborated in the next-section.

## List of Events for C-class

The C-Class core will support capturing the following 26 events:

|Event number |Description |
|-------------|-------------|
|1| Number of misprediction             |
|2| Number of exceptions                |
|3| Number of interrupts                |
|4| Number of csrops                    |
|5| Number of jumps                     |
|6| Number of branches                  |
|7| Number of floats                    |
|8| Number of muldiv                    |
|9| Number of rawstalls                 |
|10| Number of exetalls                  |
|11| Number of icache_access             |
|12| Number of icache_miss               |
|13| Number of icache_fbhit              |
|14| Number of icache_ncaccess           |
|15| Number of icache_fbrelease          |
|16| Number of dcache_read_access		    |
|17| Number of dcache_write_access		    |
|18| Number of dcache_atomic_access		  |
|19| Number of dcache_nc_read_access	  	|
|20| Number of dcache_nc_write_access    |
|21| Number of dcache_read_miss		      |
|22| Number of dcache_write_miss		      |
|23| Number of dcache_atomic_miss		    |
|24| Number of dcache_read_fb_hits		    |
|25| Number of dcache_write_fb_hits		  |
|26| Number of dcache_atomic_fb_hits		  |
|27| Number of dcache_fb_releases		    |
|28| Number of dcache_line_evictions		  |
|29| Number of itlb_misses               |
|30| Number of dtlb_misses               |


## Interrupts from Counters.
There is a need to raise an interrupt when a particular counter has observed `delta` number of counts. 
This feature is however, not part of the current RISC-V ISA, since it does not mandate how the counters are interpreted neither on which direction
should they move (up or down). 

Thus, to achieve the above said functionality, we propose a new custom CSR:

`mhpminterrupten`: The encoding for this csr is the same as that of mcounteren/mcountinhibit. When a particular bit is set, it indicates that the corresponding counter will generate an interrupt when `the value reaches 0 and the counter is enabled (mhpmevent != 0)`. The interrupt can be disabled by writing a 0 to the corresponding
`mhpmevent` register (equivalent to disabling the counter)

Following is an example of how such a framework can be used:
```
> csrw mhpminterrupten, 0x4         # enable interrupt for mhpmcounter3
> addi x31, x0, -delta              # note the negative delta
> csrw mhpmcounter3, x31
> csrw mhpmevent3, 0x9              # enable mhpmcounter3 to track event-code-9
> ...
> interrupt is generated jump to isr!
> ...
> 
```

```
ISR Routine
> csrw mhpmevent3, x0               # disable mhphmcounter3 will also disable the interrupt.
```

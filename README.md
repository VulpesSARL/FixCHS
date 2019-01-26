# FixCHS

A small programm I wrote in x86 (16 Bit R-Mode) Assembly, to fix a specific problem on older computer; the stuck cursor when booting from the Disk.
This mainly happens when the disk is preinstalled with a different PC and then put into an another PC with a different BIOS.
Many older Bootsectors boot at first using CHS, before switching to LBA. CHS is often treated differently in different BIOS versions (even from the same make).
This small one-time installed program fixed that CHS issue.

Note: it's required that the destination machine supports LBA! (my 486 PC does it, and has no problem with my program).

### Prerequisites

* NASM to assemble the Assembly files
* any C compiler does it (I use Visual Studio 2017 Enterprise), to compile the installer file

### Note

All these tools are provided as-is from [Vulpes](https://vulpes.lu).
If you've some questions, contact me [here](https://go.vulpes.lu/contact).

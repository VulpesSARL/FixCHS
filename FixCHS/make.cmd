@echo off
nasm FixCHS.asm -o FixCHS.bin
nasm "FixCHS always.asm" -o "FixCHSA.bin"

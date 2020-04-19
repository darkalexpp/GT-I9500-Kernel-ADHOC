#!/bin/bash
make ARCH=arm cyanogenmod_i9500_defconfig
make CROSS_COMPILE=TOOLCHAIN/arm-eabi-4.6-/bin/arm-eabi- ARCH=arm -j4 



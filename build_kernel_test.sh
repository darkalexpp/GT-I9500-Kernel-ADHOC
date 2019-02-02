#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=toolchains/bin/arm-linux-androideabi-

make -j8 ARCH=arm lineageos_ja3gxx_defconfig
make -j8 ARCH=arm

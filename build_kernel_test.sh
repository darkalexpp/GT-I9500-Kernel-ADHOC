#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=$(pwd)/toolchains/bin/arm-linux-androideabi-

make -C $(pwd) O=build  lineageos_ja3gxx_defconfig
make -j8 -C $(pwd) O=build

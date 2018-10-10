./build.sh
cp arch/arm/boot/zImage ../package/tools/
cd ..
rm package/Kernel-Adhoc-S4-cm11.0.zip
cd package
zip -r Kernel-Adhoc-S4-cm11.0.zip tools system META-INF

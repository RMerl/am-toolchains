These are the toolchains used to compile Asuswrt-Merlin firmwares.

 - brcm-arm-hnd/ Broadcom HND ARM platform (RT-AC86U) and HND AX ARM (RT-AX88U)
 - brcm-arm-sdk/ Broadcom SDK6/SDK7 ARM platform (RT-AC56 upto RT-AC5300)

Setup instructions (assuming this repository is cloned under ~/am-toolchains/ :

BCM-HND:
========

	sudo ln -s ~/am-toolchains/brcm-arm-hnd /opt/toolchains

	echo "export LD_LIBRARY_PATH=$LD_LIBRARY:/opt/toolchains/crosstools-arm-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/lib" >> ~/.profile
	echo "export TOOLCHAIN_BASE=/opt/toolchains" >> ~/.profile

	echo "PATH=\$PATH:/opt/toolchains/crosstools-arm-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/bin" >> ~/.profile
	echo "PATH=\$PATH:/opt/toolchains/crosstools-aarch64-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/bin" >> ~/.profile

(for 802.11ax models):

	echo "export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/toolchains/crosstools-arm-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/usr/lib" >> ~/.profile
	echo "PATH=\$PATH:/opt/toolchains/crosstools-arm-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/usr/bin" >> ~/.profile
	echo "PATH=\$PATH:/opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/usr/bin" >> ~/.profile

(for kernel 4.19 models -HND 5.04):

	echo "export PATH=$PATH:/opt/toolchains/crosstools-aarch64-gcc-9.2-linux-4.19-glibc-2.30-binutils-2.32/usr/bin" >> /.profile
	echo "export PATH=$PATH:/opt/toolchains/crosstools-arm-gcc-9.2-linux-4.19-glibc-2.30-binutils-2.32/usr/bin" >> ~/.profile
	echo "export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/toolchains/crosstools-arm-gcc-9.2-linux-4.19-glibc-2.30-binutils-2.32/usr/lib" >> /.profile


BCM-SDK:
========

Assuming you have cloned the firmware repository under ~/asuswrt-merlin.ng/ :

	sudo ln -s ~/am-toolchains/brcm-arm-sdk/hndtools-arm-linux-2.6.36-uclibc-4.5.3 /opt/brcm-arm
	ln -s ~/am-toolchains/brcm-arm-sdk  ~/asuswrt-merlin.ng/release/src-rt-6.x.4708/toolchains
	echo "PATH=\$PATH:/opt/brcm-arm/bin" >> ~/.profile

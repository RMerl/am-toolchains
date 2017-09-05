These are the toolchains used to compile Asuswrt-Merlin firmwares.

 - brcm-arm-hnd/ Broadcom HND ARM platform (RT-AC86U)

Setup instructions (assuming this repository is cloned under ~/am-toolchains/ :

BCM-HND:
========

	sudo ln -s ~/am-toolchains/brcm-arm-hnd /opt/toolchains

	echo "export LD_LIBRARY_PATH=$LD_LIBRARY:/opt/toolchains/crosstools-arm-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/lib" >> ~/.profile
	echo "export TOOLCHAIN_BASE=/opt/toolchains" >> ~/.profile

	echo "PATH=\$PATH:/opt/toolchains/crosstools-arm-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/bin" >> ~/.profile
	echo "PATH=\$PATH:/opt/toolchains/crosstools-aarch64-gcc-5.3-linux-4.1-glibc-2.22-binutils-2.25/usr/bin" >> ~/.profile

cmd_/opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi/.install := /bin/sh scripts/headers_install.sh /opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi ./include/uapi/scsi scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; /bin/sh scripts/headers_install.sh /opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi ./include/scsi ; /bin/sh scripts/headers_install.sh /opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi ./include/generated/uapi/scsi ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi/$$F; done; touch /opt/toolchains/crosstools-aarch64-gcc-5.5-linux-4.1-glibc-2.26-binutils-2.28.1/aarch64-buildroot-linux-gnu/sysroot/usr/include/scsi/.install

cmd_drivers/usb/host/ehci-hcd.ko := /opt/toolchains/crosstools-arm-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21-NPTL/usr/bin/arm-unknown-linux-uclibcgnueabi-ld -EL -r  -T /home/users/popeye_shen/ac88u-gpl/bcm963xx/kernel/linux-3.4rt/scripts/module-common.lds --build-id  -o drivers/usb/host/ehci-hcd.ko drivers/usb/host/ehci-hcd.o drivers/usb/host/ehci-hcd.mod.o
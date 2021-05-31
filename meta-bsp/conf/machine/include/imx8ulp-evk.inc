MACHINEOVERRIDES =. "mx8:mx8ulp:"

require conf/machine/include/imx-base.inc
require conf/machine/include/tune-cortexa35.inc

DEFAULTTUNE_mx8ulp ?= "cortexa35-crypto"
MACHINEOVERRIDES_EXTENDER_mx8ulp = "imxdrm:imxgpu:imxgpu2d:imxgpu3d"
MACHINEOVERRIDES_EXTENDER_FILTER_OUT_use-mainline-bsp += " mx8ulp \
"
MACHINE_SOCARCH_SUFFIX = "-mx8ulp"
#MACHINE_FIRMWARE_append = " firmware-imx-vpu-imx8"
MACHINE_GSTREAMER_1_0_PLUGIN ?= "imx-gst1.0-plugin"
IMX_DEFAULT_KERNEL = "linux-imx"

IMX_DEFAULT_BSP = "nxp"

MACHINE_FEATURES += "pci wifi bluetooth"

KERNEL_DEVICETREE = " \
    freescale/${KERNEL_DEVICETREE_BASENAME}.dtb \
"

IMX_DEFAULT_BOOTLOADER = "u-boot-imx"

LOADADDR = ""
UBOOT_SUFFIX = "bin"
UBOOT_MAKE_TARGET = ""
SPL_BINARY = "spl/u-boot-spl.bin"

UBOOT_CONFIG ??= "sd"
UBOOT_CONFIG[sd]   = "${UBOOT_CONFIG_BASENAME}_defconfig,sdcard"

# Set ATF platform name
ATF_PLATFORM = "imx8ulp"


IMXBOOT_TARGETS = "flash_singleboot_m33 flash_singleboot"
IMX_BOOT_SOC_TARGET = "iMX8ULP"
IMX_BOOT_SEEK = "32"

# We have to disable SERIAL_CONSOLE due to auto-serial-console
SERIAL_CONSOLES = "115200;ttyLP1"

# Add additional firmware
MACHINE_FIRMWARE_append = " linux-firmware-ath10k"
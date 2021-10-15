DESCRIPTION = "Intel(r) Data Plane Development Kit"
HOMEPAGE = "http://dpdk.org"

LICENSE = "BSD-3-Clause & LGPLv2.1 & GPLv2"
LIC_FILES_CHKSUM = "file://license/gpl-2.0.txt;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://license/lgpl-2.1.txt;md5=4b54a1fd55a448865a0b32d41598759d \
                    file://license/bsd-3-clause.txt;md5=0f00d99239d922ffd13cabef83b33444"

DPDK_SRC ?= "git://source.codeaurora.org/external/qoriq/qoriq-components/dpdk;protocol=https"
SRCBRANCH = "20.11-qoriq"
SRC_URI = "${DPDK_SRC};branch=${SRCBRANCH} \
           file://0001-meson.build-march-and-mcpu-already-passed-by-Yocto.patch \
           file://0001-ifpga-meson-Fix-finding-librt-using-find_library.patch \
"

STABLE = "-stable"

SRCREV = "ff07b5044cb4b22e8bc5003966d99f27396b0d00"

CVE_PRODUCT = "data_plane_development_kit"
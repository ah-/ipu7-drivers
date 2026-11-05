/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Fedora enables the mainline lt6911uxe HDMI bridge driver, which makes the
 * IPU ACPI pdata code pull in Intel's out-of-tree lt6911 header and LT6911
 * code paths that don't build against mainline. No LT6911 device is behind
 * the IPU on the XPS, so hide those options from this module build.
 * Force-included after the kernel's kconfig.h (see Makefile).
 */
#undef CONFIG_VIDEO_LT6911UXE
#undef CONFIG_VIDEO_LT6911UXE_MODULE
#undef CONFIG_VIDEO_LT6911UXC
#undef CONFIG_VIDEO_LT6911UXC_MODULE

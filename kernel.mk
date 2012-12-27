# Copyright (C) 2010 Motorola, Inc.
#####################################################################

#set -x

PWD=$(shell pwd)

ifeq ($(KERNEL_CROSS_COMPILE),)
        KERNEL_CROSS_COMPILE :=$(PWD)/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
endif

ifeq ($(TARGET_PRODUCT),)
        TARGET_PRODUCT :=wifi_hubble
endif

ifeq ($(KERNEL_OUT_DIR),)
        KERNEL_OUT_DIR :=out/target/product/$(TARGET_PRODUCT)/obj/PARTITIONS/kernel_intermediates
endif

ifeq ($(BUILD_THREAD),)
        BUILD_THREAD :=8
endif

TOPDIR=$(PWD)
KERNEL_CONF_OUT_DIR=$(PWD)/$(KERNEL_OUT_DIR)
KERNEL_BUILD_DIR=$(KERNEL_CONF_OUT_DIR)/build
KERNEL_SRC_DIR=$(PWD)/kernel

KERNEL_PREBUILD_DIR  := $(PWD)/vendor/moto/$(TARGET_PRODUCT)
PRODUCT_DEFCONFIG    := stingray_defconfig

all: config kernel_and_modules

#
# make kernel configuration
# =========================
config:
	mkdir -p $(KERNEL_BUILD_DIR)
	make -C $(KERNEL_SRC_DIR) ARCH=arm $(KERN_FLAGS) \
		CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) \
                O=$(KERNEL_BUILD_DIR) \
                KBUILD_DEFCONFIG=$(PRODUCT_DEFCONFIG) \
                defconfig modules_prepare

#
# build kernel and internal kernel modules
# ========================================
kernel_and_modules:
	make -C $(KERNEL_SRC_DIR) ARCH=arm $(KERN_FLAGS) \
		CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) O=$(KERNEL_BUILD_DIR) \
		-j$(BUILD_THREAD) zImage modules
	make $(TPROD_DEF) -C $(KERNEL_SRC_DIR) ARCH=arm $(KERN_FLAGS) \
		CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) O=$(KERNEL_BUILD_DIR) \
		-j$(BUILD_THREAD) M=$(PWD)/vendor/authentec/vpndriver modules

ifneq ($(TARGET_PRODUCT),)
	cp -f $(KERNEL_BUILD_DIR)/arch/arm/boot/zImage $(KERNEL_PREBUILD_DIR)/kernel
	cp -f $(PWD)/vendor/authentec/vpndriver/vpnclient.ko $(KERNEL_PREBUILD_DIR)
endif

#
# make clean
# =============================
clean: kernel_clean
kernel_clean:
	make -C $(KERNEL_SRC_DIR) ARCH=arm $(KERN_FLAGS) \
                CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) \
                O=$(KERNEL_BUILD_DIR) mrproper
	make $(TPROD_DEF) -C $(KERNEL_SRC_DIR) ARCH=arm $(KERN_FLAGS) \
                CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) O=$(KERNEL_BUILD_DIR) \
                M=$(PWD)/vendor/authentec/vpndriver clean



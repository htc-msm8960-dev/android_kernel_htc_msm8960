obj-y			+= drm/ vga/ stub/
ifeq ($(CONFIG_ARCH_APQ8064),y)
obj-$(CONFIG_MSM_KGSL)	+= msm2/
else
obj-$(CONFIG_MSM_KGSL)	+= msm/
endif
ifeq ($(CONFIG_ARCH_MSM),y)
obj-y += ion-msm/
else
obj-y += ion-goldfish/
endif

ifeq ($(KERNELRELEASE),)

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

.PHONY: build clean

build:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
else

$(info Building with KERNELRELEASE = ${KERNELRELEASE})
#obj-m :=    crash1.o
#obj-m :=    procfs1.o
obj-m :=    procfs2.o

endif

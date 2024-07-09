# name of the resulting .ko module.
MODNAME = template

PWD   := $(shell pwd)
obj-m += $(MODNAME).o

# add other object files which will link together to create $(MODENAME).ko
# module.
$(MODNAME)-objs := module_main.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
install:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules_install
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean

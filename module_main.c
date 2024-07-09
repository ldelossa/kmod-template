#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define MODULE_NAME "template"

static int __init mod_init(void) {
    pr_info("%s: module inserted\n", MODULE_NAME);
	return 0;
}

static void __exit mod_exit(void) {
    pr_info("%s: module removed\n", MODULE_NAME);
}

module_init(mod_init);
module_exit(mod_exit);

MODULE_AUTHOR("Louis DeLosSantos");
MODULE_DESCRIPTION("Kernel Module Template");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

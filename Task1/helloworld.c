#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vinayak Agarwal");
MODULE_DESCRIPTION("Hello World!");

static int __init load(void){
	printk(KERN_DEBUG "Hello, World!");
	return 0;
}

static void __exit unload(void){
	;
}

module_init(load);
module_exit(unload);
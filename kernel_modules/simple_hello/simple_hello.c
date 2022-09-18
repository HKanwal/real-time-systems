#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
    printk(KERN_INFO "Hello world from simple module!");

    // non-zero value indicates error occurred
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Goodbye world from simple module :(");
}

MODULE_LICENSE("GPL");

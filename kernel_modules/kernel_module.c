#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
  prinktk(KERN_INFO "Hello world from kernel module!");
  return 0;
}

void cleanup_module(void) {
  printk(KERN_INFO "Good bye from kernel module :(");
}

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/moduleparam.h>

static char *name = "Jeff";

module_param(name, charp, 0000);
MODULE_PARM_DESC(name, "Your name.");

static int __init greeter_init(void) {
    printk(KERN_INFO "Hello %s!\n", name);
    return 0;
}

static void __exit greeter_exit(void) {
    printk(KERN_INFO "Goodbye %s :(\n", name);
}

module_init(greeter_init);
module_exit(greeter_exit);

MODULE_LICENSE("GPL");

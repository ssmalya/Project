#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

int export_test_test(int num)
{
	printk("Invoked from another module : %d\n", num);
	return 20;
}
EXPORT_SYMBOL_GPL(export_test_test);

static
int export_test_view(int num)
{
	printk("Invoked from another module : %d\n", num);
	return 20;
}
EXPORT_SYMBOL(export_test_view);

int export_test_display(int num)
{
	printk("Invoked from another module : %d\n", num);
	return 20;
}
EXPORT_SYMBOL_GPL(export_test_display);

static
int export_test_help(int num)
{
	printk("Invoked from another module : %d\n", num);
	return 20;
}
EXPORT_SYMBOL_GPL(export_test_help);

//EXPORT_SYMBOL(export_test);

static int __init hello_init(void)
{
	printk("INIT : Executing hello_init function\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk("EXIT : Executing hello_exit function\n");
}

module_init(hello_init);
module_exit(hello_exit);

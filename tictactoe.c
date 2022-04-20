#include <linux/init.h>
#include <linux/module.h>

static int tic_init(void) { return 0; }

static void tic_exit(void) {}

MODULE_AUTHOR("Jake Correnti");
MODULE_DESCRIPTION(
    "An attempt to make a tic tac toe driver like we did in class");
MODULE_LICENSE("GPL");

module_init(tic_init);
module_exit(tic_exit);

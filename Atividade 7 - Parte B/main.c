#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

int param;
module_param(param, int, 0);

static int hello(void){
    printk("O modulo foi iniciado!\n");

    return 0;
}

static void bye(void){
    printk("O modulo foi removido: %d\n", param);
}

module_init(hello);
module_exit(bye);
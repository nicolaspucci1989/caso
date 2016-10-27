#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x884142c7, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6c713baf, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9108e9ec, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x3488723d, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x53495e90, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9E9D5C106E491626C41F46C");

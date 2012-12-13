// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giomodule.h>
#include <glib-2.0/glib.h>
#undef g_io_module_scope_block
static void(*funcptr) (GIOModuleScope * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_io_module_scope_block (GIOModuleScope * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_io_module_scope_block()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_module_scope_block");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_module_scope_block. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_module_scope_block() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_io_module_scope_block - arg0 (scope)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_module_scope_block - arg0 (scope)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_io_module_scope_block - arg1 (basename)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_io_module_scope_block - arg1 (basename)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


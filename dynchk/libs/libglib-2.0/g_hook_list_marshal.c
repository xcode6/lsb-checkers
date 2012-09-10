// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hook_list_marshal
static void(*funcptr) (GHookList * , gboolean , GHookMarshaller , gpointer ) = 0;

extern int __lsb_check_params;
void g_hook_list_marshal (GHookList * arg0 , gboolean arg1 , GHookMarshaller arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_hook_list_marshal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hook_list_marshal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hook_list_marshal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hook_list_marshal() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hook_list_marshal - arg0 (hook_list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hook_list_marshal - arg0 (hook_list)");
		validate_NULL_TYPETYPE(  arg1, "g_hook_list_marshal - arg1 (may_recurse)");
		validate_NULL_TYPETYPE(  arg2, "g_hook_list_marshal - arg2 (marshaller)");
		validate_NULL_TYPETYPE(  arg3, "g_hook_list_marshal - arg3 (marshal_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


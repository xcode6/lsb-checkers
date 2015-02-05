// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hook_find_data
static GHook *(*funcptr) (GHookList * , gboolean , gpointer ) = 0;

extern int __lsb_check_params;
GHook * g_hook_find_data (GHookList * arg0 , gboolean arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	GHook * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hook_find_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hook_find_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hook_find_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hook_find_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hook_find_data - arg0 (hook_list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hook_find_data - arg0 (hook_list)");
		validate_NULL_TYPETYPE(  arg1, "g_hook_find_data - arg1 (need_valids)");
		validate_NULL_TYPETYPE(  arg2, "g_hook_find_data - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

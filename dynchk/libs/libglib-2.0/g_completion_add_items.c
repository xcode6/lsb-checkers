// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_completion_add_items
static void(*funcptr) (GCompletion * , GList * ) = 0;

extern int __lsb_check_params;
void g_completion_add_items (GCompletion * arg0 , GList * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_completion_add_items()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_completion_add_items");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_completion_add_items. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_completion_add_items() - validating");
		validate_RWaddress( arg0, "g_completion_add_items - arg0 (cmp)");
		validate_NULL_TYPETYPE(  arg0, "g_completion_add_items - arg0 (cmp)");
		validate_RWaddress( arg1, "g_completion_add_items - arg1 (items)");
		validate_NULL_TYPETYPE(  arg1, "g_completion_add_items - arg1 (items)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

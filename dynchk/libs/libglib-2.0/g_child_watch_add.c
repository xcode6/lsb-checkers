// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_child_watch_add
static guint(*funcptr) (GPid , GChildWatchFunc , gpointer ) = 0;

extern int __lsb_check_params;
guint g_child_watch_add (GPid arg0 , GChildWatchFunc arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_child_watch_add()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_child_watch_add");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_child_watch_add. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_child_watch_add() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_child_watch_add - arg0 (pid)");
		validate_NULL_TYPETYPE(  arg1, "g_child_watch_add - arg1 (function)");
		validate_NULL_TYPETYPE(  arg2, "g_child_watch_add - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


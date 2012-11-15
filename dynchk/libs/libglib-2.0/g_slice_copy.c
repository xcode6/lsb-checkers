// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_slice_copy
static void *(*funcptr) (gsize , gconstpointer ) = 0;

extern int __lsb_check_params;
void * g_slice_copy (gsize arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_slice_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_slice_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_slice_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_slice_copy() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_slice_copy - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_slice_copy - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

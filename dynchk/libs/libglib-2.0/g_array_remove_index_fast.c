// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_array_remove_index_fast
static GArray *(*funcptr) (GArray * , guint ) = 0;

extern int __lsb_check_params;
GArray * g_array_remove_index_fast (GArray * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	GArray * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_array_remove_index_fast()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_array_remove_index_fast");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_array_remove_index_fast. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_array_remove_index_fast() - validating");
		validate_RWaddress( arg0, "g_array_remove_index_fast - arg0 (array)");
		validate_NULL_TYPETYPE(  arg0, "g_array_remove_index_fast - arg0 (array)");
		validate_NULL_TYPETYPE(  arg1, "g_array_remove_index_fast - arg1 (index_)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


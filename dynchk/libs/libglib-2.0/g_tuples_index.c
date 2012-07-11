// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_tuples_index
static gpointer(*funcptr) (GTuples * , gint , gint ) = 0;

extern int __lsb_check_params;
gpointer g_tuples_index (GTuples * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tuples_index()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tuples_index");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tuples_index. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tuples_index() - validating");
		validate_RWaddress( arg0, "g_tuples_index - arg0 (tuples)");
		validate_NULL_TYPETYPE(  arg0, "g_tuples_index - arg0 (tuples)");
		validate_NULL_TYPETYPE(  arg1, "g_tuples_index - arg1 (index_)");
		validate_NULL_TYPETYPE(  arg2, "g_tuples_index - arg2 (field)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bytes_compare
static gint(*funcptr) (gconstpointer , gconstpointer ) = 0;

extern int __lsb_check_params;
gint g_bytes_compare (gconstpointer arg0 , gconstpointer arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bytes_compare()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bytes_compare");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bytes_compare. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bytes_compare() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_bytes_compare - arg0 (bytes1)");
		validate_NULL_TYPETYPE(  arg1, "g_bytes_compare - arg1 (bytes2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

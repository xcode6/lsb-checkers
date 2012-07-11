// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_slist_nth_data
static gpointer(*funcptr) (GSList * , guint ) = 0;

extern int __lsb_check_params;
gpointer g_slist_nth_data (GSList * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_slist_nth_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_slist_nth_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_slist_nth_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_slist_nth_data() - validating");
		validate_RWaddress( arg0, "g_slist_nth_data - arg0 (list)");
		validate_NULL_TYPETYPE(  arg0, "g_slist_nth_data - arg0 (list)");
		validate_NULL_TYPETYPE(  arg1, "g_slist_nth_data - arg1 (n)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

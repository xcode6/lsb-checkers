// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_list_insert_before
static GList *(*funcptr) (GList * , GList * , gpointer ) = 0;

extern int __lsb_check_params;
GList * g_list_insert_before (GList * arg0 , GList * arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_list_insert_before()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_list_insert_before");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_list_insert_before. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_list_insert_before() - validating");
		validate_RWaddress( arg0, "g_list_insert_before - arg0 (list)");
		validate_NULL_TYPETYPE(  arg0, "g_list_insert_before - arg0 (list)");
		validate_RWaddress( arg1, "g_list_insert_before - arg1 (sibling)");
		validate_NULL_TYPETYPE(  arg1, "g_list_insert_before - arg1 (sibling)");
		validate_NULL_TYPETYPE(  arg2, "g_list_insert_before - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_list_insert
static GList *(*funcptr) (GList * , gpointer , gint ) = 0;

extern int __lsb_check_params;
GList * g_list_insert (GList * arg0 , gpointer arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_list_insert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_list_insert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_list_insert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_list_insert() - validating");
		validate_RWaddress( arg0, "g_list_insert - arg0 (list)");
		validate_NULL_TYPETYPE(  arg0, "g_list_insert - arg0 (list)");
		validate_NULL_TYPETYPE(  arg1, "g_list_insert - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_list_insert - arg2 (position)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


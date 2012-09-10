// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_relation_select
static GTuples *(*funcptr) (GRelation * , gconstpointer , gint ) = 0;

extern int __lsb_check_params;
GTuples * g_relation_select (GRelation * arg0 , gconstpointer arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	GTuples * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_relation_select()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_relation_select");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_relation_select. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_relation_select() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_relation_select - arg0 (relation)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_relation_select - arg0 (relation)");
		validate_NULL_TYPETYPE(  arg1, "g_relation_select - arg1 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_relation_select - arg2 (field)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


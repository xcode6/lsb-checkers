// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_datalist_foreach
static void(*funcptr) (GData * * , GDataForeachFunc , gpointer ) = 0;

extern int __lsb_check_params;
void g_datalist_foreach (GData * * arg0 , GDataForeachFunc arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_datalist_foreach()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_datalist_foreach");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_datalist_foreach. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_datalist_foreach() - validating");
		validate_RWaddress( arg0, "g_datalist_foreach - arg0 (datalist)");
		validate_NULL_TYPETYPE(  arg0, "g_datalist_foreach - arg0 (datalist)");
		validate_NULL_TYPETYPE(  arg1, "g_datalist_foreach - arg1 (func)");
		validate_NULL_TYPETYPE(  arg2, "g_datalist_foreach - arg2 (user_data)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


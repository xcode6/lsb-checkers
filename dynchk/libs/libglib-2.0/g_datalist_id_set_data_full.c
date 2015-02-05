// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_datalist_id_set_data_full
static void(*funcptr) (GData * * , GQuark , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
void g_datalist_id_set_data_full (GData * * arg0 , GQuark arg1 , gpointer arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_datalist_id_set_data_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_datalist_id_set_data_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_datalist_id_set_data_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_datalist_id_set_data_full() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_datalist_id_set_data_full - arg0 (datalist)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_datalist_id_set_data_full - arg0 (datalist)");
		validate_NULL_TYPETYPE(  arg1, "g_datalist_id_set_data_full - arg1 (key_id)");
		validate_NULL_TYPETYPE(  arg2, "g_datalist_id_set_data_full - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "g_datalist_id_set_data_full - arg3 (destroy_func)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

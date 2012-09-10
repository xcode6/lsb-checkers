// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_datalist_id_get_data
static gpointer(*funcptr) (GData * * , GQuark ) = 0;

extern int __lsb_check_params;
gpointer g_datalist_id_get_data (GData * * arg0 , GQuark arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_datalist_id_get_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_datalist_id_get_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_datalist_id_get_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_datalist_id_get_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_datalist_id_get_data - arg0 (datalist)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_datalist_id_get_data - arg0 (datalist)");
		validate_NULL_TYPETYPE(  arg1, "g_datalist_id_get_data - arg1 (key_id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


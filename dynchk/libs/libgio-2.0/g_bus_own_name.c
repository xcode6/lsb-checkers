// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusnameowning.h>
#undef g_bus_own_name
static guint(*funcptr) (GBusType , const gchar * , GBusNameOwnerFlags , GBusAcquiredCallback , GBusNameAcquiredCallback , GBusNameLostCallback , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
guint g_bus_own_name (GBusType arg0 , const gchar * arg1 , GBusNameOwnerFlags arg2 , GBusAcquiredCallback arg3 , GBusNameAcquiredCallback arg4 , GBusNameLostCallback arg5 , gpointer arg6 , GDestroyNotify arg7 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bus_own_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bus_own_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bus_own_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bus_own_name() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_bus_own_name - arg0 (bus_type)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_bus_own_name - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_bus_own_name - arg1 (name)");
		validate_NULL_TYPETYPE(  arg2, "g_bus_own_name - arg2 (flags)");
		validate_NULL_TYPETYPE(  arg3, "g_bus_own_name - arg3 (bus_acquired_handler)");
		validate_NULL_TYPETYPE(  arg4, "g_bus_own_name - arg4 (name_acquired_handler)");
		validate_NULL_TYPETYPE(  arg5, "g_bus_own_name - arg5 (name_lost_handler)");
		validate_NULL_TYPETYPE(  arg6, "g_bus_own_name - arg6 (user_data)");
		validate_NULL_TYPETYPE(  arg7, "g_bus_own_name - arg7 (user_data_free_func)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_plugin_complete_interface_info
static void(*funcptr) (GTypePlugin * , GType , GType , GInterfaceInfo * ) = 0;

extern int __lsb_check_params;
void g_type_plugin_complete_interface_info (GTypePlugin * arg0 , GType arg1 , GType arg2 , GInterfaceInfo * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_type_plugin_complete_interface_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_plugin_complete_interface_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_plugin_complete_interface_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_plugin_complete_interface_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_type_plugin_complete_interface_info - arg0 (plugin)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_type_plugin_complete_interface_info - arg0 (plugin)");
		validate_NULL_TYPETYPE(  arg1, "g_type_plugin_complete_interface_info - arg1 (instance_type)");
		validate_NULL_TYPETYPE(  arg2, "g_type_plugin_complete_interface_info - arg2 (interface_type)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_type_plugin_complete_interface_info - arg3 (info)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_type_plugin_complete_interface_info - arg3 (info)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


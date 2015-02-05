// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_module_add_interface
static void(*funcptr) (GTypeModule * , GType , GType , const GInterfaceInfo * ) = 0;

extern int __lsb_check_params;
void g_type_module_add_interface (GTypeModule * arg0 , GType arg1 , GType arg2 , const GInterfaceInfo * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_type_module_add_interface()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_module_add_interface");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_module_add_interface. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_module_add_interface() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_type_module_add_interface - arg0 (module)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_type_module_add_interface - arg0 (module)");
		validate_NULL_TYPETYPE(  arg1, "g_type_module_add_interface - arg1 (instance_type)");
		validate_NULL_TYPETYPE(  arg2, "g_type_module_add_interface - arg2 (interface_type)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_type_module_add_interface - arg3 (interface_info)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_type_module_add_interface - arg3 (interface_info)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

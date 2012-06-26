// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_object_interface_list_properties
static GParamSpec * *(*funcptr) (gpointer , guint * ) = 0;

extern int __lsb_check_params;
GParamSpec * * g_object_interface_list_properties (gpointer arg0 , guint * arg1 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_object_interface_list_properties()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_object_interface_list_properties");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_object_interface_list_properties. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_object_interface_list_properties() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_object_interface_list_properties - arg0");
		validate_RWaddress( arg1, "g_object_interface_list_properties - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_object_interface_list_properties - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


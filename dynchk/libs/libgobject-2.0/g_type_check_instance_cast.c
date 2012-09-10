// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_check_instance_cast
static GTypeInstance *(*funcptr) (GTypeInstance * , GType ) = 0;

extern int __lsb_check_params;
GTypeInstance * g_type_check_instance_cast (GTypeInstance * arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	GTypeInstance * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_check_instance_cast()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_check_instance_cast");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_check_instance_cast. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_check_instance_cast() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_type_check_instance_cast - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_type_check_instance_cast - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_type_check_instance_cast - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


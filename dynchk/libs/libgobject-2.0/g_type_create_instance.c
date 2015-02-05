// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_create_instance
static GTypeInstance *(*funcptr) (GType ) = 0;

extern int __lsb_check_params;
GTypeInstance * g_type_create_instance (GType arg0 )
{
	int reset_flag = __lsb_check_params;
	GTypeInstance * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_create_instance()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_create_instance");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_create_instance. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_create_instance() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_create_instance - arg0 (type)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

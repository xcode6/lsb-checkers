// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_is_a
static gboolean(*funcptr) (GType , GType ) = 0;

extern int __lsb_check_params;
gboolean g_type_is_a (GType arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_is_a()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_is_a");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_is_a. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_is_a() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_is_a - arg0 (type)");
		validate_NULL_TYPETYPE(  arg1, "g_type_is_a - arg1 (is_a_type)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


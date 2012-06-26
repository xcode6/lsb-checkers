// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_type_next_base
static GType(*funcptr) (GType , GType ) = 0;

extern int __lsb_check_params;
GType g_type_next_base (GType arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_next_base()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_next_base");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_next_base. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_next_base() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_next_base - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_type_next_base - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


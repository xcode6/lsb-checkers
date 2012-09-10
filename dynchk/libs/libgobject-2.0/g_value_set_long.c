// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_value_set_long
static void(*funcptr) (GValue * , glong ) = 0;

extern int __lsb_check_params;
void g_value_set_long (GValue * arg0 , glong arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_value_set_long()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_value_set_long");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_value_set_long. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_value_set_long() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_value_set_long - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_value_set_long - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_value_set_long - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


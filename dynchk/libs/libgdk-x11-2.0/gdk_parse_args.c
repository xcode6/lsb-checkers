// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_parse_args
static void(*funcptr) (int * , char * * * ) = 0;

extern int __lsb_check_params;
void gdk_parse_args (int * arg0 , char * * * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_parse_args()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_parse_args");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_parse_args. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_parse_args() - validating");
		validate_RWaddress( arg0, "gdk_parse_args - arg0 (argc)");
		validate_NULL_TYPETYPE(  arg0, "gdk_parse_args - arg0 (argc)");
		validate_RWaddress( arg1, "gdk_parse_args - arg1 (argv)");
		validate_NULL_TYPETYPE(  arg1, "gdk_parse_args - arg1 (argv)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


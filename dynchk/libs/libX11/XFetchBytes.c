// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XFetchBytes
static char *(*funcptr) (Display * , int * ) = 0;

extern int __lsb_check_params;
char * XFetchBytes (Display * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XFetchBytes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFetchBytes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XFetchBytes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFetchBytes() - validating");
		validate_RWaddress( arg0, "XFetchBytes - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFetchBytes - arg0");
		validate_RWaddress( arg1, "XFetchBytes - arg1");
		validate_NULL_TYPETYPE(  arg1, "XFetchBytes - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetIconName
static int(*funcptr) (Display * , Window , const char * ) = 0;

extern int __lsb_check_params;
int XSetIconName (Display * arg0 , Window arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetIconName()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetIconName");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetIconName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetIconName() - validating");
		validate_RWaddress( arg0, "XSetIconName - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetIconName - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetIconName - arg1");
		validate_Rdaddress( arg2, "XSetIconName - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetIconName - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


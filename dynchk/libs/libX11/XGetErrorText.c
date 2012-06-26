// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XGetErrorText
static int(*funcptr) (Display * , int , char * , int ) = 0;

extern int __lsb_check_params;
int XGetErrorText (Display * arg0 , int arg1 , char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetErrorText()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetErrorText");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetErrorText. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetErrorText() - validating");
		validate_RWaddress( arg0, "XGetErrorText - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetErrorText - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetErrorText - arg1");
		validate_RWaddress( arg2, "XGetErrorText - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetErrorText - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetErrorText - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


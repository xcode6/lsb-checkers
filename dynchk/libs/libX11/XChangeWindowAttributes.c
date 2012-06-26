// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XChangeWindowAttributes
static int(*funcptr) (Display * , Window , unsigned long int , XSetWindowAttributes * ) = 0;

extern int __lsb_check_params;
int XChangeWindowAttributes (Display * arg0 , Window arg1 , unsigned long int arg2 , XSetWindowAttributes * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XChangeWindowAttributes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangeWindowAttributes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XChangeWindowAttributes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XChangeWindowAttributes() - validating");
		validate_RWaddress( arg0, "XChangeWindowAttributes - arg0");
		validate_NULL_TYPETYPE(  arg0, "XChangeWindowAttributes - arg0");
		validate_NULL_TYPETYPE(  arg1, "XChangeWindowAttributes - arg1");
		validate_NULL_TYPETYPE(  arg2, "XChangeWindowAttributes - arg2");
		validate_RWaddress( arg3, "XChangeWindowAttributes - arg3");
		validate_NULL_TYPETYPE(  arg3, "XChangeWindowAttributes - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


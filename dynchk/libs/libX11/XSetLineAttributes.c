// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XSetLineAttributes
static int(*funcptr) (Display * , GC , unsigned int , int , int , int ) = 0;

extern int __lsb_check_params;
int XSetLineAttributes (Display * arg0 , GC arg1 , unsigned int arg2 , int arg3 , int arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetLineAttributes()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetLineAttributes");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetLineAttributes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetLineAttributes() - validating");
		validate_RWaddress( arg0, "XSetLineAttributes - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetLineAttributes - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetLineAttributes - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetLineAttributes - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetLineAttributes - arg3");
		validate_NULL_TYPETYPE(  arg4, "XSetLineAttributes - arg4");
		validate_NULL_TYPETYPE(  arg5, "XSetLineAttributes - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


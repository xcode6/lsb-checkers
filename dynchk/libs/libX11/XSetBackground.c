// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XSetBackground
static int(*funcptr) (Display * , GC , unsigned long ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSetBackground (Display * arg0 , GC arg1 , unsigned long arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetBackground");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetBackground()");
	validate_Rdaddress( arg0, "XSetBackground - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetBackground - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetBackground - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetBackground - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


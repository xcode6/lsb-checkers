// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XChangeActivePointerGrab
static int(*funcptr) (Display * , unsigned int , Cursor , Time ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XChangeActivePointerGrab (Display * arg0 , unsigned int arg1 , Cursor arg2 , Time arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangeActivePointerGrab");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XChangeActivePointerGrab()");
	validate_RWaddress( arg0, "XChangeActivePointerGrab - arg0");
		validate_NULL_TYPETYPE(  arg0, "XChangeActivePointerGrab - arg0");
		validate_NULL_TYPETYPE(  arg1, "XChangeActivePointerGrab - arg1");
		validate_NULL_TYPETYPE(  arg2, "XChangeActivePointerGrab - arg2");
		validate_NULL_TYPETYPE(  arg3, "XChangeActivePointerGrab - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


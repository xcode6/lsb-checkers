// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetWMProtocols
static int(*funcptr) (Display * , Window , Atom * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSetWMProtocols (Display * arg0 , Window arg1 , Atom * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMProtocols");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetWMProtocols()");
	validate_Rdaddress( arg0, "XSetWMProtocols - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWMProtocols - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWMProtocols - arg1");
	validate_Rdaddress( arg2, "XSetWMProtocols - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetWMProtocols - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetWMProtocols - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XQueryKeymap
static int(*funcptr) (Display * , char[32] ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XQueryKeymap (Display * arg0 , char arg1[32] )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryKeymap");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XQueryKeymap()");
	validate_Rdaddress( arg0, "XQueryKeymap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryKeymap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryKeymap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


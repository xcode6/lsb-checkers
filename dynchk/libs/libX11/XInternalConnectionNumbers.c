// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XInternalConnectionNumbers
static int(*funcptr) (Display * , int * * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XInternalConnectionNumbers (Display * arg0 , int * * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XInternalConnectionNumbers");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XInternalConnectionNumbers()");
	validate_RWaddress( arg0, "XInternalConnectionNumbers - arg0");
		validate_NULL_TYPETYPE(  arg0, "XInternalConnectionNumbers - arg0");
	validate_RWaddress( arg1, "XInternalConnectionNumbers - arg1");
		validate_NULL_TYPETYPE(  arg1, "XInternalConnectionNumbers - arg1");
	validate_RWaddress( arg2, "XInternalConnectionNumbers - arg2");
		validate_NULL_TYPETYPE(  arg2, "XInternalConnectionNumbers - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


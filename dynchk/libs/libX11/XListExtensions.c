// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XListExtensions
static char * *(*funcptr) (Display * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * * XListExtensions (Display * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListExtensions");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XListExtensions()");
	validate_RWaddress( arg0, "XListExtensions - arg0");
		validate_NULL_TYPETYPE(  arg0, "XListExtensions - arg0");
	validate_RWaddress( arg1, "XListExtensions - arg1");
		validate_NULL_TYPETYPE(  arg1, "XListExtensions - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


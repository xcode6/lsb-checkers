// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XAddExtension
static XExtCodes *(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XExtCodes * XAddExtension (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	XExtCodes * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddExtension");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XAddExtension()");
	validate_Rdaddress( arg0, "XAddExtension - arg0");
		validate_NULL_TYPETYPE(  arg0, "XAddExtension - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


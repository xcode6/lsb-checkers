// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XQueryColors
static int(*funcptr) (Display * , Colormap , XColor * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XQueryColors (Display * arg0 , Colormap arg1 , XColor * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryColors");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XQueryColors()");
	validate_RWaddress( arg0, "XQueryColors - arg0");
		validate_NULL_TYPETYPE(  arg0, "XQueryColors - arg0");
		validate_NULL_TYPETYPE(  arg1, "XQueryColors - arg1");
	validate_RWaddress( arg2, "XQueryColors - arg2");
		validate_NULL_TYPETYPE(  arg2, "XQueryColors - arg2");
		validate_NULL_TYPETYPE(  arg3, "XQueryColors - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


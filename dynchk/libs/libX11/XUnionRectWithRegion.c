// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XUnionRectWithRegion
static int(*funcptr) (XRectangle * , Region , Region ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XUnionRectWithRegion (XRectangle * arg0 , Region arg1 , Region arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XUnionRectWithRegion");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XUnionRectWithRegion()");
	validate_Rdaddress( arg0, "XUnionRectWithRegion - arg0");
		validate_NULL_TYPETYPE(  arg0, "XUnionRectWithRegion - arg0");
		validate_NULL_TYPETYPE(  arg1, "XUnionRectWithRegion - arg1");
		validate_NULL_TYPETYPE(  arg2, "XUnionRectWithRegion - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


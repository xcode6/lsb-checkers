// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetRGBColormaps
static int(*funcptr) (Display * , Window , XStandardColormap * * , int * , Atom ) = 0;

extern int __lsb_check_params;
int XGetRGBColormaps (Display * arg0 , Window arg1 , XStandardColormap * * arg2 , int * arg3 , Atom arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XGetRGBColormaps ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XGetRGBColormaps()");
		validate_RWaddress( arg0, "XGetRGBColormaps - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetRGBColormaps - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetRGBColormaps - arg1");
		validate_RWaddress( arg2, "XGetRGBColormaps - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetRGBColormaps - arg2");
		validate_RWaddress( arg3, "XGetRGBColormaps - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetRGBColormaps - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGetRGBColormaps - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetRGBColormaps
static void(*funcptr) (Display * , Window , XStandardColormap * , int , Atom ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XSetRGBColormaps (Display * arg0 , Window arg1 , XStandardColormap * arg2 , int arg3 , Atom arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetRGBColormaps");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSetRGBColormaps()");
	validate_Rdaddress( arg0, "XSetRGBColormaps - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetRGBColormaps - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetRGBColormaps - arg1");
	validate_Rdaddress( arg2, "XSetRGBColormaps - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetRGBColormaps - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetRGBColormaps - arg3");
		validate_NULL_TYPETYPE(  arg4, "XSetRGBColormaps - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


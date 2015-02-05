// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#undef XRenderCreateRadialGradient
static Picture(*funcptr) (Display * , const XRadialGradient * , const XFixed * , const XRenderColor * , int ) = 0;

extern int __lsb_check_params;
Picture XRenderCreateRadialGradient (Display * arg0 , const XRadialGradient * arg1 , const XFixed * arg2 , const XRenderColor * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	Picture ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRenderCreateRadialGradient()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderCreateRadialGradient");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderCreateRadialGradient. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderCreateRadialGradient() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderCreateRadialGradient - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderCreateRadialGradient - arg0 (dpy)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XRenderCreateRadialGradient - arg1 (gradient)");
		}
		validate_NULL_TYPETYPE(  arg1, "XRenderCreateRadialGradient - arg1 (gradient)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "XRenderCreateRadialGradient - arg2 (stops)");
		}
		validate_NULL_TYPETYPE(  arg2, "XRenderCreateRadialGradient - arg2 (stops)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XRenderCreateRadialGradient - arg3 (colors)");
		}
		validate_NULL_TYPETYPE(  arg3, "XRenderCreateRadialGradient - arg3 (colors)");
		validate_NULL_TYPETYPE(  arg4, "XRenderCreateRadialGradient - arg4 (nstops)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

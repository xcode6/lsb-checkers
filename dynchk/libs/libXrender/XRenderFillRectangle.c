// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/extensions/Xrender.h>
#undef XRenderFillRectangle
static void(*funcptr) (Display * , int , Picture , const XRenderColor * , int , int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
void XRenderFillRectangle (Display * arg0 , int arg1 , Picture arg2 , const XRenderColor * arg3 , int arg4 , int arg5 , unsigned int arg6 , unsigned int arg7 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XRenderFillRectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderFillRectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderFillRectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderFillRectangle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderFillRectangle - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderFillRectangle - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "XRenderFillRectangle - arg1 (op)");
		validate_NULL_TYPETYPE(  arg2, "XRenderFillRectangle - arg2 (dst)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XRenderFillRectangle - arg3 (color)");
		}
		validate_NULL_TYPETYPE(  arg3, "XRenderFillRectangle - arg3 (color)");
		validate_NULL_TYPETYPE(  arg4, "XRenderFillRectangle - arg4 (x)");
		validate_NULL_TYPETYPE(  arg5, "XRenderFillRectangle - arg5 (y)");
		validate_NULL_TYPETYPE(  arg6, "XRenderFillRectangle - arg6 (width)");
		validate_NULL_TYPETYPE(  arg7, "XRenderFillRectangle - arg7 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
}

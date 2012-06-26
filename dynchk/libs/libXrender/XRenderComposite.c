// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/extensions/Xrender.h>
#undef XRenderComposite
static void(*funcptr) (Display * , int , Picture , Picture , Picture , int , int , int , int , int , int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
void XRenderComposite (Display * arg0 , int arg1 , Picture arg2 , Picture arg3 , Picture arg4 , int arg5 , int arg6 , int arg7 , int arg8 , int arg9 , int arg10 , unsigned int arg11 , unsigned int arg12 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XRenderComposite()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderComposite");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderComposite. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderComposite() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderComposite - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderComposite - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "XRenderComposite - arg1 (op)");
		validate_NULL_TYPETYPE(  arg2, "XRenderComposite - arg2 (src)");
		validate_NULL_TYPETYPE(  arg3, "XRenderComposite - arg3 (mask)");
		validate_NULL_TYPETYPE(  arg4, "XRenderComposite - arg4 (dst)");
		validate_NULL_TYPETYPE(  arg5, "XRenderComposite - arg5 (src_x)");
		validate_NULL_TYPETYPE(  arg6, "XRenderComposite - arg6 (src_y)");
		validate_NULL_TYPETYPE(  arg7, "XRenderComposite - arg7 (mask_x)");
		validate_NULL_TYPETYPE(  arg8, "XRenderComposite - arg8 (mask_y)");
		validate_NULL_TYPETYPE(  arg9, "XRenderComposite - arg9 (dst_x)");
		validate_NULL_TYPETYPE(  arg10, "XRenderComposite - arg10 (dst_y)");
		validate_NULL_TYPETYPE(  arg11, "XRenderComposite - arg11 (width)");
		validate_NULL_TYPETYPE(  arg12, "XRenderComposite - arg12 (height)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
	__lsb_check_params = reset_flag;
}


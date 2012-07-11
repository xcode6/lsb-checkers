// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/render.h>
#include <X11/extensions/Xrender.h>
#undef XRenderCompositeTriangles
static void(*funcptr) (Display * , int , Picture , Picture , const XRenderPictFormat * , int , int , const XTriangle * , int ) = 0;

extern int __lsb_check_params;
void XRenderCompositeTriangles (Display * arg0 , int arg1 , Picture arg2 , Picture arg3 , const XRenderPictFormat * arg4 , int arg5 , int arg6 , const XTriangle * arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XRenderCompositeTriangles()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderCompositeTriangles");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderCompositeTriangles. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderCompositeTriangles() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderCompositeTriangles - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderCompositeTriangles - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "XRenderCompositeTriangles - arg1 (op)");
		validate_NULL_TYPETYPE(  arg2, "XRenderCompositeTriangles - arg2 (src)");
		validate_NULL_TYPETYPE(  arg3, "XRenderCompositeTriangles - arg3 (dst)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "XRenderCompositeTriangles - arg4 (maskFormat)");
		}
		validate_NULL_TYPETYPE(  arg4, "XRenderCompositeTriangles - arg4 (maskFormat)");
		validate_NULL_TYPETYPE(  arg5, "XRenderCompositeTriangles - arg5 (xSrc)");
		validate_NULL_TYPETYPE(  arg6, "XRenderCompositeTriangles - arg6 (ySrc)");
		if( arg7 ) {
		validate_Rdaddress( arg7, "XRenderCompositeTriangles - arg7 (triangles)");
		}
		validate_NULL_TYPETYPE(  arg7, "XRenderCompositeTriangles - arg7 (triangles)");
		validate_NULL_TYPETYPE(  arg8, "XRenderCompositeTriangles - arg8 (ntriangle)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

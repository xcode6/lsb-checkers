// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/X.h>
#include <X11/Xlib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#undef xlib_draw_rgb_image
static void(*funcptr) (Drawable , GC , int , int , int , int , XlibRgbDither , unsigned char * , int ) = 0;

extern int __lsb_check_params;
void xlib_draw_rgb_image (Drawable arg0 , GC arg1 , int arg2 , int arg3 , int arg4 , int arg5 , XlibRgbDither arg6 , unsigned char * arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xlib_draw_rgb_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xlib_draw_rgb_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xlib_draw_rgb_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xlib_draw_rgb_image() - validating");
		validate_NULL_TYPETYPE(  arg0, "xlib_draw_rgb_image - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg1, "xlib_draw_rgb_image - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "xlib_draw_rgb_image - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "xlib_draw_rgb_image - arg3 (y)");
		validate_NULL_TYPETYPE(  arg4, "xlib_draw_rgb_image - arg4 (width)");
		validate_NULL_TYPETYPE(  arg5, "xlib_draw_rgb_image - arg5 (height)");
		validate_NULL_TYPETYPE(  arg6, "xlib_draw_rgb_image - arg6 (dith)");
		if( arg7 ) {
		validate_RWaddress( arg7, "xlib_draw_rgb_image - arg7 (rgb_buf)");
		}
		validate_NULL_TYPETYPE(  arg7, "xlib_draw_rgb_image - arg7 (rgb_buf)");
		validate_NULL_TYPETYPE(  arg8, "xlib_draw_rgb_image - arg8 (rowstride)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#undef gdk_pixbuf_xlib_render_to_drawable
static void(*funcptr) (GdkPixbuf * , Drawable , GC , int , int , int , int , int , int , XlibRgbDither , int , int ) = 0;

extern int __lsb_check_params;
void gdk_pixbuf_xlib_render_to_drawable (GdkPixbuf * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , int arg5 , int arg6 , int arg7 , int arg8 , XlibRgbDither arg9 , int arg10 , int arg11 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_xlib_render_to_drawable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_xlib_render_to_drawable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_xlib_render_to_drawable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_xlib_render_to_drawable() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_xlib_render_to_drawable - arg0 (pixbuf)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_xlib_render_to_drawable - arg0 (pixbuf)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_xlib_render_to_drawable - arg1 (drawable)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_xlib_render_to_drawable - arg2 (gc)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_xlib_render_to_drawable - arg3 (src_x)");
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_xlib_render_to_drawable - arg4 (src_y)");
		validate_NULL_TYPETYPE(  arg5, "gdk_pixbuf_xlib_render_to_drawable - arg5 (dest_x)");
		validate_NULL_TYPETYPE(  arg6, "gdk_pixbuf_xlib_render_to_drawable - arg6 (dest_y)");
		validate_NULL_TYPETYPE(  arg7, "gdk_pixbuf_xlib_render_to_drawable - arg7 (width)");
		validate_NULL_TYPETYPE(  arg8, "gdk_pixbuf_xlib_render_to_drawable - arg8 (height)");
		validate_NULL_TYPETYPE(  arg9, "gdk_pixbuf_xlib_render_to_drawable - arg9 (dither)");
		validate_NULL_TYPETYPE(  arg10, "gdk_pixbuf_xlib_render_to_drawable - arg10 (x_dither)");
		validate_NULL_TYPETYPE(  arg11, "gdk_pixbuf_xlib_render_to_drawable - arg11 (y_dither)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
}


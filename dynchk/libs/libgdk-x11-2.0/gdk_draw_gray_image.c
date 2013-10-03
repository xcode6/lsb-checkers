// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_draw_gray_image
static void(*funcptr) (GdkDrawable * , GdkGC * , gint , gint , gint , gint , GdkRgbDither , const guchar * , gint ) = 0;

extern int __lsb_check_params;
void gdk_draw_gray_image (GdkDrawable * arg0 , GdkGC * arg1 , gint arg2 , gint arg3 , gint arg4 , gint arg5 , GdkRgbDither arg6 , const guchar * arg7 , gint arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_gray_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_gray_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_gray_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_gray_image() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_draw_gray_image - arg0 (drawable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_gray_image - arg0 (drawable)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_draw_gray_image - arg1 (gc)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_gray_image - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_gray_image - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_gray_image - arg3 (y)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_gray_image - arg4 (width)");
		validate_NULL_TYPETYPE(  arg5, "gdk_draw_gray_image - arg5 (height)");
		validate_NULL_TYPETYPE(  arg6, "gdk_draw_gray_image - arg6 (dith)");
		if( arg7 ) {
		validate_Rdaddress( arg7, "gdk_draw_gray_image - arg7 (buf)");
		}
		validate_NULL_TYPETYPE(  arg7, "gdk_draw_gray_image - arg7 (buf)");
		validate_NULL_TYPETYPE(  arg8, "gdk_draw_gray_image - arg8 (rowstride)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}


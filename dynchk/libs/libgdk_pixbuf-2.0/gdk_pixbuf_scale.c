// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gdk_pixbuf_scale
static void(*funcptr) (const GdkPixbuf * , GdkPixbuf * , int , int , int , int , double , double , double , double , GdkInterpType ) = 0;

extern int __lsb_check_params;
void gdk_pixbuf_scale (const GdkPixbuf * arg0 , GdkPixbuf * arg1 , int arg2 , int arg3 , int arg4 , int arg5 , double arg6 , double arg7 , double arg8 , double arg9 , GdkInterpType arg10 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_scale()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_scale");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_scale. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_scale() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_pixbuf_scale - arg0 (src)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_scale - arg0 (src)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_pixbuf_scale - arg1 (dest)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_scale - arg1 (dest)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_scale - arg2 (dest_x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_scale - arg3 (dest_y)");
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_scale - arg4 (dest_width)");
		validate_NULL_TYPETYPE(  arg5, "gdk_pixbuf_scale - arg5 (dest_height)");
		validate_NULL_TYPETYPE(  arg6, "gdk_pixbuf_scale - arg6 (offset_x)");
		validate_NULL_TYPETYPE(  arg7, "gdk_pixbuf_scale - arg7 (offset_y)");
		validate_NULL_TYPETYPE(  arg8, "gdk_pixbuf_scale - arg8 (scale_x)");
		validate_NULL_TYPETYPE(  arg9, "gdk_pixbuf_scale - arg9 (scale_y)");
		validate_NULL_TYPETYPE(  arg10, "gdk_pixbuf_scale - arg10 (interp_type)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	__lsb_check_params = reset_flag;
}


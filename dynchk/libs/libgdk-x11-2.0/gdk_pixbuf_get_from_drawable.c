// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pixbuf_get_from_drawable
static GdkPixbuf *(*funcptr) (GdkPixbuf * , GdkDrawable * , GdkColormap * , int , int , int , int , int , int ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_get_from_drawable (GdkPixbuf * arg0 , GdkDrawable * arg1 , GdkColormap * arg2 , int arg3 , int arg4 , int arg5 , int arg6 , int arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_get_from_drawable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_get_from_drawable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_get_from_drawable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_get_from_drawable() - validating");
		validate_RWaddress( arg0, "gdk_pixbuf_get_from_drawable - arg0 (dest)");
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_get_from_drawable - arg0 (dest)");
		validate_RWaddress( arg1, "gdk_pixbuf_get_from_drawable - arg1 (src)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_get_from_drawable - arg1 (src)");
		validate_RWaddress( arg2, "gdk_pixbuf_get_from_drawable - arg2 (cmap)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_get_from_drawable - arg2 (cmap)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_get_from_drawable - arg3 (src_x)");
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_get_from_drawable - arg4 (src_y)");
		validate_NULL_TYPETYPE(  arg5, "gdk_pixbuf_get_from_drawable - arg5 (dest_x)");
		validate_NULL_TYPETYPE(  arg6, "gdk_pixbuf_get_from_drawable - arg6 (dest_y)");
		validate_NULL_TYPETYPE(  arg7, "gdk_pixbuf_get_from_drawable - arg7 (width)");
		validate_NULL_TYPETYPE(  arg8, "gdk_pixbuf_get_from_drawable - arg8 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}


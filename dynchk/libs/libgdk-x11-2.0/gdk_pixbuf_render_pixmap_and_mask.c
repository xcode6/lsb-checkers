// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pixbuf_render_pixmap_and_mask
static void(*funcptr) (GdkPixbuf * , GdkPixmap * * , GdkBitmap * * , int ) = 0;

extern int __lsb_check_params;
void gdk_pixbuf_render_pixmap_and_mask (GdkPixbuf * arg0 , GdkPixmap * * arg1 , GdkBitmap * * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_render_pixmap_and_mask()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_render_pixmap_and_mask");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_render_pixmap_and_mask. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_render_pixmap_and_mask() - validating");
		validate_RWaddress( arg0, "gdk_pixbuf_render_pixmap_and_mask - arg0 (pixbuf)");
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_render_pixmap_and_mask - arg0 (pixbuf)");
		validate_RWaddress( arg1, "gdk_pixbuf_render_pixmap_and_mask - arg1 (pixmap_return)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_render_pixmap_and_mask - arg1 (pixmap_return)");
		validate_RWaddress( arg2, "gdk_pixbuf_render_pixmap_and_mask - arg2 (mask_return)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_render_pixmap_and_mask - arg2 (mask_return)");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_render_pixmap_and_mask - arg3 (alpha_threshold)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


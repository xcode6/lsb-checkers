// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_rgb_cmap_new
static GdkRgbCmap *(*funcptr) (guint32 * , gint ) = 0;

extern int __lsb_check_params;
GdkRgbCmap * gdk_rgb_cmap_new (guint32 * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkRgbCmap * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_rgb_cmap_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_rgb_cmap_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_rgb_cmap_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_rgb_cmap_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_rgb_cmap_new - arg0 (colors)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_rgb_cmap_new - arg0 (colors)");
		validate_NULL_TYPETYPE(  arg1, "gdk_rgb_cmap_new - arg1 (n_colors)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


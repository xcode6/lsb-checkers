// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <glib-2.0/glib.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_pixbuf_get_from_surface
static GdkPixbuf *(*funcptr) (cairo_surface_t * , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_get_from_surface (cairo_surface_t * arg0 , gint arg1 , gint arg2 , gint arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_get_from_surface()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_get_from_surface");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_get_from_surface. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_get_from_surface() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_get_from_surface - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_get_from_surface - arg0 (surface)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_get_from_surface - arg1");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_get_from_surface - arg2");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_get_from_surface - arg3");
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_get_from_surface - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

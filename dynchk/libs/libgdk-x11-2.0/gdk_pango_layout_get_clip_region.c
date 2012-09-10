// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pango_layout_get_clip_region
static GdkRegion *(*funcptr) (PangoLayout * , gint , gint , const gint * , gint ) = 0;

extern int __lsb_check_params;
GdkRegion * gdk_pango_layout_get_clip_region (PangoLayout * arg0 , gint arg1 , gint arg2 , const gint * arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	GdkRegion * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pango_layout_get_clip_region()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pango_layout_get_clip_region");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pango_layout_get_clip_region. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pango_layout_get_clip_region() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pango_layout_get_clip_region - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pango_layout_get_clip_region - arg0 (layout)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pango_layout_get_clip_region - arg1 (x_origin)");
		validate_NULL_TYPETYPE(  arg2, "gdk_pango_layout_get_clip_region - arg2 (y_origin)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gdk_pango_layout_get_clip_region - arg3 (index_ranges)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_pango_layout_get_clip_region - arg3 (index_ranges)");
		validate_NULL_TYPETYPE(  arg4, "gdk_pango_layout_get_clip_region - arg4 (n_ranges)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


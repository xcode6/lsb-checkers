// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_region_polygon
static GdkRegion *(*funcptr) (const GdkPoint * , gint , GdkFillRule ) = 0;

extern int __lsb_check_params;
GdkRegion * gdk_region_polygon (const GdkPoint * arg0 , gint arg1 , GdkFillRule arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkRegion * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_region_polygon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_region_polygon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_region_polygon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_region_polygon() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_region_polygon - arg0 (points)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_region_polygon - arg0 (points)");
		validate_NULL_TYPETYPE(  arg1, "gdk_region_polygon - arg1 (npoints)");
		validate_NULL_TYPETYPE(  arg2, "gdk_region_polygon - arg2 (fill_rule)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


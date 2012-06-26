// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_shape_combine_region
static void(*funcptr) (GdkWindow * , const GdkRegion * , gint , gint ) = 0;

extern int __lsb_check_params;
void gdk_window_shape_combine_region (GdkWindow * arg0 , const GdkRegion * arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_shape_combine_region()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_shape_combine_region");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_shape_combine_region. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_shape_combine_region() - validating");
		validate_RWaddress( arg0, "gdk_window_shape_combine_region - arg0 (window)");
		validate_NULL_TYPETYPE(  arg0, "gdk_window_shape_combine_region - arg0 (window)");
		validate_Rdaddress( arg1, "gdk_window_shape_combine_region - arg1 (shape_region)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_shape_combine_region - arg1 (shape_region)");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_shape_combine_region - arg2 (offset_x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_window_shape_combine_region - arg3 (offset_y)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


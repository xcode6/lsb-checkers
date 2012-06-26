// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <pango-1.0/pango/pango.h>
#undef gdk_draw_layout
static void(*funcptr) (GdkDrawable * , GdkGC * , int , int , PangoLayout * ) = 0;

extern int __lsb_check_params;
void gdk_draw_layout (GdkDrawable * arg0 , GdkGC * arg1 , int arg2 , int arg3 , PangoLayout * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_draw_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_draw_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_draw_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_draw_layout() - validating");
		validate_RWaddress( arg0, "gdk_draw_layout - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_draw_layout - arg0 (drawable)");
		validate_RWaddress( arg1, "gdk_draw_layout - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_draw_layout - arg1 (gc)");
		validate_NULL_TYPETYPE(  arg2, "gdk_draw_layout - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "gdk_draw_layout - arg3 (y)");
		validate_RWaddress( arg4, "gdk_draw_layout - arg4 (layout)");
		validate_NULL_TYPETYPE(  arg4, "gdk_draw_layout - arg4 (layout)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_drawable_get_visual
static GdkVisual *(*funcptr) (GdkDrawable * ) = 0;

extern int __lsb_check_params;
GdkVisual * gdk_drawable_get_visual (GdkDrawable * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkVisual * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_drawable_get_visual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_drawable_get_visual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_drawable_get_visual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_drawable_get_visual() - validating");
		validate_RWaddress( arg0, "gdk_drawable_get_visual - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_drawable_get_visual - arg0 (drawable)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

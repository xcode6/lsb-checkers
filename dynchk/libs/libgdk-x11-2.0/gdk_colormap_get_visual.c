// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_colormap_get_visual
static GdkVisual *(*funcptr) (GdkColormap * ) = 0;

extern int __lsb_check_params;
GdkVisual * gdk_colormap_get_visual (GdkColormap * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkVisual * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_colormap_get_visual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_colormap_get_visual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_colormap_get_visual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_colormap_get_visual() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_colormap_get_visual - arg0 (colormap)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_colormap_get_visual - arg0 (colormap)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


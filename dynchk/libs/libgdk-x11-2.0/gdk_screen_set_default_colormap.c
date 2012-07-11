// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_screen_set_default_colormap
static void(*funcptr) (GdkScreen * , GdkColormap * ) = 0;

extern int __lsb_check_params;
void gdk_screen_set_default_colormap (GdkScreen * arg0 , GdkColormap * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_screen_set_default_colormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_screen_set_default_colormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_screen_set_default_colormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_screen_set_default_colormap() - validating");
		validate_RWaddress( arg0, "gdk_screen_set_default_colormap - arg0 (screen)");
		validate_NULL_TYPETYPE(  arg0, "gdk_screen_set_default_colormap - arg0 (screen)");
		validate_RWaddress( arg1, "gdk_screen_set_default_colormap - arg1 (colormap)");
		validate_NULL_TYPETYPE(  arg1, "gdk_screen_set_default_colormap - arg1 (colormap)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

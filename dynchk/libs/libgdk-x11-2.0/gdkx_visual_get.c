// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/X.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdkx_visual_get
static GdkVisual *(*funcptr) (VisualID ) = 0;

extern int __lsb_check_params;
GdkVisual * gdkx_visual_get (VisualID arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkVisual * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdkx_visual_get()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdkx_visual_get");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdkx_visual_get. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdkx_visual_get() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdkx_visual_get - arg0 (xvisualid)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pango_renderer_new
static PangoRenderer *(*funcptr) (GdkScreen * ) = 0;

extern int __lsb_check_params;
PangoRenderer * gdk_pango_renderer_new (GdkScreen * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoRenderer * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pango_renderer_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pango_renderer_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pango_renderer_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pango_renderer_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pango_renderer_new - arg0 (screen)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pango_renderer_new - arg0 (screen)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


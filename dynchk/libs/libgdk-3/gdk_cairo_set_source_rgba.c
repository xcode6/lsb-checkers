// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_cairo_set_source_rgba
static void(*funcptr) (cairo_t * , const GdkRGBA * ) = 0;

extern int __lsb_check_params;
void gdk_cairo_set_source_rgba (cairo_t * arg0 , const GdkRGBA * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_cairo_set_source_rgba()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_cairo_set_source_rgba");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_cairo_set_source_rgba. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_cairo_set_source_rgba() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_cairo_set_source_rgba - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_cairo_set_source_rgba - arg0 (cr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_cairo_set_source_rgba - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_cairo_set_source_rgba - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

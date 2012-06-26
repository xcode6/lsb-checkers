// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <pango-1.0/pango/pango.h>
#include <pango-1.0/pango/pangocairo.h>
#undef pango_cairo_show_layout
static void(*funcptr) (cairo_t * , PangoLayout * ) = 0;

extern int __lsb_check_params;
void pango_cairo_show_layout (cairo_t * arg0 , PangoLayout * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_cairo_show_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_cairo_show_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_cairo_show_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_cairo_show_layout() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_cairo_show_layout - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_cairo_show_layout - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_cairo_show_layout - arg1 (layout)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_cairo_show_layout - arg1 (layout)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


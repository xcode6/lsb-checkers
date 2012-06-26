// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_font_extents
static void(*funcptr) (cairo_t * , cairo_font_extents_t * ) = 0;

extern int __lsb_check_params;
void cairo_font_extents (cairo_t * arg0 , cairo_font_extents_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_font_extents()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_font_extents");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_font_extents. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_font_extents() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_font_extents - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_font_extents - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_font_extents - arg1 (extents)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_font_extents - arg1 (extents)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


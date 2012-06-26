// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_scaled_font_get_type
static cairo_font_type_t(*funcptr) (cairo_scaled_font_t * ) = 0;

extern int __lsb_check_params;
cairo_font_type_t cairo_scaled_font_get_type (cairo_scaled_font_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_font_type_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_scaled_font_get_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_scaled_font_get_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_scaled_font_get_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_scaled_font_get_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_scaled_font_get_type - arg0 (scaled_font)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_scaled_font_get_type - arg0 (scaled_font)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


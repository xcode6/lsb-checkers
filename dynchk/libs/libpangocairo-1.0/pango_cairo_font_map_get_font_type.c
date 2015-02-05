// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangocairo.h>
#undef pango_cairo_font_map_get_font_type
static cairo_font_type_t(*funcptr) (PangoCairoFontMap * ) = 0;

extern int __lsb_check_params;
cairo_font_type_t pango_cairo_font_map_get_font_type (PangoCairoFontMap * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_font_type_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_cairo_font_map_get_font_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_cairo_font_map_get_font_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_cairo_font_map_get_font_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_cairo_font_map_get_font_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_cairo_font_map_get_font_type - arg0 (fontmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_cairo_font_map_get_font_type - arg0 (fontmap)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

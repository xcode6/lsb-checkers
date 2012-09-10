// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_font_description_get_stretch
static PangoStretch(*funcptr) (const PangoFontDescription * ) = 0;

extern int __lsb_check_params;
PangoStretch pango_font_description_get_stretch (const PangoFontDescription * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoStretch ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_font_description_get_stretch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_description_get_stretch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_description_get_stretch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_description_get_stretch() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pango_font_description_get_stretch - arg0 (desc)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_font_description_get_stretch - arg0 (desc)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


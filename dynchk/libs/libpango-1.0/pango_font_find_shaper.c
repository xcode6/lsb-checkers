// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_font_find_shaper
static PangoEngineShape *(*funcptr) (PangoFont * , PangoLanguage * , guint32 ) = 0;

extern int __lsb_check_params;
PangoEngineShape * pango_font_find_shaper (PangoFont * arg0 , PangoLanguage * arg1 , guint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	PangoEngineShape * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_font_find_shaper()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_find_shaper");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_find_shaper. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_find_shaper() - validating");
		validate_RWaddress( arg0, "pango_font_find_shaper - arg0 (font)");
		validate_NULL_TYPETYPE(  arg0, "pango_font_find_shaper - arg0 (font)");
		validate_RWaddress( arg1, "pango_font_find_shaper - arg1 (language)");
		validate_NULL_TYPETYPE(  arg1, "pango_font_find_shaper - arg1 (language)");
		validate_NULL_TYPETYPE(  arg2, "pango_font_find_shaper - arg2 (ch)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


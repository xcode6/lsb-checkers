// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_font_map_load_fontset
static PangoFontset *(*funcptr) (PangoFontMap * , PangoContext * , const PangoFontDescription * , PangoLanguage * ) = 0;

extern int __lsb_check_params;
PangoFontset * pango_font_map_load_fontset (PangoFontMap * arg0 , PangoContext * arg1 , const PangoFontDescription * arg2 , PangoLanguage * arg3 )
{
	int reset_flag = __lsb_check_params;
	PangoFontset * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_font_map_load_fontset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_map_load_fontset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_map_load_fontset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_map_load_fontset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_font_map_load_fontset - arg0 (fontmap)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_font_map_load_fontset - arg0 (fontmap)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_font_map_load_fontset - arg1 (context)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_font_map_load_fontset - arg1 (context)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "pango_font_map_load_fontset - arg2 (desc)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_font_map_load_fontset - arg2 (desc)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_font_map_load_fontset - arg3 (language)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_font_map_load_fontset - arg3 (language)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


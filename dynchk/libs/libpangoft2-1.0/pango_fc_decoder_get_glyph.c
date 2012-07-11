// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pangofc-decoder.h>
#include <pango-1.0/pango/pangoft2.h>
#include <glib-2.0/glib.h>
#undef pango_fc_decoder_get_glyph
static PangoGlyph(*funcptr) (PangoFcDecoder * , PangoFcFont * , guint32 ) = 0;

extern int __lsb_check_params;
PangoGlyph pango_fc_decoder_get_glyph (PangoFcDecoder * arg0 , PangoFcFont * arg1 , guint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	PangoGlyph ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_fc_decoder_get_glyph()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_fc_decoder_get_glyph");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_fc_decoder_get_glyph. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_fc_decoder_get_glyph() - validating");
		validate_RWaddress( arg0, "pango_fc_decoder_get_glyph - arg0 (decoder)");
		validate_NULL_TYPETYPE(  arg0, "pango_fc_decoder_get_glyph - arg0 (decoder)");
		validate_RWaddress( arg1, "pango_fc_decoder_get_glyph - arg1 (fcfont)");
		validate_NULL_TYPETYPE(  arg1, "pango_fc_decoder_get_glyph - arg1 (fcfont)");
		validate_NULL_TYPETYPE(  arg2, "pango_fc_decoder_get_glyph - arg2 (wc)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

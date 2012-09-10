// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_fontset_get_font
static PangoFont *(*funcptr) (PangoFontset * , guint ) = 0;

extern int __lsb_check_params;
PangoFont * pango_fontset_get_font (PangoFontset * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	PangoFont * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_fontset_get_font()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_fontset_get_font");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_fontset_get_font. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_fontset_get_font() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_fontset_get_font - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_fontset_get_font - arg0");
		validate_NULL_TYPETYPE(  arg1, "pango_fontset_get_font - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


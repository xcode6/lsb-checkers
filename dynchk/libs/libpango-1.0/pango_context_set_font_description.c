// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_context_set_font_description
static void(*funcptr) (PangoContext * , const PangoFontDescription * ) = 0;

extern int __lsb_check_params;
void pango_context_set_font_description (PangoContext * arg0 , const PangoFontDescription * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_context_set_font_description()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_context_set_font_description");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_context_set_font_description. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_context_set_font_description() - validating");
		validate_RWaddress( arg0, "pango_context_set_font_description - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "pango_context_set_font_description - arg0 (context)");
		validate_Rdaddress( arg1, "pango_context_set_font_description - arg1 (desc)");
		validate_NULL_TYPETYPE(  arg1, "pango_context_set_font_description - arg1 (desc)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_font_description_equal
static gboolean(*funcptr) (const PangoFontDescription * , const PangoFontDescription * ) = 0;

extern int __lsb_check_params;
gboolean pango_font_description_equal (const PangoFontDescription * arg0 , const PangoFontDescription * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_font_description_equal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_description_equal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_description_equal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_description_equal() - validating");
		validate_Rdaddress( arg0, "pango_font_description_equal - arg0 (desc1)");
		validate_NULL_TYPETYPE(  arg0, "pango_font_description_equal - arg0 (desc1)");
		validate_Rdaddress( arg1, "pango_font_description_equal - arg1 (desc2)");
		validate_NULL_TYPETYPE(  arg1, "pango_font_description_equal - arg1 (desc2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


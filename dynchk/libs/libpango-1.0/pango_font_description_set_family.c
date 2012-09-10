// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_font_description_set_family
static void(*funcptr) (PangoFontDescription * , const char * ) = 0;

extern int __lsb_check_params;
void pango_font_description_set_family (PangoFontDescription * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_font_description_set_family()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_font_description_set_family");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_font_description_set_family. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_font_description_set_family() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_font_description_set_family - arg0 (desc)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_font_description_set_family - arg0 (desc)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "pango_font_description_set_family - arg1 (family)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_font_description_set_family - arg1 (family)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


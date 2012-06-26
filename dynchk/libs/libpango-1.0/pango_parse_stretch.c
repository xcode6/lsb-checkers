// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango-utils.h>
#include <glib-2.0/glib.h>
#undef pango_parse_stretch
static gboolean(*funcptr) (const char * , PangoStretch * , gboolean ) = 0;

extern int __lsb_check_params;
gboolean pango_parse_stretch (const char * arg0 , PangoStretch * arg1 , gboolean arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_parse_stretch()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_parse_stretch");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_parse_stretch. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_parse_stretch() - validating");
		validate_Rdaddress( arg0, "pango_parse_stretch - arg0 (str)");
		validate_NULL_TYPETYPE(  arg0, "pango_parse_stretch - arg0 (str)");
		validate_RWaddress( arg1, "pango_parse_stretch - arg1 (stretch)");
		validate_NULL_TYPETYPE(  arg1, "pango_parse_stretch - arg1 (stretch)");
		validate_NULL_TYPETYPE(  arg2, "pango_parse_stretch - arg2 (warn)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


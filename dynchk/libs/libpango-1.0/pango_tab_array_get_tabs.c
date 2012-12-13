// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#include <glib-2.0/glib.h>
#undef pango_tab_array_get_tabs
static void(*funcptr) (PangoTabArray * , PangoTabAlign * * , gint * * ) = 0;

extern int __lsb_check_params;
void pango_tab_array_get_tabs (PangoTabArray * arg0 , PangoTabAlign * * arg1 , gint * * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_tab_array_get_tabs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_tab_array_get_tabs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_tab_array_get_tabs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_tab_array_get_tabs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_tab_array_get_tabs - arg0 (tab_array)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_tab_array_get_tabs - arg0 (tab_array)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_tab_array_get_tabs - arg1 (alignments)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_tab_array_get_tabs - arg1 (alignments)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_tab_array_get_tabs - arg2 (locations)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_tab_array_get_tabs - arg2 (locations)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


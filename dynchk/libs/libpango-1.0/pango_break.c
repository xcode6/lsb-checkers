// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef pango_break
static void(*funcptr) (const gchar * , gint , PangoAnalysis * , PangoLogAttr * , int ) = 0;

extern int __lsb_check_params;
void pango_break (const gchar * arg0 , gint arg1 , PangoAnalysis * arg2 , PangoLogAttr * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_break()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_break");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_break. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_break() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "pango_break - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_break - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "pango_break - arg1 (length)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_break - arg2 (analysis)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_break - arg2 (analysis)");
		if( arg3 ) {
		validate_RWaddress( arg3, "pango_break - arg3 (attrs)");
		}
		validate_NULL_TYPETYPE(  arg3, "pango_break - arg3 (attrs)");
		validate_NULL_TYPETYPE(  arg4, "pango_break - arg4 (attrs_len)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

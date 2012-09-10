// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_markup_escape_text
static gchar *(*funcptr) (const gchar * , gssize ) = 0;

extern int __lsb_check_params;
gchar * g_markup_escape_text (const gchar * arg0 , gssize arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_markup_escape_text()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_markup_escape_text");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_markup_escape_text. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_markup_escape_text() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_markup_escape_text - arg0 (text)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_markup_escape_text - arg0 (text)");
		validate_NULL_TYPETYPE(  arg1, "g_markup_escape_text - arg1 (length)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


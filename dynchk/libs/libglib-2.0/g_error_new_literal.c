// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_error_new_literal
static GError *(*funcptr) (GQuark , gint , const gchar * ) = 0;

extern int __lsb_check_params;
GError * g_error_new_literal (GQuark arg0 , gint arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	GError * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_error_new_literal()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_error_new_literal");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_error_new_literal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_error_new_literal() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_error_new_literal - arg0 (domain)");
		validate_NULL_TYPETYPE(  arg1, "g_error_new_literal - arg1 (code)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_error_new_literal - arg2 (message)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_error_new_literal - arg2 (message)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <stdarg.h>
#include <glib-2.0/glib/gprintf.h>
#undef g_vsnprintf
static gint(*funcptr) (gchar * , gulong , const gchar * , va_list ) = 0;

extern int __lsb_check_params;
gint g_vsnprintf (gchar * arg0 , gulong arg1 , const gchar * arg2 , va_list arg3 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_vsnprintf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_vsnprintf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_vsnprintf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_vsnprintf() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_vsnprintf - arg0 (string)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_vsnprintf - arg0 (string)");
		validate_NULL_TYPETYPE(  arg1, "g_vsnprintf - arg1 (n)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_vsnprintf - arg2 (format)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_vsnprintf - arg2 (format)");
		validate_NULL_TYPETYPE(  arg3, "g_vsnprintf - arg3 (args)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


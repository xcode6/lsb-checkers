// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_setenv
static gboolean(*funcptr) (const gchar * , const gchar * , gboolean ) = 0;

extern int __lsb_check_params;
gboolean g_setenv (const gchar * arg0 , const gchar * arg1 , gboolean arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_setenv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_setenv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_setenv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_setenv() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_setenv - arg0 (variable)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_setenv - arg0 (variable)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_setenv - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_setenv - arg1 (value)");
		validate_NULL_TYPETYPE(  arg2, "g_setenv - arg2 (overwrite)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

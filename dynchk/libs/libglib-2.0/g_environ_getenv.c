// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_environ_getenv
static const gchar *(*funcptr) (gchar * * , const gchar * ) = 0;

extern int __lsb_check_params;
const gchar * g_environ_getenv (gchar * * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_environ_getenv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_environ_getenv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_environ_getenv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_environ_getenv() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_environ_getenv - arg0 (envp)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_environ_getenv - arg0 (envp)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_environ_getenv - arg1 (variable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_environ_getenv - arg1 (variable)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

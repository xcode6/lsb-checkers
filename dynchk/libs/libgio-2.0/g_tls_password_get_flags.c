// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gtlspassword.h>
#undef g_tls_password_get_flags
static GTlsPasswordFlags(*funcptr) (GTlsPassword * ) = 0;

extern int __lsb_check_params;
GTlsPasswordFlags g_tls_password_get_flags (GTlsPassword * arg0 )
{
	int reset_flag = __lsb_check_params;
	GTlsPasswordFlags ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_tls_password_get_flags()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_tls_password_get_flags");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_tls_password_get_flags. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_tls_password_get_flags() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_tls_password_get_flags - arg0 (password)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_tls_password_get_flags - arg0 (password)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


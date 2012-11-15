// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hmac_unref
static void(*funcptr) (GHmac * ) = 0;

extern int __lsb_check_params;
void g_hmac_unref (GHmac * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_hmac_unref()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hmac_unref");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hmac_unref. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hmac_unref() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hmac_unref - arg0 (hmac)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hmac_unref - arg0 (hmac)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

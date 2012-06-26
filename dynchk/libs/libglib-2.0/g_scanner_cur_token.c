// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_scanner_cur_token
static GTokenType(*funcptr) (GScanner * ) = 0;

extern int __lsb_check_params;
GTokenType g_scanner_cur_token (GScanner * arg0 )
{
	int reset_flag = __lsb_check_params;
	GTokenType ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_scanner_cur_token()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_scanner_cur_token");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_scanner_cur_token. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_scanner_cur_token() - validating");
		validate_RWaddress( arg0, "g_scanner_cur_token - arg0 (scanner)");
		validate_NULL_TYPETYPE(  arg0, "g_scanner_cur_token - arg0 (scanner)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


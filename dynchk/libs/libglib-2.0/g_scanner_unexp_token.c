// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_scanner_unexp_token
static void(*funcptr) (GScanner * , GTokenType , const gchar * , const gchar * , const gchar * , const gchar * , gint ) = 0;

extern int __lsb_check_params;
void g_scanner_unexp_token (GScanner * arg0 , GTokenType arg1 , const gchar * arg2 , const gchar * arg3 , const gchar * arg4 , const gchar * arg5 , gint arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_scanner_unexp_token()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_scanner_unexp_token");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_scanner_unexp_token. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_scanner_unexp_token() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_scanner_unexp_token - arg0 (scanner)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_scanner_unexp_token - arg0 (scanner)");
		validate_NULL_TYPETYPE(  arg1, "g_scanner_unexp_token - arg1 (expected_token)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_scanner_unexp_token - arg2 (identifier_spec)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_scanner_unexp_token - arg2 (identifier_spec)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_scanner_unexp_token - arg3 (symbol_spec)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_scanner_unexp_token - arg3 (symbol_spec)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "g_scanner_unexp_token - arg4 (symbol_name)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_scanner_unexp_token - arg4 (symbol_name)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "g_scanner_unexp_token - arg5 (message)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_scanner_unexp_token - arg5 (message)");
		validate_NULL_TYPETYPE(  arg6, "g_scanner_unexp_token - arg6 (is_error)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}


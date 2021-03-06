// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_filename_to_uri
static gchar *(*funcptr) (const gchar * , const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
gchar * g_filename_to_uri (const gchar * arg0 , const gchar * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_filename_to_uri()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_filename_to_uri");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_filename_to_uri. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_filename_to_uri() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_filename_to_uri - arg0 (filename)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_filename_to_uri - arg0 (filename)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_filename_to_uri - arg1 (hostname)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_filename_to_uri - arg1 (hostname)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_filename_to_uri - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_filename_to_uri - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


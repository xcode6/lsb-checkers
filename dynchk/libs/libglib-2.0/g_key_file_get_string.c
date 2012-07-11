// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_key_file_get_string
static gchar *(*funcptr) (GKeyFile * , const gchar * , const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
gchar * g_key_file_get_string (GKeyFile * arg0 , const gchar * arg1 , const gchar * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_key_file_get_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_key_file_get_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_key_file_get_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_key_file_get_string() - validating");
		validate_RWaddress( arg0, "g_key_file_get_string - arg0 (key_file)");
		validate_NULL_TYPETYPE(  arg0, "g_key_file_get_string - arg0 (key_file)");
		validate_Rdaddress( arg1, "g_key_file_get_string - arg1 (group_name)");
		validate_NULL_TYPETYPE(  arg1, "g_key_file_get_string - arg1 (group_name)");
		validate_Rdaddress( arg2, "g_key_file_get_string - arg2 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_key_file_get_string - arg2 (key)");
		validate_RWaddress( arg3, "g_key_file_get_string - arg3 (error)");
		validate_NULL_TYPETYPE(  arg3, "g_key_file_get_string - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

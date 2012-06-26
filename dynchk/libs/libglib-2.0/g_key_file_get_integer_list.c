// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_key_file_get_integer_list
static gint *(*funcptr) (GKeyFile * , const gchar * , const gchar * , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
gint * g_key_file_get_integer_list (GKeyFile * arg0 , const gchar * arg1 , const gchar * arg2 , gsize * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gint * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_key_file_get_integer_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_key_file_get_integer_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_key_file_get_integer_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_key_file_get_integer_list() - validating");
		validate_RWaddress( arg0, "g_key_file_get_integer_list - arg0 (key_file)");
		validate_NULL_TYPETYPE(  arg0, "g_key_file_get_integer_list - arg0 (key_file)");
		validate_Rdaddress( arg1, "g_key_file_get_integer_list - arg1 (group_name)");
		validate_NULL_TYPETYPE(  arg1, "g_key_file_get_integer_list - arg1 (group_name)");
		validate_Rdaddress( arg2, "g_key_file_get_integer_list - arg2 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_key_file_get_integer_list - arg2 (key)");
		validate_RWaddress( arg3, "g_key_file_get_integer_list - arg3 (length)");
		validate_NULL_TYPETYPE(  arg3, "g_key_file_get_integer_list - arg3 (length)");
		validate_RWaddress( arg4, "g_key_file_get_integer_list - arg4 (error)");
		validate_NULL_TYPETYPE(  arg4, "g_key_file_get_integer_list - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


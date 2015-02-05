// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_key_file_set_value
static void(*funcptr) (GKeyFile * , const gchar * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_key_file_set_value (GKeyFile * arg0 , const gchar * arg1 , const gchar * arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_key_file_set_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_key_file_set_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_key_file_set_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_key_file_set_value() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_key_file_set_value - arg0 (key_file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_key_file_set_value - arg0 (key_file)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_key_file_set_value - arg1 (group_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_key_file_set_value - arg1 (group_name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_key_file_set_value - arg2 (key)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_key_file_set_value - arg2 (key)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_key_file_set_value - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_key_file_set_value - arg3 (value)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

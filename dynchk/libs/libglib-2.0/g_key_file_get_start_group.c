// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_key_file_get_start_group
static gchar *(*funcptr) (GKeyFile * ) = 0;

extern int __lsb_check_params;
gchar * g_key_file_get_start_group (GKeyFile * arg0 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_key_file_get_start_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_key_file_get_start_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_key_file_get_start_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_key_file_get_start_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_key_file_get_start_group - arg0 (key_file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_key_file_get_start_group - arg0 (key_file)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


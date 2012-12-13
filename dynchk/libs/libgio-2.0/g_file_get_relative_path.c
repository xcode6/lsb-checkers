// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_get_relative_path
static char *(*funcptr) (GFile * , GFile * ) = 0;

extern int __lsb_check_params;
char * g_file_get_relative_path (GFile * arg0 , GFile * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_get_relative_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_get_relative_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_get_relative_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_get_relative_path() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_get_relative_path - arg0 (parent)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_get_relative_path - arg0 (parent)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_file_get_relative_path - arg1 (descendant)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_get_relative_path - arg1 (descendant)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gfile.h>
#undef g_file_new_for_commandline_arg
static GFile *(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
GFile * g_file_new_for_commandline_arg (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	GFile * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_new_for_commandline_arg()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_new_for_commandline_arg");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_new_for_commandline_arg. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_new_for_commandline_arg() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_file_new_for_commandline_arg - arg0 (arg)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_new_for_commandline_arg - arg0 (arg)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

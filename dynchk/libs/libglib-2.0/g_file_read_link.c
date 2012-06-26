// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_file_read_link
static gchar *(*funcptr) (const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
gchar * g_file_read_link (const gchar * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_read_link()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_read_link");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_read_link. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_read_link() - validating");
		validate_Rdaddress( arg0, "g_file_read_link - arg0 (filename)");
		validate_NULL_TYPETYPE(  arg0, "g_file_read_link - arg0 (filename)");
		validate_RWaddress( arg1, "g_file_read_link - arg1 (error)");
		validate_NULL_TYPETYPE(  arg1, "g_file_read_link - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


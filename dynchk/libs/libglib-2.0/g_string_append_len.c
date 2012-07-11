// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_string_append_len
static GString *(*funcptr) (GString * , const gchar * , gssize ) = 0;

extern int __lsb_check_params;
GString * g_string_append_len (GString * arg0 , const gchar * arg1 , gssize arg2 )
{
	int reset_flag = __lsb_check_params;
	GString * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_string_append_len()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_string_append_len");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_string_append_len. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_string_append_len() - validating");
		validate_RWaddress( arg0, "g_string_append_len - arg0 (string)");
		validate_NULL_TYPETYPE(  arg0, "g_string_append_len - arg0 (string)");
		validate_Rdaddress( arg1, "g_string_append_len - arg1 (val)");
		validate_NULL_TYPETYPE(  arg1, "g_string_append_len - arg1 (val)");
		validate_NULL_TYPETYPE(  arg2, "g_string_append_len - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

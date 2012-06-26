// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_utf8_find_next_char
static gchar *(*funcptr) (const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
gchar * g_utf8_find_next_char (const gchar * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_utf8_find_next_char()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_utf8_find_next_char");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_utf8_find_next_char. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_utf8_find_next_char() - validating");
		validate_Rdaddress( arg0, "g_utf8_find_next_char - arg0 (p)");
		validate_NULL_TYPETYPE(  arg0, "g_utf8_find_next_char - arg0 (p)");
		validate_Rdaddress( arg1, "g_utf8_find_next_char - arg1 (end)");
		validate_NULL_TYPETYPE(  arg1, "g_utf8_find_next_char - arg1 (end)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


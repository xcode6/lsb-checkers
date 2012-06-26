// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_utf8_strrchr
static gchar *(*funcptr) (const char * , gssize , gunichar ) = 0;

extern int __lsb_check_params;
gchar * g_utf8_strrchr (const char * arg0 , gssize arg1 , gunichar arg2 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_utf8_strrchr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_utf8_strrchr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_utf8_strrchr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_utf8_strrchr() - validating");
		validate_Rdaddress( arg0, "g_utf8_strrchr - arg0 (p)");
		validate_NULL_TYPETYPE(  arg0, "g_utf8_strrchr - arg0 (p)");
		validate_NULL_TYPETYPE(  arg1, "g_utf8_strrchr - arg1 (len)");
		validate_NULL_TYPETYPE(  arg2, "g_utf8_strrchr - arg2 (c)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


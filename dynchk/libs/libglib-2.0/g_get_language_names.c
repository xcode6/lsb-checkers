// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_get_language_names
static const gchar *const  *(*funcptr) () = 0;

extern int __lsb_check_params;
const gchar *const  * g_get_language_names ()
{
	int reset_flag = __lsb_check_params;
	const gchar *const  * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_get_language_names()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_get_language_names");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_get_language_names. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_get_language_names() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


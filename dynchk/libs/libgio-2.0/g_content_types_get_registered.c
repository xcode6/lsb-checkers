// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gcontenttype.h>
#undef g_content_types_get_registered
static GList *(*funcptr) () = 0;

extern int __lsb_check_params;
GList * g_content_types_get_registered ()
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_content_types_get_registered()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_content_types_get_registered");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_content_types_get_registered. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_content_types_get_registered() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gappinfo.h>
#undef g_app_info_get_description
static const char *(*funcptr) (GAppInfo * ) = 0;

extern int __lsb_check_params;
const char * g_app_info_get_description (GAppInfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_app_info_get_description()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_app_info_get_description");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_app_info_get_description. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_app_info_get_description() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_app_info_get_description - arg0 (appinfo)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_app_info_get_description - arg0 (appinfo)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gio-unix-2.0/gio/gdesktopappinfo.h>
#undef g_desktop_app_info_get_is_hidden
static gboolean(*funcptr) (GDesktopAppInfo * ) = 0;

extern int __lsb_check_params;
gboolean g_desktop_app_info_get_is_hidden (GDesktopAppInfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_desktop_app_info_get_is_hidden()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_desktop_app_info_get_is_hidden");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_desktop_app_info_get_is_hidden. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_desktop_app_info_get_is_hidden() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_desktop_app_info_get_is_hidden - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_desktop_app_info_get_is_hidden - arg0 (info)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


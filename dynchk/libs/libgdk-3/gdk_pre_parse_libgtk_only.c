// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_pre_parse_libgtk_only
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void gdk_pre_parse_libgtk_only ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_pre_parse_libgtk_only()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pre_parse_libgtk_only");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pre_parse_libgtk_only. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pre_parse_libgtk_only() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

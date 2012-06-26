// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_net_wm_supports
static gboolean(*funcptr) (GdkAtom ) = 0;

extern int __lsb_check_params;
gboolean gdk_net_wm_supports (GdkAtom arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_net_wm_supports()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_net_wm_supports");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_net_wm_supports. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_net_wm_supports() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_net_wm_supports - arg0 (property)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


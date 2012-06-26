// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_list_visuals
static GList *(*funcptr) () = 0;

extern int __lsb_check_params;
GList * gdk_list_visuals ()
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_list_visuals()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_list_visuals");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_list_visuals. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_list_visuals() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


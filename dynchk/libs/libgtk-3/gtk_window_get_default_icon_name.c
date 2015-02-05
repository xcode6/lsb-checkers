// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_window_get_default_icon_name
static const char *(*funcptr) () = 0;

extern int __lsb_check_params;
const char * gtk_window_get_default_icon_name ()
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_window_get_default_icon_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_get_default_icon_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_get_default_icon_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_get_default_icon_name() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

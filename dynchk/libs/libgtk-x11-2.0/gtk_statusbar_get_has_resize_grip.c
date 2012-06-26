// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_statusbar_get_has_resize_grip
static gboolean(*funcptr) (GtkStatusbar * ) = 0;

extern int __lsb_check_params;
gboolean gtk_statusbar_get_has_resize_grip (GtkStatusbar * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_statusbar_get_has_resize_grip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_statusbar_get_has_resize_grip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_statusbar_get_has_resize_grip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_statusbar_get_has_resize_grip() - validating");
		validate_RWaddress( arg0, "gtk_statusbar_get_has_resize_grip - arg0 (statusbar)");
		validate_NULL_TYPETYPE(  arg0, "gtk_statusbar_get_has_resize_grip - arg0 (statusbar)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_toolbar_get_tooltips
static gboolean(*funcptr) (GtkToolbar * ) = 0;

extern int __lsb_check_params;
gboolean gtk_toolbar_get_tooltips (GtkToolbar * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_toolbar_get_tooltips()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_toolbar_get_tooltips");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_toolbar_get_tooltips. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_toolbar_get_tooltips() - validating");
		validate_RWaddress( arg0, "gtk_toolbar_get_tooltips - arg0 (toolbar)");
		validate_NULL_TYPETYPE(  arg0, "gtk_toolbar_get_tooltips - arg0 (toolbar)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


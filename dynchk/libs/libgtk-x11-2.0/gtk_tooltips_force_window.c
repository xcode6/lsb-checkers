// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_tooltips_force_window
static void(*funcptr) (GtkTooltips * ) = 0;

extern int __lsb_check_params;
void gtk_tooltips_force_window (GtkTooltips * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_tooltips_force_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_tooltips_force_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_tooltips_force_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_tooltips_force_window() - validating");
		validate_RWaddress( arg0, "gtk_tooltips_force_window - arg0 (tooltips)");
		validate_NULL_TYPETYPE(  arg0, "gtk_tooltips_force_window - arg0 (tooltips)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

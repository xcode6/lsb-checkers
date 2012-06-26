// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_curve_reset
static void(*funcptr) (GtkCurve * ) = 0;

extern int __lsb_check_params;
void gtk_curve_reset (GtkCurve * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_curve_reset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_curve_reset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_curve_reset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_curve_reset() - validating");
		validate_RWaddress( arg0, "gtk_curve_reset - arg0 (curve)");
		validate_NULL_TYPETYPE(  arg0, "gtk_curve_reset - arg0 (curve)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


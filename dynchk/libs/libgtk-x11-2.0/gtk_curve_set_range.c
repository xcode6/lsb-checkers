// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_curve_set_range
static void(*funcptr) (GtkCurve * , gfloat , gfloat , gfloat , gfloat ) = 0;

extern int __lsb_check_params;
void gtk_curve_set_range (GtkCurve * arg0 , gfloat arg1 , gfloat arg2 , gfloat arg3 , gfloat arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_curve_set_range()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_curve_set_range");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_curve_set_range. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_curve_set_range() - validating");
		validate_RWaddress( arg0, "gtk_curve_set_range - arg0 (curve)");
		validate_NULL_TYPETYPE(  arg0, "gtk_curve_set_range - arg0 (curve)");
		validate_NULL_TYPETYPE(  arg1, "gtk_curve_set_range - arg1 (min_x)");
		validate_NULL_TYPETYPE(  arg2, "gtk_curve_set_range - arg2 (max_x)");
		validate_NULL_TYPETYPE(  arg3, "gtk_curve_set_range - arg3 (min_y)");
		validate_NULL_TYPETYPE(  arg4, "gtk_curve_set_range - arg4 (max_y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


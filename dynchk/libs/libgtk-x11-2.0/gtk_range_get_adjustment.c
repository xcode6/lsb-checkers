// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_range_get_adjustment
static GtkAdjustment *(*funcptr) (GtkRange * ) = 0;

extern int __lsb_check_params;
GtkAdjustment * gtk_range_get_adjustment (GtkRange * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkAdjustment * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_range_get_adjustment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_range_get_adjustment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_range_get_adjustment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_range_get_adjustment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_range_get_adjustment - arg0 (range)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_range_get_adjustment - arg0 (range)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


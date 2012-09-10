// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_layout_set_hadjustment
static void(*funcptr) (GtkLayout * , GtkAdjustment * ) = 0;

extern int __lsb_check_params;
void gtk_layout_set_hadjustment (GtkLayout * arg0 , GtkAdjustment * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_layout_set_hadjustment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_layout_set_hadjustment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_layout_set_hadjustment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_layout_set_hadjustment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_layout_set_hadjustment - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_layout_set_hadjustment - arg0 (layout)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_layout_set_hadjustment - arg1 (adjustment)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_layout_set_hadjustment - arg1 (adjustment)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


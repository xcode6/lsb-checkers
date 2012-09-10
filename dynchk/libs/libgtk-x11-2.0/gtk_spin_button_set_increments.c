// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_spin_button_set_increments
static void(*funcptr) (GtkSpinButton * , gdouble , gdouble ) = 0;

extern int __lsb_check_params;
void gtk_spin_button_set_increments (GtkSpinButton * arg0 , gdouble arg1 , gdouble arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_spin_button_set_increments()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_spin_button_set_increments");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_spin_button_set_increments. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_spin_button_set_increments() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_spin_button_set_increments - arg0 (spin_button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_spin_button_set_increments - arg0 (spin_button)");
		validate_NULL_TYPETYPE(  arg1, "gtk_spin_button_set_increments - arg1 (step)");
		validate_NULL_TYPETYPE(  arg2, "gtk_spin_button_set_increments - arg2 (page)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


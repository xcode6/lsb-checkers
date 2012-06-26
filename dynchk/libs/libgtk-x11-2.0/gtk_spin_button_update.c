// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_spin_button_update
static void(*funcptr) (GtkSpinButton * ) = 0;

extern int __lsb_check_params;
void gtk_spin_button_update (GtkSpinButton * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_spin_button_update()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_spin_button_update");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_spin_button_update. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_spin_button_update() - validating");
		validate_RWaddress( arg0, "gtk_spin_button_update - arg0 (spin_button)");
		validate_NULL_TYPETYPE(  arg0, "gtk_spin_button_update - arg0 (spin_button)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


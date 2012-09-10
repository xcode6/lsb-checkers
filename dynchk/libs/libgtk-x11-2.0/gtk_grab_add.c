// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_grab_add
static void(*funcptr) (GtkWidget * ) = 0;

extern int __lsb_check_params;
void gtk_grab_add (GtkWidget * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_grab_add()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_grab_add");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_grab_add. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_grab_add() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_grab_add - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_grab_add - arg0 (widget)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_paned_set_position
static void(*funcptr) (GtkPaned * , gint ) = 0;

extern int __lsb_check_params;
void gtk_paned_set_position (GtkPaned * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_paned_set_position()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_paned_set_position");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_paned_set_position. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_paned_set_position() - validating");
		validate_RWaddress( arg0, "gtk_paned_set_position - arg0 (paned)");
		validate_NULL_TYPETYPE(  arg0, "gtk_paned_set_position - arg0 (paned)");
		validate_NULL_TYPETYPE(  arg1, "gtk_paned_set_position - arg1 (position)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


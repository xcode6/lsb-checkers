// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_menu_set_accel_path
static void(*funcptr) (GtkMenu * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_menu_set_accel_path (GtkMenu * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_menu_set_accel_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_menu_set_accel_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_menu_set_accel_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_menu_set_accel_path() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_menu_set_accel_path - arg0 (menu)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_menu_set_accel_path - arg0 (menu)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_menu_set_accel_path - arg1 (accel_path)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_menu_set_accel_path - arg1 (accel_path)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


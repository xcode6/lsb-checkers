// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accel_map_unlock_path
static void(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_accel_map_unlock_path (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_accel_map_unlock_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accel_map_unlock_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accel_map_unlock_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accel_map_unlock_path() - validating");
		validate_Rdaddress( arg0, "gtk_accel_map_unlock_path - arg0 (accel_path)");
		validate_NULL_TYPETYPE(  arg0, "gtk_accel_map_unlock_path - arg0 (accel_path)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


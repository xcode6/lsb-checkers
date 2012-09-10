// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accel_map_change_entry
static gboolean(*funcptr) (const gchar * , guint , GdkModifierType , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gtk_accel_map_change_entry (const gchar * arg0 , guint arg1 , GdkModifierType arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_accel_map_change_entry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accel_map_change_entry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accel_map_change_entry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accel_map_change_entry() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_accel_map_change_entry - arg0 (accel_path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_accel_map_change_entry - arg0 (accel_path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_accel_map_change_entry - arg1 (accel_key)");
		validate_NULL_TYPETYPE(  arg2, "gtk_accel_map_change_entry - arg2 (accel_mods)");
		validate_NULL_TYPETYPE(  arg3, "gtk_accel_map_change_entry - arg3 (replace)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


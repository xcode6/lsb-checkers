// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_icon_view_set_column_spacing
static void(*funcptr) (GtkIconView * , gint ) = 0;

extern int __lsb_check_params;
void gtk_icon_view_set_column_spacing (GtkIconView * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_set_column_spacing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_set_column_spacing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_set_column_spacing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_set_column_spacing() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_view_set_column_spacing - arg0 (icon_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_set_column_spacing - arg0 (icon_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_view_set_column_spacing - arg1 (column_spacing)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


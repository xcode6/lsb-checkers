// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_icon_view_get_columns
static gint(*funcptr) (GtkIconView * ) = 0;

extern int __lsb_check_params;
gint gtk_icon_view_get_columns (GtkIconView * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_view_get_columns()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_view_get_columns");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_view_get_columns. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_view_get_columns() - validating");
		validate_RWaddress( arg0, "gtk_icon_view_get_columns - arg0 (icon_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_view_get_columns - arg0 (icon_view)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


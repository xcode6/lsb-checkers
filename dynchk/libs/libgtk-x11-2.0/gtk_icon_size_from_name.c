// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_icon_size_from_name
static GtkIconSize(*funcptr) (const gchar * ) = 0;

extern int __lsb_check_params;
GtkIconSize gtk_icon_size_from_name (const gchar * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkIconSize ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_size_from_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_size_from_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_size_from_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_size_from_name() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_icon_size_from_name - arg0 (name)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_size_from_name - arg0 (name)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


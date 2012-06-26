// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#include <glib-2.0/glib.h>
#undef gtk_recent_info_get_icon
static GdkPixbuf *(*funcptr) (GtkRecentInfo * , gint ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_recent_info_get_icon (GtkRecentInfo * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_info_get_icon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_info_get_icon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_info_get_icon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_info_get_icon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_info_get_icon - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_info_get_icon - arg0 (info)");
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_info_get_icon - arg1 (size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


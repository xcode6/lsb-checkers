// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_icon_info_get_attach_points
static gboolean(*funcptr) (GtkIconInfo * , GdkPoint * * , gint * ) = 0;

extern int __lsb_check_params;
gboolean gtk_icon_info_get_attach_points (GtkIconInfo * arg0 , GdkPoint * * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_icon_info_get_attach_points()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_icon_info_get_attach_points");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_icon_info_get_attach_points. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_icon_info_get_attach_points() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_icon_info_get_attach_points - arg0 (icon_info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_icon_info_get_attach_points - arg0 (icon_info)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_icon_info_get_attach_points - arg1 (points)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_icon_info_get_attach_points - arg1 (points)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_icon_info_get_attach_points - arg2 (n_points)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_icon_info_get_attach_points - arg2 (n_points)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


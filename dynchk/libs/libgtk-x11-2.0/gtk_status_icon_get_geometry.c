// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkstatusicon.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_status_icon_get_geometry
static gboolean(*funcptr) (GtkStatusIcon * , GdkScreen * * , GdkRectangle * , GtkOrientation * ) = 0;

extern int __lsb_check_params;
gboolean gtk_status_icon_get_geometry (GtkStatusIcon * arg0 , GdkScreen * * arg1 , GdkRectangle * arg2 , GtkOrientation * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_status_icon_get_geometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_status_icon_get_geometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_status_icon_get_geometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_status_icon_get_geometry() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_status_icon_get_geometry - arg0 (status_icon)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_status_icon_get_geometry - arg0 (status_icon)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_status_icon_get_geometry - arg1 (screen)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_status_icon_get_geometry - arg1 (screen)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_status_icon_get_geometry - arg2 (area)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_status_icon_get_geometry - arg2 (area)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gtk_status_icon_get_geometry - arg3 (orientation)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_status_icon_get_geometry - arg3 (orientation)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


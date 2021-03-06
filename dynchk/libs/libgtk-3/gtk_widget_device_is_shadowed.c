// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_widget_device_is_shadowed
static gboolean(*funcptr) (GtkWidget * , GdkDevice * ) = 0;

extern int __lsb_check_params;
gboolean gtk_widget_device_is_shadowed (GtkWidget * arg0 , GdkDevice * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_device_is_shadowed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_device_is_shadowed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_device_is_shadowed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_device_is_shadowed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_device_is_shadowed - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_device_is_shadowed - arg0 (widget)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_widget_device_is_shadowed - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_device_is_shadowed - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


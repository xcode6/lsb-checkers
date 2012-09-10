// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_widget_get_colormap
static GdkColormap *(*funcptr) (GtkWidget * ) = 0;

extern int __lsb_check_params;
GdkColormap * gtk_widget_get_colormap (GtkWidget * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkColormap * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_get_colormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_get_colormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_get_colormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_get_colormap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_get_colormap - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_get_colormap - arg0 (widget)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


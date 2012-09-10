// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_widget_render_icon
static GdkPixbuf *(*funcptr) (GtkWidget * , const gchar * , GtkIconSize , const gchar * ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gtk_widget_render_icon (GtkWidget * arg0 , const gchar * arg1 , GtkIconSize arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_render_icon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_render_icon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_render_icon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_render_icon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_render_icon - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_render_icon - arg0 (widget)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_widget_render_icon - arg1 (stock_id)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_render_icon - arg1 (stock_id)");
		validate_NULL_TYPETYPE(  arg2, "gtk_widget_render_icon - arg2 (size)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_widget_render_icon - arg3 (detail)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_widget_render_icon - arg3 (detail)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


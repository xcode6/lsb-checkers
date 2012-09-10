// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gtk_drag_dest_set_proxy
static void(*funcptr) (GtkWidget * , GdkWindow * , GdkDragProtocol , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_drag_dest_set_proxy (GtkWidget * arg0 , GdkWindow * arg1 , GdkDragProtocol arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_dest_set_proxy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_dest_set_proxy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_dest_set_proxy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_dest_set_proxy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_drag_dest_set_proxy - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_dest_set_proxy - arg0 (widget)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_drag_dest_set_proxy - arg1 (proxy_window)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_dest_set_proxy - arg1 (proxy_window)");
		validate_NULL_TYPETYPE(  arg2, "gtk_drag_dest_set_proxy - arg2 (protocol)");
		validate_NULL_TYPETYPE(  arg3, "gtk_drag_dest_set_proxy - arg3 (use_coordinates)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


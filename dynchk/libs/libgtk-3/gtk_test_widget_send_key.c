// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_test_widget_send_key
static gboolean(*funcptr) (GtkWidget * , guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
gboolean gtk_test_widget_send_key (GtkWidget * arg0 , guint arg1 , GdkModifierType arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_test_widget_send_key()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_test_widget_send_key");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_test_widget_send_key. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_test_widget_send_key() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_test_widget_send_key - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_test_widget_send_key - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_test_widget_send_key - arg1 (keyval)");
		validate_NULL_TYPETYPE(  arg2, "gtk_test_widget_send_key - arg2 (modifiers)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


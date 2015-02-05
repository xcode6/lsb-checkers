// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_view_set_border_window_size
static void(*funcptr) (GtkTextView * , GtkTextWindowType , gint ) = 0;

extern int __lsb_check_params;
void gtk_text_view_set_border_window_size (GtkTextView * arg0 , GtkTextWindowType arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_set_border_window_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_set_border_window_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_set_border_window_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_set_border_window_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_view_set_border_window_size - arg0 (text_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_set_border_window_size - arg0 (text_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_set_border_window_size - arg1 (type)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_view_set_border_window_size - arg2 (size)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

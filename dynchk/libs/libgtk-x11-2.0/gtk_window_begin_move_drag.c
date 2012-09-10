// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_window_begin_move_drag
static void(*funcptr) (GtkWindow * , gint , gint , gint , guint32 ) = 0;

extern int __lsb_check_params;
void gtk_window_begin_move_drag (GtkWindow * arg0 , gint arg1 , gint arg2 , gint arg3 , guint32 arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_window_begin_move_drag()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_begin_move_drag");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_begin_move_drag. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_begin_move_drag() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_window_begin_move_drag - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_window_begin_move_drag - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gtk_window_begin_move_drag - arg1 (button)");
		validate_NULL_TYPETYPE(  arg2, "gtk_window_begin_move_drag - arg2 (root_x)");
		validate_NULL_TYPETYPE(  arg3, "gtk_window_begin_move_drag - arg3 (root_y)");
		validate_NULL_TYPETYPE(  arg4, "gtk_window_begin_move_drag - arg4 (timestamp)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


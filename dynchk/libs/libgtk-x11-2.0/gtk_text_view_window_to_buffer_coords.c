// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_view_window_to_buffer_coords
static void(*funcptr) (GtkTextView * , GtkTextWindowType , gint , gint , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_text_view_window_to_buffer_coords (GtkTextView * arg0 , GtkTextWindowType arg1 , gint arg2 , gint arg3 , gint * arg4 , gint * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_window_to_buffer_coords()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_window_to_buffer_coords");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_window_to_buffer_coords. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_window_to_buffer_coords() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_view_window_to_buffer_coords - arg0 (text_view)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_window_to_buffer_coords - arg0 (text_view)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_window_to_buffer_coords - arg1 (win)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_view_window_to_buffer_coords - arg2 (window_x)");
		validate_NULL_TYPETYPE(  arg3, "gtk_text_view_window_to_buffer_coords - arg3 (window_y)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gtk_text_view_window_to_buffer_coords - arg4 (buffer_x)");
		}
		validate_NULL_TYPETYPE(  arg4, "gtk_text_view_window_to_buffer_coords - arg4 (buffer_x)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gtk_text_view_window_to_buffer_coords - arg5 (buffer_y)");
		}
		validate_NULL_TYPETYPE(  arg5, "gtk_text_view_window_to_buffer_coords - arg5 (buffer_y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}


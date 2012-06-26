// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_view_backward_display_line_start
static gboolean(*funcptr) (GtkTextView * , GtkTextIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_view_backward_display_line_start (GtkTextView * arg0 , GtkTextIter * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_view_backward_display_line_start()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_view_backward_display_line_start");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_view_backward_display_line_start. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_view_backward_display_line_start() - validating");
		validate_RWaddress( arg0, "gtk_text_view_backward_display_line_start - arg0 (text_view)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_view_backward_display_line_start - arg0 (text_view)");
		validate_RWaddress( arg1, "gtk_text_view_backward_display_line_start - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_view_backward_display_line_start - arg1 (iter)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


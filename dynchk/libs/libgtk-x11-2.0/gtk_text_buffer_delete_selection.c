// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_delete_selection
static gboolean(*funcptr) (GtkTextBuffer * , gboolean , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_buffer_delete_selection (GtkTextBuffer * arg0 , gboolean arg1 , gboolean arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_delete_selection()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_delete_selection");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_delete_selection. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_delete_selection() - validating");
		validate_RWaddress( arg0, "gtk_text_buffer_delete_selection - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_delete_selection - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_delete_selection - arg1 (interactive)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_delete_selection - arg2 (default_editable)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_buffer_remove_tag_by_name
static void(*funcptr) (GtkTextBuffer * , const gchar * , const GtkTextIter * , const GtkTextIter * ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer * arg0 , const gchar * arg1 , const GtkTextIter * arg2 , const GtkTextIter * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_remove_tag_by_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_remove_tag_by_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_remove_tag_by_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_remove_tag_by_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_buffer_remove_tag_by_name - arg0 (buffer)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_remove_tag_by_name - arg0 (buffer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_text_buffer_remove_tag_by_name - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_remove_tag_by_name - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_text_buffer_remove_tag_by_name - arg2 (start)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_remove_tag_by_name - arg2 (start)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_text_buffer_remove_tag_by_name - arg3 (end)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_text_buffer_remove_tag_by_name - arg3 (end)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


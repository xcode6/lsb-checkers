// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_im_context_set_surrounding
static void(*funcptr) (GtkIMContext * , const gchar * , gint , gint ) = 0;

extern int __lsb_check_params;
void gtk_im_context_set_surrounding (GtkIMContext * arg0 , const gchar * arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_im_context_set_surrounding()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_im_context_set_surrounding");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_im_context_set_surrounding. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_im_context_set_surrounding() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_im_context_set_surrounding - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_im_context_set_surrounding - arg0 (context)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_im_context_set_surrounding - arg1 (text)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_im_context_set_surrounding - arg1 (text)");
		validate_NULL_TYPETYPE(  arg2, "gtk_im_context_set_surrounding - arg2 (len)");
		validate_NULL_TYPETYPE(  arg3, "gtk_im_context_set_surrounding - arg3 (cursor_index)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

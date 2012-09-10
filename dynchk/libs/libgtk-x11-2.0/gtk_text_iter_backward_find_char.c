// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_text_iter_backward_find_char
static gboolean(*funcptr) (GtkTextIter * , GtkTextCharPredicate , gpointer , const GtkTextIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_text_iter_backward_find_char (GtkTextIter * arg0 , GtkTextCharPredicate arg1 , gpointer arg2 , const GtkTextIter * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_backward_find_char()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_backward_find_char");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_backward_find_char. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_backward_find_char() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_text_iter_backward_find_char - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_backward_find_char - arg0 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_iter_backward_find_char - arg1 (pred)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_iter_backward_find_char - arg2 (user_data)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "gtk_text_iter_backward_find_char - arg3 (limit)");
		}
		validate_NULL_TYPETYPE(  arg3, "gtk_text_iter_backward_find_char - arg3 (limit)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


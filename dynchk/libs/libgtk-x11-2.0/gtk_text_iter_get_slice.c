// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_iter_get_slice
static gchar *(*funcptr) (const GtkTextIter * , const GtkTextIter * ) = 0;

extern int __lsb_check_params;
gchar * gtk_text_iter_get_slice (const GtkTextIter * arg0 , const GtkTextIter * arg1 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_get_slice()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_get_slice");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_get_slice. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_get_slice() - validating");
		validate_Rdaddress( arg0, "gtk_text_iter_get_slice - arg0 (start)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_get_slice - arg0 (start)");
		validate_Rdaddress( arg1, "gtk_text_iter_get_slice - arg1 (end)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_iter_get_slice - arg1 (end)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


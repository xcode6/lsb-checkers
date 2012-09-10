// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_text_iter_get_char
static gunichar(*funcptr) (const GtkTextIter * ) = 0;

extern int __lsb_check_params;
gunichar gtk_text_iter_get_char (const GtkTextIter * arg0 )
{
	int reset_flag = __lsb_check_params;
	gunichar ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_text_iter_get_char()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_iter_get_char");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_iter_get_char. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_iter_get_char() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_text_iter_get_char - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_text_iter_get_char - arg0 (iter)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


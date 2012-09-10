// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_about_dialog_get_authors
static const gchar *const  *(*funcptr) (GtkAboutDialog * ) = 0;

extern int __lsb_check_params;
const gchar *const  * gtk_about_dialog_get_authors (GtkAboutDialog * arg0 )
{
	int reset_flag = __lsb_check_params;
	const gchar *const  * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_about_dialog_get_authors()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_about_dialog_get_authors");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_about_dialog_get_authors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_about_dialog_get_authors() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_about_dialog_get_authors - arg0 (about)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_about_dialog_get_authors - arg0 (about)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


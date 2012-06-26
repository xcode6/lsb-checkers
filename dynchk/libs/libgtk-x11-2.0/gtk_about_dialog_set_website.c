// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_about_dialog_set_website
static void(*funcptr) (GtkAboutDialog * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_about_dialog_set_website (GtkAboutDialog * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_about_dialog_set_website()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_about_dialog_set_website");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_about_dialog_set_website. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_about_dialog_set_website() - validating");
		validate_RWaddress( arg0, "gtk_about_dialog_set_website - arg0 (about)");
		validate_NULL_TYPETYPE(  arg0, "gtk_about_dialog_set_website - arg0 (about)");
		validate_Rdaddress( arg1, "gtk_about_dialog_set_website - arg1 (website)");
		validate_NULL_TYPETYPE(  arg1, "gtk_about_dialog_set_website - arg1 (website)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_about_dialog_set_logo
static void(*funcptr) (GtkAboutDialog * , GdkPixbuf * ) = 0;

extern int __lsb_check_params;
void gtk_about_dialog_set_logo (GtkAboutDialog * arg0 , GdkPixbuf * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_about_dialog_set_logo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_about_dialog_set_logo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_about_dialog_set_logo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_about_dialog_set_logo() - validating");
		validate_RWaddress( arg0, "gtk_about_dialog_set_logo - arg0 (about)");
		validate_NULL_TYPETYPE(  arg0, "gtk_about_dialog_set_logo - arg0 (about)");
		validate_RWaddress( arg1, "gtk_about_dialog_set_logo - arg1 (logo)");
		validate_NULL_TYPETYPE(  arg1, "gtk_about_dialog_set_logo - arg1 (logo)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


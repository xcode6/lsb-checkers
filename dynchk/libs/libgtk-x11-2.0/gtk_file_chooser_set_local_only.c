// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_file_chooser_set_local_only
static void(*funcptr) (GtkFileChooser * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_file_chooser_set_local_only (GtkFileChooser * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_set_local_only()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_set_local_only");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_set_local_only. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_set_local_only() - validating");
		validate_RWaddress( arg0, "gtk_file_chooser_set_local_only - arg0 (chooser)");
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_set_local_only - arg0 (chooser)");
		validate_NULL_TYPETYPE(  arg1, "gtk_file_chooser_set_local_only - arg1 (local_only)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


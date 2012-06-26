// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_file_selection_hide_fileop_buttons
static void(*funcptr) (GtkFileSelection * ) = 0;

extern int __lsb_check_params;
void gtk_file_selection_hide_fileop_buttons (GtkFileSelection * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_file_selection_hide_fileop_buttons()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_selection_hide_fileop_buttons");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_selection_hide_fileop_buttons. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_selection_hide_fileop_buttons() - validating");
		validate_RWaddress( arg0, "gtk_file_selection_hide_fileop_buttons - arg0 (filesel)");
		validate_NULL_TYPETYPE(  arg0, "gtk_file_selection_hide_fileop_buttons - arg0 (filesel)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


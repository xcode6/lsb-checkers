// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_recent_chooser_select_all
static void(*funcptr) (GtkRecentChooser * ) = 0;

extern int __lsb_check_params;
void gtk_recent_chooser_select_all (GtkRecentChooser * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_recent_chooser_select_all()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_chooser_select_all");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_chooser_select_all. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_chooser_select_all() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_chooser_select_all - arg0 (chooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_chooser_select_all - arg0 (chooser)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


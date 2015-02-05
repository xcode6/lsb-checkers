// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkrecentfilter.h>
#undef gtk_recent_chooser_add_filter
static void(*funcptr) (GtkRecentChooser * , GtkRecentFilter * ) = 0;

extern int __lsb_check_params;
void gtk_recent_chooser_add_filter (GtkRecentChooser * arg0 , GtkRecentFilter * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_recent_chooser_add_filter()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_chooser_add_filter");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_chooser_add_filter. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_chooser_add_filter() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_chooser_add_filter - arg0 (chooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_chooser_add_filter - arg0 (chooser)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_recent_chooser_add_filter - arg1 (filter)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_chooser_add_filter - arg1 (filter)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

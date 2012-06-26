// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_file_chooser_list_filters
static GSList *(*funcptr) (GtkFileChooser * ) = 0;

extern int __lsb_check_params;
GSList * gtk_file_chooser_list_filters (GtkFileChooser * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_list_filters()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_list_filters");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_list_filters. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_list_filters() - validating");
		validate_RWaddress( arg0, "gtk_file_chooser_list_filters - arg0 (chooser)");
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_list_filters - arg0 (chooser)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


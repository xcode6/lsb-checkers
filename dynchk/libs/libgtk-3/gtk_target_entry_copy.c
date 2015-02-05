// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_target_entry_copy
static GtkTargetEntry *(*funcptr) (GtkTargetEntry * ) = 0;

extern int __lsb_check_params;
GtkTargetEntry * gtk_target_entry_copy (GtkTargetEntry * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkTargetEntry * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_target_entry_copy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_target_entry_copy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_target_entry_copy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_target_entry_copy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_target_entry_copy - arg0 (data)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_target_entry_copy - arg0 (data)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

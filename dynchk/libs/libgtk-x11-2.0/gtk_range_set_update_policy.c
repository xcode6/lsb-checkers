// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_range_set_update_policy
static void(*funcptr) (GtkRange * , GtkUpdateType ) = 0;

extern int __lsb_check_params;
void gtk_range_set_update_policy (GtkRange * arg0 , GtkUpdateType arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_range_set_update_policy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_range_set_update_policy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_range_set_update_policy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_range_set_update_policy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_range_set_update_policy - arg0 (range)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_range_set_update_policy - arg0 (range)");
		validate_NULL_TYPETYPE(  arg1, "gtk_range_set_update_policy - arg1 (policy)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


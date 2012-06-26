// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentfilter.h>
#undef gtk_recent_filter_set_name
static void(*funcptr) (GtkRecentFilter * , const char * ) = 0;

extern int __lsb_check_params;
void gtk_recent_filter_set_name (GtkRecentFilter * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_recent_filter_set_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_filter_set_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_filter_set_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_filter_set_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_filter_set_name - arg0 (filter)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_filter_set_name - arg0 (filter)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_filter_set_name - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_filter_set_name - arg1 (name)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


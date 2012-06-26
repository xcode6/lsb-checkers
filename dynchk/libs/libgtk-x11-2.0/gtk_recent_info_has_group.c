// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#undef gtk_recent_info_has_group
static gboolean(*funcptr) (GtkRecentInfo * , const char * ) = 0;

extern int __lsb_check_params;
gboolean gtk_recent_info_has_group (GtkRecentInfo * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_info_has_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_info_has_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_info_has_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_info_has_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_info_has_group - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_info_has_group - arg0 (info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_info_has_group - arg1 (group_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_info_has_group - arg1 (group_name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


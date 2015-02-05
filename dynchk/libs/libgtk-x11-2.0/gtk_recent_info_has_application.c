// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkrecentmanager.h>
#undef gtk_recent_info_has_application
static gboolean(*funcptr) (GtkRecentInfo * , const char * ) = 0;

extern int __lsb_check_params;
gboolean gtk_recent_info_has_application (GtkRecentInfo * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_recent_info_has_application()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_recent_info_has_application");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_recent_info_has_application. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_recent_info_has_application() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_recent_info_has_application - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_recent_info_has_application - arg0 (info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_recent_info_has_application - arg1 (app_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_recent_info_has_application - arg1 (app_name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_action_disconnect_proxy
static void(*funcptr) (GtkAction * , GtkWidget * ) = 0;

extern int __lsb_check_params;
void gtk_action_disconnect_proxy (GtkAction * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_action_disconnect_proxy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_disconnect_proxy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_disconnect_proxy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_disconnect_proxy() - validating");
		validate_RWaddress( arg0, "gtk_action_disconnect_proxy - arg0 (action)");
		validate_NULL_TYPETYPE(  arg0, "gtk_action_disconnect_proxy - arg0 (action)");
		validate_RWaddress( arg1, "gtk_action_disconnect_proxy - arg1 (proxy)");
		validate_NULL_TYPETYPE(  arg1, "gtk_action_disconnect_proxy - arg1 (proxy)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


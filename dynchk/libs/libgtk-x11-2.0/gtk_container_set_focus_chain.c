// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_container_set_focus_chain
static void(*funcptr) (GtkContainer * , GList * ) = 0;

extern int __lsb_check_params;
void gtk_container_set_focus_chain (GtkContainer * arg0 , GList * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_container_set_focus_chain()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_container_set_focus_chain");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_container_set_focus_chain. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_container_set_focus_chain() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_container_set_focus_chain - arg0 (container)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_container_set_focus_chain - arg0 (container)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_container_set_focus_chain - arg1 (focusable_widgets)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_container_set_focus_chain - arg1 (focusable_widgets)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


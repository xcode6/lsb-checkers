// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_viewport_get_vadjustment
static GtkAdjustment *(*funcptr) (GtkViewport * ) = 0;

extern int __lsb_check_params;
GtkAdjustment * gtk_viewport_get_vadjustment (GtkViewport * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkAdjustment * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_viewport_get_vadjustment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_viewport_get_vadjustment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_viewport_get_vadjustment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_viewport_get_vadjustment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_viewport_get_vadjustment - arg0 (viewport)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_viewport_get_vadjustment - arg0 (viewport)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


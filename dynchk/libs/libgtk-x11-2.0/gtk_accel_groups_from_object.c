// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_accel_groups_from_object
static GSList *(*funcptr) (GObject * ) = 0;

extern int __lsb_check_params;
GSList * gtk_accel_groups_from_object (GObject * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_accel_groups_from_object()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_accel_groups_from_object");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_accel_groups_from_object. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_accel_groups_from_object() - validating");
		validate_RWaddress( arg0, "gtk_accel_groups_from_object - arg0 (object)");
		validate_NULL_TYPETYPE(  arg0, "gtk_accel_groups_from_object - arg0 (object)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

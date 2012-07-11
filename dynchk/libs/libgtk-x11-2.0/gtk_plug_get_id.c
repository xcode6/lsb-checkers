// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_plug_get_id
static GdkNativeWindow(*funcptr) (GtkPlug * ) = 0;

extern int __lsb_check_params;
GdkNativeWindow gtk_plug_get_id (GtkPlug * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkNativeWindow ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_plug_get_id()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_plug_get_id");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_plug_get_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_plug_get_id() - validating");
		validate_RWaddress( arg0, "gtk_plug_get_id - arg0 (plug)");
		validate_NULL_TYPETYPE(  arg0, "gtk_plug_get_id - arg0 (plug)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

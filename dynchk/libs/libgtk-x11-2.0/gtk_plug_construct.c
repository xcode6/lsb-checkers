// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_plug_construct
static void(*funcptr) (GtkPlug * , GdkNativeWindow ) = 0;

extern int __lsb_check_params;
void gtk_plug_construct (GtkPlug * arg0 , GdkNativeWindow arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_plug_construct()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_plug_construct");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_plug_construct. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_plug_construct() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_plug_construct - arg0 (plug)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_plug_construct - arg0 (plug)");
		validate_NULL_TYPETYPE(  arg1, "gtk_plug_construct - arg1 (socket_id)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


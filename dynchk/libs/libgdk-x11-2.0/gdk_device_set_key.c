// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_device_set_key
static void(*funcptr) (GdkDevice * , guint , guint , GdkModifierType ) = 0;

extern int __lsb_check_params;
void gdk_device_set_key (GdkDevice * arg0 , guint arg1 , guint arg2 , GdkModifierType arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_device_set_key()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_device_set_key");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_device_set_key. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_device_set_key() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_device_set_key - arg0 (device)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_device_set_key - arg0 (device)");
		validate_NULL_TYPETYPE(  arg1, "gdk_device_set_key - arg1 (index_)");
		validate_NULL_TYPETYPE(  arg2, "gdk_device_set_key - arg2 (keyval)");
		validate_NULL_TYPETYPE(  arg3, "gdk_device_set_key - arg3 (modifiers)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_display_get_pointer
static void(*funcptr) (GdkDisplay * , GdkScreen * * , gint * , gint * , GdkModifierType * ) = 0;

extern int __lsb_check_params;
void gdk_display_get_pointer (GdkDisplay * arg0 , GdkScreen * * arg1 , gint * arg2 , gint * arg3 , GdkModifierType * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_display_get_pointer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_display_get_pointer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_display_get_pointer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_display_get_pointer() - validating");
		validate_RWaddress( arg0, "gdk_display_get_pointer - arg0 (display)");
		validate_NULL_TYPETYPE(  arg0, "gdk_display_get_pointer - arg0 (display)");
		validate_RWaddress( arg1, "gdk_display_get_pointer - arg1 (screen)");
		validate_NULL_TYPETYPE(  arg1, "gdk_display_get_pointer - arg1 (screen)");
		validate_RWaddress( arg2, "gdk_display_get_pointer - arg2 (x)");
		validate_NULL_TYPETYPE(  arg2, "gdk_display_get_pointer - arg2 (x)");
		validate_RWaddress( arg3, "gdk_display_get_pointer - arg3 (y)");
		validate_NULL_TYPETYPE(  arg3, "gdk_display_get_pointer - arg3 (y)");
		validate_RWaddress( arg4, "gdk_display_get_pointer - arg4 (mask)");
		validate_NULL_TYPETYPE(  arg4, "gdk_display_get_pointer - arg4 (mask)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


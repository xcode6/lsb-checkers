// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_window_set_icon
static void(*funcptr) (GdkWindow * , GdkWindow * , GdkPixmap * , GdkBitmap * ) = 0;

extern int __lsb_check_params;
void gdk_window_set_icon (GdkWindow * arg0 , GdkWindow * arg1 , GdkPixmap * arg2 , GdkBitmap * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_set_icon()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_set_icon");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_set_icon. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_set_icon() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_set_icon - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_set_icon - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_set_icon - arg1 (icon_window)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_set_icon - arg1 (icon_window)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_window_set_icon - arg2 (pixmap)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_window_set_icon - arg2 (pixmap)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_window_set_icon - arg3 (mask)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_window_set_icon - arg3 (mask)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

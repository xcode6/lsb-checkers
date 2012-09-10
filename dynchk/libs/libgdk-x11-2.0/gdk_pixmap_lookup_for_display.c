// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_pixmap_lookup_for_display
static GdkPixmap *(*funcptr) (GdkDisplay * , GdkNativeWindow ) = 0;

extern int __lsb_check_params;
GdkPixmap * gdk_pixmap_lookup_for_display (GdkDisplay * arg0 , GdkNativeWindow arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkPixmap * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixmap_lookup_for_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixmap_lookup_for_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixmap_lookup_for_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixmap_lookup_for_display() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixmap_lookup_for_display - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixmap_lookup_for_display - arg0 (display)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixmap_lookup_for_display - arg1 (anid)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


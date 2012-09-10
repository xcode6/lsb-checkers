// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_gc_set_subwindow
static void(*funcptr) (GdkGC * , GdkSubwindowMode ) = 0;

extern int __lsb_check_params;
void gdk_gc_set_subwindow (GdkGC * arg0 , GdkSubwindowMode arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_gc_set_subwindow()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_gc_set_subwindow");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_gc_set_subwindow. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_gc_set_subwindow() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_gc_set_subwindow - arg0 (gc)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_gc_set_subwindow - arg0 (gc)");
		validate_NULL_TYPETYPE(  arg1, "gdk_gc_set_subwindow - arg1 (mode)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


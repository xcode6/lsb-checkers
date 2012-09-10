// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_selection_convert
static void(*funcptr) (GdkWindow * , GdkAtom , GdkAtom , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_selection_convert (GdkWindow * arg0 , GdkAtom arg1 , GdkAtom arg2 , guint32 arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_selection_convert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_selection_convert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_selection_convert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_selection_convert() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_selection_convert - arg0 (requestor)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_selection_convert - arg0 (requestor)");
		validate_NULL_TYPETYPE(  arg1, "gdk_selection_convert - arg1 (selection)");
		validate_NULL_TYPETYPE(  arg2, "gdk_selection_convert - arg2 (target)");
		validate_NULL_TYPETYPE(  arg3, "gdk_selection_convert - arg3 (time_)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


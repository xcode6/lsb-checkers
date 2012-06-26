// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_drop_finish
static void(*funcptr) (GdkDragContext * , gboolean , guint32 ) = 0;

extern int __lsb_check_params;
void gdk_drop_finish (GdkDragContext * arg0 , gboolean arg1 , guint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_drop_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_drop_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_drop_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_drop_finish() - validating");
		validate_RWaddress( arg0, "gdk_drop_finish - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "gdk_drop_finish - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gdk_drop_finish - arg1 (success)");
		validate_NULL_TYPETYPE(  arg2, "gdk_drop_finish - arg2 (time_)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


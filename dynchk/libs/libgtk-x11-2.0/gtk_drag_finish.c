// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_drag_finish
static void(*funcptr) (GdkDragContext * , gboolean , gboolean , guint32 ) = 0;

extern int __lsb_check_params;
void gtk_drag_finish (GdkDragContext * arg0 , gboolean arg1 , gboolean arg2 , guint32 arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_drag_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_drag_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_drag_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_drag_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_drag_finish - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_drag_finish - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "gtk_drag_finish - arg1 (success)");
		validate_NULL_TYPETYPE(  arg2, "gtk_drag_finish - arg2 (del)");
		validate_NULL_TYPETYPE(  arg3, "gtk_drag_finish - arg3 (time_)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


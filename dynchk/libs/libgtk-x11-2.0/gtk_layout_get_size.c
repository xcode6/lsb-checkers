// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_layout_get_size
static void(*funcptr) (GtkLayout * , guint * , guint * ) = 0;

extern int __lsb_check_params;
void gtk_layout_get_size (GtkLayout * arg0 , guint * arg1 , guint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_layout_get_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_layout_get_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_layout_get_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_layout_get_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_layout_get_size - arg0 (layout)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_layout_get_size - arg0 (layout)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_layout_get_size - arg1 (width)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_layout_get_size - arg1 (width)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_layout_get_size - arg2 (height)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_layout_get_size - arg2 (height)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


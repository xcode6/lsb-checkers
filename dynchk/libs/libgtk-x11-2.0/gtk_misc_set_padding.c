// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_misc_set_padding
static void(*funcptr) (GtkMisc * , gint , gint ) = 0;

extern int __lsb_check_params;
void gtk_misc_set_padding (GtkMisc * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_misc_set_padding()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_misc_set_padding");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_misc_set_padding. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_misc_set_padding() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_misc_set_padding - arg0 (misc)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_misc_set_padding - arg0 (misc)");
		validate_NULL_TYPETYPE(  arg1, "gtk_misc_set_padding - arg1 (xpad)");
		validate_NULL_TYPETYPE(  arg2, "gtk_misc_set_padding - arg2 (ypad)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


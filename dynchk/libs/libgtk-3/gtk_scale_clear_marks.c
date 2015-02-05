// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_scale_clear_marks
static void(*funcptr) (GtkScale * ) = 0;

extern int __lsb_check_params;
void gtk_scale_clear_marks (GtkScale * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_scale_clear_marks()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_scale_clear_marks");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_scale_clear_marks. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_scale_clear_marks() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_scale_clear_marks - arg0 (scale)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_scale_clear_marks - arg0 (scale)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

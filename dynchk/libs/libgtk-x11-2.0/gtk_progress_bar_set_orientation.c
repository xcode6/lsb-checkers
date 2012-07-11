// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_progress_bar_set_orientation
static void(*funcptr) (GtkProgressBar * , GtkProgressBarOrientation ) = 0;

extern int __lsb_check_params;
void gtk_progress_bar_set_orientation (GtkProgressBar * arg0 , GtkProgressBarOrientation arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_progress_bar_set_orientation()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_progress_bar_set_orientation");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_progress_bar_set_orientation. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_progress_bar_set_orientation() - validating");
		validate_RWaddress( arg0, "gtk_progress_bar_set_orientation - arg0 (pbar)");
		validate_NULL_TYPETYPE(  arg0, "gtk_progress_bar_set_orientation - arg0 (pbar)");
		validate_NULL_TYPETYPE(  arg1, "gtk_progress_bar_set_orientation - arg1 (orientation)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

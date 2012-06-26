// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_label_set_justify
static void(*funcptr) (GtkLabel * , GtkJustification ) = 0;

extern int __lsb_check_params;
void gtk_label_set_justify (GtkLabel * arg0 , GtkJustification arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_label_set_justify()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_label_set_justify");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_label_set_justify. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_label_set_justify() - validating");
		validate_RWaddress( arg0, "gtk_label_set_justify - arg0 (label)");
		validate_NULL_TYPETYPE(  arg0, "gtk_label_set_justify - arg0 (label)");
		validate_NULL_TYPETYPE(  arg1, "gtk_label_set_justify - arg1 (jtype)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


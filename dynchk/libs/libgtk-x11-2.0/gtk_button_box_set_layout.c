// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>
#undef gtk_button_box_set_layout
static void(*funcptr) (GtkButtonBox * , GtkButtonBoxStyle ) = 0;

extern int __lsb_check_params;
void gtk_button_box_set_layout (GtkButtonBox * arg0 , GtkButtonBoxStyle arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_button_box_set_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_button_box_set_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_button_box_set_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_button_box_set_layout() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_button_box_set_layout - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_button_box_set_layout - arg0 (widget)");
		validate_NULL_TYPETYPE(  arg1, "gtk_button_box_set_layout - arg1 (layout_style)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


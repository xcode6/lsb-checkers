// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_combo_box_get_popup_accessible
static AtkObject *(*funcptr) (GtkComboBox * ) = 0;

extern int __lsb_check_params;
AtkObject * gtk_combo_box_get_popup_accessible (GtkComboBox * arg0 )
{
	int reset_flag = __lsb_check_params;
	AtkObject * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_combo_box_get_popup_accessible()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_combo_box_get_popup_accessible");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_combo_box_get_popup_accessible. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_combo_box_get_popup_accessible() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_combo_box_get_popup_accessible - arg0 (combo_box)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_combo_box_get_popup_accessible - arg0 (combo_box)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


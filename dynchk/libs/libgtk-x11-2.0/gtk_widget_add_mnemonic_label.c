// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_widget_add_mnemonic_label
static void(*funcptr) (GtkWidget * , GtkWidget * ) = 0;

extern int __lsb_check_params;
void gtk_widget_add_mnemonic_label (GtkWidget * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_add_mnemonic_label()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_add_mnemonic_label");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_add_mnemonic_label. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_add_mnemonic_label() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_add_mnemonic_label - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_add_mnemonic_label - arg0 (widget)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_widget_add_mnemonic_label - arg1 (label)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_add_mnemonic_label - arg1 (label)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


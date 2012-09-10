// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_selection_data_targets_include_image
static gboolean(*funcptr) (GtkSelectionData * , gboolean ) = 0;

extern int __lsb_check_params;
gboolean gtk_selection_data_targets_include_image (GtkSelectionData * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_selection_data_targets_include_image()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_selection_data_targets_include_image");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_selection_data_targets_include_image. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_selection_data_targets_include_image() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_selection_data_targets_include_image - arg0 (selection_data)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_selection_data_targets_include_image - arg0 (selection_data)");
		validate_NULL_TYPETYPE(  arg1, "gtk_selection_data_targets_include_image - arg1 (writable)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


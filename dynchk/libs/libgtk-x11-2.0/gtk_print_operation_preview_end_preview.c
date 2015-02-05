// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtkprintoperationpreview.h>
#undef gtk_print_operation_preview_end_preview
static void(*funcptr) (GtkPrintOperationPreview * ) = 0;

extern int __lsb_check_params;
void gtk_print_operation_preview_end_preview (GtkPrintOperationPreview * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_print_operation_preview_end_preview()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_print_operation_preview_end_preview");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_print_operation_preview_end_preview. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_print_operation_preview_end_preview() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_print_operation_preview_end_preview - arg0 (preview)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_print_operation_preview_end_preview - arg0 (preview)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

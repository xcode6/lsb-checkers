// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_editable_paste_clipboard
static void(*funcptr) (GtkEditable * ) = 0;

extern int __lsb_check_params;
void gtk_editable_paste_clipboard (GtkEditable * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_editable_paste_clipboard()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_editable_paste_clipboard");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_editable_paste_clipboard. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_editable_paste_clipboard() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_editable_paste_clipboard - arg0 (editable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_editable_paste_clipboard - arg0 (editable)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


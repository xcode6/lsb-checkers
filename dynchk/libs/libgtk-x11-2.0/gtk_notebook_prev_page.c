// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_notebook_prev_page
static void(*funcptr) (GtkNotebook * ) = 0;

extern int __lsb_check_params;
void gtk_notebook_prev_page (GtkNotebook * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_notebook_prev_page()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_notebook_prev_page");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_notebook_prev_page. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_notebook_prev_page() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_notebook_prev_page - arg0 (notebook)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_notebook_prev_page - arg0 (notebook)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


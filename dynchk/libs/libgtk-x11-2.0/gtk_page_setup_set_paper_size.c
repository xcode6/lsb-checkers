// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_page_setup_set_paper_size
static void(*funcptr) (GtkPageSetup * , GtkPaperSize * ) = 0;

extern int __lsb_check_params;
void gtk_page_setup_set_paper_size (GtkPageSetup * arg0 , GtkPaperSize * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_page_setup_set_paper_size()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_page_setup_set_paper_size");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_page_setup_set_paper_size. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_page_setup_set_paper_size() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_page_setup_set_paper_size - arg0 (setup)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_page_setup_set_paper_size - arg0 (setup)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_page_setup_set_paper_size - arg1 (size)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_page_setup_set_paper_size - arg1 (size)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


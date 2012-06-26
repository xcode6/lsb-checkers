// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_paper_size_get_name
static const char *(*funcptr) (GtkPaperSize * ) = 0;

extern int __lsb_check_params;
const char * gtk_paper_size_get_name (GtkPaperSize * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_paper_size_get_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_paper_size_get_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_paper_size_get_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_paper_size_get_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_paper_size_get_name - arg0 (size)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_paper_size_get_name - arg0 (size)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


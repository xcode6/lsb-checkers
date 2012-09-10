// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_file_chooser_select_uri
static gboolean(*funcptr) (GtkFileChooser * , const char * ) = 0;

extern int __lsb_check_params;
gboolean gtk_file_chooser_select_uri (GtkFileChooser * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_file_chooser_select_uri()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_file_chooser_select_uri");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_file_chooser_select_uri. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_file_chooser_select_uri() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_file_chooser_select_uri - arg0 (chooser)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_file_chooser_select_uri - arg0 (chooser)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_file_chooser_select_uri - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_file_chooser_select_uri - arg1 (uri)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


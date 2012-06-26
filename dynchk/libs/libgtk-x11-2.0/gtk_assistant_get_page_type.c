// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_assistant_get_page_type
static GtkAssistantPageType(*funcptr) (GtkAssistant * , GtkWidget * ) = 0;

extern int __lsb_check_params;
GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	GtkAssistantPageType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_assistant_get_page_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_assistant_get_page_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_assistant_get_page_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_assistant_get_page_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_assistant_get_page_type - arg0 (assistant)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_assistant_get_page_type - arg0 (assistant)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_assistant_get_page_type - arg1 (page)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_assistant_get_page_type - arg1 (page)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


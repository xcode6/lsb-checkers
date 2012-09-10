// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_entry_get_layout
static PangoLayout *(*funcptr) (GtkEntry * ) = 0;

extern int __lsb_check_params;
PangoLayout * gtk_entry_get_layout (GtkEntry * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoLayout * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_entry_get_layout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_entry_get_layout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_entry_get_layout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_entry_get_layout() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_entry_get_layout - arg0 (entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_entry_get_layout - arg0 (entry)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


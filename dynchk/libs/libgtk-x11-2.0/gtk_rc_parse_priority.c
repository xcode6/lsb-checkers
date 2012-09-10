// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_rc_parse_priority
static guint(*funcptr) (GScanner * , GtkPathPriorityType * ) = 0;

extern int __lsb_check_params;
guint gtk_rc_parse_priority (GScanner * arg0 , GtkPathPriorityType * arg1 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_rc_parse_priority()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_rc_parse_priority");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_rc_parse_priority. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_rc_parse_priority() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_rc_parse_priority - arg0 (scanner)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_rc_parse_priority - arg0 (scanner)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_rc_parse_priority - arg1 (priority)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_rc_parse_priority - arg1 (priority)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


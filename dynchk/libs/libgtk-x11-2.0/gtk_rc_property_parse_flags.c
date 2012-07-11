// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef gtk_rc_property_parse_flags
static gboolean(*funcptr) (const GParamSpec * , const GString * , GValue * ) = 0;

extern int __lsb_check_params;
gboolean gtk_rc_property_parse_flags (const GParamSpec * arg0 , const GString * arg1 , GValue * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_rc_property_parse_flags()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_rc_property_parse_flags");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_rc_property_parse_flags. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_rc_property_parse_flags() - validating");
		validate_Rdaddress( arg0, "gtk_rc_property_parse_flags - arg0 (pspec)");
		validate_NULL_TYPETYPE(  arg0, "gtk_rc_property_parse_flags - arg0 (pspec)");
		validate_Rdaddress( arg1, "gtk_rc_property_parse_flags - arg1 (gstring)");
		validate_NULL_TYPETYPE(  arg1, "gtk_rc_property_parse_flags - arg1 (gstring)");
		validate_RWaddress( arg2, "gtk_rc_property_parse_flags - arg2 (property_value)");
		validate_NULL_TYPETYPE(  arg2, "gtk_rc_property_parse_flags - arg2 (property_value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

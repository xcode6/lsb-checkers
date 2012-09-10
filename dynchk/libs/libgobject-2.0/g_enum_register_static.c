// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_enum_register_static
static GType(*funcptr) (const gchar * , const GEnumValue * ) = 0;

extern int __lsb_check_params;
GType g_enum_register_static (const gchar * arg0 , const GEnumValue * arg1 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_enum_register_static()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_enum_register_static");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_enum_register_static. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_enum_register_static() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_enum_register_static - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_enum_register_static - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_enum_register_static - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "g_enum_register_static - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


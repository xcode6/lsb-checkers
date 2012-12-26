// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_type_register_static
static GType(*funcptr) (GType , const gchar * , const GTypeInfo * , GTypeFlags ) = 0;

extern int __lsb_check_params;
GType g_type_register_static (GType arg0 , const gchar * arg1 , const GTypeInfo * arg2 , GTypeFlags arg3 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_register_static()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_register_static");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_register_static. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_register_static() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_register_static - arg0 (parent_type)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_type_register_static - arg1 (type_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_type_register_static - arg1 (type_name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_type_register_static - arg2 (info)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_type_register_static - arg2 (info)");
		validate_NULL_TYPETYPE(  arg3, "g_type_register_static - arg3 (flags)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


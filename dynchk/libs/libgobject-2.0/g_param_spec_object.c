// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_param_spec_object
static GParamSpec *(*funcptr) (const gchar * , const gchar * , const gchar * , GType , GParamFlags ) = 0;

extern int __lsb_check_params;
GParamSpec * g_param_spec_object (const gchar * arg0 , const gchar * arg1 , const gchar * arg2 , GType arg3 , GParamFlags arg4 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_param_spec_object()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_param_spec_object");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_param_spec_object. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_param_spec_object() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_param_spec_object - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_param_spec_object - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_param_spec_object - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "g_param_spec_object - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_param_spec_object - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "g_param_spec_object - arg2");
		validate_NULL_TYPETYPE(  arg3, "g_param_spec_object - arg3");
		validate_NULL_TYPETYPE(  arg4, "g_param_spec_object - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


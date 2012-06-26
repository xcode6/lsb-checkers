// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_param_spec_pool_lookup
static GParamSpec *(*funcptr) (GParamSpecPool * , const gchar * , GType , gboolean ) = 0;

extern int __lsb_check_params;
GParamSpec * g_param_spec_pool_lookup (GParamSpecPool * arg0 , const gchar * arg1 , GType arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_param_spec_pool_lookup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_param_spec_pool_lookup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_param_spec_pool_lookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_param_spec_pool_lookup() - validating");
		validate_RWaddress( arg0, "g_param_spec_pool_lookup - arg0");
		validate_NULL_TYPETYPE(  arg0, "g_param_spec_pool_lookup - arg0");
		validate_Rdaddress( arg1, "g_param_spec_pool_lookup - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_param_spec_pool_lookup - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_param_spec_pool_lookup - arg2");
		validate_NULL_TYPETYPE(  arg3, "g_param_spec_pool_lookup - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


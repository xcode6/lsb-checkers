// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_param_spec_ref_sink
static GParamSpec *(*funcptr) (GParamSpec * ) = 0;

extern int __lsb_check_params;
GParamSpec * g_param_spec_ref_sink (GParamSpec * arg0 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_param_spec_ref_sink()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_param_spec_ref_sink");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_param_spec_ref_sink. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_param_spec_ref_sink() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_param_spec_ref_sink - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "g_param_spec_ref_sink - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


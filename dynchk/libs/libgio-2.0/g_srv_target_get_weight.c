// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsrvtarget.h>
#undef g_srv_target_get_weight
static guint16(*funcptr) (GSrvTarget * ) = 0;

extern int __lsb_check_params;
guint16 g_srv_target_get_weight (GSrvTarget * arg0 )
{
	int reset_flag = __lsb_check_params;
	guint16 ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_srv_target_get_weight()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_srv_target_get_weight");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_srv_target_get_weight. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_srv_target_get_weight() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_srv_target_get_weight - arg0 (target)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_srv_target_get_weight - arg0 (target)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

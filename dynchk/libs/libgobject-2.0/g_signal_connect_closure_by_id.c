// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_connect_closure_by_id
static gulong(*funcptr) (gpointer , guint , GQuark , GClosure * , gboolean ) = 0;

extern int __lsb_check_params;
gulong g_signal_connect_closure_by_id (gpointer arg0 , guint arg1 , GQuark arg2 , GClosure * arg3 , gboolean arg4 )
{
	int reset_flag = __lsb_check_params;
	gulong ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_signal_connect_closure_by_id()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_connect_closure_by_id");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_connect_closure_by_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_connect_closure_by_id() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_connect_closure_by_id - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_signal_connect_closure_by_id - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_signal_connect_closure_by_id - arg2");
		validate_RWaddress( arg3, "g_signal_connect_closure_by_id - arg3");
		validate_NULL_TYPETYPE(  arg3, "g_signal_connect_closure_by_id - arg3");
		validate_NULL_TYPETYPE(  arg4, "g_signal_connect_closure_by_id - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


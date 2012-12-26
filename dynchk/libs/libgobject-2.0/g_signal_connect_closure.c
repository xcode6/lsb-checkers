// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_signal_connect_closure
static gulong(*funcptr) (gpointer , const gchar * , GClosure * , gboolean ) = 0;

extern int __lsb_check_params;
gulong g_signal_connect_closure (gpointer arg0 , const gchar * arg1 , GClosure * arg2 , gboolean arg3 )
{
	int reset_flag = __lsb_check_params;
	gulong ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_signal_connect_closure()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_signal_connect_closure");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_signal_connect_closure. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_signal_connect_closure() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_signal_connect_closure - arg0 (instance)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_signal_connect_closure - arg1 (detailed_signal)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_signal_connect_closure - arg1 (detailed_signal)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_signal_connect_closure - arg2 (closure)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_signal_connect_closure - arg2 (closure)");
		validate_NULL_TYPETYPE(  arg3, "g_signal_connect_closure - arg3 (after)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_closure_invoke
static void(*funcptr) (GClosure * , GValue * , guint , const GValue * , gpointer ) = 0;

extern int __lsb_check_params;
void g_closure_invoke (GClosure * arg0 , GValue * arg1 , guint arg2 , const GValue * arg3 , gpointer arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_closure_invoke()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_closure_invoke");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_closure_invoke. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_closure_invoke() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_closure_invoke - arg0 (closure)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_closure_invoke - arg0 (closure)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_closure_invoke - arg1 (return_value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_closure_invoke - arg1 (return_value)");
		validate_NULL_TYPETYPE(  arg2, "g_closure_invoke - arg2 (n_param_values)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_closure_invoke - arg3 (param_values)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_closure_invoke - arg3 (param_values)");
		validate_NULL_TYPETYPE(  arg4, "g_closure_invoke - arg4 (invocation_hint)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


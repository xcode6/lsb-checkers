// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#include <stdarg.h>
#undef g_cclosure_marshal_VOID__VOIDv
static void(*funcptr) (GClosure * , GValue * , gpointer , va_list , gpointer , int , GType * ) = 0;

extern int __lsb_check_params;
void g_cclosure_marshal_VOID__VOIDv (GClosure * arg0 , GValue * arg1 , gpointer arg2 , va_list arg3 , gpointer arg4 , int arg5 , GType * arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_cclosure_marshal_VOID__VOIDv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cclosure_marshal_VOID__VOIDv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cclosure_marshal_VOID__VOIDv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cclosure_marshal_VOID__VOIDv() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_cclosure_marshal_VOID__VOIDv - arg0 (closure)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_cclosure_marshal_VOID__VOIDv - arg0 (closure)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_cclosure_marshal_VOID__VOIDv - arg1 (return_value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_cclosure_marshal_VOID__VOIDv - arg1 (return_value)");
		validate_NULL_TYPETYPE(  arg2, "g_cclosure_marshal_VOID__VOIDv - arg2 (instance)");
		validate_NULL_TYPETYPE(  arg3, "g_cclosure_marshal_VOID__VOIDv - arg3 (args)");
		validate_NULL_TYPETYPE(  arg4, "g_cclosure_marshal_VOID__VOIDv - arg4 (marshal_data)");
		validate_NULL_TYPETYPE(  arg5, "g_cclosure_marshal_VOID__VOIDv - arg5 (n_params)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_cclosure_marshal_VOID__VOIDv - arg6 (param_types)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_cclosure_marshal_VOID__VOIDv - arg6 (param_types)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}


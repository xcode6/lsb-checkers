// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gresolver.h>
#undef g_resolver_lookup_service_async
static void(*funcptr) (GResolver * , const gchar * , const gchar * , const gchar * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_resolver_lookup_service_async (GResolver * arg0 , const gchar * arg1 , const gchar * arg2 , const gchar * arg3 , GCancellable * arg4 , GAsyncReadyCallback arg5 , gpointer arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_resolver_lookup_service_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resolver_lookup_service_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resolver_lookup_service_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resolver_lookup_service_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_resolver_lookup_service_async - arg0 (resolver)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resolver_lookup_service_async - arg0 (resolver)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_resolver_lookup_service_async - arg1 (service)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_resolver_lookup_service_async - arg1 (service)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_resolver_lookup_service_async - arg2 (protocol)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_resolver_lookup_service_async - arg2 (protocol)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_resolver_lookup_service_async - arg3 (domain)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_resolver_lookup_service_async - arg3 (domain)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_resolver_lookup_service_async - arg4 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_resolver_lookup_service_async - arg4 (cancellable)");
		validate_NULL_TYPETYPE(  arg5, "g_resolver_lookup_service_async - arg5 (callback)");
		validate_NULL_TYPETYPE(  arg6, "g_resolver_lookup_service_async - arg6 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}

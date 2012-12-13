// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gresource.h>
#undef g_resources_get_info
static gboolean(*funcptr) (const gchar * , GResourceLookupFlags , gsize * , guint32 * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_resources_get_info (const gchar * arg0 , GResourceLookupFlags arg1 , gsize * arg2 , guint32 * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_resources_get_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_resources_get_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_resources_get_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_resources_get_info() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_resources_get_info - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_resources_get_info - arg0 (path)");
		validate_NULL_TYPETYPE(  arg1, "g_resources_get_info - arg1 (lookup_flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_resources_get_info - arg2 (size)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_resources_get_info - arg2 (size)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_resources_get_info - arg3 (flags)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_resources_get_info - arg3 (flags)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_resources_get_info - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_resources_get_info - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <sys/types.h>
#undef g_bookmark_file_get_app_info
static gboolean(*funcptr) (GBookmarkFile * , const char * , const char * , gchar * * , guint * , time_t * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_bookmark_file_get_app_info (GBookmarkFile * arg0 , const char * arg1 , const char * arg2 , gchar * * arg3 , guint * arg4 , time_t * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bookmark_file_get_app_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bookmark_file_get_app_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bookmark_file_get_app_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bookmark_file_get_app_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bookmark_file_get_app_info - arg0 (bookmark)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bookmark_file_get_app_info - arg0 (bookmark)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_bookmark_file_get_app_info - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_bookmark_file_get_app_info - arg1 (uri)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_bookmark_file_get_app_info - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_bookmark_file_get_app_info - arg2 (name)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_bookmark_file_get_app_info - arg3 (exec)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_bookmark_file_get_app_info - arg3 (exec)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_bookmark_file_get_app_info - arg4 (count)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_bookmark_file_get_app_info - arg4 (count)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_bookmark_file_get_app_info - arg5 (stamp)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_bookmark_file_get_app_info - arg5 (stamp)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_bookmark_file_get_app_info - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_bookmark_file_get_app_info - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

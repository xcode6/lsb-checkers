// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bookmark_file_has_application
static gboolean(*funcptr) (GBookmarkFile * , const char * , const char * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_bookmark_file_has_application (GBookmarkFile * arg0 , const char * arg1 , const char * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bookmark_file_has_application()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bookmark_file_has_application");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bookmark_file_has_application. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bookmark_file_has_application() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bookmark_file_has_application - arg0 (bookmark)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bookmark_file_has_application - arg0 (bookmark)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_bookmark_file_has_application - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_bookmark_file_has_application - arg1 (uri)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_bookmark_file_has_application - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_bookmark_file_has_application - arg2 (name)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_bookmark_file_has_application - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_bookmark_file_has_application - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bookmark_file_get_modified
static time_t(*funcptr) (GBookmarkFile * , const char * , GError * * ) = 0;

extern int __lsb_check_params;
time_t g_bookmark_file_get_modified (GBookmarkFile * arg0 , const char * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	time_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bookmark_file_get_modified()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bookmark_file_get_modified");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bookmark_file_get_modified. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bookmark_file_get_modified() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bookmark_file_get_modified - arg0 (bookmark)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bookmark_file_get_modified - arg0 (bookmark)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_bookmark_file_get_modified - arg1 (uri)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_bookmark_file_get_modified - arg1 (uri)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_bookmark_file_get_modified - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_bookmark_file_get_modified - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


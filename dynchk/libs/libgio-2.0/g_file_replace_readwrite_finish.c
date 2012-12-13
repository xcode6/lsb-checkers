// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_replace_readwrite_finish
static GFileIOStream *(*funcptr) (GFile * , GAsyncResult * , GError * * ) = 0;

extern int __lsb_check_params;
GFileIOStream * g_file_replace_readwrite_finish (GFile * arg0 , GAsyncResult * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	GFileIOStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_replace_readwrite_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_replace_readwrite_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_replace_readwrite_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_replace_readwrite_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_replace_readwrite_finish - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_replace_readwrite_finish - arg0 (file)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_file_replace_readwrite_finish - arg1 (res)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_replace_readwrite_finish - arg1 (res)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_file_replace_readwrite_finish - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_file_replace_readwrite_finish - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


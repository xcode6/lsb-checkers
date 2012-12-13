// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_set_attributes_from_info
static gboolean(*funcptr) (GFile * , GFileInfo * , GFileQueryInfoFlags , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_file_set_attributes_from_info (GFile * arg0 , GFileInfo * arg1 , GFileQueryInfoFlags arg2 , GCancellable * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_set_attributes_from_info()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_set_attributes_from_info");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_set_attributes_from_info. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_set_attributes_from_info() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_set_attributes_from_info - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_set_attributes_from_info - arg0 (file)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_file_set_attributes_from_info - arg1 (info)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_set_attributes_from_info - arg1 (info)");
		validate_NULL_TYPETYPE(  arg2, "g_file_set_attributes_from_info - arg2 (flags)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_file_set_attributes_from_info - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_file_set_attributes_from_info - arg3 (cancellable)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_file_set_attributes_from_info - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_file_set_attributes_from_info - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


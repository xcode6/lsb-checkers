// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_move
static gboolean(*funcptr) (GFile * , GFile * , GFileCopyFlags , GCancellable * , GFileProgressCallback , gpointer , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_file_move (GFile * arg0 , GFile * arg1 , GFileCopyFlags arg2 , GCancellable * arg3 , GFileProgressCallback arg4 , gpointer arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_move()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_move");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_move. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_move() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_move - arg0 (source)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_move - arg0 (source)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_file_move - arg1 (destination)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_move - arg1 (destination)");
		validate_NULL_TYPETYPE(  arg2, "g_file_move - arg2 (flags)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_file_move - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_file_move - arg3 (cancellable)");
		validate_NULL_TYPETYPE(  arg4, "g_file_move - arg4 (progress_callback)");
		validate_NULL_TYPETYPE(  arg5, "g_file_move - arg5 (progress_callback_data)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_file_move - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_file_move - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}


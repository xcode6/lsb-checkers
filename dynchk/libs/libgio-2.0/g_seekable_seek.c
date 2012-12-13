// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gseekable.h>
#undef g_seekable_seek
static gboolean(*funcptr) (GSeekable * , goffset , GSeekType , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_seekable_seek (GSeekable * arg0 , goffset arg1 , GSeekType arg2 , GCancellable * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_seekable_seek()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_seekable_seek");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_seekable_seek. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_seekable_seek() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_seekable_seek - arg0 (seekable)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_seekable_seek - arg0 (seekable)");
		validate_NULL_TYPETYPE(  arg1, "g_seekable_seek - arg1 (offset)");
		validate_NULL_TYPETYPE(  arg2, "g_seekable_seek - arg2 (type)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_seekable_seek - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_seekable_seek - arg3 (cancellable)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_seekable_seek - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_seekable_seek - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


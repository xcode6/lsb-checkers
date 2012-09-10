// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_ucs4_to_utf16
static gunichar2 *(*funcptr) (const gunichar * , glong , glong * , glong * , GError * * ) = 0;

extern int __lsb_check_params;
gunichar2 * g_ucs4_to_utf16 (const gunichar * arg0 , glong arg1 , glong * arg2 , glong * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	gunichar2 * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_ucs4_to_utf16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_ucs4_to_utf16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_ucs4_to_utf16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_ucs4_to_utf16() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_ucs4_to_utf16 - arg0 (str)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_ucs4_to_utf16 - arg0 (str)");
		validate_NULL_TYPETYPE(  arg1, "g_ucs4_to_utf16 - arg1 (len)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_ucs4_to_utf16 - arg2 (items_read)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_ucs4_to_utf16 - arg2 (items_read)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_ucs4_to_utf16 - arg3 (items_written)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_ucs4_to_utf16 - arg3 (items_written)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_ucs4_to_utf16 - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_ucs4_to_utf16 - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


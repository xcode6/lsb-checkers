// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_convert
static gchar *(*funcptr) (const gchar * , gssize , const gchar * , const gchar * , gsize * , gsize * , GError * * ) = 0;

extern int __lsb_check_params;
gchar * g_convert (const gchar * arg0 , gssize arg1 , const gchar * arg2 , const gchar * arg3 , gsize * arg4 , gsize * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_convert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_convert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_convert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_convert() - validating");
		validate_Rdaddress( arg0, "g_convert - arg0 (str)");
		validate_NULL_TYPETYPE(  arg0, "g_convert - arg0 (str)");
		validate_NULL_TYPETYPE(  arg1, "g_convert - arg1 (len)");
		validate_Rdaddress( arg2, "g_convert - arg2 (to_codeset)");
		validate_NULL_TYPETYPE(  arg2, "g_convert - arg2 (to_codeset)");
		validate_Rdaddress( arg3, "g_convert - arg3 (from_codeset)");
		validate_NULL_TYPETYPE(  arg3, "g_convert - arg3 (from_codeset)");
		validate_RWaddress( arg4, "g_convert - arg4 (bytes_read)");
		validate_NULL_TYPETYPE(  arg4, "g_convert - arg4 (bytes_read)");
		validate_RWaddress( arg5, "g_convert - arg5 (bytes_written)");
		validate_NULL_TYPETYPE(  arg5, "g_convert - arg5 (bytes_written)");
		validate_RWaddress( arg6, "g_convert - arg6 (error)");
		validate_NULL_TYPETYPE(  arg6, "g_convert - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}


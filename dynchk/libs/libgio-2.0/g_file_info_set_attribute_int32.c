// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfileinfo.h>
#undef g_file_info_set_attribute_int32
static void(*funcptr) (GFileInfo * , const char * , gint32 ) = 0;

extern int __lsb_check_params;
void g_file_info_set_attribute_int32 (GFileInfo * arg0 , const char * arg1 , gint32 arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_info_set_attribute_int32()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_info_set_attribute_int32");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_info_set_attribute_int32. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_info_set_attribute_int32() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_info_set_attribute_int32 - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_info_set_attribute_int32 - arg0 (info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_file_info_set_attribute_int32 - arg1 (attribute)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_info_set_attribute_int32 - arg1 (attribute)");
		validate_NULL_TYPETYPE(  arg2, "g_file_info_set_attribute_int32 - arg2 (attr_value)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


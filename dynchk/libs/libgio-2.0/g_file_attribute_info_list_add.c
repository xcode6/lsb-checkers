// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gfileattribute.h>
#undef g_file_attribute_info_list_add
static void(*funcptr) (GFileAttributeInfoList * , const char * , GFileAttributeType , GFileAttributeInfoFlags ) = 0;

extern int __lsb_check_params;
void g_file_attribute_info_list_add (GFileAttributeInfoList * arg0 , const char * arg1 , GFileAttributeType arg2 , GFileAttributeInfoFlags arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_attribute_info_list_add()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_attribute_info_list_add");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_attribute_info_list_add. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_attribute_info_list_add() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_attribute_info_list_add - arg0 (list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_attribute_info_list_add - arg0 (list)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_file_attribute_info_list_add - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_attribute_info_list_add - arg1 (name)");
		validate_NULL_TYPETYPE(  arg2, "g_file_attribute_info_list_add - arg2 (type)");
		validate_NULL_TYPETYPE(  arg3, "g_file_attribute_info_list_add - arg3 (flags)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

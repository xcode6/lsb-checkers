// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gmountoperation.h>
#undef g_mount_operation_set_password
static void(*funcptr) (GMountOperation * , const char * ) = 0;

extern int __lsb_check_params;
void g_mount_operation_set_password (GMountOperation * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_mount_operation_set_password()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_mount_operation_set_password");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_mount_operation_set_password. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_mount_operation_set_password() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_mount_operation_set_password - arg0 (op)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_mount_operation_set_password - arg0 (op)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_mount_operation_set_password - arg1 (password)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_mount_operation_set_password - arg1 (password)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gio-unix-2.0/gio/gunixmounts.h>
#undef g_unix_mount_guess_name
static char *(*funcptr) (GUnixMountEntry * ) = 0;

extern int __lsb_check_params;
char * g_unix_mount_guess_name (GUnixMountEntry * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unix_mount_guess_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_mount_guess_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_mount_guess_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_mount_guess_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_mount_guess_name - arg0 (mount_entry)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_mount_guess_name - arg0 (mount_entry)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_spawn_close_pid
static void(*funcptr) (GPid ) = 0;

extern int __lsb_check_params;
void g_spawn_close_pid (GPid arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_spawn_close_pid()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_spawn_close_pid");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_spawn_close_pid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_spawn_close_pid() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_spawn_close_pid - arg0 (pid)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


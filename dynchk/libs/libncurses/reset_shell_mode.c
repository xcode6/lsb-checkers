// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef reset_shell_mode
static int(*funcptr) () = 0;

int reset_shell_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "reset_shell_mode");
	return funcptr();
}

int lsb_reset_shell_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "reset_shell_mode");
	return funcptr();
}


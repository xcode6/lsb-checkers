// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef def_shell_mode
static int(*funcptr) () = 0;

int def_shell_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "def_shell_mode");
	return funcptr();
}

int lsb_def_shell_mode ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "def_shell_mode");
	return funcptr();
}


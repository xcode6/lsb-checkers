// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef tcgetpgrp
static pid_t(*funcptr) (int ) = 0;

pid_t tcgetpgrp (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetpgrp");
	validate_NULL_TYPETYPE(  arg0, "tcgetpgrp");
	return funcptr(arg0);
}

pid_t __lsb_tcgetpgrp (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcgetpgrp");
	return funcptr(arg0);
}


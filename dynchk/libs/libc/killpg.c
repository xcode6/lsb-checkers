// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <signal.h>
#undef killpg
static int(*funcptr) (pid_t , int ) = 0;

int killpg (pid_t arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "killpg");
	validate_NULL_TYPETYPE(arg0, "killpg");
	validate_NULL_TYPETYPE(arg1, "killpg");
	return funcptr(arg0, arg1);
}

int lsb_killpg (pid_t arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "killpg");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sched.h>
#undef sched_get_priority_min
static int(*funcptr) (int ) = 0;

int sched_get_priority_min (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sched_get_priority_min");
	validate_NULL_TYPETYPE(arg0, "sched_get_priority_min");
	return funcptr(arg0);
}

int lsb_sched_get_priority_min (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sched_get_priority_min");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/time.h>
#undef sched_rr_get_interval
static int(*funcptr) (pid_t , struct timespec * ) = 0;

int sched_rr_get_interval (pid_t arg0 , struct timespec * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sched_rr_get_interval");
	validate_NULL_TYPETYPE(arg0, "sched_rr_get_interval");
	validate_NULL_TYPETYPE(arg1, "sched_rr_get_interval");
	return funcptr(arg0, arg1);
}

int lsb_sched_rr_get_interval (pid_t arg0 , struct timespec * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sched_rr_get_interval");
	return funcptr(arg0, arg1);
}


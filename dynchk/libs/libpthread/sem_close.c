// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <semaphore.h>
#undef sem_close
static int(*funcptr) (sem_t * ) = 0;

int sem_close (sem_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_close");
	validate_NULL_TYPETYPE(arg0, "sem_close");
	return funcptr(arg0);
}

int lsb_sem_close (sem_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_close");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef dlopen
static void *(*funcptr) (const char * , int ) = 0;

#if 0
void * dlopen (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dlopen");
	validate_NULL_TYPETYPE(arg0, "dlopen");
	validate_NULL_TYPETYPE(arg1, "dlopen");
	return funcptr(arg0, arg1);
}
#endif

void * lsb_dlopen (const char * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dlopen");
	return funcptr(arg0, arg1);
}


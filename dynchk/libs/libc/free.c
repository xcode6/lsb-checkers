// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef free
static void(*funcptr) (void * ) = 0;

extern void __libc_free(void * );

void free (void * arg0 )
{
	if(!funcptr)
		funcptr = __libc_free;
	validate_NULL_TYPETYPE(arg0, "free");
	funcptr(arg0);
}

void __lsb_free (void * arg0 )
{
	if(!funcptr)
		funcptr = __libc_free;
	funcptr(arg0);
}


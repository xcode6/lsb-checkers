// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef ftruncate64
static int(*funcptr) (int , off64_t ) = 0;

int ftruncate64 (int arg0 , off64_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftruncate64");
	validate_NULL_TYPETYPE(  arg0, "ftruncate64");
	validate_NULL_TYPETYPE(  arg1, "ftruncate64");
	return funcptr(arg0, arg1);
}

int __lsb_ftruncate64 (int arg0 , off64_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftruncate64");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#undef lchown
static int(*funcptr) (const char * , uid_t , gid_t ) = 0;

int lchown (const char * arg0 , uid_t arg1 , gid_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lchown");
	validate_NULL_TYPETYPE(arg0, "lchown");
	validate_NULL_TYPETYPE(arg1, "lchown");
	validate_NULL_TYPETYPE(arg2, "lchown");
	return funcptr(arg0, arg1, arg2);
}

int lsb_lchown (const char * arg0 , uid_t arg1 , gid_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lchown");
	return funcptr(arg0, arg1, arg2);
}


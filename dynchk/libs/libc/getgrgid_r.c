// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <grp.h>
#include <stddef.h>
#undef getgrgid_r
static int(*funcptr) (gid_t , struct group * , char * , size_t , struct group * * ) = 0;

int getgrgid_r (gid_t arg0 , struct group * arg1 , char * arg2 , size_t arg3 , struct group * * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrgid_r");
	validate_NULL_TYPETYPE(arg0, "getgrgid_r");
	validate_NULL_TYPETYPE(arg1, "getgrgid_r");
	validate_NULL_TYPETYPE(arg2, "getgrgid_r");
	validate_NULL_TYPETYPE(arg3, "getgrgid_r");
	validate_NULL_TYPETYPE(arg4, "getgrgid_r");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_getgrgid_r (gid_t arg0 , struct group * arg1 , char * arg2 , size_t arg3 , struct group * * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrgid_r");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef lseek64
static loff_t(*funcptr) (int , loff_t , int ) = 0;

loff_t lseek64 (int arg0 , loff_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lseek64");
	validate_NULL_TYPETYPE(arg0, "lseek64");
	validate_NULL_TYPETYPE(arg1, "lseek64");
	validate_NULL_TYPETYPE(arg2, "lseek64");
	return funcptr(arg0, arg1, arg2);
}

loff_t lsb_lseek64 (int arg0 , loff_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lseek64");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef read
static ssize_t(*funcptr) (int , void * , size_t ) = 0;

ssize_t read (int arg0 , void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "read");
	validate_filedescriptor(  arg0, "read");
	validate_Rdaddress( arg1, "read");
	validate_RWaddress(  arg1, "read");
	validate_NULL_TYPETYPE(  arg2, "read");
	return funcptr(arg0, arg1, arg2);
}

ssize_t __lsb_read (int arg0 , void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "read");
	return funcptr(arg0, arg1, arg2);
}


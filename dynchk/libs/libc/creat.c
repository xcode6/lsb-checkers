// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef creat
static int(*funcptr) (const char * , mode_t ) = 0;

int creat (const char * arg0 , mode_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "creat");
	validate_Rdaddress( arg0, "creat");
	validate_NULL_TYPETYPE(  arg0, "creat");
	validate_NULL_TYPETYPE(  arg1, "creat");
	return funcptr(arg0, arg1);
}

int __lsb_creat (const char * arg0 , mode_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "creat");
	return funcptr(arg0, arg1);
}


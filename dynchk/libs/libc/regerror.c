// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <regex.h>
#include <stddef.h>
#undef regerror
static size_t(*funcptr) (int , const regex_t * , char * , size_t ) = 0;

size_t regerror (int arg0 , const regex_t * arg1 , char * arg2 , size_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regerror");
	validate_NULL_TYPETYPE(arg0, "regerror");
	validate_NULL_TYPETYPE(arg1, "regerror");
	validate_NULL_TYPETYPE(arg2, "regerror");
	validate_NULL_TYPETYPE(arg3, "regerror");
	return funcptr(arg0, arg1, arg2, arg3);
}

size_t lsb_regerror (int arg0 , const regex_t * arg1 , char * arg2 , size_t arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regerror");
	return funcptr(arg0, arg1, arg2, arg3);
}


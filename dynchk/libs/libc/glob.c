// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <glob.h>
#undef glob
static int(*funcptr) (const char * , int , int(* )(const char *, int), glob_t * ) = 0;

int glob (const char * arg0 , int arg1 , int(* arg2 )(const char *, int), glob_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob");
	validate_Rdaddress( arg0, "glob");
	validate_NULL_TYPETYPE(  arg0, "glob");
	validate_NULL_TYPETYPE(  arg1, "glob");
validate_Rdaddress( arg2, "glob");
	validate_NULL_TYPETYPE(  arg2, "glob");
	validate_Rdaddress( arg3, "glob");
	validate_NULL_TYPETYPE(  arg3, "glob");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_glob (const char * arg0 , int arg1 , int(* arg2 )(const char *, int), glob_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob");
	return funcptr(arg0, arg1, arg2, arg3);
}


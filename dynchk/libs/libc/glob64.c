// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <glob.h>
#undef glob64
static int(*funcptr) (const char * , int , int(* )(const char *, int), glob64_t * ) = 0;

int glob64 (const char * arg0 , int arg1 , int(* arg2 )(const char *, int), glob64_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob64");
	validate_Rdaddress( arg0, "glob64");
	validate_NULL_TYPETYPE(  arg0, "glob64");
	validate_NULL_TYPETYPE(  arg1, "glob64");
validate_Rdaddress( arg2, "glob64");
	validate_NULL_TYPETYPE(  arg2, "glob64");
	validate_Rdaddress( arg3, "glob64");
	validate_NULL_TYPETYPE(  arg3, "glob64");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_glob64 (const char * arg0 , int arg1 , int(* arg2 )(const char *, int), glob64_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glob64");
	return funcptr(arg0, arg1, arg2, arg3);
}


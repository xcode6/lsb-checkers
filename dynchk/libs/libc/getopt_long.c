// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <getopt.h>
#undef getopt_long
static int(*funcptr) (int , char *const  [], const char * , const struct option * , int * ) = 0;

int getopt_long (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getopt_long");
	validate_NULL_TYPETYPE(  arg0, "getopt_long");
	validate_NULL_TYPETYPE(  arg1, "getopt_long");
	validate_Rdaddress( arg2, "getopt_long");
	validate_NULL_TYPETYPE(  arg2, "getopt_long");
	validate_Rdaddress( arg3, "getopt_long");
	validate_NULL_TYPETYPE(  arg3, "getopt_long");
	validate_Rdaddress( arg4, "getopt_long");
	validate_NULL_TYPETYPE(  arg4, "getopt_long");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_getopt_long (int arg0 , char *const  arg1 [], const char * arg2 , const struct option * arg3 , int * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getopt_long");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


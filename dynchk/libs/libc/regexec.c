// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <regex.h>
#include <stddef.h>
#undef regexec
static int(*funcptr) (const regex_t * , const char * , size_t , regmatch_t [], int ) = 0;

int regexec (const regex_t * arg0 , const char * arg1 , size_t arg2 , regmatch_t arg3 [], int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regexec");
	validate_Rdaddress( arg0, "regexec");
	validate_NULL_TYPETYPE(  arg0, "regexec");
	validate_Rdaddress( arg1, "regexec");
	validate_NULL_TYPETYPE(  arg1, "regexec");
	validate_NULL_TYPETYPE(  arg2, "regexec");
	validate_NULL_TYPETYPE(  arg3, "regexec");
	validate_NULL_TYPETYPE(  arg4, "regexec");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_regexec (const regex_t * arg0 , const char * arg1 , size_t arg2 , regmatch_t arg3 [], int arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "regexec");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


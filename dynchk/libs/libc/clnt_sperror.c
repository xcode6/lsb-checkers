// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
#undef clnt_sperror
static char *(*funcptr) (struct CLIENT * , const char * ) = 0;

char * clnt_sperror (struct CLIENT * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_sperror");
	validate_Rdaddress( arg0, "clnt_sperror");
	validate_NULL_TYPETYPE(  arg0, "clnt_sperror");
	validate_Rdaddress( arg1, "clnt_sperror");
	validate_NULL_TYPETYPE(  arg1, "clnt_sperror");
	return funcptr(arg0, arg1);
}

char * __lsb_clnt_sperror (struct CLIENT * arg0 , const char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_sperror");
	return funcptr(arg0, arg1);
}


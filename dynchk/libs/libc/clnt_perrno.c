// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/clnt.h>
#undef clnt_perrno
static void(*funcptr) (enum clnt_stat ) = 0;

void clnt_perrno (enum clnt_stat arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_perrno");
	validate_NULL_TYPETYPE(  arg0, "clnt_perrno");
	funcptr(arg0);
}

void __lsb_clnt_perrno (enum clnt_stat arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clnt_perrno");
	funcptr(arg0);
}


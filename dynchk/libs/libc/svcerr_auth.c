// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/svc.h>
#include <rpc/auth.h>
#undef svcerr_auth
static void(*funcptr) (SVCXPRT * , enum auth_stat ) = 0;

void svcerr_auth (SVCXPRT * arg0 , enum auth_stat arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svcerr_auth");
	validate_Rdaddress( arg0, "svcerr_auth");
	validate_NULL_TYPETYPE(  arg0, "svcerr_auth");
	validate_NULL_TYPETYPE(  arg1, "svcerr_auth");
	funcptr(arg0, arg1);
}

void __lsb_svcerr_auth (SVCXPRT * arg0 , enum auth_stat arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svcerr_auth");
	funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/svc.h>
#include <rpc/types.h>
#undef svc_register
static bool_t(*funcptr) (SVCXPRT * , rpcprog_t , rpcvers_t , __dispatch_fn_t , rpcprot_t ) = 0;

bool_t svc_register (SVCXPRT * arg0 , rpcprog_t arg1 , rpcvers_t arg2 , __dispatch_fn_t arg3 , rpcprot_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_register");
	validate_Rdaddress( arg0, "svc_register");
	validate_NULL_TYPETYPE(  arg0, "svc_register");
	validate_NULL_TYPETYPE(  arg1, "svc_register");
	validate_NULL_TYPETYPE(  arg2, "svc_register");
	validate_NULL_TYPETYPE(  arg3, "svc_register");
	validate_NULL_TYPETYPE(  arg4, "svc_register");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

bool_t __lsb_svc_register (SVCXPRT * arg0 , rpcprog_t arg1 , rpcvers_t arg2 , __dispatch_fn_t arg3 , rpcprot_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_register");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <rpc/svc.h>
#include <rpc/types.h>
#undef svc_register
static bool_t(*funcptr) (SVCXPRT * , rpcprog_t , rpcvers_t , __dispatch_fn_t , rpcprot_t ) = 0;

extern int __lsb_check_params;
bool_t svc_register (SVCXPRT * arg0 , rpcprog_t arg1 , rpcvers_t arg2 , __dispatch_fn_t arg3 , rpcprot_t arg4 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "svc_register", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "svc_register()");
		validate_RWaddress( arg0, "svc_register - arg0");
		validate_NULL_TYPETYPE(  arg0, "svc_register - arg0");
		validate_NULL_TYPETYPE(  arg1, "svc_register - arg1");
		validate_NULL_TYPETYPE(  arg2, "svc_register - arg2");
		validate_NULL_TYPETYPE(  arg3, "svc_register - arg3");
		validate_NULL_TYPETYPE(  arg4, "svc_register - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/svc.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef svc_sendreply
static bool_t(*funcptr) (SVCXPRT * , xdrproc_t , caddr_t ) = 0;

extern int __lsb_check_params;
bool_t svc_sendreply (SVCXPRT * arg0 , xdrproc_t arg1 , caddr_t arg2 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_sendreply");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "svc_sendreply()");
		validate_RWaddress( arg0, "svc_sendreply - arg0");
		validate_NULL_TYPETYPE(  arg0, "svc_sendreply - arg0");
		validate_NULL_TYPETYPE(  arg1, "svc_sendreply - arg1");
		validate_NULL_TYPETYPE(  arg2, "svc_sendreply - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


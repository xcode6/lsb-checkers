// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/svc.h>
#undef svcerr_noprog
static void(*funcptr) (SVCXPRT * ) = 0;

extern int __lsb_check_params;
void svcerr_noprog (SVCXPRT * arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svcerr_noprog");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "svcerr_noprog()");
		validate_RWaddress( arg0, "svcerr_noprog - arg0");
		validate_NULL_TYPETYPE(  arg0, "svcerr_noprog - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <rpc/auth.h>
#undef xdr_opaque_auth
static bool_t(*funcptr) (XDR * , struct opaque_auth * ) = 0;

extern int __lsb_check_params;
bool_t xdr_opaque_auth (XDR * arg0 , struct opaque_auth * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque_auth");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "xdr_opaque_auth()");
		validate_RWaddress( arg0, "xdr_opaque_auth - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_opaque_auth - arg0");
		validate_RWaddress( arg1, "xdr_opaque_auth - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_opaque_auth - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


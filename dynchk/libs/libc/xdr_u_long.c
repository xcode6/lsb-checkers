// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_u_long
static bool_t(*funcptr) (XDR * , u_long * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
bool_t xdr_u_long (XDR * arg0 , u_long * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_u_long");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "xdr_u_long()");
	validate_RWaddress( arg0, "xdr_u_long - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_u_long - arg0");
	validate_RWaddress( arg1, "xdr_u_long - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_u_long - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


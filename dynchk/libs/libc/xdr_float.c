// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_float
static bool_t(*funcptr) (XDR * , float * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
bool_t xdr_float (XDR * arg0 , float * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_float");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "xdr_float()");
	validate_RWaddress( arg0, "xdr_float - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_float - arg0");
	validate_RWaddress( arg1, "xdr_float - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_float - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


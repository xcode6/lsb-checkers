// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_wrapstring
static bool_t(*funcptr) (XDR * , char * * ) = 0;

extern int __lsb_check_params;
bool_t xdr_wrapstring (XDR * arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "xdr_wrapstring", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_wrapstring()");
		validate_RWaddress( arg0, "xdr_wrapstring - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_wrapstring - arg0");
		validate_RWaddress( arg1, "xdr_wrapstring - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_wrapstring - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


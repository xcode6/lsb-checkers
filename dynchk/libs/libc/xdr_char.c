// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_char
static bool_t(*funcptr) (XDR * , char * ) = 0;

extern int __lsb_check_params;
bool_t xdr_char (XDR * arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_char");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "xdr_char - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_char - arg0");
	validate_Rdaddress( arg1, "xdr_char - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_char - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <rpc/xdr.h>
#include <rpc/types.h>
#undef xdr_union
static bool_t(*funcptr) (XDR * , enum_t * , char * , const struct xdr_discrim * , xdrproc_t ) = 0;

extern int __lsb_check_params;
bool_t xdr_union (XDR * arg0 , enum_t * arg1 , char * arg2 , const struct xdr_discrim * arg3 , xdrproc_t arg4 )
{
	int reset_flag = __lsb_check_params;
	bool_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "xdr_union", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xdr_union()");
		validate_RWaddress( arg0, "xdr_union - arg0");
		validate_NULL_TYPETYPE(  arg0, "xdr_union - arg0");
		validate_RWaddress( arg1, "xdr_union - arg1");
		validate_NULL_TYPETYPE(  arg1, "xdr_union - arg1");
		validate_RWaddress( arg2, "xdr_union - arg2");
		validate_NULL_TYPETYPE(  arg2, "xdr_union - arg2");
		validate_Rdaddress( arg3, "xdr_union - arg3");
		validate_NULL_TYPETYPE(  arg3, "xdr_union - arg3");
		validate_NULL_TYPETYPE(  arg4, "xdr_union - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


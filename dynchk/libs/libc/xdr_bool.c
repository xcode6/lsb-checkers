// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <rpc/types.h>
#undef xdr_bool
static bool_t(*funcptr) (XDR * , bool_t * ) = 0;

bool_t xdr_bool (XDR * arg0 , bool_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_bool");
	validate_Rdaddress( arg0, "xdr_bool");
	validate_NULL_TYPETYPE(  arg0, "xdr_bool");
	validate_Rdaddress( arg1, "xdr_bool");
	validate_NULL_TYPETYPE(  arg1, "xdr_bool");
	return funcptr(arg0, arg1);
}

bool_t __lsb_xdr_bool (XDR * arg0 , bool_t * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_bool");
	return funcptr(arg0, arg1);
}


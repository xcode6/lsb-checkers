// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <sys/types.h>
#undef xdr_u_long
static bool_t(*funcptr) (XDR * , u_long * ) = 0;

bool_t xdr_u_long (XDR * arg0 , u_long * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_u_long");
	validate_Rdaddress( arg0, "xdr_u_long");
	validate_NULL_TYPETYPE(  arg0, "xdr_u_long");
	validate_Rdaddress( arg1, "xdr_u_long");
	validate_NULL_TYPETYPE(  arg1, "xdr_u_long");
	return funcptr(arg0, arg1);
}

bool_t __lsb_xdr_u_long (XDR * arg0 , u_long * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_u_long");
	return funcptr(arg0, arg1);
}


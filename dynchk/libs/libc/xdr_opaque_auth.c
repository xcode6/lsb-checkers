// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#include <rpc/auth.h>
#undef xdr_opaque_auth
static bool_t(*funcptr) (XDR * , struct opaque_auth * ) = 0;

bool_t xdr_opaque_auth (XDR * arg0 , struct opaque_auth * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque_auth");
	validate_NULL_TYPETYPE(arg0, "xdr_opaque_auth");
	validate_NULL_TYPETYPE(arg1, "xdr_opaque_auth");
	return funcptr(arg0, arg1);
}

bool_t lsb_xdr_opaque_auth (XDR * arg0 , struct opaque_auth * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_opaque_auth");
	return funcptr(arg0, arg1);
}


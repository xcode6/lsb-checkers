// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_int
static bool_t(*funcptr) (XDR * , int * ) = 0;

bool_t xdr_int (XDR * arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_int");
	validate_Rdaddress( arg0, "xdr_int");
	validate_NULL_TYPETYPE(  arg0, "xdr_int");
	validate_Rdaddress( arg1, "xdr_int");
	validate_NULL_TYPETYPE(  arg1, "xdr_int");
	return funcptr(arg0, arg1);
}

bool_t __lsb_xdr_int (XDR * arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_int");
	return funcptr(arg0, arg1);
}


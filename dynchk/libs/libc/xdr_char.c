// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <rpc/xdr.h>
#undef xdr_char
static bool_t(*funcptr) (XDR * , char * ) = 0;

bool_t xdr_char (XDR * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_char");
	validate_Rdaddress( arg0, "xdr_char");
	validate_NULL_TYPETYPE(  arg0, "xdr_char");
	validate_Rdaddress( arg1, "xdr_char");
	validate_NULL_TYPETYPE(  arg1, "xdr_char");
	return funcptr(arg0, arg1);
}

bool_t __lsb_xdr_char (XDR * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_char");
	return funcptr(arg0, arg1);
}


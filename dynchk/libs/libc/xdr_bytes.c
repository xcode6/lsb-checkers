// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#undef xdr_bytes
static bool_t(*funcptr) (struct XDR * , char * * , u_int * , u_int ) = 0;

bool_t xdr_bytes (struct XDR * arg0 , char * * arg1 , u_int * arg2 , u_int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_bytes");
	validate_NULL_TYPETYPE(arg0, "xdr_bytes");
	validate_NULL_TYPETYPE(arg1, "xdr_bytes");
	validate_NULL_TYPETYPE(arg2, "xdr_bytes");
	validate_NULL_TYPETYPE(arg3, "xdr_bytes");
	return funcptr(arg0, arg1, arg2, arg3);
}

bool_t lsb_xdr_bytes (struct XDR * arg0 , char * * arg1 , u_int * arg2 , u_int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_bytes");
	return funcptr(arg0, arg1, arg2, arg3);
}


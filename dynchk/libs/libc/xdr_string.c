// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#undef xdr_string
static bool_t(*funcptr) (struct XDR * , char * * , u_int ) = 0;

bool_t xdr_string (struct XDR * arg0 , char * * arg1 , u_int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_string");
	validate_NULL_TYPETYPE(arg0, "xdr_string");
	validate_NULL_TYPETYPE(arg1, "xdr_string");
	validate_NULL_TYPETYPE(arg2, "xdr_string");
	return funcptr(arg0, arg1, arg2);
}

bool_t lsb_xdr_string (struct XDR * arg0 , char * * arg1 , u_int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xdr_string");
	return funcptr(arg0, arg1, arg2);
}


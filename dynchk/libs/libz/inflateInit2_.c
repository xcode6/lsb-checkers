// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef inflateInit2_
static int(*funcptr) (z_streamp , int , const char * , int ) = 0;

int inflateInit2_ (z_streamp arg0 , int arg1 , const char * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateInit2_");
	validate_NULL_TYPETYPE(  arg0, "inflateInit2_");
	validate_NULL_TYPETYPE(  arg1, "inflateInit2_");
	validate_Rdaddress( arg2, "inflateInit2_");
	validate_NULL_TYPETYPE(  arg2, "inflateInit2_");
	validate_NULL_TYPETYPE(  arg3, "inflateInit2_");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_inflateInit2_ (z_streamp arg0 , int arg1 , const char * arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateInit2_");
	return funcptr(arg0, arg1, arg2, arg3);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef gzsetparams
static int(*funcptr) (gzFile , int , int ) = 0;

int gzsetparams (gzFile arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzsetparams");
	validate_NULL_TYPETYPE(arg0, "gzsetparams");
	validate_NULL_TYPETYPE(arg1, "gzsetparams");
	validate_NULL_TYPETYPE(arg2, "gzsetparams");
	return funcptr(arg0, arg1, arg2);
}

int lsb_gzsetparams (gzFile arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzsetparams");
	return funcptr(arg0, arg1, arg2);
}


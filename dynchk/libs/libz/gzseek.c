// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef gzseek
static z_off_t(*funcptr) (gzFile , z_off_t , int ) = 0;

z_off_t gzseek (gzFile arg0 , z_off_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzseek");
	validate_NULL_TYPETYPE(arg0, "gzseek");
	validate_NULL_TYPETYPE(arg1, "gzseek");
	validate_NULL_TYPETYPE(arg2, "gzseek");
	return funcptr(arg0, arg1, arg2);
}

z_off_t lsb_gzseek (gzFile arg0 , z_off_t arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gzseek");
	return funcptr(arg0, arg1, arg2);
}


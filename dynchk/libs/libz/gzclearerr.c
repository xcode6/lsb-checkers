// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef gzclearerr
static void(*funcptr) (gzFile ) = 0;

extern int __lsb_check_params;
void gzclearerr (gzFile arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gzclearerr()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "gzclearerr", "ZLIB_1.2.0.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gzclearerr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gzclearerr() - validating");
		validate_NULL_TYPETYPE(  arg0, "gzclearerr - arg0 (file)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


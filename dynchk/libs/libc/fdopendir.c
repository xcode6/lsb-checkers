// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <dirent.h>
#undef fdopendir
static DIR *(*funcptr) (int ) = 0;

extern int __lsb_check_params;
DIR * fdopendir (int arg0 )
{
	int reset_flag = __lsb_check_params;
	DIR * ret_value  ;
	__lsb_output(4, "Invoking wrapper for fdopendir()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "fdopendir", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load fdopendir. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fdopendir() - validating");
		validate_NULL_TYPETYPE(  arg0, "fdopendir - arg0 (__fd)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


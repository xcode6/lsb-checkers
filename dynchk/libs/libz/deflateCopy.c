// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <zlib.h>
#undef deflateCopy
static int(*funcptr) (z_streamp , z_streamp ) = 0;

extern int __lsb_check_params;
int deflateCopy (z_streamp arg0 , z_streamp arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for deflateCopy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateCopy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load deflateCopy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "deflateCopy() - validating");
		validate_NULL_TYPETYPE(  arg0, "deflateCopy - arg0 (dest)");
		validate_NULL_TYPETYPE(  arg1, "deflateCopy - arg1 (source)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


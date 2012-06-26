// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xutil.h>
#undef XAllocIconSize
static XIconSize *(*funcptr) () = 0;

extern int __lsb_check_params;
XIconSize * XAllocIconSize ()
{
	int reset_flag = __lsb_check_params;
	XIconSize * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XAllocIconSize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllocIconSize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XAllocIconSize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllocIconSize() - validating");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


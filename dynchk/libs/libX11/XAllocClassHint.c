// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
#undef XAllocClassHint
static XClassHint *(*funcptr) () = 0;

extern int __lsb_check_params;
XClassHint * XAllocClassHint ()
{
	int reset_flag = __lsb_check_params;
	XClassHint * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XAllocClassHint ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XAllocClassHint()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xutil.h>
#undef XCreateRegion
static Region(*funcptr) () = 0;

extern int __lsb_check_params;
Region XCreateRegion ()
{
	int reset_flag = __lsb_check_params;
	Region ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XCreateRegion");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XCreateRegion()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


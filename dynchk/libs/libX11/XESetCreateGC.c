// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XESetCreateGC
static int(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XESetCreateGC ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XESetCreateGC");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XESetCreateGC()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


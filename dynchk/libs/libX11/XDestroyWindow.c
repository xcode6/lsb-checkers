// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDestroyWindow
static int(*funcptr) (Display * , Window ) = 0;

extern int __lsb_check_params;
int XDestroyWindow (Display * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XDestroyWindow");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDestroyWindow()");
		validate_RWaddress( arg0, "XDestroyWindow - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDestroyWindow - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDestroyWindow - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


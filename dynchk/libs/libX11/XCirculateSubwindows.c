// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XCirculateSubwindows
static int(*funcptr) (Display * , Window , int ) = 0;

extern int __lsb_check_params;
int XCirculateSubwindows (Display * arg0 , Window arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XCirculateSubwindows ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XCirculateSubwindows()");
		validate_RWaddress( arg0, "XCirculateSubwindows - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCirculateSubwindows - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCirculateSubwindows - arg1");
		validate_NULL_TYPETYPE(  arg2, "XCirculateSubwindows - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XResizeWindow
static int(*funcptr) (Display * , Window , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
int XResizeWindow (Display * arg0 , Window arg1 , unsigned int arg2 , unsigned int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XResizeWindow");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XResizeWindow()");
		validate_RWaddress( arg0, "XResizeWindow - arg0");
		validate_NULL_TYPETYPE(  arg0, "XResizeWindow - arg0");
		validate_NULL_TYPETYPE(  arg1, "XResizeWindow - arg1");
		validate_NULL_TYPETYPE(  arg2, "XResizeWindow - arg2");
		validate_NULL_TYPETYPE(  arg3, "XResizeWindow - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


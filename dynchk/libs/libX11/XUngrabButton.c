// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XUngrabButton
static int(*funcptr) (Display * , unsigned int , unsigned int , Window ) = 0;

extern int __lsb_check_params;
int XUngrabButton (Display * arg0 , unsigned int arg1 , unsigned int arg2 , Window arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XUngrabButton ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XUngrabButton()");
		validate_RWaddress( arg0, "XUngrabButton - arg0");
		validate_NULL_TYPETYPE(  arg0, "XUngrabButton - arg0");
		validate_NULL_TYPETYPE(  arg1, "XUngrabButton - arg1");
		validate_NULL_TYPETYPE(  arg2, "XUngrabButton - arg2");
		validate_NULL_TYPETYPE(  arg3, "XUngrabButton - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


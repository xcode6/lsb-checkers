// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetWMName
static void(*funcptr) (Display * , Window , XTextProperty * ) = 0;

extern int __lsb_check_params;
void XSetWMName (Display * arg0 , Window arg1 , XTextProperty * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XSetWMName");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetWMName()");
		validate_RWaddress( arg0, "XSetWMName - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWMName - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWMName - arg1");
		validate_RWaddress( arg2, "XSetWMName - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetWMName - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


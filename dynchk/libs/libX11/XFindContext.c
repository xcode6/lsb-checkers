// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XFindContext
static int(*funcptr) (Display * , XID , XContext , XPointer * ) = 0;

extern int __lsb_check_params;
int XFindContext (Display * arg0 , XID arg1 , XContext arg2 , XPointer * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XFindContext");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFindContext()");
		validate_RWaddress( arg0, "XFindContext - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFindContext - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFindContext - arg1");
		validate_NULL_TYPETYPE(  arg2, "XFindContext - arg2");
		validate_RWaddress( arg3, "XFindContext - arg3");
		validate_NULL_TYPETYPE(  arg3, "XFindContext - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


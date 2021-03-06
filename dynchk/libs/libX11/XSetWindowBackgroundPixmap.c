// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetWindowBackgroundPixmap
static int(*funcptr) (Display * , Window , Pixmap ) = 0;

extern int __lsb_check_params;
int XSetWindowBackgroundPixmap (Display * arg0 , Window arg1 , Pixmap arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetWindowBackgroundPixmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWindowBackgroundPixmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetWindowBackgroundPixmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetWindowBackgroundPixmap() - validating");
		validate_RWaddress( arg0, "XSetWindowBackgroundPixmap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWindowBackgroundPixmap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWindowBackgroundPixmap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetWindowBackgroundPixmap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XFilterEvent
static int(*funcptr) (XEvent * , Window ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XFilterEvent (XEvent * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFilterEvent");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XFilterEvent()");
	validate_RWaddress( arg0, "XFilterEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFilterEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFilterEvent - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


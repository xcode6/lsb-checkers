// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbForceBell
static int(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbForceBell (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbForceBell");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbForceBell()");
	validate_Rdaddress( arg0, "XkbForceBell - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbForceBell - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbForceBell - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xresource.h>
#undef XrmSetDatabase
static void(*funcptr) (Display * , XrmDatabase ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XrmSetDatabase (Display * arg0 , XrmDatabase arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmSetDatabase");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XrmSetDatabase()");
	validate_Rdaddress( arg0, "XrmSetDatabase - arg0");
		validate_NULL_TYPETYPE(  arg0, "XrmSetDatabase - arg0");
		validate_NULL_TYPETYPE(  arg1, "XrmSetDatabase - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


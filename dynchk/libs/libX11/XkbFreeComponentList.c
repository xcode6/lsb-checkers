// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/XKBlib.h>
#undef XkbFreeComponentList
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void XkbFreeComponentList ( arg0)
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbFreeComponentList ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbFreeComponentList()");
		validate_NULL_TYPETYPE(  arg0, "XkbFreeComponentList - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


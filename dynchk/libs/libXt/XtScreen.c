// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtScreen
static Screen *(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Screen * XtScreen (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	Screen * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtScreen");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtScreen()");
		validate_NULL_TYPETYPE(  arg0, "XtScreen - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


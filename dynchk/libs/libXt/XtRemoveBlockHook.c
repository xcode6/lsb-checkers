// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtRemoveBlockHook
static void(*funcptr) (XtBlockHookId ) = 0;

extern int __lsb_check_params;
void XtRemoveBlockHook (XtBlockHookId arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtRemoveBlockHook ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtRemoveBlockHook()");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveBlockHook - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


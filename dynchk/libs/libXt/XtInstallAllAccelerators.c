// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtInstallAllAccelerators
static void(*funcptr) (Widget , Widget ) = 0;

extern int __lsb_check_params;
void XtInstallAllAccelerators (Widget arg0 , Widget arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtInstallAllAccelerators ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtInstallAllAccelerators()");
		validate_NULL_TYPETYPE(  arg0, "XtInstallAllAccelerators - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtInstallAllAccelerators - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


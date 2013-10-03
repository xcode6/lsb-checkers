// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtRegisterGrabAction
static void(*funcptr) (XtActionProc , int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
void XtRegisterGrabAction (XtActionProc arg0 , int arg1 , unsigned int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtRegisterGrabAction()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRegisterGrabAction");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtRegisterGrabAction. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtRegisterGrabAction() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtRegisterGrabAction - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtRegisterGrabAction - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRegisterGrabAction - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtRegisterGrabAction - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtRegisterGrabAction - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtCallCallbacks
static void(*funcptr) (Widget , char * , XtPointer ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtCallCallbacks (Widget arg0 , char * arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallCallbacks");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtCallCallbacks()");
		validate_NULL_TYPETYPE(  arg0, "XtCallCallbacks - arg0");
	validate_RWaddress( arg1, "XtCallCallbacks - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtCallCallbacks - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtCallCallbacks - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


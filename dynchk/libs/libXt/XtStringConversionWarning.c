// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtStringConversionWarning
static void(*funcptr) (char * , char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtStringConversionWarning (char * arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtStringConversionWarning");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtStringConversionWarning()");
	validate_RWaddress( arg0, "XtStringConversionWarning - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtStringConversionWarning - arg0");
	validate_RWaddress( arg1, "XtStringConversionWarning - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtStringConversionWarning - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


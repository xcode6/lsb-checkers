// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#undef XrmPutStringResource
static void(*funcptr) (XrmDatabase * , const char * , const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XrmPutStringResource (XrmDatabase * arg0 , const char * arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmPutStringResource");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XrmPutStringResource()");
	validate_Rdaddress( arg0, "XrmPutStringResource - arg0");
		validate_NULL_TYPETYPE(  arg0, "XrmPutStringResource - arg0");
	validate_Rdaddress( arg1, "XrmPutStringResource - arg1");
		validate_NULL_TYPETYPE(  arg1, "XrmPutStringResource - arg1");
	validate_Rdaddress( arg2, "XrmPutStringResource - arg2");
		validate_NULL_TYPETYPE(  arg2, "XrmPutStringResource - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XSaveContext
static int(*funcptr) (Display * , XID , XContext , const char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XSaveContext (Display * arg0 , XID arg1 , XContext arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSaveContext");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XSaveContext()");
	validate_Rdaddress( arg0, "XSaveContext - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSaveContext - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSaveContext - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSaveContext - arg2");
	validate_Rdaddress( arg3, "XSaveContext - arg3");
		validate_NULL_TYPETYPE(  arg3, "XSaveContext - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


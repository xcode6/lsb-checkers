// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbQueryExtension
static int(*funcptr) (Display * , int * , int * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XkbQueryExtension (Display * arg0 , int * arg1 , int * arg2 , int * arg3 , int * arg4 , int * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbQueryExtension");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbQueryExtension()");
	validate_Rdaddress( arg0, "XkbQueryExtension - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbQueryExtension - arg0");
	validate_Rdaddress( arg1, "XkbQueryExtension - arg1");
		validate_NULL_TYPETYPE(  arg1, "XkbQueryExtension - arg1");
	validate_Rdaddress( arg2, "XkbQueryExtension - arg2");
		validate_NULL_TYPETYPE(  arg2, "XkbQueryExtension - arg2");
	validate_Rdaddress( arg3, "XkbQueryExtension - arg3");
		validate_NULL_TYPETYPE(  arg3, "XkbQueryExtension - arg3");
	validate_Rdaddress( arg4, "XkbQueryExtension - arg4");
		validate_NULL_TYPETYPE(  arg4, "XkbQueryExtension - arg4");
	validate_Rdaddress( arg5, "XkbQueryExtension - arg5");
		validate_NULL_TYPETYPE(  arg5, "XkbQueryExtension - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


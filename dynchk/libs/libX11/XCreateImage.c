// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XCreateImage
static XImage *(*funcptr) (Display * , Visual * , unsigned int , int , int , char * , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XImage * XCreateImage (Display * arg0 , Visual * arg1 , unsigned int arg2 , int arg3 , int arg4 , char * arg5 , unsigned int arg6 , unsigned int arg7 , int arg8 , int arg9 )
{
	int reset_flag = __lsb_check_params;
	XImage * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreateImage");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XCreateImage()");
	validate_Rdaddress( arg0, "XCreateImage - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCreateImage - arg0");
	validate_Rdaddress( arg1, "XCreateImage - arg1");
		validate_NULL_TYPETYPE(  arg1, "XCreateImage - arg1");
		validate_NULL_TYPETYPE(  arg2, "XCreateImage - arg2");
		validate_NULL_TYPETYPE(  arg3, "XCreateImage - arg3");
		validate_NULL_TYPETYPE(  arg4, "XCreateImage - arg4");
	validate_Rdaddress( arg5, "XCreateImage - arg5");
		validate_NULL_TYPETYPE(  arg5, "XCreateImage - arg5");
		validate_NULL_TYPETYPE(  arg6, "XCreateImage - arg6");
		validate_NULL_TYPETYPE(  arg7, "XCreateImage - arg7");
		validate_NULL_TYPETYPE(  arg8, "XCreateImage - arg8");
		validate_NULL_TYPETYPE(  arg9, "XCreateImage - arg9");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}


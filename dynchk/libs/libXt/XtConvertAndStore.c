// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xresource.h>
#undef XtConvertAndStore
static Boolean(*funcptr) (Widget , char * , XrmValue * , char * , XrmValue * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Boolean XtConvertAndStore (Widget arg0 , char * arg1 , XrmValue * arg2 , char * arg3 , XrmValue * arg4 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConvertAndStore");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtConvertAndStore()");
		validate_NULL_TYPETYPE(  arg0, "XtConvertAndStore - arg0");
	validate_RWaddress( arg1, "XtConvertAndStore - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtConvertAndStore - arg1");
	validate_RWaddress( arg2, "XtConvertAndStore - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtConvertAndStore - arg2");
	validate_RWaddress( arg3, "XtConvertAndStore - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtConvertAndStore - arg3");
	validate_RWaddress( arg4, "XtConvertAndStore - arg4");
		validate_NULL_TYPETYPE(  arg4, "XtConvertAndStore - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


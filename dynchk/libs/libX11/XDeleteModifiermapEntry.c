// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XDeleteModifiermapEntry
static XModifierKeymap *(*funcptr) (XModifierKeymap * , unsigned int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XModifierKeymap * XDeleteModifiermapEntry (XModifierKeymap * arg0 , unsigned int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	XModifierKeymap * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDeleteModifiermapEntry");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDeleteModifiermapEntry()");
	validate_Rdaddress( arg0, "XDeleteModifiermapEntry - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDeleteModifiermapEntry - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDeleteModifiermapEntry - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDeleteModifiermapEntry - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


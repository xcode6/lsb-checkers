// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XListProperties
static Atom *(*funcptr) (Display * , Window , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Atom * XListProperties (Display * arg0 , Window arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	Atom * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListProperties");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XListProperties()");
	validate_Rdaddress( arg0, "XListProperties - arg0");
		validate_NULL_TYPETYPE(  arg0, "XListProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "XListProperties - arg1");
	validate_Rdaddress( arg2, "XListProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "XListProperties - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


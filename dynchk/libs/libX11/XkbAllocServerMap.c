// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/XKBlib.h>
#undef XkbAllocServerMap
static int(*funcptr) (, unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
int XkbAllocServerMap ( arg0, unsigned int arg1 , unsigned int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbAllocServerMap ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbAllocServerMap()");
		validate_NULL_TYPETYPE(  arg0, "XkbAllocServerMap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbAllocServerMap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbAllocServerMap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


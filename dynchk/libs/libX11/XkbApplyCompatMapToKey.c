// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbApplyCompatMapToKey
static (*funcptr)(, KeyCode , ) = 0;

extern int __lsb_check_params;
 XkbApplyCompatMapToKey( arg0, KeyCode arg1 ,  arg2)
{
	int reset_flag = __lsb_check_params;
	 ret_value ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbApplyCompatMapToKey ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbApplyCompatMapToKey()");
		validate_NULL_TYPETYPE(  arg0, "XkbApplyCompatMapToKey - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbApplyCompatMapToKey - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbApplyCompatMapToKey - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


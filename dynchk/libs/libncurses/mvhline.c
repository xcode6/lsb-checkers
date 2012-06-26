// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef mvhline
static int(*funcptr) (int , int , chtype , int ) = 0;

extern int __lsb_check_params;
int mvhline (int arg0 , int arg1 , chtype arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for mvhline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvhline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mvhline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvhline() - validating");
		validate_NULL_TYPETYPE(  arg0, "mvhline - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvhline - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvhline - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvhline - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


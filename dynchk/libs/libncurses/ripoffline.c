// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef ripoffline
static int(*funcptr) (int , int(* )(WINDOW *, int)) = 0;

extern int __lsb_check_params;
int ripoffline (int arg0 , int(* arg1 )(WINDOW *, int))
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ripoffline");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ripoffline()");
		validate_NULL_TYPETYPE(  arg0, "ripoffline - arg0");
		validate_Rdaddress( arg1, "ripoffline - arg1");
		validate_NULL_TYPETYPE(  arg1, "ripoffline - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


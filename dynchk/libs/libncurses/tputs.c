// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <term.h>
#undef tputs
static int(*funcptr) (const char * , int , int(* )(int)) = 0;

extern int __lsb_check_params;
int tputs (const char * arg0 , int arg1 , int(* arg2 )(int))
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tputs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "tputs()");
		validate_Rdaddress( arg0, "tputs - arg0");
		validate_NULL_TYPETYPE(  arg0, "tputs - arg0");
		validate_NULL_TYPETYPE(  arg1, "tputs - arg1");
		validate_Rdaddress( arg2, "tputs - arg2");
		validate_NULL_TYPETYPE(  arg2, "tputs - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


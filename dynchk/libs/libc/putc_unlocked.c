// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#undef putc_unlocked
static int(*funcptr) (int , FILE * ) = 0;

extern int __lsb_check_params;
int putc_unlocked (int arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "putc_unlocked", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "putc_unlocked()");
		validate_NULL_TYPETYPE(  arg0, "putc_unlocked - arg0");
		validate_RWaddress( arg1, "putc_unlocked - arg1");
		validate_NULL_TYPETYPE(  arg1, "putc_unlocked - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>
#undef putwc
static wint_t(*funcptr) (wchar_t , FILE * ) = 0;

extern int __lsb_check_params;
wint_t putwc (wchar_t arg0 , FILE * arg1 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putwc");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "putwc()");
		validate_NULL_TYPETYPE(  arg0, "putwc - arg0");
		validate_RWaddress( arg1, "putwc - arg1");
		validate_NULL_TYPETYPE(  arg1, "putwc - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>
#undef fgetws
static wchar_t *(*funcptr) (wchar_t * , int , FILE * ) = 0;

extern int __lsb_check_params;
wchar_t * fgetws (wchar_t * arg0 , int arg1 , FILE * arg2 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fgetws", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fgetws()");
		validate_RWaddress( arg0, "fgetws - arg0");
		validate_NULL_TYPETYPE(  arg0, "fgetws - arg0");
		validate_NULL_TYPETYPE(  arg1, "fgetws - arg1");
		validate_RWaddress( arg2, "fgetws - arg2");
		validate_NULL_TYPETYPE(  arg2, "fgetws - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


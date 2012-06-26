// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>
#undef __fgetws_unlocked_chk
static wchar_t *(*funcptr) (wchar_t * , size_t , int , FILE * ) = 0;

extern int __lsb_check_params;
wchar_t * __fgetws_unlocked_chk (wchar_t * arg0 , size_t arg1 , int arg2 , FILE * arg3 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for __fgetws_unlocked_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__fgetws_unlocked_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __fgetws_unlocked_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__fgetws_unlocked_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__fgetws_unlocked_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__fgetws_unlocked_chk - arg0");
		validate_NULL_TYPETYPE(  arg1, "__fgetws_unlocked_chk - arg1");
		validate_NULL_TYPETYPE(  arg2, "__fgetws_unlocked_chk - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "__fgetws_unlocked_chk - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "__fgetws_unlocked_chk - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


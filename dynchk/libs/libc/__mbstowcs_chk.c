// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdlib.h>
#undef __mbstowcs_chk
static size_t(*funcptr) (wchar_t * , const char * , size_t , size_t ) = 0;

extern int __lsb_check_params;
size_t __mbstowcs_chk (wchar_t * arg0 , const char * arg1 , size_t arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for __mbstowcs_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__mbstowcs_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __mbstowcs_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__mbstowcs_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__mbstowcs_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__mbstowcs_chk - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "__mbstowcs_chk - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "__mbstowcs_chk - arg1");
		validate_NULL_TYPETYPE(  arg2, "__mbstowcs_chk - arg2");
		validate_NULL_TYPETYPE(  arg3, "__mbstowcs_chk - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


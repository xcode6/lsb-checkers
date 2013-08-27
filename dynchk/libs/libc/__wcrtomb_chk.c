// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <lsb/wchar.h>
#include <wchar.h>
#undef __wcrtomb_chk
static size_t(*funcptr) (char * , wchar_t , mbstate_t * , size_t ) = 0;

extern int __lsb_check_params;
size_t __wcrtomb_chk (char * arg0 , wchar_t arg1 , mbstate_t * arg2 , size_t arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for __wcrtomb_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__wcrtomb_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __wcrtomb_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__wcrtomb_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__wcrtomb_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__wcrtomb_chk - arg0");
		validate_NULL_TYPETYPE(  arg1, "__wcrtomb_chk - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "__wcrtomb_chk - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "__wcrtomb_chk - arg2");
		validate_NULL_TYPETYPE(  arg3, "__wcrtomb_chk - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


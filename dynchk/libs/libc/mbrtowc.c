// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wctype.h>
#include <wchar.h>
#undef mbrtowc
static size_t(*funcptr) (wchar_t * , const char * , size_t , mbstate_t * ) = 0;

extern int __lsb_check_params;
size_t mbrtowc (wchar_t * arg0 , const char * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "mbrtowc", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mbrtowc()");
		if( arg0 ) {
		validate_RWaddress( arg0, "mbrtowc - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "mbrtowc - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "mbrtowc - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "mbrtowc - arg1");
		validate_NULL_TYPETYPE(  arg2, "mbrtowc - arg2");
		validate_RWaddress( arg3, "mbrtowc - arg3");
		validate_NULL_TYPETYPE(  arg3, "mbrtowc - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


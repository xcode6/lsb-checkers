// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcspbrk
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
wchar_t * wcspbrk (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcspbrk");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wcspbrk()");
		validate_Rdaddress( arg0, "wcspbrk - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcspbrk - arg0");
		validate_Rdaddress( arg1, "wcspbrk - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcspbrk - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


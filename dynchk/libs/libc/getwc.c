// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stdio.h>
#include <wchar.h>
#undef getwc
static wint_t(*funcptr) (FILE * ) = 0;

extern int __lsb_check_params;
wint_t getwc (FILE * arg0 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getwc", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getwc()");
		validate_RWaddress( arg0, "getwc - arg0");
		validate_NULL_TYPETYPE(  arg0, "getwc - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdio.h>
#undef fsetpos64
static int(*funcptr) (FILE * , const fpos64_t * ) = 0;

extern int __lsb_check_params;
int fsetpos64 (FILE * arg0 , const fpos64_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fsetpos64", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fsetpos64()");
		validate_RWaddress( arg0, "fsetpos64 - arg0");
		validate_NULL_TYPETYPE(  arg0, "fsetpos64 - arg0");
		validate_Rdaddress( arg1, "fsetpos64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "fsetpos64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


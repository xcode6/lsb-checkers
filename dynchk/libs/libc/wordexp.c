// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <wordexp.h>
#undef wordexp
static int(*funcptr) (const char * , wordexp_t * , int ) = 0;

extern int __lsb_check_params;
int wordexp (const char * arg0 , wordexp_t * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "wordexp", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wordexp()");
		validate_Rdaddress( arg0, "wordexp - arg0");
		validate_NULL_TYPETYPE(  arg0, "wordexp - arg0");
		validate_RWaddress( arg1, "wordexp - arg1");
		validate_NULL_TYPETYPE(  arg1, "wordexp - arg1");
		validate_NULL_TYPETYPE(  arg2, "wordexp - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


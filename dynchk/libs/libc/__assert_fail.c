// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <assert.h>
#undef __assert_fail
static void(*funcptr) (const char * , const char * , unsigned int , const char * ) = 0;

extern int __lsb_check_params;
void __assert_fail (const char * arg0 , const char * arg1 , unsigned int arg2 , const char * arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "__assert_fail", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__assert_fail()");
		validate_Rdaddress( arg0, "__assert_fail - arg0");
		validate_NULL_TYPETYPE(  arg0, "__assert_fail - arg0");
		validate_Rdaddress( arg1, "__assert_fail - arg1");
		validate_NULL_TYPETYPE(  arg1, "__assert_fail - arg1");
		validate_NULL_TYPETYPE(  arg2, "__assert_fail - arg2");
		validate_Rdaddress( arg3, "__assert_fail - arg3");
		validate_NULL_TYPETYPE(  arg3, "__assert_fail - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


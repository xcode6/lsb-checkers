// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <signal.h>
#undef psignal
static void(*funcptr) (int , const char * ) = 0;

extern int __lsb_check_params;
void psignal (int arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "psignal", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "psignal()");
		validate_NULL_TYPETYPE(  arg0, "psignal - arg0");
		validate_Rdaddress( arg1, "psignal - arg1");
		validate_NULL_TYPETYPE(  arg1, "psignal - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


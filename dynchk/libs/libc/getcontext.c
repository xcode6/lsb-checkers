// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <ucontext.h>
#undef getcontext
static int(*funcptr) (ucontext_t * ) = 0;

extern int __lsb_check_params;
int getcontext (ucontext_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "getcontext", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getcontext()");
		validate_RWaddress( arg0, "getcontext - arg0");
		validate_NULL_TYPETYPE(  arg0, "getcontext - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#undef dlopen
static void *(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
void * dlopen (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "dlopen", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "dlopen()");
		validate_RWaddress( arg0, "dlopen - arg0");
		validate_NULL_TYPETYPE(  arg0, "dlopen - arg0");
		validate_NULL_TYPETYPE(  arg1, "dlopen - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


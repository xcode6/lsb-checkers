// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/ipc.h>
#undef ftok
static key_t(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
key_t ftok (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	key_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ftok");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "ftok()");
		validate_RWaddress( arg0, "ftok - arg0");
		validate_NULL_TYPETYPE(  arg0, "ftok - arg0");
		validate_NULL_TYPETYPE(  arg1, "ftok - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef read
static ssize_t(*funcptr) (int , void * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t read (int arg0 , void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "read", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "read()");
		validate_filedescriptor(  arg0, "read - arg0");
		validate_RWaddress( arg1, "read - arg1");
		validate_RWaddress(  arg1, "read - arg1");
		validate_NULL_TYPETYPE(  arg2, "read - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


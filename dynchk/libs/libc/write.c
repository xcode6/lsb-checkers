// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef write
static ssize_t(*funcptr) (int , const void * , size_t ) = 0;

extern int __lsb_check_params;
ssize_t write (int arg0 , const void * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "write");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "write()");
		validate_filedescriptor(  arg0, "write - arg0");
		validate_Rdaddress( arg1, "write - arg1");
		validate_RWaddress(  arg1, "write - arg1");
		validate_NULL_TYPETYPE(  arg2, "write - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


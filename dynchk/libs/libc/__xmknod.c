// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/stat.h>
#undef __xmknod
static int(*funcptr) (int , const char * , mode_t , dev_t * ) = 0;

extern int __lsb_check_params;
int __xmknod (int arg0 , const char * arg1 , mode_t arg2 , dev_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__xmknod");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "__xmknod()");
		validate_filedescriptor(  arg0, "__xmknod - arg0");
		validate_Rdaddress( arg1, "__xmknod - arg1");
		validate_NULL_TYPETYPE(  arg1, "__xmknod - arg1");
		validate_filemode(  arg2, "__xmknod - arg2");
		validate_RWaddress( arg3, "__xmknod - arg3");
		validate_RWaddress(  arg3, "__xmknod - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


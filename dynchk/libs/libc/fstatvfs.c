// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/statvfs.h>
#undef fstatvfs
static int(*funcptr) (int , struct statvfs * ) = 0;

extern int __lsb_check_params;
int fstatvfs (int arg0 , struct statvfs * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fstatvfs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "fstatvfs - arg0");
	validate_Rdaddress( arg1, "fstatvfs - arg1");
		validate_NULL_TYPETYPE(  arg1, "fstatvfs - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


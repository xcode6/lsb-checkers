// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/statvfs.h>
#undef statvfs
static int(*funcptr) (const char * , struct statvfs * ) = 0;

extern int __lsb_check_params;
int statvfs (const char * arg0 , struct statvfs * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "statvfs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "statvfs()");
		validate_Rdaddress( arg0, "statvfs - arg0");
		validate_NULL_TYPETYPE(  arg0, "statvfs - arg0");
		validate_RWaddress( arg1, "statvfs - arg1");
		validate_NULL_TYPETYPE(  arg1, "statvfs - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


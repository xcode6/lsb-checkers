// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <grp.h>
#include <stddef.h>
#undef getgrgid_r
static int(*funcptr) (gid_t , struct group * , char * , size_t , struct group * * ) = 0;

extern int __lsb_check_params;
int getgrgid_r (gid_t arg0 , struct group * arg1 , char * arg2 , size_t arg3 , struct group * * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrgid_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "getgrgid_r - arg0");
	validate_Rdaddress( arg1, "getgrgid_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "getgrgid_r - arg1");
	validate_Rdaddress( arg2, "getgrgid_r - arg2");
		validate_NULL_TYPETYPE(  arg2, "getgrgid_r - arg2");
		validate_NULL_TYPETYPE(  arg3, "getgrgid_r - arg3");
	validate_Rdaddress( arg4, "getgrgid_r - arg4");
	validate_Rdaddress(* arg4, "getgrgid_r - arg4");
		validate_NULL_TYPETYPE(  arg4, "getgrgid_r - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

